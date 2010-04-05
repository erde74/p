#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/BlockClosure.h>

/* ========================================================================= */

DECLARE_CLASS(Runtime_BlockClosure);

/* ========================================================================= */

Runtime_BlockClosure new_Runtime_BlockClosure(AST_Block code, Runtime_BlockContext context) {
    NEW_OBJECT(Runtime_BlockClosure);
    assert1(HEADER(context) == Runtime_BlockContext_Class ||
            HEADER(context) == Runtime_MethodContext_Class,
            "Wrong type of context!");
    result->code      = code;
    result->context   = context;
    context->captured = 1;
    return result;
}

void pre_init_Runtime_BlockClosure()
{
    Runtime_BlockClosure_Class = new_Class_named(Type_Object_Class,
                                                 L"BlockClosure",
                                                 CREATE_OBJECT_TAG(RUNTIME_BLOCKCLOSURE));
    REFER_TO(Runtime_BlockClosure);
}

/* ========================================================================= */

Runtime_BlockContext activation_from_native(uns_int argc)
{
    Runtime_BlockClosure closure = current_env()->closure;
    AST_Block block = closure->code;
    uns_int paramc = block->params->size;
    uns_int localc = block->locals->size;

    //assert1(argc == paramc, "Catch-all arguments not supported yet!");

    Runtime_BlockContext context = current_env();

    while (argc > 0) {
        argc--;
        context->locals[argc] = pop_EXP();
    }
    zap_EXP(); // remove self

    argc = paramc;
    // Set locals to nil.
    while (argc < paramc + localc) {
        context->locals[argc] = Nil;
        argc++;
    }

    return context;
}

CNT(restore_env)
	Runtime_BlockContext current = current_env();
    set_env((Object)current->parent_frame);
    Object result = peek_EXP(0);
    zap_EXP();
    poke_EXP(0, result);
	free_context(current);
}

static void CNT_AST_Block_continue()
{
    Runtime_BlockContext env = current_env();
    AST_Block code = env->closure->code;
    uns_int pc = (uns_int)peek_EXP(1);
    poke_EXP(0, code->body[pc]);
    poke_EXP(1, ++pc);
    
    if (code->size <= pc) {
        poke_CNT(restore_env); 
    } 
    push_CNT(send_Eval);
}

static void start_eval(AST_Block block)
{
    if (1 < block->size) {
        push_CNT(AST_Block_continue);
    } else {
        push_CNT(restore_env);
    }
    
    poke_EXP(0, 1);
    push_EXP(block->body[0]);
    push_CNT(send_Eval);
}

void Runtime_BlockClosure_apply(Runtime_BlockClosure closure, uns_int argc)
{
    AST_Block block = closure->code;
    assert1(argc == block->params->size, "Argument count mismatch");
    
    if (block->size == 0) { 
        RETURN_FROM_NATIVE(Nil);
        return; 
    }
    
    set_env((Object)new_Runtime_BlockContext(closure));
    activation_from_native(argc);

    start_eval(block);
}

void apply(Object closure, uns_int argc)
{
    // TODO in the alternative case, send "value:*" message.
    // LOG("cls: %ls\n", HEADER(closure)->name->value);
    assert0(HEADER(closure) == Runtime_BlockClosure_Class);
    Runtime_BlockClosure_apply((Runtime_BlockClosure)closure, argc);
}

/* ========================================================================= */

NATIVE(Runtime_BlockClosure_apply_)
    Runtime_BlockClosure closure = (Runtime_BlockClosure)self;
    Runtime_BlockClosure_apply(closure, argc);
}

NATIVE0(Runtime_BlockClosure_numArgs) 
    RETURN_FROM_NATIVE(new_Type_SmallInt(((Runtime_BlockClosure) self)->code->params->size));
}

NATIVE1(Runtime_BlockClosure_valueWithArguments_)
    Type_Array args = (Type_Array)pop_EXP();
    ASSERT_TAG_LAYOUT(GETTAG(args), Array);

    int pos = 0;
    while(pos < args->size) {
        push_EXP(args->values[pos]);
        pos++;
    }
    
    Runtime_BlockClosure closure = (Runtime_BlockClosure)self;
    Runtime_BlockClosure_apply(closure, args->size);
}

/* ========================================================================= */

void post_init_Runtime_BlockClosure()
{
    Collection_Dictionary natives = add_plugin(L"Reflection.Reflection");
    store_native(natives, SMB_blockclosureValue_message_, NM_Runtime_BlockClosure_apply_);
    store_native(natives, SMB_blockclosureValueWithArguments_message_,
                          NM_Runtime_BlockClosure_valueWithArguments_);
    natives = add_plugin(L"Runtime.BlockClosure");
    store_native(natives, SMB_numArgs, NM_Runtime_BlockClosure_numArgs);
}
