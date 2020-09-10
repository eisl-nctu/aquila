#!/bin/bash
# ======================================================================
#  Program : create_ebf
#  Author  : Chun-Jen Tsai
#  Date    : Nov/04/2019
# ======================================================================
#  This bash script is used to generate a binary executible file
#  from a gcc-generated *.bin file. The *.ebf file is simply the *.bin
#  file prepended by a four-byte header that specifies the length of
#  the file in bytes (excluding the header) in little-endian format.
#  The suffix "ebf" stands for Executable Binary Format.
#
#  Usage: ./create_ebf filename.bin
#
# ======================================================================
#  You are free to use this script anyway you like it.
#

fname="${1%.*}"
fsize=`stat --printf="%s" $fname.bin`
fsize=`printf "%08x\n" $fsize`

# The start addr of the executable is extracted from the linker script
start=`sed -e 's/^[ \t]*//' $fname.ld | grep ^code_ram | cut -d= -f2 | cut -d, -f1 | sed -e 's/^[ \t]*//' | cut -c 3-`

echo $start | xxd -r -p | xxd -e -g4 | xxd -r > _header_.bin
echo $fsize | xxd -r -p | xxd -e -g4 | xxd -r >> _header_.bin
cat _header_.bin $fname.bin > $fname.ebf
rm -f _header_.bin
