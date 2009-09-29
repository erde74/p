#ifndef SYMBOL_H
#define SYMBOL_H

#include <pinocchio.h>

/* ========================================================================== */

struct Type_Symbol_t { 
    Type_SmallInt hash;
    Type_SmallInt size;
    wchar_t       * value;
};

CREATE_INITIALIZERS(Symbol)
extern Type_Symbol new_Symbol(const wchar_t* name);
extern void install_symbol_methods(Type_Class class);

/* ========================================================================== */

extern void initialize_Symbol();

/* ========================================================================== */

Object SMB_apply_;
Object SMB_asArray;
Object SMB_asSmallInt;
Object SMB_asString;
Object SMB_asSymbol;
Object SMB_at_in_;
Object SMB_and_;
Object SMB_concat_;
Object SMB_divide_;
Object SMB_equals_;
Object SMB_eval;
Object SMB_eval_;
Object SMB_indexOf_;
Object SMB_lastIndexOf_;
Object SMB_lookup_;
Object SMB_minus_;
Object SMB_objectAt_;
Object SMB_objectAt_putIfAbsent_;
Object SMB_objectAt_put_;
Object SMB_plus_;
Object SMB_shiftLeft_;
Object SMB_shiftRight_;
Object SMB_size;
Object SMB_times_;
Object SMB_ifFalse_;
Object SMB_ifTrue_;
Object SMB_not;
Object SMB_or_;

/* ========================================================================== */

#endif // SYMBOL_H