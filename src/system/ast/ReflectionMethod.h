#ifndef REFLECTIONMETHOD_H
#define REFLECTIONMETHOD_H

#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>

/* ========================================================================= */

struct ReflectionMethod_t {
    uns_int size;
    Array   params;
    Array   locals;
    Optr    package;
    Array   annotations;
    Info    info;
    native  cache;
    Optr    body[];
};

extern ReflectionMethod new_ReflectionMethod_with(Array params,
                                                  Array locals,
                                                  Array annotations,
					                              Array threaded,
                                                  uns_int statementCount, ...);

/* ========================================================================= */

extern void ReflectionMethod_invoke(MethodClosure closure,
                                    ReflectionMethod method, Optr self,
                                    uns_int argc);
extern void post_init_ReflectionMethod();
/* ========================================================================= */

#endif // REFLECTIONMETHOD_H
