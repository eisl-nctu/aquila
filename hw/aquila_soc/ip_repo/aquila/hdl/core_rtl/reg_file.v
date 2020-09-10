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
    input                regfile_we_i,
    input  [NRLEN-1 : 0] rd_addr_i,
    input  [XLEN-1 : 0]  rd_data_i,
    
    // to Decode
    output [XLEN-1 : 0]  rs1_data_o,
    output [XLEN-1 : 0]  rs2_data_o
);

wire we = regfile_we_i & ( | rd_addr_i); // Because x0 is always 0, can't be written

// --------------- Use for ASIC ---------------
reg [XLEN-1 : 0] rf [0 : NUM_REGS-1];

assign rs1_data_o = (we & (rs1_addr_i == rd_addr_i)) ? rd_data_i : rf[rs1_addr_i];
assign rs2_data_o = (we & (rs2_addr_i == rd_addr_i)) ? rd_data_i : rf[rs2_addr_i];

integer i;
always @(posedge clk_i)
begin
    if (rst_i)
    begin
        rf[0 ] <= 32'b0;
        rf[1 ] <= 32'b0; // return address register, ra.
        rf[2 ] <= 32'b0; // initial stack pointer, sp.
        rf[3 ] <= 32'b0; // global pointer, gp.
        rf[4 ] <= 32'b0; // thread pointer, tp.
        rf[5 ] <= 32'b0; // temporary register, t0
        rf[6 ] <= 32'b0; // temporary register, t1
        rf[7 ] <= 32'b0; // temporary register, t2
        rf[8 ] <= 32'b0; // register store, s0
        rf[9 ] <= 32'b0; // register store, s1
        rf[10] <= 32'b0; // function argument/return value a0
        rf[11] <= 32'b0; // function argument, a1
        rf[12] <= 32'b0; // function argument, a2
        rf[13] <= 32'b0; // function argument, a3
        rf[14] <= 32'b0; // function argument, a4
        rf[15] <= 32'b0; // function argument, a5
        rf[16] <= 32'b0; // function argument, a6
        rf[17] <= 32'b0; // function argument, a7
        rf[18] <= 32'b0; // register store, s2
        rf[19] <= 32'b0; // register store, s3
        rf[20] <= 32'b0; // register store, s4
        rf[21] <= 32'b0; // register store, s5
        rf[22] <= 32'b0; // register store, s6
        rf[23] <= 32'b0; // register store, s7
        rf[24] <= 32'b0; // register store, s8
        rf[25] <= 32'b0; // register store, s9
        rf[26] <= 32'b0; // register store, s10
        rf[27] <= 32'b0; // register store, s11
        rf[28] <= 32'b0; // temporary register, t3
        rf[29] <= 32'b0; // temporary register, t4
        rf[30] <= 32'b0; // temporary register, t5
        rf[31] <= 32'b0; // temporary register, t6
    end
    else
    begin
        if (we)
        begin
            rf[rd_addr_i] <= rd_data_i;
        end
    end
end

endmodule
