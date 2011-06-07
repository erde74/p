#include <stdlib.h>
#include <stdio.h>
#include <gc/gc.h>
#include <signal.h>

#define SMALLER (void*)11
#define MINUS (void*)21
#define FIB (void*)31
#define PLUS (void*)41

extern void * fib(void*i);


void * p_true  = (void*)10;
void * p_false = (void*)20;
long * intNew();


long * plus(long *left, long *right)
{
        printf( "plus: %p + %p\n", left, right );
        printf( "  ->   %d + %d\n", left[0], right[0] );
        long * res = intNew();
        res[0] = left[0] + right[0];
        printf( "  ->   %d\n", res[0] );
        return res;
}

long * minus(long *left, long *right)
{
        long * res = intNew();
        res[0] = left[0] - right[0];
        return res;
}

void * smaller(long *left, long *right)
{
        return left[0] < right[0] ? p_true : p_false;
}

void invoke() {
    __asm("cmp $21, %rax");
    __asm( "je minus");
    __asm("cmp $41, %rax");
    __asm( "je plus");
    __asm("cmp $11, %rax");
    __asm( "je smaller");

    __asm( "int $3" );
}

long * intNew() {
    long * c = GC_MALLOC( sizeof(long)+sizeof(long));
    c[0] = 66;
    printf( "- new int at: %p\n", c );
    return &c[1];
}

long * closureNew(int size) {
    long * c = GC_MALLOC( sizeof(long*)+size*sizeof(long*) );
    c[0] = 77;
    printf( "- new closure at: %p\n", c );
    return &c[1];
}

long * arrayNew(int size) {
    long * c = GC_MALLOC( sizeof(long*)+size*sizeof(long*) );
    c[0] = 33;
    printf( "- new array at: %p\n", c );
    return &c[1];
}

void closureValue() {
    //if its not a closure then jmp to invoke
    __asm("cmp $77, -0x8(%rdi)");
    __asm( "jne invoke");
    //load code-pointer from the closure-object
    __asm( "mov (%rdi), %rax");
    __asm( "jmpq *%rax");
}

