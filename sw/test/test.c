// =============================================================================
//  Program : test.c
//  Author  : Chun-Jen Tsai
//  Date    : Dec/09/2019
// -----------------------------------------------------------------------------
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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int dram_test(void);
void malloc_test(int nwords);
void timer_isr_test();

void sleep(int msec)
{
    unsigned long volatile *clint_mem = (unsigned long *) 0xF0000000;
    unsigned int tick;

    tick = clint_mem[0];
    while (clint_mem[0] - tick < msec) /* busy waiting */;
}

void volatile timer_isr()
{
    printf("\nISR responded! Wait a few seconds...\n\n");

    asm volatile ("addi t0, zero, 0");
    asm volatile ("csrw mie, zero");
}

void volatile install_isr(unsigned int isr)
{
    // the parameter is stored in the a0 register.
	asm volatile ("csrw mtvec, a0");
	printf("Installed ISR at 0x%x\n", isr);
}

void volatile set_timer_period(unsigned long msec)
{
    unsigned long volatile *clint_mem = (unsigned long *) 0xF0000000;
    clint_mem[2] = msec; clint_mem[3] = 0;   // mtimecmp
    clint_mem[0] = clint_mem[1] = 0;         // mtime
}

void volatile enable_core_timer()
{
    asm volatile ("addi t0, zero, 128");
    asm volatile ("csrw mie, t0");
}

unsigned int addr = 0;

int main(void)
{
    float ver = 1.0;

    printf("Hello, Aquila %.1f!\n", ver);
    printf("The address of 'ver' is 0x%X\n\n", (unsigned) &ver);
    dram_test();

    printf("First time tick = %d\n\n", clock());
    malloc_test(5000);
    printf("\nSecond time tick = %d\n\n", clock());

    timer_isr_test();
    printf("Waiting for timer ISR ...\n");
    // busy waiting ...
    sleep(5000);

    printf("Test finished.\n");

    return 0;
}

volatile int *trigger = ((int volatile *) 0xF0000010);

int dram_test(void)
{
    float ver = 1.0;
    unsigned long *dram = (unsigned long *) 0x80000000;

    printf("Hello, Aquila %.1f!\n", ver);

    for (int idx = 0; idx < (256*4)*2; idx++)
        switch (idx % 4) {
            case 0: dram[idx] = 0x00001111; break;
            case 1: dram[idx] = 0x22223333; break;
            case 2: dram[idx] = 0x44445555; break;
            case 3: dram[idx] = 0x66667777; break;
        }

    *trigger = 1;
    printf("[0x80000000] = 0x%x\n", dram[3]);

    return 0;
}

void malloc_test(int nwords)
{
    int *buf, idx;

    printf("Memory allocation test of %d words:\n", nwords);
    if ((buf = (int *) malloc(nwords*4)) == NULL)
    {
        printf("Error: Out of memory.\n");
        exit(-1);
    }
    printf("The buffer address is: 0x%X\n", (unsigned) buf);
    for (idx = 0; idx < nwords; idx++) buf[idx] = idx;
    for (idx = 0; idx < 10; idx++)
    {
        printf("Addr 0x%X, buf[%d] = %d\n", (unsigned) &(buf[idx]), idx, buf[idx]);
    }
    printf("\n...\n");
    for (idx = 10; idx > 0; idx--)
    {
        printf("Addr 0x%X, buf[%d] = %d\n",(unsigned) &(buf[nwords-idx]), nwords-idx, buf[nwords-idx]);
    }
    free(buf);
    printf("Buffer freed.\n");
}

#pragma GCC push_options
#pragma GCC optimize ("O0")
void timer_isr_test()
{
    char str[10];
    int n;

    printf("Timer ISR test:\n");

    // Set the ISR address.
    install_isr((unsigned int) timer_isr);

    // Input the timer interrupt duration.
    do
    {
        printf("Input the interrupt duration (in msec): ");
        fgets(str, sizeof(str), stdin);
        n = atoi(str);
    } while (n == 0);

    // Set the interrupt duration.
    set_timer_period(n);

    // Enable the timer interrupts.
    enable_core_timer();
}
#pragma GCC pop_options
