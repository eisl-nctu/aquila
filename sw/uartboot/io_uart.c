// =============================================================================
//  Program : io_uart.c
//  Author  : Chun-Jen Tsai
//  Date    : Nov/04/2019
// -----------------------------------------------------------------------------
//  Description:
//  This is the minimal I/O library for the boot code of aquila. It only
//  contains the UART I/O and printf() function with '%d', '%x', and '%s'
//  formating characters to keep the boot code as small as possible.
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

#include <stdarg.h>
#include "io_uart.h"

// =============================================================================
//  UART Device single-byte I/O functions.
// =============================================================================

// Declare the I/O registers of the Xilinx axi_uartlite device.
// This device requires no initialization.
volatile unsigned int *uart_rxfifo = (unsigned int *) 0xC0000000;
volatile unsigned int *uart_txfifo = (unsigned int *) 0xC0000004;
volatile unsigned int *uart_status = (unsigned int *) 0xC0000008;

// Declare the axi_uartlite status register control bits.
#define TX_FIFO_FULL  8
#define TX_FIFO_EMPTY 4
#define RX_FIFO_FULL  2
#define RX_FIFO_VALID 1

unsigned char inbyte(void)
{
    while ((*uart_status & RX_FIFO_VALID) == 0) /* wait */;
    return (unsigned char) *uart_rxfifo;
}

void outbyte(unsigned char c)
{
    if (c == '\n')
    {
        while (*uart_status & TX_FIFO_FULL) /* wait */;
        *uart_txfifo = (unsigned char) '\r';
    }

    while (*uart_status & TX_FIFO_FULL) /* wait */;
    *uart_txfifo = (unsigned char) c;
}

// =============================================================================
//  Standard C stdio functions that call outbyte/inbyte.
// =============================================================================
inline int getchar(void)
{
    return (int) inbyte();
}

inline int putchar(int c)
{
    outbyte((unsigned char) c);
    return c;
}

void putd(int num)
{
    unsigned int divisor = 1000000000; /* only for 32-bit integer */
    int digit, leading_zero = 1;

    if (num == 0)
    {
        putchar('0');
        return;
    }
    else if (num < 0) num = -num, putchar('-');

    do
    {
         digit = num / divisor;
         if (digit)
         {
             leading_zero = 0;
             num = num - digit * divisor;
         }
         divisor /= 10;
         if (!leading_zero) putchar(digit + '0');
    } while (divisor);
}

void putx(unsigned int num, int prefix_zeros)
{
    char *HEX = "0123456789ABCDEF";
    int digit, leading_zero = 1;

    for (int idx = 8; idx > 0; idx--) /* only for 32-bit integer */
    {
        digit = num >> ((idx-1)*4);
        if (digit)
        {
            leading_zero = 0;
            num = (num << ((9 - idx)*4)) >> ((9 - idx)*4);
        }
        if ((!leading_zero) || prefix_zeros) putchar(HEX[digit]);
    }
}

int puts(char *str)
{
    while (*str) putchar(*str++);
    return putchar('\n');
}

int printf(char *fmt, ...)
{
    char *str;
    va_list ap;
    int prefix_zeros = 0;

    for (va_start(ap, fmt); *fmt; fmt++)
    {
        if (*fmt == '%')
        {
            fmt++;
            if (*fmt == '0')
            {
                prefix_zeros = 1;
                fmt++;
            }
            switch(*fmt)
            {
            case 'x':
            case 'X':
                putx(va_arg(ap, int), prefix_zeros);
                break;

            case 'd':
                putd(va_arg(ap, int));
                break;

            case 's':
                str = va_arg(ap, char *);
                while (*str) putchar(*str++);
                break;

            default:
                putchar(*fmt);
            }
        }
        else
            putchar(*fmt);
    }

    va_end(ap);

    return 0;
}

#pragma GCC push_options
#pragma GCC optimize ("O0")
void exit(int status)
{
    printf("-----------------------------------------------------------------------\n");
	printf("Program exit with a status code %d\n", status);
    printf("Press <reset> on the FPGA board to reboot the cpu ...\n\n");
    while (1);
}
#pragma GCC pop_options

