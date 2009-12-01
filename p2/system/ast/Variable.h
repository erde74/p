#ifndef VARIABLE_H
#define VARIABLE_H

#include <pinocchio.h>

/* ========================================================================= */

#define AST_VARIABLE_SIZE 4
#define AST_VARIABLE_VARS L"index", L"key", L"name", L"info"

struct AST_Variable_t {
    uns_int     local_id;
    uns_int     scope_id;
    Object      name;
    AST_Info    info;
};

CREATE_INITIALIZERS(AST_Variable)

extern AST_Variable new_AST_Variable_named(uns_int scope_id, uns_int local_id, const wchar_t* name);
extern AST_Variable new_AST_Variable(uns_int scope_id, uns_int local_id);

/* ========================================================================= */

extern void AST_Variable_eval(AST_Variable self);
extern void AST_Variable_assign(AST_Variable self, Object value);

/* ========================================================================= */

#endif // VARIABLE_H
