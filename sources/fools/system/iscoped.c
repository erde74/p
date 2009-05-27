#include <system.h>
#include <thread.h>
#include <print.h>

// iscoped>>eval:
static void inline iscoped_eval() {
    debug("iscoped>>doWithArguments:\n");
    context_object iscoped_context = get_context();

    iscoped_object iscoped = iscoped_context->self.iscoped;

    // filling in scope with interpreter + arguments.
    // XXX have to do this by extending the continuation context!
    array_object args   = argument_at(iscoped_context, 0).array;
    object env          = argument_at(iscoped_context, 1);

    env_at_put(env.env, 0, (object)iscoped);

    int argsize = number_value(iscoped->argsize.number);
    if(array_size(args) != argsize) {
        printf("Argument mismatch. (given: %i, expected: %i)\n", array_size(args), argsize);
        int i;
        for (i = 0; i < array_size(args); i++) {
            print_object(raw_array_at(args, i));
            printf("%p\n", raw_array_at(args, i).pointer);
        }
        assert(NULL);
    }

    int i;
    for (i = 0; i < argsize; i++) {
        env_at_put(env.env, i + 1, array_at(args, i));
    }

    // we just eval the attached expression.
    pop_context();
    iscoped_context = make_context(iscoped->expression, 1);
    iscoped_context->env = env;
    set_message(iscoped_context, EVAL);

    debug("ret>>iscoped>>doWithArguments\n");
}

// iscoped>>withArguments:
static void inline iscoped_iapply() {
    // XXX Breaking encapsulation without testing.
    // Test arguments!

    // TODO make subscope of the iscoped>>scope rather than the passed env.
    debug("iscoped>>withArguments:\n");
    context_object iscoped_context = get_context();
    assert_argsize(iscoped_context, 2);

    // Move argument so that the subscope will be at 1.
    object arguments = argument_at(iscoped_context, 1);
    set_argument(iscoped_context, 0, arguments);

    iscoped_object iscoped = iscoped_context->self.iscoped;

    object env = iscoped_context->env;
    int argsize = number_value(iscoped->argsize.number);

    context_object context = make_context(env, 3);
    context->env = env;
    set_message(context, SUBSCOPE_KEY);
    set_argument(context, 1, (object)make_number(argsize + 1)); // + iscoped
    set_argument(context, 2, iscoped->expression);

    iscoped_context->code = &iscoped_eval;

    debug("ret>>iscoped>>withArguments:\n");
}

static void inline iscoped_switch_and_iapply() {
    context_object context = get_context();
    context->env = argument_at(context, 2);
    context->code = &iscoped_iapply;
}

static void inline iscoped_apply_in() {
    context_object context = get_context();
    assert_argsize(context, 3);
    push_eval_of(context, 1);
    push_eval_of(context, 2);
    context->code = &iscoped_switch_and_iapply;
}

// iscoped>>scope
static void inline iscoped_scope() {
    debug("iscoped>>scope\n");
    context_object receiver = get_context();
    // arguments at: 0 -> selector
    iscoped_object iscoped = receiver->self.iscoped;
    set_argument(return_context(receiver), 1, iscoped->scope);
    pop_context();
    debug("ret>>iscoped>>scope\n");
}

void iscoped_shift() {
    context_object context = get_context();
    object_object func = make_object(1, fools_system->level_shifter);
    object_at_put(func, 0, context->self);
    set_argument(return_context(context), 1, (object)func);
    pop_context();
}

void iscoped_dispatch() {
    context_object context = get_context();
    assert_argsize(context, 1);
    object selector = message(context);
    if_selector(selector, IAPPLY,   iscoped_iapply);
    if_selector(selector, SCOPE,    iscoped_scope);
    if_selector(selector, APPLY_IN, iscoped_apply_in);
    if_selector(selector, SHIFT,    iscoped_shift);
    doesnotunderstand("iscoped", selector);
}

// iscoped_class>>new:size:
static void inline iscoped_class_new() {
    debug("iscopecls>>new:size:\n");
    context_object iscope_context = get_context();
    assert_argsize(iscope_context, 3);
    object iscoped =
        make_iscoped(
            iscope_context->env,             // env
            argument_at(iscope_context, 1),  // expression
            argument_at(iscope_context, 2)); // argsize

    set_argument(return_context(iscope_context), 1, iscoped);

    debug("ret>>iscopecls>>new:size:\n");
    pop_context();
}

void iscoped_class_dispatch() {
    context_object context = get_context();
    assert_argsize(context, 1);
    object selector = message(context);
    if_selector(selector, NEW_SIZE, iscoped_class_new);
    doesnotunderstand("iscoped_class", selector);
}

// Object creation
object make_iscoped(object scope, object expression, object argsize) {
    new_instance(iscoped);
    assert(scope.pointer != NULL);
    result->scope       = scope;
    result->expression  = expression;
    result->argsize     = argsize;
    return (object)result;
}
