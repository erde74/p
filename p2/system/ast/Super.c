
#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/Env.h>
#include <system/ast/Super.h>

/* ======================================================================== */

Type_Class AST_Super_Class;

/* ======================================================================== */

AST_Super new_AST_Super(Object message, Type_Array arguments)
{
    AST_Super result = NEW_t(AST_Super);
    HEADER(result)     = (Object)AST_Super_Class;
    result->message    = message;
    result->arguments  = arguments;
    return result;
}

void pre_init_AST_Super()
{
    AST_Super_Class = new_Named_Class((Object)Type_Object_Class, L"AST_Super");
}

/* =========================================================================*/

void CNT_AST_Super_send() 
{
    LOGFUN;
    zap_CNT();
    Object class = pop_EXP();
    Object receiver = pop_EXP();
    Type_Array args = (Type_Array)pop_EXP();
    
    AST_Super super   = (AST_Super)peek_EXP(1);
    // insert the receiver at the old ast_super position
    poke_EXP(1, receiver);
    
    Type_Class_dispatch(&super->cache, receiver, class,
                   super->message, args);
}

void CNT_push_env_class()
{
    zap_CNT();
    Object env = (Object)current_env();
    if (HEADER(env) != (Object)Runtime_Env_Class) {
        assert0(NULL);
    }
    push_EXP(((Runtime_Env)env)->class);
}

void AST_Super_eval(AST_Super super)
{
    LOGFUN;
    Type_Array args = new_Raw_Type_Array(super->arguments->size->value);
    // execute the method
    push_CNT(CNT_AST_Super_send);
    push_CNT(CNT_Class_super);
    push_CNT(CNT_push_env_class);
    push_CNT(CNT_AST_Self_eval);
    push_EXP(args);
    // evaluate the arguments
    int i;
    for (i = 0; i < super->arguments->size->value; i++) {
        push_CNT(CNT_store_argument);
        push_EXP(args);
        push_EXP(new_Type_SmallInt(i));
        push_CNT(CNT_send_Eval);
        push_EXP(super->arguments->values[i]);
    }
}

/* =========================================================================*/

void post_init_AST_Super()
{
}
