#!/bin/bash
# ======================================================================
#  Program : create_mem
#  Author  : Chun-Jen Tsai
#  Date    : Nov/04/2019
# ======================================================================
#  This bash script is used to generate a Xilinx Vivado ROM memory file
#  *.mem from a gcc-generated *.bin file. The file will be zero-padded
#  to "line#" lines. Each line contains a 32-bit word in ASCII code.
#
#  Usage: ./create_mem filename.bin
#
# ======================================================================
#  You are free to use this script anyway you like it.
#

fname="${1%.*}"
fsize=`stat -c %s $fname.bin`
hexdump -ve '1/4 "%08x\n"' -n $fsize $fname.bin > $fname.mem

# uncomment the following lines if you want to zero-padding
# the memory files to a fixed line size (each line contains
# a 32-bit memory cell).

#line_no=8192
#((total=$fsize/4))
#((PADDING=$line_no-$total))
#
#END=$PADDING
#for idx in $(seq 1 $END);
#do
#    echo 00000000 >> $fname.mem
#done

