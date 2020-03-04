`timescale 1ns / 1ps
// =============================================================================
//  Program : forwarding_unit.v
//  Author  : Jin-you Wu
//  Date    : Dec/17/2018
// -----------------------------------------------------------------------------
//  Description:
//  This is the Data Forwarding Unit of the Aquila core (A RISC-V core).
//
//  The Data Forwarding Unit was based on the Microblaze-compatible processor,
//  KernelBlaze, originally designed by Dong-Fong Syu on Sep/01/2017.
// -----------------------------------------------------------------------------
//  Revision information:
//
//  NONE.
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

module forwarding_unit #(parameter DATA_WIDTH = 32)
(
    // from Decode_Eexcute_Pipeline Register
    input  [4: 0]             rs1_addr,
    input  [4: 0]             rs2_addr,
    input  [DATA_WIDTH-1 : 0] rs1_data,
    input  [DATA_WIDTH-1 : 0] rs2_data,

    // from Execute_Memory_Pipeline Register
    input  [4: 0]             rd_addr_EXE_MEM,
    input                     regfile_we_EXE_MEM,
    input  [2: 0]             regfile_input_sel_EXE_MEM,
    input  [DATA_WIDTH-1 : 0] p_data_EXE_MEM,

    // from Memory_Write_Back_Pipeline Register
    input  [4: 0]             rd_addr_MEM_WB,
    input                     regfile_we_MEM_WB,
    input  [DATA_WIDTH-1 : 0] rd_data_MEM_WB,

    // to Execution Stage
    output [DATA_WIDTH-1 : 0] rs1_fwd,
    output [DATA_WIDTH-1 : 0] rs2_fwd
);

wire is_rs1_rd_EXE_MEM_same, is_rs2_rd_EXE_MEM_same;
wire is_rs1_rd_MEM_WB_same, is_rs2_rd_MEM_WB_same;
wire is_rd_EXE_MEM_not_zero, is_rd_MEM_WB_not_zero;

wire rs1_EXE_MEM_fwd, rs2_EXE_MEM_fwd;
wire rs1_MEM_WB_fwd, rs2_MEM_WB_fwd;

wire [DATA_WIDTH-1 : 0] correct_rs1_data, correct_rs2_data;

wire [DATA_WIDTH-1 : 0] correct_fwd_src2;
wire [DATA_WIDTH-1 : 0] correct_fwd_src1;

assign is_rs1_rd_EXE_MEM_same = (rs1_addr == rd_addr_EXE_MEM);
assign is_rs2_rd_EXE_MEM_same = (rs2_addr == rd_addr_EXE_MEM);
assign is_rs1_rd_MEM_WB_same = (rs1_addr == rd_addr_MEM_WB);
assign is_rs2_rd_MEM_WB_same = (rs2_addr == rd_addr_MEM_WB);

assign is_rd_EXE_MEM_not_zero = ( | rd_addr_EXE_MEM);
assign is_rd_MEM_WB_not_zero = ( | rd_addr_MEM_WB);

assign rs1_EXE_MEM_fwd = regfile_we_EXE_MEM & is_rs1_rd_EXE_MEM_same & is_rd_EXE_MEM_not_zero;
assign rs2_EXE_MEM_fwd = regfile_we_EXE_MEM & is_rs2_rd_EXE_MEM_same & is_rd_EXE_MEM_not_zero;
assign rs1_MEM_WB_fwd = regfile_we_MEM_WB & is_rs1_rd_MEM_WB_same & is_rd_MEM_WB_not_zero;
assign rs2_MEM_WB_fwd = regfile_we_MEM_WB & is_rs2_rd_MEM_WB_same & is_rd_MEM_WB_not_zero;

assign correct_fwd_src2 = rd_data_MEM_WB;
assign correct_fwd_src1 = p_data_EXE_MEM;    // 'd0, 'd1, 'd2 case will handle by
                                             // pipeline_control (load-use data hazard)

assign correct_rs1_data =
       rs1_EXE_MEM_fwd ? correct_fwd_src1
       : rs1_MEM_WB_fwd ? correct_fwd_src2
       : rs1_data;

assign correct_rs2_data =
       rs2_EXE_MEM_fwd ? correct_fwd_src1
       : rs2_MEM_WB_fwd ? correct_fwd_src2
       : rs2_data;

// ================================================================================
//  Outputs signals
//
assign rs1_fwd = correct_rs1_data;
assign rs2_fwd = correct_rs2_data;

endmodule   // forwarding
