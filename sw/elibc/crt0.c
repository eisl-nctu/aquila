// =============================================================================
//  Program : crt0.c
//  Author  : Chun-Jen Tsai
//  Date    : Jan/14/2020
// =============================================================================
//  This is the entry point of the application code. Must be located at
//  the beginning of the text section in the linker script.
// -----------------------------------------------------------------------------
//  Revision information:
//
//  None.
// -----------------------------------------------------------------------------
//  License information:
//
//  This software is released under the BSD-3-Clause Licence,
//  see https://opensource.org/licenses/BSD-3-Clause for details.
//  In the following license statements, "software" refers to the
//  "source code" of the complete hardware/software system.
//
//  Copyright 2019,
//                    Embedded Intelligent Systems Lab (EISL)
//                    Deparment of Computer Science
//                    National Chiao Tung Uniersity
//                    Hsinchu, Taiwan.
//
//  All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without
//  modification, are permitted provided that the following conditions are met:
//
//  1. Redistributions of source code must retain the above copyright notice,
//     this list of conditions and the following disclaimer.
//
//  2. Redistributions in binary form must reproduce the above copyright notice,
//     this list of conditions and the following disclaimer in the documentation
//     and/or other materials provided with the distribution.
//
//  3. Neither the name of the copyright holder nor the names of its contributors
//     may be used to endorse or promote products derived from this software
//     without specific prior written permission.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
//  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
//  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
//  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
//  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
//  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
//  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
//  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
//  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
//  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//  POSSIBILITY OF SUCH DAMAGE.
// =============================================================================

#define SET_STACK_POINTER 1 // Set sp according to the linker script.

extern int main(void);

#if SET_STACK_POINTER
extern unsigned int __stack_top; /* declared in the linker script */
unsigned int stack_top = (unsigned int) &__stack_top;
unsigned int sp_store;
#endif

void crt0(void)
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
#endif

    main();

#if SET_STACK_POINTER
    // Now, we must restore the stack pointer of the boot loader
    // so that we can execute the epilogue of the boot loader properly.
    asm volatile ("lui t0, %hi(sp_store)");
    asm volatile ("lw sp, %lo(sp_store)(t0)");
#endif
}

