#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/BlockContext.h>
#include <system/ast/Super.h>

/* ========================================================================= */

#define Super_args(super) super->arguments

Super new_Super(Symbol message, uns_int argc, ...)
{
    NEW_ARRAY_OBJECT(Super, Optr[argc]);
    result->message = message;
    result->info    = empty_Info;
    result->cache   = new_InlineCache();
    result->size    = argc;

    va_list args;
    va_start(args, argc);
    long idx;
    for (idx = 0; idx < argc; idx++) {
        Super_args(result)[idx] = va_arg(args, Optr);
    }
    va_end(args);

    return result;
}

/* ========================================================================= */

CNT(Super_send) 
    Optr class    = pop_EXP();
    uns_int argc  = (uns_int)pop_EXP();
    Optr receiver = PEEK_EXP(argc + 1); // SUPER object on top
    
    Class_dispatch(receiver, (Class)class, argc);
}

CNT(push_env_class)
    // TODO directly inline it
    Optr env = (Optr)current_env();
    assert0(IS_CONTEXT(env));
    PUSH_EXP(((BlockContext)env)->home_context->closure->host);
}

void Super_eval_threaded()
{
    // execute the method
    PUSH_CNT(Super_send);
    PUSH_CNT(Class_super);
    PUSH_CNT(push_env_class);
}
