`timescale 1ns / 1ps 
////////////////////////////////////////////////////////////////////////////////////////
// Company: MMES Lab., Department of Computer Science and Information Engineering, NCTU
// Engineer: Dong-Fong Syu
//
// Create Date: 2017/09/01
// Design Name: Distributed RAM for Register File
// Module Name: RegFile_Distributed_RAM
// Project Name: Processor Design
// Target Devices:
// Tool Versions:
// Description:
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
////////////////////////////////////////////////////////////////////////////////////////

module regfile_distributed_ram (
           input    clk,
           input    we,
           input    [31: 0] data_i,
           input    [ 4: 0] read_addr,
           input    [ 4: 0] write_addr,
           output [31: 0]   data_o
       );

reg [31: 0] rf [31: 0];

assign data_o = rf[read_addr];

integer i;
initial
begin
    for (i = 0;i < 32;i = i + 1)
        rf[i] <= 0;
end

always @(posedge clk)
begin
    if (we)
    begin
        rf[write_addr] <= data_i;
    end
end


endmodule // regfile_distributed_ram
