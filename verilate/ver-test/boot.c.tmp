// ======================================================================
//  Program : boot.c
//  Author  : Chun-Jen Tsai
//  Date    : Nov/04/2019
// ======================================================================
//  This is the entry point of the boot code. Must be located at the
//  beginning of the text section in the linker script. The stack pointer
//  must be set to point to the top of the stack area.
// ======================================================================

extern int main(void);
extern unsigned int __stack_top; /* declared in the linker script */

void
boot(void)
{
    // Set the stack pointer. The application linker script sets
    // the stack area to __stack_start ~ __stack_top. We must physically
    // assign __stack_top to sp before we run the boot loader.
    asm("lui sp, %hi(__stack_top)");
    main();
}
