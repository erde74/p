#include <gc/gc.h>
#include <string.h>
#include <pinocchio.h>

void cache_and_call()
{
    __asm("mov %r10, %rdx");
    // Fetch the calling instruction pointer (stack-stored ip)
    __asm("mov 0(%rsp), %eax");
    // Calculate the offset of the actual code pointer
    __asm("sub %eax, %edx");
    // Overwrite the 4-byte call-target offset with the method
    __asm("movl %edx, -4(%eax)");
    // Calculate the location of the literal in the frame
    __asm("lea -5(%eax), %edx");
    __asm("movl -9(%eax), %eax");
    __asm("cltq");
    __asm("add %rax, %rdx");
    // Calculate the class
    // If tagged integer, store the SmallInteger class
    __asm("bt $0, %rdi");
    __asm("jae not_tagged");
    __asm("mov %0, %%rax"::"r"(&SmallInteger));
    __asm("mov %rax, (%rdx)");
    // __asm("int3");
    __asm("jmp *%r10");
    // If not tagged, store the class of the receiver
__asm("not_tagged:");
    __asm("mov -16(%rdi), %rax");
    __asm("mov %rax, (%rdx)");
    __asm("jmp *%r10");
}

void does_not_understand0(tObject receiver)
{
    tSymbol msg;
    __asm("mov %%r11, %0":"=r"(msg));
    print_class_name(CLASS_OF(receiver));
    PINOCCHIO_FAIL(" does not understand #%s", msg);
}

void does_not_understand1(tObject receiver, tObject arg1)
{
    tSymbol msg;
    __asm("mov %%r11, %0":"=r"(msg));
    print_class_name(CLASS_OF(receiver));
    PINOCCHIO_FAIL(" does not understand #%s", msg);
}

void does_not_understand2(tObject receiver, tObject arg1, tObject arg2)
{
    tSymbol msg;
    __asm("mov %%r11, %0":"=r"(msg));
    print_class_name(CLASS_OF(receiver));
    PINOCCHIO_FAIL(" does not understand #%s", msg);
}

void does_not_understand3(tObject receiver, tObject arg1, tObject arg2, tObject arg3)
{
    tSymbol msg;
    __asm("mov %%r11, %0":"=r"(msg));
    print_class_name(CLASS_OF(receiver));
    PINOCCHIO_FAIL(" does not understand #%s", msg);
}

void does_not_understand4(tObject receiver, tObject arg1, tObject arg2, tObject arg3, tObject arg4)
{
    tSymbol msg;
    __asm("mov %%r11, %0":"=r"(msg));
    print_class_name(CLASS_OF(receiver));
    PINOCCHIO_FAIL(" does not understand #%s", msg);
}

void does_not_understand5(tObject receiver, tObject arg1, tObject arg2, tObject arg3, tObject arg4, tObject arg5)
{
    tSymbol msg;
    __asm("mov %%r11, %0":"=r"(msg));
    print_class_name(CLASS_OF(receiver));
    PINOCCHIO_FAIL(" does not understand #%s", msg);
}

void does_not_understandN(tObject receiver, tObject arg1, tObject arg2, tObject arg3, tObject arg4, tObject arg5, long argCount, ...)
{
    tSymbol msg;
    __asm("mov %%r11, %0":"=r"(msg));
    print_class_name(CLASS_OF(receiver));
    PINOCCHIO_FAIL(" does not understand #%s", msg);
}

void invoke0() {
    // backup all call registers
    __asm("push %rdi");
    __asm("push %rax");

    // use msg as second argument to do_lookup
    __asm("mov %rax, %rsi");
    __asm("call do_lookup");
    __asm("test %rax, %rax");
    // store the result as r10 for cache_and_call
    //__asm("mov $does_not_understand0, %rdi");
    __asm("mov $does_not_understand0, %r10");
    __asm("cmovne %rax, %r10");

    __asm("pop %r11");
    __asm("pop %rdi");
    __asm("jmp cache_and_call");
}

void invoke1() {
    // backup all call registers
    __asm("push %rdi");
    __asm("push %rsi");
    __asm("push %rax");

    // use msg as second argument to do_lookup
    __asm("mov %rax, %rsi");
    __asm("call do_lookup");
    // store the result as r10 for cache_and_call
    __asm("mov does_not_understand1, %r10");
    __asm("cmovne %rax, %r10");

    __asm("pop %r11");
    __asm("pop %rsi");
    __asm("pop %rdi");
    __asm("jmp cache_and_call");
}

void invoke2() {
    // backup all call registers
    __asm("push %rdi");
    __asm("push %rsi");
    __asm("push %rdx");
    __asm("push %rax");

    // use msg as second argument to do_lookup
    __asm("mov %rax, %rsi");
    __asm("call do_lookup");
    // store the result as r10 for cache_and_call
    __asm("mov $does_not_understand2, %r10");
    __asm("cmovne %rax, %r10");

    __asm("pop %r11");
    __asm("pop %rdx");
    __asm("pop %rsi");
    __asm("pop %rdi");
    __asm("jmp cache_and_call");
}

void invoke3() {
    // backup all call registers
    __asm("push %rdi");
    __asm("push %rsi");
    __asm("push %rdx");
    __asm("push %rcx");
    __asm("push %rax");

    // use msg as second argument to do_lookup
    __asm("mov %rax, %rsi");
    __asm("call do_lookup");
    // store the result as r10 for cache_and_call
    __asm("mov does_not_understand3, %r10");
    __asm("cmovne %rax, %r10");

    __asm("pop %r11");
    __asm("pop %rcx");
    __asm("pop %rdx");
    __asm("pop %rsi");
    __asm("pop %rdi");
    __asm("jmp cache_and_call");
}

void invoke4() {
    // backup all call registers
    __asm("push %rdi");
    __asm("push %rsi");
    __asm("push %rdx");
    __asm("push %rcx");
    __asm("push %r8");
    __asm("push %rax");

    // use msg as second argument to do_lookup
    __asm("mov %rax, %rsi");
    __asm("call do_lookup");
    // store the result as r10 for cache_and_call
    __asm("mov does_not_understand4, %r10");
    __asm("cmovne %rax, %r10");

    __asm("pop %r11");
    __asm("pop %r8");
    __asm("pop %rcx");
    __asm("pop %rdx");
    __asm("pop %rsi");
    __asm("pop %rdi");
    __asm("jmp cache_and_call");
}

void invoke5() {
    // backup all call registers
    __asm("push %rdi");
    __asm("push %rsi");
    __asm("push %rdx");
    __asm("push %rcx");
    __asm("push %r8");
    __asm("push %r9");
    __asm("push %rax");

    // use msg as second argument to do_lookup
    __asm("mov %rax, %rsi");
    __asm("call do_lookup");
    // store the result as r10 for cache_and_call
    __asm("mov does_not_understand5, %r10");
    __asm("cmovne %rax, %r10");

    __asm("pop %r11");
    __asm("pop %r9");
    __asm("pop %r8");
    __asm("pop %rcx");
    __asm("pop %rdx");
    __asm("pop %rsi");
    __asm("pop %rdi");
    __asm("jmp cache_and_call");
}

void invokeN() {
    // backup all call registers
    __asm("push %rdi");
    __asm("push %rsi");
    __asm("push %rdx");
    __asm("push %rcx");
    __asm("push %r8");
    __asm("push %r9");
    __asm("push %rax");

    // use msg as second argument to do_lookup
    __asm("mov %rax, %rsi");
    __asm("call do_lookup");
    // store the result as r10 for cache_and_call
    __asm("mov does_not_understandN, %r10");
    __asm("cmovne %rax, %r10");

    __asm("pop %r11");
    __asm("pop %r9");
    __asm("pop %r8");
    __asm("pop %rcx");
    __asm("pop %rdx");
    __asm("pop %rsi");
    __asm("pop %rdi");
    __asm("jmp cache_and_call");
}

long plus(long left, long right)
{
//    printf( "plus: %p + %p\n", left, right );
    if (ARE_INTS(left, right)) {
        return (left ^ 1) + right;
    }
    PINOCCHIO_FAIL("Ints expected, given %lx, %lx", left, right);
    return 0;
}

long minus(long left, long right)
{
//    printf( "minus: %p - %p\n", left, right );
    if (ARE_INTS(left, right)) {
        return (left - right) | 1;
    }
    PINOCCHIO_FAIL("Ints expected, given %lx, %lx", left, right);
    return 0;
}

long bitShift(long self, long bits)
{
//    printf( "minus: %p - %p\n", left, right );
    if (ARE_INTS(self, bits)) {
        
        return ENC_INT(DEC_INT(self)<<DEC_INT(bits));
    }
    PINOCCHIO_FAIL("Ints expected, given %lx, %lx", self, bits);
    return 0;
}


tObject smaller(long left, long right)
{
    // printf( "smaller: %d < %d\n", left, right );
    if (ARE_INTS(left, right)) {
    // we don't need to remove the tag since it will end up being the same order.
        // printf( "smaller: %d < %d\n", left, right );
        return left < right ? &true : &false;
    }
    PINOCCHIO_FAIL("Ints expected, given %lx, %lx", left, right);
    return 0;
}


tObject smallerEqual(long left, long right)
{
    // printf( "smaller: %d < %d\n", left, right );
    if (ARE_INTS(left, right)) {
    // we don't need to remove the tag since it will end up being the same order.
        // printf( "smaller: %d < %d\n", left, right );
        return left <= right ? &true : &false;
    }
    PINOCCHIO_FAIL("Ints expected, given %lx, %lx", left, right);
    return 0;
}

tObject print(tObject receiver, tSymbol msg) {
    print_symbol(msg);
    printf("\n");
    return receiver;
}
