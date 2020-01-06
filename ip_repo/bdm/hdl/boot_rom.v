`timescale 1ns / 1ps
// =============================================================================
//  Program : boot_rom.v
//  Author  : Chun-Jen Tsai
//  Date    : Sep/1/2019
// -----------------------------------------------------------------------------
//  Description:
//  The boot ROM of the Aquila core. The boot code will load the
//  application software from either the UART or the FAT32 SD Card.
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

module boot_rom
#(parameter DATA_WIDTH = 8, ADDR_WIDTH = 16, ROM_SIZE = 65536)
(
    input                         clk,
    input  [ADDR_WIDTH-1 : 0]     addr,
    output reg [DATA_WIDTH-1 : 0] data_o
);

// Declareation of the memory cells
(* rom_style = "block" *) reg [DATA_WIDTH-1 : 0] ROM [ROM_SIZE - 1:0];

// ------------------------------------
// SRAM cell initialization
// ------------------------------------
// Initialize the sram cells with the values defined in "bootrom.mem."
initial begin
  $readmemh("bootrom.mem", ROM);
end

// ------------------------------------
// ROM read operation
// ------------------------------------
always@(posedge clk)
begin
  data_o <= ROM[addr];
end

endmodule
