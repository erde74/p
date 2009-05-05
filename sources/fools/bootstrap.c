#include <bootstrap.h>
#include <primitives.h>
#include <system.h>
#include <ast.h>
#include <assert.h>

fools_object fools_system;

#define define_native(cls, name, native)\
    do_define_native(fools_system->cls, name, &native)

#define make_empty_object(cls)\
    (object)make_object(0, (object)fools_system->cls)

void inline do_define_native(native_class_object cls,
                             int index,
                             transfer_target native) {
    dict_at_put(cls->natives,
                symbol_known_to_the_vm(index),
                (object)make_native(native));
}

#define define_symbol(idx, value)\
    array_at_put(fools_system->symbols_known_to_the_vm, idx, (object)make_string(value))
    
void bootstrap_symbols() {
    define_symbol(INTERPRET,            "interpret:");
    define_symbol(RETURN_ENV_CONTINUE,  "return:env:continue:");
    define_symbol(EVAL,                 "eval:");
    define_symbol(PRE_EVAL_ENV,         "preEval:env:");
    define_symbol(INVOKE_ENV,           "invoke:env:");
    define_symbol(ASSIGN_IN,            "assign:in:");
    define_symbol(FETCH_FROM,           "fetch:from:");
    define_symbol(STORE_AT_IN,          "store:at:in:");
    define_symbol(SUBSCOPE_KEY,         "subScope:key:");
    define_symbol(ENV_PARENT,           "envParent:");
    define_symbol(ENV_SET_PARENT,       "env:parent:");
    define_symbol(PARENT,               "parent:");
    define_symbol(ENV_NEW_SIZE,         "env:new:size:");
    define_symbol(EVAL_WITHARGUMENTS,   "eval:withArguments:");
    define_symbol(DOEVAL_WITHARGUMENTS, "doEval:withArguments:");
    define_symbol(SCOPE_IN_ENV,         "scope:in:env:");
}

fools_object bootstrap() {
    fools_system                            = NEW(struct fools);
    fools_system->nil                       = make_nil();
    fools_system->empty = (array_object)make_object(1, (object)fools_system->nil);
    fools_system->empty->size               = make_number(0);
    fools_system->native                    = (object)make_native(&native);
 
    header(fools_system->native.pointer)    = fools_system->native;

    fools_system->symbols_known_to_the_vm   = make_array(NBR_SYMBOLS);

    fools_system->native_metaclass = (object)make_native(&with_native_class_lookup);

// currently broken.
//    fools_system->dict_class = make_native_class(2);
//    header(fools_system->dict_class->natives) = (object)fools_system->dict_class;
//    define_native(dict_class, "at:",                    prim_dict_at);
//    define_native(dict_class, "at:put:",                prim_dict_at_put);

    fools_system->string_class = make_native_class(0);
    fools_system->array_class = make_native_class(0);

    bootstrap_symbols();

    fools_system->ilist_class = make_native_class(3);
    define_native(ilist_class, RETURN_ENV_CONTINUE,     ilist_continue_eval);
    define_native(ilist_class, EVAL,                    ilist_eval);
    define_native(ilist_class, PRE_EVAL_ENV,            pre_eval_env);
    
    fools_system->iconst_class = make_native_class(2);
    define_native(iconst_class, EVAL,                   iconst_eval);
    define_native(iconst_class, PRE_EVAL_ENV,           pre_eval_env);

    fools_system->icall_class = make_native_class(3);
    define_native(icall_class, EVAL,                    icall_eval);
    define_native(icall_class, INVOKE_ENV,              icall_invoke_env);
    define_native(icall_class, PRE_EVAL_ENV,            pre_eval_env);

    fools_system->iassign_class = make_native_class(2);
    define_native(iassign_class, EVAL,                  iassign_eval);
    define_native(iassign_class, PRE_EVAL_ENV,          pre_eval_env);

    fools_system->ivar_class = make_native_class(3);
    define_native(ivar_class, EVAL,                     ivar_eval);
    define_native(ivar_class, ASSIGN_IN,                ivar_assign);
    define_native(ivar_class, PRE_EVAL_ENV,             pre_eval_env);

    fools_system->icapture_class = make_native_class(1);
    define_native(icapture_class, EVAL,                 icapture_eval);

    fools_system->icapture = (object)make_icapture();

    fools_system->env_class = make_native_class(6);
    define_native(env_class, FETCH_FROM,                env_fetch_from);
    define_native(env_class, STORE_AT_IN,               env_store_at_in);
    define_native(env_class, SUBSCOPE_KEY,              env_subscope);
    define_native(env_class, ENV_SET_PARENT,            env_set_env_parent);
    define_native(env_class, PARENT,                    env_set_parent);
    define_native(env_class, ENV_PARENT,                env_parent);

    fools_system->iscope_metaclass = make_native_class(1);
    define_native(iscope_metaclass, ENV_NEW_SIZE,       iscope_new);

    fools_system->iscope = make_empty_object(iscope_metaclass);

    fools_system->iscope_class = make_native_class(3);
    define_native(iscope_class, EVAL_WITHARGUMENTS,     iscoped_eval_arguments);
    define_native(iscope_class, DOEVAL_WITHARGUMENTS,   iscoped_eval);
    define_native(iscope_class, SCOPE_IN_ENV,           iscoped_scope);

    fools_system->appcall_class = make_native_class(2);
    define_native(appcall_class, EVAL,                  icall_eval);
    define_native(appcall_class, INVOKE_ENV,            appcall_invoke);
    define_native(appcall_class, PRE_EVAL_ENV,          pre_eval_env);

    fools_system->number_class = make_native_class(4);

    return fools_system;
}
