`timescale 1ns / 1ps
// =============================================================================
//  Program : regfile.v
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

module regfile
#( parameter stack_pointer_addr = 32'h0000_4000 )
(
    // System signals
    input    clk,
    input    rst,
    
    // from Decode
    input    [4: 0]  rs1_addr,
    input    [4: 0]  rs2_addr,
    
    // from Memory_Write_Back_Pipeline
    input    regfile_we,
    input    [4: 0]  rd_addr,
    input    [31: 0] rd_data,
    
    // to Decode_Eexcute_Pipeline
    output   [31: 0] rs1_data_o,
    output   [31: 0] rs2_data_o
);

wire we = regfile_we & ( | rd_addr); // Because x0 is always 0, can't be written

// --------------- Use for ASIC ---------------
reg [31 : 0] rf [0 : 31];

assign rs1_data_o = (we & (rs1_addr == rd_addr)) ? rd_data : rf[rs1_addr];
assign rs2_data_o = (we & (rs2_addr == rd_addr)) ? rd_data : rf[rs2_addr];

integer i;
always @(posedge clk)
begin
    if (rst)
    begin
        rf[0 ] <= 32'b0;
        rf[1 ] <= stack_pointer_addr;
        rf[2 ] <= stack_pointer_addr;
        rf[3 ] <= 32'b0;
        rf[4 ] <= 32'b0;
        rf[5 ] <= 32'b0;
        rf[6 ] <= 32'b0;
        rf[7 ] <= 32'b0;
        rf[8 ] <= 32'b0;
        rf[9 ] <= 32'b0;
        rf[10] <= 32'b0;
        rf[11] <= 32'b0;
        rf[12] <= 32'b0;
        rf[13] <= 32'b0;
        rf[14] <= 32'b0;
        rf[15] <= 32'b0;
        rf[16] <= 32'b0;
        rf[17] <= 32'b0;
        rf[18] <= 32'b0;
        rf[19] <= 32'b0;
        rf[20] <= 32'b0;
        rf[21] <= 32'b0;
        rf[22] <= 32'b0;
        rf[23] <= 32'b0;
        rf[24] <= 32'b0;
        rf[25] <= 32'b0;
        rf[26] <= 32'b0;
        rf[27] <= 32'b0;
        rf[28] <= 32'b0;
        rf[29] <= 32'b0;
        rf[30] <= 32'b0;
        rf[31] <= 32'b0;
    end
    else
    begin
        if (we)
        begin
            rf[rd_addr] <= rd_data;
        end
    end
end


/*
// --------------- Use for FPGA ---------------
// can not reset, use initial
//
wire [31 : 0] rs1_data_internal, rs2_data_internal;
 
assign rs1_data = (we & (rs1_addr == rd_addr)) ? rd_data : rs1_data_internal;
assign rs2_data = (we & (rs2_addr == rd_addr)) ? rd_data : rs2_data_internal;
 
regfile_distributed_ram 
rf_ditrubetd_RAM_0 (  // rs1 read port, rd write port
    .clk(clk),
    .we(we),
    .data_i(rd_data), 
    .read_addr(rs1_addr), 
    .write_addr(rd_addr), 
    .data_o(rs1_data_internal) 
);          
 
regfile_distributed_ram 
rf_ditrubetd_RAM_1 
(  // rs2 read port, rd write port
    .clk(clk), 
    .we(we),
    .data_i(rd_data), 
    .read_addr(rs2_addr), 
    .write_addr(rd_addr), 
    .data_o(rs2_data_internal)
);   
*/

endmodule   // regfile
