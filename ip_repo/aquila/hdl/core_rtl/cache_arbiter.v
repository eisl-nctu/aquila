`timescale 1ns / 1ps 
////////////////////////////////////////////////////////////////////////////////////////
// Company: MMES Lab., Department of Computer Science and Information Engineering, NCTU
// Engineer: Jin-you Wu
//
// Create Date: 2018/10/25
// Design Name: Cache Arbiter
// Module Name: cache_arbiter
// Project Name: Cache Design
// Description:
//      - Priority:
//          Dcache write > Dcache read > Icache read
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
////////////////////////////////////////////////////////////////////////////////////////

module cache_arbiter
       #(parameter ADDR_WIDTH = 32, DATA_WIDTH = 256)
       (
           /////////// System signals           ////////////////////////////////////////////////////
           input    clk, rst,
           /////////// Input signals            ////////////////////////////////////////////////////
           /* I-cache */
           input    [ADDR_WIDTH - 1 : 0]    i_m_addr,
           input    i_m_strobe,
           /* D-cache */
           input    [ADDR_WIDTH - 1 : 0]    d_m_addr,
           input    d_m_strobe,
           input    [DATA_WIDTH - 1 : 0]    d_m_din,
           input    d_m_rw,

           /////////// Output signals           ////////////////////////////////////////////////////
           /* I-cache */
           output reg   i_m_ready,
           output   reg [DATA_WIDTH - 1 : 0]    i_m_dout,
           /* D-cache */
           output reg   d_m_ready,
           output reg   [DATA_WIDTH - 1 : 0] d_m_dout,

           /////////// AXI master signals       ////////////////////////////////////////////////////
           input    axi_done,
           input [DATA_WIDTH - 1 : 0]   axi_din,    // m_dout
           output   reg axi_strobe,
           output reg [ADDR_WIDTH - 1 : 0]  axi_addr,
           output   reg axi_rw,
           output reg   [DATA_WIDTH - 1 : 0]    axi_dout    // m_din

       );
/* Input signals will be held, so we don't need to store them */

/* Output signals */
// instruction cache
always @(posedge clk)
begin
    if (rst)
        i_m_ready <= 0;
    else if ( (S == I_RdfromMem) && axi_done )
        i_m_ready <= 1;
    else
        i_m_ready <= 0;
end
always @(posedge clk)
begin
    if (rst)
        i_m_dout <= 0;
    else if ( (S == I_RdfromMem) && axi_done )
        i_m_dout <= axi_din;
    else
        i_m_dout <= 0;
end
// data cache
always @(posedge clk)
begin
    if (rst)
        d_m_ready <= 0;
    else if ( (S == D_WbtoMem || S == D_RdfromMem) && axi_done )
        d_m_ready <= 1;
    else
        d_m_ready <= 0;
end
always @(posedge clk)
begin
    if (rst)
        d_m_dout <= 0;
    else if ( (S == D_RdfromMem) && axi_done )
        d_m_dout <= axi_din;
    else
        d_m_dout <= 0;
end

/* AXI Master signals */
// a request for read/write ddr through AXI
always @(posedge clk)
begin
    if (rst)
        axi_strobe <= 0;
    else if ( (S == D_WbtoMem) || (S == D_RdfromMem) || (S == I_RdfromMem) )
        axi_strobe <= (axi_done) ? 0 : 1;
    else
        axi_strobe <= 0;
end
// read data from ddr through AXI
always @(posedge clk)
begin
    if (rst)
        axi_addr <= 0;
    else if (S == D_RdfromMem || S == D_WbtoMem)
        axi_addr <= d_m_addr;
    else if (S == I_RdfromMem)
        axi_addr <= i_m_addr;
    else
        axi_addr <= 0;
end
// write data to ddr through AXI
always @(posedge clk)
begin
    if (rst)
        axi_rw <= 0;
    else if (S == D_WbtoMem)
        axi_rw <= 1;
    else
        axi_rw <= 0;
end
always @(posedge clk)
begin
    if (rst)
        axi_dout <= 0;
    else if (S == D_WbtoMem)
        axi_dout <= d_m_din;
    else
        axi_dout <= 0;
end


//-------------------------------------------------
// Cache Arbiter Finite State Machine
//-------------------------------------------------
parameter   Idle    = 0,
          D_WbtoMem = 1,    // dcache write back data to memory
          D_RdfromMem   = 2,    // dcache read data from memory
          I_RdfromMem   = 3,    // icache read data from memory
          Done  = 4;

reg [2: 0] S, S_nxt;

always @(posedge clk)
begin
    if (rst)
        S <= Idle;
    else
        S <= S_nxt;
end
always @( * )
begin
    case (S)
        Idle:   // priority issue
            if (d_m_strobe && d_m_rw)
                S_nxt = D_WbtoMem;      // write dirty data back to memory
            else if (d_m_strobe)
                S_nxt = D_RdfromMem;        // read 8 words data from memory
            else if (i_m_strobe)
                S_nxt = I_RdfromMem;        // read 8 instructions from memory
            else
                S_nxt = Idle;
        D_WbtoMem:
            if (axi_done)
                S_nxt = Done;
            else
                S_nxt = D_WbtoMem;
        D_RdfromMem:
            if (axi_done)
                S_nxt = Done;
            else
                S_nxt = D_RdfromMem;
        I_RdfromMem:
            if (axi_done)
                S_nxt = Done;
            else
                S_nxt = I_RdfromMem;
        Done:
            S_nxt = Idle;
        default:
            S_nxt = Idle;
    endcase
end


endmodule
