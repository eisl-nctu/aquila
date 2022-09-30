`timescale 1ns / 1ps
// =============================================================================
//  Program : reg_file.v
//  Author  : Jin-you Wu
//  Date    : Dec/18/2018
// -----------------------------------------------------------------------------
//  Description:
//  This is the Register File of the Aquila core (A RISC-V core).
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
`include "aquila_config.vh"

module reg_file #(
    parameter NUM_REGS = 32,
    parameter XLEN = 32,
    parameter NRLEN = $clog2(NUM_REGS) )
(
    // System signals
    input                clk_i,
    input                rst_i,
    
    // from Decode
    input  [NRLEN-1 : 0] rs1_addr_i,
    input  [NRLEN-1 : 0] rs2_addr_i,

    // from Writeback
    input                rd_we_i,
    input  [NRLEN-1 : 0] rd_addr_i,
    input  [XLEN-1 : 0]  rd_data_i,
    
    // to Decode
    output [XLEN-1 : 0]  rs1_data_o,
    output [XLEN-1 : 0]  rs2_data_o
);

wire we = rd_we_i & ( | rd_addr_i); // Because x0 is always 0, can't be written

// --------------- Use for ASIC ---------------
reg [XLEN-1 : 0] x[0 : NUM_REGS-1];

assign rs1_data_o = (we & (rs1_addr_i == rd_addr_i)) ? rd_data_i : x[rs1_addr_i];
assign rs2_data_o = (we & (rs2_addr_i == rd_addr_i)) ? rd_data_i : x[rs2_addr_i];

// The following signals are for debugging purpose.
wire [XLEN-1 : 0] ra  = x[ 1]; // return address register, ra.
wire [XLEN-1 : 0] sp  = x[ 2]; // initial stack pointer, sp.
wire [XLEN-1 : 0] gp  = x[ 3]; // global pointer, gp.
wire [XLEN-1 : 0] tp  = x[ 4]; // thread pointer, tp.
wire [XLEN-1 : 0] t0  = x[ 5]; // temporary register, t0
wire [XLEN-1 : 0] t1  = x[ 6]; // temporary register, t1
wire [XLEN-1 : 0] t2  = x[ 7]; // temporary register, t2
wire [XLEN-1 : 0] s0  = x[ 8]; // register store, s0
wire [XLEN-1 : 0] s1  = x[ 9]; // register store, s1
wire [XLEN-1 : 0] a0  = x[10]; // function argument/return value a0
wire [XLEN-1 : 0] a1  = x[11]; // function argument, a1
wire [XLEN-1 : 0] a2  = x[12]; // function argument, a2
wire [XLEN-1 : 0] a3  = x[13]; // function argument, a3
wire [XLEN-1 : 0] a4  = x[14]; // function argument, a4
wire [XLEN-1 : 0] a5  = x[15]; // function argument, a5
wire [XLEN-1 : 0] a6  = x[16]; // function argument, a6
wire [XLEN-1 : 0] a7  = x[17]; // function argument, a7
wire [XLEN-1 : 0] s2  = x[18]; // register store, s2
wire [XLEN-1 : 0] s3  = x[19]; // register store, s3
wire [XLEN-1 : 0] s4  = x[20]; // register store, s4
wire [XLEN-1 : 0] s5  = x[21]; // register store, s5
wire [XLEN-1 : 0] s6  = x[22]; // register store, s6
wire [XLEN-1 : 0] s7  = x[23]; // register store, s7
wire [XLEN-1 : 0] s8  = x[24]; // register store, s8
wire [XLEN-1 : 0] s9  = x[25]; // register store, s9
wire [XLEN-1 : 0] s10 = x[26]; // register store, s10
wire [XLEN-1 : 0] s11 = x[27]; // register store, s11
wire [XLEN-1 : 0] t3  = x[28]; // temporary register, t3
wire [XLEN-1 : 0] t4  = x[29]; // temporary register, t4
wire [XLEN-1 : 0] t5  = x[30]; // temporary register, t5
wire [XLEN-1 : 0] t6  = x[31]; // temporary register, t6

integer idx;

always @(posedge clk_i)
begin
    if (rst_i)
        for (idx = 0; idx < NUM_REGS; idx = idx + 1) x[idx] <= {XLEN{1'b0}};
    else
    begin
        if (we)
        begin
            x[rd_addr_i] <= rd_data_i;
        end
    end
end

endmodule
