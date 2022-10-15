// =============================================================================
//  Program : uartboot.c
//  Author  : Chun-Jen Tsai
//  Date    : Nov/12/2021
// -----------------------------------------------------------------------------
//  Description:
//  This is the boot code for Aquila SoC.  Upon reset, the boot code waiting
//  for an ELF program file to be transferred from the UART port.
//  The processor will be halted when the execution is finished.
// -----------------------------------------------------------------------------
//  Revision information:
//
//  Sep/17/2022, by Chun-Jen Tsai
//    Modify the ELF loader to perform on-the-fly loading from UART without
//    using any ELF file loading buffer.
//
//  Oct/15/2022, by Chun-Jen Tsai
//    Use different schemes for loading into TCM (on-the-fly) and into
//    DRAM (buffered loasding).
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
#include <elf.h>
#include <stdint.h>
#include "io_uart.h"

int load_elf_tcm(Elf32_Ehdr *ehdr);
int load_elf_ddr(Elf32_Ehdr *ehdr, uint8_t *elf_base);

// ------------------------------------------------------------------------------
//  Memory Map:
//     0x00000000 ~ 0x0000FFFF: on-chip memory (64KB, boot code)
//     0x80000000 ~ 0x8FFFFFFF: main memory (code, data, heap, and stack)
//     0xC0000000 ~ 0xCFFFFFFF: I/O device area
//     0xF0000000 ~ 0xFFFFFFFF: system device area
// ------------------------------------------------------------------------------

uint8_t *prog;
uint8_t eheader[64], pheader[128];
char    *organization = "EISL@NCTU, Hsinchu, Taiwan";
int     year = 2022;

int main(void)
{
    Elf32_Ehdr *ehdr = (Elf32_Ehdr *) eheader;
    uint32_t *magic = (uint32_t *) ELFMAG;
    uint32_t size, hsize = sizeof(Elf32_Ehdr);
    int idx;

    printf("=======================================================================\n");
    printf("Copyright (c) 2019-%d, %s.\n", year, organization);
    printf("The Aquila SoC is ready.\n");
    printf("Waiting for an ELF file to be sent from the UART ...\n");

    // Read the ELF header.
    for (idx = 0; idx < hsize; idx++)
    {
        eheader[idx] = inbyte();
    }

    if (*((uint32_t *) ehdr->e_ident) == *magic)
    {
        prog = (uint8_t *) ehdr->e_entry; /* set program entry point */
        size = ehdr->e_shoff + (ehdr->e_shentsize * ehdr->e_shnum);

        if ((uint32_t) prog < 0x10000) // Loading the ELF file to the TCM.
        {
            // We can perform on-the-fly parse-loading from the UART input
            // directly into the TCM. This is important when the system
            // has no DRAM to be used as a loading buffer.
            load_elf_tcm(ehdr);
        }
        else  // Loading the ELF file to the DDRx main memory.
        {
            // Parse-loading of an ELF file directly from the UART
            // to the main memory is not reliable. So, we save the
            // ELF image into a main memory buffer first, then
            // parse-load the ELF image to its destination.
            uint8_t *elfp = (uint8_t *) 0x8F000000UL; // ELF image buffer
            for (idx = hsize; idx < size; idx++) elfp[idx] = inbyte();
            load_elf_ddr(ehdr, elfp);
        }

        printf("\nProgram entry point at 0x%x, size = 0x%x.\n", prog, size);
        printf("-----------------------------------------------------------------------\n");

        // Call the entry point for execution.
        asm volatile ("fence.i"); // force flushing of I/D caches.
        asm volatile ("lui t0, %hi(prog)");
        asm volatile ("lw ra, %lo(prog)(t0)");
        asm volatile ("jalr ra, ra, 0");
    }
    else
    {
        printf("\n\nMagic number = 0x%X\n", *((uint32_t *) ehdr->e_ident));
        printf("Error! Not an ELF file.\n\n");
    }

    // Halt the processor.
    exit(0);

    return 0;
}

int load_elf_tcm(Elf32_Ehdr *ehdr)
{
    Elf32_Phdr *phdr = (Elf32_Phdr *) pheader;
    uint32_t hsize = sizeof(Elf32_Ehdr);
    uint32_t skip, current_byte;
    uint32_t *mem;
    uint8_t  *dst_addr;
    int idx, jdx;

    // Read the Program headers.
    current_byte = hsize;
    for (idx = 0; idx < ehdr->e_phentsize*ehdr->e_phnum; idx++)
    {
        pheader[idx] = inbyte();
        current_byte++;
    }

    // Load CODE and DATA sections into the target addresses.
    for (idx = 0; idx < ehdr->e_phnum; idx++)
    {
        if (phdr[idx].p_type == PT_LOAD && phdr[idx].p_filesz != 0)
        {
            dst_addr = (uint8_t *) phdr[idx].p_paddr;
            skip = phdr[idx].p_offset - current_byte;
            while (skip-- > 0) inbyte(), current_byte++;

            for (jdx = 0; jdx < phdr[idx].p_filesz; jdx++)
            {
                dst_addr[jdx] = inbyte();
                current_byte++;
            }
            mem = (uint32_t *) &(dst_addr[jdx]);
            while (jdx < phdr[idx].p_memsz)
            {
                mem[(jdx>>2)] = 0;
                jdx += sizeof(int);
            }
        }
    }

    return 0;
}

int load_elf_ddr(Elf32_Ehdr *ehdr, uint8_t *elf_base)
{
    Elf32_Phdr *section;
    uint32_t dst_addr, src_addr;
    int idx, jdx;

    // Copy all loadable sections of an ELF image to the destination.
    section = (Elf32_Phdr *) (elf_base + ehdr->e_phoff);
    for (idx = 0; idx < ehdr->e_phnum; idx++)
    {
        // Locate CODE and DATA sections
        if (section[idx].p_type == PT_LOAD && section[idx].p_filesz != 0)
        {
            src_addr = (uint32_t) elf_base + section[idx].p_offset;
            dst_addr = (uint32_t) section[idx].p_paddr;
            for (jdx = 0; jdx < section[idx].p_filesz; jdx+=sizeof(int))
            {
                *(uint32_t *)(dst_addr+jdx) = *(uint32_t *)(src_addr+jdx);
            }
            while (jdx < section[idx].p_memsz)
            {
                *(uint32_t *)(dst_addr+jdx) = 0;
                jdx += sizeof(int);
            }
        }
    }

    return 0;
}

