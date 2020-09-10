// ======================================================================
//  Program : boot.c
//  Author  : Chun-Jen Tsai
//  Date    : Jan/14/2020
// ======================================================================
//  This is the entry point of the boot code. Must be located at the
//  beginning of the text section in the linker script.
// ======================================================================
#include <stdio.h>

#define SET_STACK_POINTER 1 // Set sp according to the linker script.

extern int main(void);

#if SET_STACK_POINTER
extern unsigned int __stack_top; /* declared in the linker script */
unsigned int stack_top = (unsigned int) &__stack_top;
unsigned int sp_store;
#endif

void boot(void)
{
#if SET_STACK_POINTER
    // We must save the return address to the boot loader before
    // we assign the sp to __stack_top defined in the linker script.
    asm volatile ("lui t0, %hi(sp_store)");
    asm volatile ("sw sp, %lo(sp_store)(t0)");

    // Set the stack pointer. The application linker script sets
    // the top address of the stack area to __stack_top.
    asm volatile("lui t0, %hi(stack_top)");
    asm volatile("lw  sp, %lo(stack_top)(t0)");
    asm volatile("sw sp, %lo(stack_top)(t0)");
#endif

    printf("Stack pointer is 0x%X\n", stack_top);
    main();

#if SET_STACK_POINTER
    // Now, we must restore the stack pointer of the boot loader
    // so that we can execute the epilogue of the boot loader properly.
    asm volatile ("lui t0, %hi(sp_store)");
    asm volatile ("lw sp, %lo(sp_store)(t0)");
#endif
}
