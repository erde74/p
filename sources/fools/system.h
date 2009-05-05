#ifndef SYSTEM_H
#define SYSTEM_H

#include <model.h>

// Starting an evaluation thread.
extern void inline transfer(context_object context);

// Structures to build interfaces to C.
extern void with_native_class_lookup(context_object context);
extern void inline native(context_object context);

// Meta-interpretation primitives.
extern void inline set_transfer(context_object context);
extern context_object inline target_context(context_object interpreter_context);
extern void inline return_from_context(context_object context);

// Convenience macros.
#define build_return(for_c, name)\
    ilist_object m1ilist = make_ilist(0);\
    context_object name = make_context((object)m1ilist, 2);\
    set_message(name, EVAL);\
    for_c->return_context = (object)rc;

#define return_value(rc)\
    argument_at(rc, 1)

#define make_eval_context(name, todo, env)\
    name = make_context((object)todo, 2);\
    set_message(name, EVAL);\
    set_argument(name, 1, (object)env);

// Bootstrapping natives.
extern void pre_eval_env(context_object context);

extern void ilist_eval(context_object context);
extern void ilist_continue_eval(context_object context);

extern void icall_eval(context_object context);
extern void icall_invoke_env(context_object context);

extern void iconst_eval(context_object context);

extern void iassign_eval(context_object context);

extern void ivar_eval(context_object context);
extern void ivar_assign(context_object context);

extern void icapture_eval(context_object context);

extern void appcall_invoke(context_object context);

extern void env_fetch_from(context_object context);
extern void env_store_at_in(context_object context);
extern void env_subscope(context_object context);
extern void env_parent(context_object context);
extern void env_set_parent(context_object context);
extern void env_set_env_parent(context_object context);

extern void iscope_new(context_object context);

extern void iscoped_eval_arguments(context_object context);
extern void iscoped_eval(context_object context);
extern void iscoped_scope(context_object context);

// Convenience function for composing primitives into closures.
extern object inline make_func(array_object arguments, object body);

#endif
