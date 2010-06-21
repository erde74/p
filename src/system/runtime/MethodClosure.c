#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/MethodClosure.h>

/* ========================================================================= */

MethodClosure new_MethodClosure(Method code, Class host) 
{
    NEW_OBJECT(MethodClosure); 
    result->code        = code;
    result->info        = empty_Info;
    result->selector    = (Optr)nil;
    result->host        = host;
    return result;
}

/* ========================================================================= */

static MethodContext activate_method(MethodClosure closure, long argc)
{
	//TODO merge with BlockContext
    Method method        = closure->code;
    uns_int paramc       = method->params->size;
    uns_int localc       = method->locals->size;
    uns_int size         = paramc + localc;

    MethodContext context = (MethodContext)&PEEK_EXP(argc - 1);

    CLAIM_EXP(CONTEXT_SIZE);

    uns_int i;
    for (i = 0; i < argc + 1; i++) {
        POKE_EXP(i, PEEK_EXP(i + CONTEXT_SIZE));
    }

    CLAIM_EXP(localc);

    // Set locals to nil.
    for (; paramc < size; paramc++) {
        context->locals[paramc] = nil;
    }
    
	HEADER(context)       = MethodContext_Class;
	context->size         = size;
	context->stacked      = 1;
	context->parent_frame = current_env();
    set_env((Optr)context);

    context->scope_id     = 0;
	context->for_method   = 1;
    context->home_context = context;
    context->closure      = closure;

    return context;
}


void Method_invoke(MethodClosure closure,
                   Method method,
                   Optr self, uns_int argc)
{
    assert1(method->code != (Array)nil, "Uncompiled method found!");
    assert(argc == method->params->size,
        printf("Argument count mismatch. Expected: %lu given: %lu\n",
               method->params->size, argc););
    
    if (method->size == 0) {
        RETURN_FROM_NATIVE(self);
        return;
    }
    
    activate_method(closure, argc);

    push_code(method->code);
}

#define INVOKE_IF(name) if(method_class == name##_Class) {\
        return name##_invoke(closure, (name)method, self, argc);\
    }

void MethodClosure_invoke(MethodClosure closure, Optr self, uns_int argc)
{
    Method method      = closure->code;
    Class method_class = HEADER(method);
    
    INVOKE_IF(Method)
    INVOKE_IF(NativeMethod)
    INVOKE_IF(ReflectionMethod)

    assert1(NULL, "Unknown type of method");
}


NATIVE1(MethodClosure_valueWithArguments_)
    Array args = (Array)pop_EXP();
    ASSERT_TAG_LAYOUT(GETTAG(args), Array);
    
    long pos = args->size;
    while(pos > 0) {
        pos--;
        PUSH_EXP(args->values[pos]);
    }
    
    BlockClosure closure = (BlockClosure)self;
    BlockClosure_apply(closure, args->size);
}

/* ========================================================================= */

void post_init_MethodClosure()
{
    // TODO move the whole class to AST
    Dictionary natives = add_plugin(L"AST.MethodClosure");
    store_native(natives, SMB_valueWithArguments_, NM_MethodClosure_valueWithArguments_);
}
