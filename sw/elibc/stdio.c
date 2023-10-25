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
//  The supported formatting characters in printf() are x, X, d, f, and s.
//  Width-formating descriptors also work. The 'l' descriptors only works for
//  'd'. We try to keep the code small.
// -----------------------------------------------------------------------------
//  Revision information:
//
//  Sep/23/2022, by Chun-Jen Tsai
//     Fixed a rounding bug in printf() when printing a floating number with
//     a fractional part close to 1.0 (e.g. 0.99....).
//
//  Oct/20/2023, by Chun-Jen Tsai
//     Added support for width-formatting digits, e.g. "%016.9f", "%4d", etc.
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
        fputs("\nfgets() only supports input from stdin.\n\n", stdout);
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
        fputs("\nfputs() only supports output to stdout.\n", stdout);
    }
    else
    {
        while (*str) putchar(*str++);
    }
    return putchar('\n');
}

void putd(int num, int width, int prefix_zeros, int is_unsigned)
{
    unsigned int n, divisor = 1000000000; /* only for 32-bit integer */
    unsigned int digit, leading_zero = 1;
    int idx, negative = 0;
    char stemp[16];

    if (!is_unsigned && num < 0) num = -num, negative = 1, width--;
    idx = 0;
    n = (unsigned) num;
    do
    {
         digit = n / divisor;
         if (digit)
         {
             leading_zero = 0;
             n = n - digit * divisor;
         }
         divisor /= 10;
         if (!leading_zero) stemp[idx++] = digit + '0';
    } while (divisor);
    if (leading_zero) idx = 1, stemp[0] = '0';
    stemp[idx] = '\0';

    if (prefix_zeros)
    {
        if (negative) putchar('-');
        while (--width >= idx) putchar('0');
    }
    else
    {
        while (--width >= idx) putchar(' ');
        if (negative) putchar('-');
    }
    for (n = 0; n < idx; n++) putchar(stemp[n]);
}

void putx(unsigned int num, int width, int prefix_zeros, int upper_case)
{
    char *HEX[2] = { "0123456789abcdef", "0123456789ABCDEF" };
    int digit, leading_zero = 1, idx, n;
    char stemp[12];

    idx = 0;
    upper_case = upper_case % 2;
    for (n = 8; n > 0; n--) /* only for 32-bit integer */
    {
        digit = num >> ((n-1)*4);
        if (digit)
        {
            leading_zero = 0;
            num = (num << ((9 - n)*4)) >> ((9 - n)*4);
        }
        if ((!leading_zero) || prefix_zeros) stemp[idx++] = HEX[upper_case][digit];
    }
    stemp[idx] = '\0';

    while (--width >= idx) (prefix_zeros)? putchar('0') : putchar(' ');
    for (n = 0; n < idx; n++) putchar(stemp[n]);
}

void putld(int64_t num, int width, int prefix_zeros, int is_unsigned)
{
    uint64_t n, divisor = 100000000000000000LL; /* good for 64-bit integer */
    unsigned int digit, leading_zero = 1;
    int idx, negative = 0;
    char stemp[24];

    if (!is_unsigned && num < 0) num = -num, negative = 1, width--;
    n = (uint64_t) num;
    idx = 0;
    do
    {
         digit = n / divisor;
         if (digit)
         {
             leading_zero = 0;
             n = n - digit * divisor;
         }
         divisor /= 10;
         if (!leading_zero) stemp[idx++] = digit + '0';
    } while (divisor);
    if (leading_zero) idx = 1, stemp[0] = '0';
    stemp[idx] = '\0';

    if (prefix_zeros)
    {
        if (negative) putchar('-');
        while (--width >= idx) putchar('0');
    }
    else
    {
        while (--width >= idx) putchar(' ');
        if (negative) putchar('-');
    }
    for (n = 0; n < idx; n++) putchar(stemp[n]);
}

void putf(double f, int width, int prefix_zeros, int ndecimal)
{
    double num, rounding = 0.5, power = 1.0;
    int integer;
    uint64_t fractions;
    int idx, itemp, negative = 0;

    for (idx = 0; idx < ndecimal; idx++)
    {
        rounding /= 10.0;
        power *= 10.0;
    }

    if (f < 0.0) f = -f, negative = 1;
    num = f + rounding;
    integer = (int) num; /* only an approximation of floor(). */
    fractions = (uint64_t) ((num - (double) integer)*power);
    integer = (negative)? -1 * integer : integer;

    for (idx = ndecimal; idx > 0; idx--)
    {
        if (fractions / power != 0) break;
        power = power / 10;
    }
    itemp = width-ndecimal-1;
    width = (itemp > 0)? itemp : 0;
    putd(integer, width, prefix_zeros, 0);
    putchar('.');
    putld(fractions, ndecimal, 1, 1);
}

int printf(char *fmt, ...)
{
    char *str;
    va_list ap;
    int nd = 6, nd_tmp, prefix_zeros, width;

    for (va_start(ap, fmt); *fmt; fmt++)
    {
        if (*fmt == '%')
        {
            fmt++, prefix_zeros = width = 0;

            if (*fmt == '0') prefix_zeros = 1;
            while (*fmt >= '0' && *fmt <= '9')
            {
                width = width * 10 + (*fmt - '0');
                fmt++;
            }
            if (*fmt == 'l') fmt++; /* skip, do nothing */
            if (*fmt == '.')
            {
                fmt++, nd_tmp = 0;
                while (*fmt >= '0' && *fmt <= '9')
                {
                    nd_tmp = nd_tmp * 10 + (*fmt - '0');
                    fmt++;
                }
                nd = nd_tmp;
            }

            switch(*fmt)
            {
            case 'x':
                putx(va_arg(ap, int), width, prefix_zeros, 0);
                break;

            case 'X':
                putx(va_arg(ap, int), width, prefix_zeros, 1);
                break;

            case 'd':
                putd(va_arg(ap, int), width, prefix_zeros, 0 /* signed */);
                break;

            case 'u':
                putd(va_arg(ap, unsigned), width, prefix_zeros, 1 /* unsigned */);
                break;

            case 'f':
                putf(va_arg(ap, double), width, prefix_zeros, nd);
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
