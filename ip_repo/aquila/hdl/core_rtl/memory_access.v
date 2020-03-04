`timescale 1ns / 1ps
// =============================================================================
//  Program : memory_access.v
//  Author  : Jin-you Wu
//  Date    : Dec/19/2018
// -----------------------------------------------------------------------------
//  Description:
//  This is the Memory Access Unit of the Aquila core (A RISC-V core).
// -----------------------------------------------------------------------------
//  Revision information:
//
//  Nov/29/2019, by Chun-Jen Tsai:
//    Rename the old module 'memory_alignment' to 'memory_access.'
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

module memory_access#(parameter DATA_WIDTH = 32)
(
    // from Execute_Memory_Pipeline
    input  [DATA_WIDTH-1 : 0]     unaligned_data,       // from rs2
    input  [1 : 0]                mem_addr_alignment,
    input  [1 : 0]                mem_input_sel,

    // to d-cache
    output reg [DATA_WIDTH-1 : 0] data_o,           // data_write
    output reg [3: 0]             byte_write_sel,

    // indicating memory alignment exception
    output   reg                  memory_alignment_exception
);

// store
always @(*)
begin
    case (mem_addr_alignment)
        2'b00:
        begin
            case (mem_input_sel)
                2'b00:
                begin   // sb
                    data_o = {24'b0, unaligned_data[7: 0]};
                    byte_write_sel = 4'b0001;
                    memory_alignment_exception = 0;
                end
                2'b01:
                begin   // sh
                    data_o = {16'b0, unaligned_data[15: 0]};
                    byte_write_sel = 4'b0011;
                    memory_alignment_exception = 0;
                end
                2'b10:
                begin   // sw
                    data_o = unaligned_data;
                    byte_write_sel = 4'b1111;
                    memory_alignment_exception = 0;
                end
                default:
                begin
                    data_o = 0;
                    byte_write_sel = 4'b0000;
                    memory_alignment_exception = 1;
                end
            endcase
        end
        2'b01:
        begin
            case (mem_input_sel)
                2'b00:
                begin   // sb
                    data_o = {16'b0, unaligned_data[7: 0], 8'b0};
                    byte_write_sel = 4'b0010;
                    memory_alignment_exception = 0;
                end
                default:
                begin
                    data_o = 0;
                    byte_write_sel = 4'b0000;
                    memory_alignment_exception = 1;
                end
            endcase
        end
        2'b10:
        begin
            case (mem_input_sel)
                2'b00:
                begin
                    data_o = {8'b0, unaligned_data[7: 0], 16'b0};
                    byte_write_sel = 4'b0100;
                    memory_alignment_exception = 0;
                end
                2'b01:
                begin
                    data_o = {unaligned_data[15: 0], 16'b0};
                    byte_write_sel = 4'b1100;
                    memory_alignment_exception = 0;
                end
                default:
                begin
                    data_o = 0;
                    byte_write_sel = 4'b0000;
                    memory_alignment_exception = 1;
                end
            endcase
        end
        2'b11:
        begin
            case (mem_input_sel)
                2'b00:
                begin
                    data_o = {unaligned_data[7: 0], 24'b0};
                    byte_write_sel = 4'b1000;
                    memory_alignment_exception = 0;
                end
                default:
                begin
                    data_o = 0;
                    byte_write_sel = 4'b0000;
                    memory_alignment_exception = 1;
                end
            endcase
        end
        default:
        begin
            data_o = 0;
            byte_write_sel = 4'b0000;
            memory_alignment_exception = 0;
        end
    endcase
end

endmodule   // memory_access
