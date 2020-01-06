// =============================================================================
//  Program : stdio.c
//  Author  : Chun-Jen Tsai
//  Date    : Dec/09/2019
// -----------------------------------------------------------------------------
//  Description:
//  This is the minimal stdio library for aquila. It only contains the basic I/O
//  functions for the uart device. Simple FAT32 file system support for SD card
//  will be added in the future.
//
//  The supported formating characters in printf() are x, X, d, f, and s.
//  for 'f' format, you can specify a single-digit decimal points. For example,
//  to print a float with four decimal points, you can use "%.4f" in the
//  formating string. All other formating characters l, and numbers will be skipped.
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
#include <stdio.h>
#include "uart.h"

static FILE _stdin  = {0, 0};
static FILE _stdout = {1, 0};
static FILE _stderr = {2, 0};
FILE *stdin = &_stdin;
FILE *stdout = &_stdout;
FILE *stderr = &_stderr;

// =============================================================================
//  Standard C stdio functions that call outbyte/inbyte.
// =============================================================================
inline int getchar(void)
{
    return (int) inbyte();
}

char *fgets(char *s, int n, FILE *stream)
{
    char *rtn = s;
    if (stream != stdin)
    {
        fputs("\nfgets() only supports input from stdin.\n\n", stdin);
        rtn = NULL;
    }
    else
    {
        while (n--)
        {
            *s = (char) getchar();
            if (*s == '\n' || *s == '\r' ) break;
            putchar((int) *s);
            s++;
        }
        putchar((int) '\n');
        *s = 0;
    }
    return rtn;
}

inline int putchar(int c)
{
    outbyte((unsigned char) c);
    return c;
}

int fputs(const char *str, FILE *stream)
{
    if (stream != stdout)
    {
        fputs("\nfgets() only supports input from stdin.\n", stdin);
    }
    else
    {
        while (*str) putchar(*str++);
    }
    return putchar('\n');
}

void putd(int num, int prefix_zeros, int positive)
{
    unsigned int divisor = 1000000000; /* only for 32-bit integer */
    int digit, leading_zero = 1;

    if (num == 0)
    {
        putchar('0');
        return;
    }
    else if (!positive && num < 0) num = -num, putchar('-');

    while (prefix_zeros--) putchar('0');
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

void putx(unsigned int num, int upper_case, int prefix_zeros)
{
    char *HEX[2] = { "0123456789abcdef", "0123456789ABCDEF" };
    int digit, leading_zero = 1;

    while (prefix_zeros--) putchar('0');
    upper_case = upper_case % 2;
    for (int idx = 8; idx > 0; idx --) /* only for 32-bit integer */
    {
        digit = num >> ((idx-1)*4);
        if (digit)
        {
            leading_zero = 0;
            num = (num << ((9 - idx)*4)) >> ((9 - idx)*4);
        }
        if (!leading_zero) putchar(HEX[upper_case][digit]);
    }
}

void putf(double f, int ndecimal)
{
    double num = f;
    int integer, fractions;
    int idx, power = 1;

    if (num < 0.0) num = -num, putchar('-');
    integer = (int) num; /* only an approximation of floor(). */
    for (idx = 0; idx < ndecimal; idx++) power = power * 10;
    fractions = (int) ((num - integer)*power + 0.5);
    for (idx = ndecimal; idx > 0; idx--)
    {
        if (fractions / power != 0) break;
        power = power / 10;
    }
    (integer)? putd(integer, 0, 1) : putchar('0');
    putchar('.'); putd(fractions, ndecimal - idx - 1, 1);
}

int printf(char *fmt, ...)
{
    char *str;
    va_list ap;
    int nd = 6, positive = 0;

    for (va_start(ap, fmt); *fmt; fmt++)
    {
        if (*fmt == '%')
        {
            fmt++;
            while (*fmt >= '0' && *fmt <= '9') fmt++; /* skip, do nothing */
            if (*fmt == 'u')
            {
                positive = 1;
                fmt++;
            }
            if (*fmt == 'l') fmt++; /* skip, do nothing */
            if (*fmt == '.')
            {
                fmt++;
                nd = (*fmt - '0') % 10;
                fmt++;
                while (*fmt >= '0' && *fmt <= '9') fmt++; /* skip, do nothing */
            }

            switch(*fmt)
            {
            case 'x':
                putx(va_arg(ap, int), 0, 0);
                break;

            case 'X':
                putx(va_arg(ap, int), 1, 0);
                break;

            case 'd':
                putd(va_arg(ap, int), 0, positive);
                break;

            case 'f':
                putf(va_arg(ap, double), nd);
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
