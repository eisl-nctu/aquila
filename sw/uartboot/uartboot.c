// =============================================================================
//  Program : uartboot.c
//  Author  : Chun-Jen Tsai
//  Date    : Nov/04/2019
// -----------------------------------------------------------------------------
//  Description:
//  This is the boot code for Aquila SoC.  Upon reset, the boot code waiting
//  for a program to be transferred from the UART port (using [File] -> [Send file]
//  menu command of TeraTerm). Then the program will be loaded to 0x9000_0000,
//  and executed. The processor will be halted when the execution is finished.
// -----------------------------------------------------------------------------
//  Revision information:
//
//  Jan/14/2020, by Chun-Jen Tsai:
//    Change the *.ebf format to support code loading at different start
//    addresses.
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

#include <io_uart.h>

// ------------------------------------------------------------------------------
//  Memory Map for KC-705:
//     0x00000000 ~ 0x0000FFFF: on-chip memory (64KB, boot code)
//     0x80000000 ~ 0x8FFFFFFF: code/data area (256MB)
//     0x90000000 ~ 0xAFFEFFFF: heap area (511MB)
//     0xAFFF0000 ~ 0xAFFFFFF0: stack area (64KB)
//     0xB0000000 ~ 0xBFFFFFFF: unused area (256MB)
// ------------------------------------------------------------------------------
//  Memory Map for Arty:
//     0x00000000 ~ 0x0000FFFF: on-chip memory (boot code)
//     0x80000000 ~ 0x81FFFFFF: code/data area (16MB)
//     0x82000000 ~ 0x8FFEFFFF: heap area (208MB)
//     0x8FFF0000 ~ 0x8FFFFFF0: stack area (64KB)
// ------------------------------------------------------------------------------

unsigned int addr;

int main(void)
{
    volatile unsigned char *prog;
    unsigned char code;
    unsigned int size;
    int year = 2020;
    char *organization = "EISL@NCTU, Hsinchu, Taiwan";

    printf("===========================================================");
    printf("============\n");
    printf("Copyright (c) 2019-%d, %s.\n", year, organization);
    printf("The Aquila SoC is ready to go.\n");
    printf("Waiting for a program to be sent from the UART ...\n");
    addr = inbyte();
    addr = addr + (inbyte() << 8);
    addr = addr + (inbyte() << 16);
    addr = addr + (inbyte() << 24);
    prog = (unsigned char *) addr;
    size = inbyte();
    size = size + (inbyte() << 8);
    size = size + (inbyte() << 16);
    size = size + (inbyte() << 24);
    for (int idx = 0; idx < size; idx++)
    {
        code = inbyte();
        prog[idx] = code;
    }
    printf("Aquila executes code at 0x%x, size = 0x%x bytes.\n", addr, size);
    printf("-----------------------------------------------------------");
    printf("------------\n");

    // Call the entry point for execution.
    asm volatile ("lui t0, %hi(addr)");
    asm volatile ("lw ra, %lo(addr)(t0)");
    asm volatile ("jalr ra, ra, 0");

    // Go back to wait for execution state when the program returns.
    printf("\n-----------------------------------------------------------");
    printf("------------\nAquila execution finished.\n\n");

    return 0;
}

