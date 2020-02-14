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

void
boot(void)
{
    main();
}
