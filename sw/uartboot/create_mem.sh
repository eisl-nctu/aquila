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
#  Usage: ./create_mem filename.mem code_size data_size 
#
# ======================================================================
#  You are free to use this script anyway you like it.
#

fname="${1%.*}"
hexdump -ve '1/4 "%08x\n"' -n $2 $fname.bin > $fname.mem
hexdump -ve '1/4 "%08x\n"' -s $3 $fname.bin >> $fname.mem
export LINE_NO=`wc -l $fname.mem | cut -d ' ' -f 1`
((total=($2+$3)/4))
((PADDING=$total-$LINE_NO))

# Append "zeros" lines to the memory file so that the memory file
#  size is (code_size+data_size)/4 words for the Xilinx Vivado tools.
#
END=$PADDING
for idx in $(seq 1 $END);
do
    echo 00000000 >> $fname.mem
done
