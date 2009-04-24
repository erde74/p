#ifndef AST_H
#define AST_H

#include <model.h>

struct instruction_list {
    number_object   size;
    instruction     instructions[];
};

struct assignment {
    ivar_object     variable;
    object          expression;
};

struct constant {
    object          constant;
};

struct callable {
    object          receiver;
    array_object    arguments;
};

struct variable {
    object*         variable;
};

extern ilist_object     make_ilist(int size);
extern iassign_object   make_iassign(ivar_object variable, object expression);
extern icall_object     make_icall(object receiver, int argsize);
extern iconst_object    make_iconst(object constant);
extern ivar_object      make_ivar(object* variable);


extern instruction inline raw_ilist_at(ilist_object ilist, int index);
extern void        inline raw_ilist_at_put(ilist_object ilist,
                                           int index, instruction i);
extern void        inline ilist_at_put(ilist_object ilist,
                                       int index, instruction i);
extern void        inline eval_instruction(instruction instruction);
extern void        inline variable_assign(ivar_object variable, object value);
extern object      inline variable_value(ivar_object variable);

#endif // AST_H
