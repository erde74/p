#include <stdlib.h>
#include <stdio.h>
#include <system/runtime/Continue.h>

/* ========================================================================= */

DECLARE_CLASS(Runtime_Continue);

/* ========================================================================= */

Runtime_Continue new_Runtime_Continue()
{
    NEW_OBJECT(Runtime_Continue);
    return result;
}

void pre_init_Runtime_Continue()
{
    Runtime_Continue_Class =
        new_Class_named(Type_Object_Class,
                        L"Continue",
                        CREATE_OBJECT_TAG(RUNTIME_CONTINUE));
    
    Type_Array layout = (Type_Array)Runtime_Continue_Class->layout;
    HEADER(layout->values[0]) = AST_UnsintInstVariable_Class;
    HEADER(layout->values[1]) = AST_UnsintInstVariable_Class;
    REFER_TO(Runtime_Continue);
}

/* ========================================================================= */

NATIVE1(Runtime_Continue_escape_)
    // LOGFUN;
    Runtime_Continue cont = (Runtime_Continue)self;
    Object arg = NATIVE_ARG(0);
    // restore the stack
    tset(_EXP_, cont->exp_offset + &tget(Double_Stack)[-1]);
    tset(_CNT_, (&tget(Double_Stack)[STACK_SIZE]) - cont->cnt_offset);
    tset(_ISS_, cont->iss);
    set_env(cont->env);
    // Overwrite the top of stack that created the continue.
    poke_EXP(0, arg);
}

NATIVE1(Runtime_Continue_on_)
    Runtime_Continue cont = new_Runtime_Continue();
    cont->exp_offset      = EXP_size() - (argc + 1);
    cont->cnt_offset      = CNT_size();
    cont->iss             = (Object)tget(_ISS_);
    cont->env             = (Object)current_env();
    Object closure = NATIVE_ARG(0);
    poke_EXP(0, cont);
    apply(closure, 1);
}

/* ========================================================================= */

void post_init_Runtime_Continue()
{
    Collection_Dictionary natives = add_plugin(L"Reflection.Reflection");
    store_native(natives, SMB_continueEscape_message_, NM_Runtime_Continue_escape_);
    store_native(natives, SMB_continueOn_message_,     NM_Runtime_Continue_on_);
}
