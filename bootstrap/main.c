#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "settings.h"

#define SMALLER     (void*)11
#define MINUS       (void*)21
#define FIB         (void*)31
#define PLUS        (void*)41
#define FIB_SEND    (void*)51

#define ENC_INT(v)  ((long*)(((v) << 1) + 1))
#define DEC_INT(v)  ((long)(v) >> 1)
#define IS_INT(v)   ((long)(v) & 1)

extern void * METHOD_NAME();
extern void * METHOD_OBJECT[];
extern void * blockTest();
extern void * arrayNew();

long p_true[2];
long p_false[2];
long p_nil[2];

long SmallInteger = 66;

int main(int argc, char**argv)
{
 
    void * method[] = {(void*)22,(void*)01234, (void*)123456,(void*)234561,(void*)345612,(void*)456123,(void*)561234,
                       PLUS, MINUS, SMALLER, FIB, FIB_SEND, (void*)SmallInteger };

    int i;
    for (i = 0; i < METHOD_OBJECT_SIZE; i++) {
        METHOD_OBJECT[i] = method[i];
    }

 
//    int offset = *(int*)&((unsigned char*)&METHOD_NAME)[METHOD_OFFSET-4];
//    void** method_pointer = (void**)&(((unsigned char*)&METHOD_NAME)[offset+METHOD_OFFSET]);    
    
    // printf("of: %d\n", offset);
 
//    *method_pointer = method+1;
 
    long * self = ENC_INT(argc > 1 ? atol(argv[1]) : 0);
 
    /*
    printf("address: %p\n", method_pointer);
    printf("self: %ld\n", self[0]);
    printf("false: %p\n", p_false + 2);
    */
    
    long * result;
    __asm("mov %0, %%rdi"::"r"(self));
    __asm("mov %0, %%rax"::"r"(SmallInteger));
    __asm(METHOD_CALL);
    __asm("mov %%rax, %0":"=r"(result));
 
    if (IS_INT(result)) {
        printf("result: %li\n", DEC_INT(result));
    } else {
        printf("result: %p\n", result);
    }
    return 0;
}