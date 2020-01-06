
`timescale 1 ns / 1 ps
// =============================================================================
//  Program : aquila_M_ICACHE_PORT.v
//  Author  : Jin-you Wu
//  Date    : ??/??/2019
// -----------------------------------------------------------------------------
//  Description:
//  This is the AXI bus interface of the dcache module. The data cahce signals
//  come from the aquila_top module.
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

module aquila_M_DCACHE_PORT #
(
    parameter integer C_CACHE_LINE_SIZE    = 256, // Size of a cache line in bits.
    parameter integer C_M_AXI_ID_WIDTH     = 1,   // Thread ID Width.
    parameter integer C_M_AXI_ADDR_WIDTH   = 32,  // Width of Address Bus.
    parameter integer C_M_AXI_DATA_WIDTH   = 32,  // Width of Data Bus.
    parameter integer C_M_AXI_AWUSER_WIDTH = 0,   // Width of User Write Addr Bus.
    parameter integer C_M_AXI_ARUSER_WIDTH = 0,  // Width of User Read Addr Bus.
    parameter integer C_M_AXI_WUSER_WIDTH  = 0,  // Width of User Write Data Bus.    
    parameter integer C_M_AXI_RUSER_WIDTH  = 0,  // Width of User Read Data Bus.
    parameter integer C_M_AXI_BUSER_WIDTH  = 0   // Width of User Response Bus.
)
(
    // Users to add ports here
    input                           RISCV_rst,
    input                           M_DCACHE_strobe,
    input [C_M_AXI_ADDR_WIDTH-1: 0] M_DCACHE_addr,
    input                           M_DCACHE_rw,
    input [C_CACHE_LINE_SIZE-1: 0]  M_DCACHE_dataout,
    output                          M_DCACHE_done,
    output[C_CACHE_LINE_SIZE-1: 0]  M_DCACHE_datain,
    // User ports ends

    // Global Clock Signal.
    input wire M_AXI_ACLK,
    // Global Reset Singal. This Signal is Active Low
    input wire M_AXI_ARESETN,
    // Master Interface Write Address ID
    output wire [C_M_AXI_ID_WIDTH - 1 : 0] M_AXI_AWID,
    // Master Interface Write Address
    output wire [C_M_AXI_ADDR_WIDTH - 1 : 0] M_AXI_AWADDR,
    // Burst length. The burst length gives the exact number of transfers in a burst
    output wire [7 : 0] M_AXI_AWLEN,
    // Burst size. This signal indicates the size of each transfer in the burst
    output wire [2 : 0] M_AXI_AWSIZE,
    // Burst type. The burst type and the size information,
    // determine how the address for each transfer within the burst is calculated.
    output wire [1 : 0] M_AXI_AWBURST,
    // Lock type. Provides additional information about the
    // atomic characteristics of the transfer.
    output wire M_AXI_AWLOCK,
    // Memory type. This signal indicates how transactions
    // are required to progress through a system.
    output wire [3 : 0] M_AXI_AWCACHE,
    // Protection type. This signal indicates the privilege
    // and security level of the transaction, and whether
    // the transaction is a data access or an instruction access.
    output wire [2 : 0] M_AXI_AWPROT,
    // Quality of Service, QoS identifier sent for each write transaction.
    output wire [3 : 0] M_AXI_AWQOS,
    // Optional User-defined signal in the write address channel.
    output wire [C_M_AXI_AWUSER_WIDTH - 1 : 0] M_AXI_AWUSER,
    // Write address valid. This signal indicates that
    // the channel is signaling valid write address and control information.
    output wire M_AXI_AWVALID,
    // Write address ready. This signal indicates that
    // the slave is ready to accept an address and associated control signals
    input wire M_AXI_AWREADY,
    // Master Interface Write Data.
    output wire [C_M_AXI_DATA_WIDTH - 1 : 0] M_AXI_WDATA,
    // Write strobes. This signal indicates which byte
    // lanes hold valid data. There is one write strobe
    // bit for each eight bits of the write data bus.
    output wire [C_M_AXI_DATA_WIDTH / 8 - 1 : 0] M_AXI_WSTRB,
    // Write last. This signal indicates the last transfer in a write burst.
    output wire M_AXI_WLAST,
    // Optional User-defined signal in the write data channel.
    output wire [C_M_AXI_WUSER_WIDTH - 1 : 0] M_AXI_WUSER,
    // Write valid. This signal indicates that valid write
    // data and strobes are available
    output wire M_AXI_WVALID,
    // Write ready. This signal indicates that the slave
    // can accept the write data.
    input wire M_AXI_WREADY,
    // Master Interface Write Response.
    input wire [C_M_AXI_ID_WIDTH - 1 : 0] M_AXI_BID,
    // Write response. This signal indicates the status of the write transaction.
    input wire [1 : 0] M_AXI_BRESP,
    // Optional User-defined signal in the write response channel
    input wire [C_M_AXI_BUSER_WIDTH - 1 : 0] M_AXI_BUSER,
    // Write response valid. This signal indicates that the
    // channel is signaling a valid write response.
    input wire M_AXI_BVALID,
    // Response ready. This signal indicates that the master
    // can accept a write response.
    output wire M_AXI_BREADY,
    // Master Interface Read Address.
    output wire [C_M_AXI_ID_WIDTH - 1 : 0] M_AXI_ARID,
    // Read address. This signal indicates the initial
    // address of a read burst transaction.
    output wire [C_M_AXI_ADDR_WIDTH - 1 : 0] M_AXI_ARADDR,
    // Burst length. The burst length gives the exact number of transfers in a burst
    output wire [7 : 0] M_AXI_ARLEN,
    // Burst size. This signal indicates the size of each transfer in the burst
    output wire [2 : 0] M_AXI_ARSIZE,
    // Burst type. The burst type and the size information,
    // determine how the address for each transfer within the burst is calculated.
    output wire [1 : 0] M_AXI_ARBURST,
    // Lock type. Provides additional information about the
    // atomic characteristics of the transfer.
    output wire M_AXI_ARLOCK,
    // Memory type. This signal indicates how transactions
    // are required to progress through a system.
    output wire [3 : 0] M_AXI_ARCACHE,
    // Protection type. This signal indicates the privilege
    // and security level of the transaction, and whether
    // the transaction is a data access or an instruction access.
    output wire [2 : 0] M_AXI_ARPROT,
    // Quality of Service, QoS identifier sent for each read transaction
    output wire [3 : 0] M_AXI_ARQOS,
    // Optional User-defined signal in the read address channel.
    output wire [C_M_AXI_ARUSER_WIDTH - 1 : 0] M_AXI_ARUSER,
    // Write address valid. This signal indicates that
    // the channel is signaling valid read address and control information
    output wire M_AXI_ARVALID,
    // Read address ready. This signal indicates that
    // the slave is ready to accept an address and associated control signals
    input wire M_AXI_ARREADY,
    // Read ID tag. This signal is the identification tag
    // for the read data group of signals generated by the slave.
    input wire [C_M_AXI_ID_WIDTH - 1 : 0] M_AXI_RID,
    // Master Read Data
    input wire [C_M_AXI_DATA_WIDTH - 1 : 0] M_AXI_RDATA,
    // Read response. This signal indicates the status of the read transfer
    input wire [1 : 0] M_AXI_RRESP,
    // Read last. This signal indicates the last transfer in a read burst
    input wire M_AXI_RLAST,
    // Optional User-defined signal in the read address channel.
    input wire [C_M_AXI_RUSER_WIDTH - 1 : 0] M_AXI_RUSER,
    // Read valid. This signal indicates that the channel
    // is signaling the required read data.
    input wire M_AXI_RVALID,
    // Read ready. This signal indicates that the master can
    // accept the read data and response information.
    output wire M_AXI_RREADY
);

// Burst Length. Supports 1, 2, 4, 8, 16, 32, 64, 128, 256 burst lengths
localparam integer C_BURST_LEN = 8;

// C_TRANSACTIONS_NUM is the width of the index counter for
// number of write or read transaction.
localparam integer C_TRANSACTIONS_NUM = $clog2(C_BURST_LEN);

// Burst length for transactions, in C_M_AXI_DATA_WIDTHs.
// Non-2^n lengths will eventually cause bursts across 4K address boundaries.
localparam integer C_MASTER_LENGTH	= 12;
// total number of burst transfers is master length
//    divided by burst length and burst size
localparam integer C_NO_BURSTS_REQ = C_MASTER_LENGTH -
                       $clog2(C_BURST_LEN * C_M_AXI_DATA_WIDTH / 8);

// AXI4LITE signals
//AXI4 internal temp signals
reg [C_M_AXI_ADDR_WIDTH - 1 : 0] axi_awaddr;
reg axi_awvalid;
reg [C_M_AXI_DATA_WIDTH - 1 : 0] axi_wdata;
reg axi_wlast;
reg axi_wvalid;
reg axi_bready;
reg [C_M_AXI_ADDR_WIDTH - 1 : 0] axi_araddr;
reg axi_arvalid;
reg axi_rready;
//write beat count in a burst
reg [C_TRANSACTIONS_NUM : 0] write_index;
//read beat count in a burst
reg [C_TRANSACTIONS_NUM : 0] read_index;
//size of C_BURST_LEN length burst in bytes
wire [C_TRANSACTIONS_NUM + 2 : 0] burst_size_bytes;
// The burst counters are used to track the number of burst transfers of
//   C_BURST_LEN burst length needed to transfer 2^C_MASTER_LENGTH
//   bytes of data.
reg [C_NO_BURSTS_REQ : 0] write_burst_counter;
reg [C_NO_BURSTS_REQ : 0] read_burst_counter;
reg start_single_burst_write;
reg start_single_burst_read;
reg writes_done;
reg reads_done;
reg burst_write_active;
reg burst_read_active;

//Interface response error flags
wire write_resp_error;
wire read_resp_error;
wire wnext;
wire rnext;
reg cpu_reset_ff;
reg cpu_reset_ff2;
wire cpu_reset;

// Declaration of local signals.
localparam
          IDLE	= 0,
          READ	= 1,
          WRITE	= 2,
          DONE	= 3;
reg [1: 0] S, S_nxt;
reg [31: 0]	rBuffer[0: 7];
reg [31: 0]	wBuffer[0: 7];

// I/O Connections assignments

//I/O Connections. Write Address (AW)
assign M_AXI_AWID	= 'b0;
//The AXI address is a concatenation of the target base address + active offset range
assign M_AXI_AWADDR	= axi_awaddr;
//Burst LENgth is number of transaction beats, minus 1
assign M_AXI_AWLEN	= C_BURST_LEN - 1;
//Size should be C_M_AXI_DATA_WIDTH, in 2^SIZE bytes, otherwise narrow bursts are used
assign M_AXI_AWSIZE	= $clog2(C_M_AXI_DATA_WIDTH / 8);
//INCR burst type is usually used, except for keyhole bursts
assign M_AXI_AWBURST	= 2'b01;
assign M_AXI_AWLOCK	= 1'b0;
//Update value to 4'b0011 if coherent accesses to be used via the Zynq ACP port.
//  Not Allocated, Modifiable, not Bufferable. Not Bufferable since this example
//  is meant to test memory, not intermediate cache.
assign M_AXI_AWCACHE	= 4'b0010;
assign M_AXI_AWPROT	= 3'h0;
assign M_AXI_AWQOS	= 4'h0;
assign M_AXI_AWUSER	= 'b1;
assign M_AXI_AWVALID	= axi_awvalid;
//Write Data(W)
assign M_AXI_WDATA	= axi_wdata;
//All bursts are complete and aligned in this example
assign M_AXI_WSTRB	= {(C_M_AXI_DATA_WIDTH / 8){1'b1}};
assign M_AXI_WLAST	= axi_wlast;
assign M_AXI_WUSER	= 'b0;
assign M_AXI_WVALID	= axi_wvalid;
//Write Response (B)
assign M_AXI_BREADY	= axi_bready;
//Read Address (AR)
assign M_AXI_ARID	= 'b0;
assign M_AXI_ARADDR	= axi_araddr;
//Burst LENgth is number of transaction beats, minus 1
assign M_AXI_ARLEN	= C_BURST_LEN - 1;
//Size should be C_M_AXI_DATA_WIDTH, in 2^n bytes, otherwise narrow bursts are used
assign M_AXI_ARSIZE	= $clog2(C_M_AXI_DATA_WIDTH / 8);
//INCR burst type is usually used, except for keyhole bursts
assign M_AXI_ARBURST	= 2'b01;
assign M_AXI_ARLOCK	= 1'b0;
//Update value to 4'b0011 if coherent accesses to be used via the Zynq ACP port.
//  Not Allocated, Modifiable, not Bufferable. Not Bufferable since this example
//  is meant to test memory, not intermediate cache.
assign M_AXI_ARCACHE	= 4'b0010;
assign M_AXI_ARPROT	= 3'h0;
assign M_AXI_ARQOS	= 4'h0;
assign M_AXI_ARUSER	= 'b1;
assign M_AXI_ARVALID	= axi_arvalid;
//Read and Read Response (R)
assign M_AXI_RREADY	= axi_rready;
//Burst size in bytes
assign burst_size_bytes	= C_BURST_LEN * C_M_AXI_DATA_WIDTH / 8;
assign cpu_reset = (!cpu_reset_ff2) && cpu_reset_ff;


always @(posedge M_AXI_ACLK)
begin
    // Initiates AXI transaction delay
    if (M_AXI_ARESETN == 0 )
    begin
        cpu_reset_ff <= 1'b0;
        cpu_reset_ff2 <= 1'b0;
    end
    else
    begin
        cpu_reset_ff <= RISCV_rst;
        cpu_reset_ff2 <= cpu_reset_ff;
    end
end

//--------------------
//Write Address Channel
//--------------------

// The purpose of the write address channel is to request the address and
// command information for the entire transaction.  It is a single beat
// of information.

// The AXI4 Write address channel in this example will continue to initiate
// write commands as fast as it is allowed by the slave/interconnect.
// The address will be incremented on each accepted address transaction,
// by burst_size_byte to point to the next address.

always @(posedge M_AXI_ACLK)
begin

    if (M_AXI_ARESETN == 0 || cpu_reset == 1'b1 )
    begin
        axi_awvalid <= 1'b0;
    end
    // If previously not valid , start next transaction
    else if (~axi_awvalid && start_single_burst_write)
    begin
        axi_awvalid <= 1'b1;
    end
    /* Once asserted, VALIDs cannot be deasserted, so axi_awvalid
    must wait until transaction is accepted */
    else if (M_AXI_AWREADY && axi_awvalid)
    begin
        axi_awvalid <= 1'b0;
    end
    else
        axi_awvalid <= axi_awvalid;
end


// Next address after AWREADY indicates previous address acceptance
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || cpu_reset == 1'b1)
    begin
        axi_awaddr <= 'b0;
    end
    else if (S_nxt == WRITE)
        axi_awaddr <= M_DCACHE_addr;
    /*
    else if (M_AXI_AWREADY && axi_awvalid)
      begin
        axi_awaddr <= axi_awaddr + burst_size_bytes;
      end
    */
    else
        axi_awaddr <= axi_awaddr;
end


//--------------------
//Write Data Channel
//--------------------

//The write data will continually try to push write data across the interface.

//The amount of data accepted will depend on the AXI slave and the AXI
//Interconnect settings, such as if there are FIFOs enabled in interconnect.

//Note that there is no explicit timing relationship to the write address channel.
//The write channel has its own throttling flag, separate from the AW channel.

//Synchronization between the channels must be determined by the user.

//The simpliest but lowest performance would be to only issue one address write
//and write data burst at a time.

//In this example they are kept in sync by using the same address increment
//and burst sizes. Then the AW and W channels have their transactions measured
//with threshold counters as part of the user logic, to make sure neither
//channel gets too far ahead of each other.

//Forward movement occurs when the write channel is valid and ready

assign wnext = M_AXI_WREADY & axi_wvalid;

// WVALID logic, similar to the axi_awvalid always block above
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || cpu_reset == 1'b1 )
    begin
        axi_wvalid <= 1'b0;
    end
    // If previously not valid, start next transaction
    else if (~axi_wvalid && start_single_burst_write)
    begin
        axi_wvalid <= 1'b1;
    end
    /* If WREADY and too many writes, throttle WVALID
    Once asserted, VALIDs cannot be deasserted, so WVALID
    must wait until burst is complete with WLAST */
    else if (wnext && axi_wlast)
        axi_wvalid <= 1'b0;
    else
        axi_wvalid <= axi_wvalid;
end


//WLAST generation on the MSB of a counter underflow
// WVALID logic, similar to the axi_awvalid always block above
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || cpu_reset == 1'b1 )
    begin
        axi_wlast <= 1'b0;
    end
    // axi_wlast is asserted when the write index
    // count reaches the penultimate count to synchronize
    // with the last write data when write_index is b1111
    // else if (&(write_index[C_TRANSACTIONS_NUM-1:1])&& ~write_index[0] && wnext)
    else if (((write_index == C_BURST_LEN - 2 && C_BURST_LEN >= 2) && wnext) ||
             (C_BURST_LEN == 1 ))
    begin
        axi_wlast <= 1'b1;
    end
    // Deassrt axi_wlast when the last write data has been
    // accepted by the slave with a valid response
    else if (wnext)
        axi_wlast <= 1'b0;
    else if (axi_wlast && C_BURST_LEN == 1)
        axi_wlast <= 1'b0;
    else
        axi_wlast <= axi_wlast;
end


/* Burst length counter. Uses extra counter register bit to indicate terminal
 count to reduce decode logic */
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || cpu_reset == 1'b1 || start_single_burst_write == 1'b1)
    begin
        write_index <= 0;
    end
    else if (wnext && (write_index != C_BURST_LEN - 1))
    begin
        write_index <= write_index + 1;
    end
    else
        write_index <= write_index;
end


/* Write Data Generator
 Data pattern is only a simple incrementing count from 0 for each burst  */
always @( * )
begin
    if (M_AXI_ARESETN == 0 || cpu_reset == 1'b1)
        axi_wdata = 'b0;
    else if (S == WRITE)
        axi_wdata = wBuffer[write_index];
    else
        axi_wdata = axi_wdata;
end


//----------------------------
//Write Response (B) Channel
//----------------------------

//The write response channel provides feedback that the write has committed
//to memory. BREADY will occur when all of the data and the write address
//has arrived and been accepted by the slave.

//The write issuance (number of outstanding write addresses) is started by
//the Address Write transfer, and is completed by a BREADY/BRESP.

//While negating BREADY will eventually throttle the AWREADY signal,
//it is best not to throttle the whole data channel this way.

//The BRESP bit [1] is used indicate any errors from the interconnect or
//slave for the entire write burst. This example will capture the error
//into the ERROR output.

always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || cpu_reset == 1'b1 )
    begin
        axi_bready <= 1'b0;
    end
    // accept/acknowledge bresp with axi_bready by the master
    // when M_AXI_BVALID is asserted by slave
    else if (M_AXI_BVALID && ~axi_bready)
    begin
        axi_bready <= 1'b1;
    end
    // deassert after one clock cycle
    else if (axi_bready)
    begin
        axi_bready <= 1'b0;
    end
    // retain the previous value
    else
        axi_bready <= axi_bready;
end


//Flag any write response errors
assign write_resp_error = axi_bready & M_AXI_BVALID & M_AXI_BRESP[1];


//----------------------------
//Read Address Channel
//----------------------------

//The Read Address Channel (AW) provides a similar function to the
//Write Address channel- to provide the tranfer qualifiers for the burst.

//In this example, the read address increments in the same
//manner as the write address channel.

always @(posedge M_AXI_ACLK)
begin

    if (M_AXI_ARESETN == 0 || cpu_reset == 1'b1 )
    begin
        axi_arvalid <= 1'b0;
    end
    // If previously not valid , start next transaction
    else if (~axi_arvalid && start_single_burst_read)
    begin
        axi_arvalid <= 1'b1;
    end
    else if (M_AXI_ARREADY && axi_arvalid)
    begin
        axi_arvalid <= 1'b0;
    end
    else
        axi_arvalid <= axi_arvalid;
end


// Next address after ARREADY indicates previous address acceptance
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || cpu_reset == 1'b1)
    begin
        axi_araddr <= 'b0;
    end
    else if (S == IDLE)
        axi_araddr <= M_DCACHE_addr;
    /*
    else if (M_AXI_ARREADY && axi_arvalid)
      begin
        axi_araddr <= axi_araddr + burst_size_bytes;
      end
    */
    else
        axi_araddr <= axi_araddr;
end


//--------------------------------
//Read Data (and Response) Channel
//--------------------------------

// Forward movement occurs when the channel is valid and ready
assign rnext = M_AXI_RVALID && axi_rready;


// Burst length counter. Uses extra counter register bit to indicate
// terminal count to reduce decode logic
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || cpu_reset == 1'b1 || start_single_burst_read)
    begin
        read_index <= 0;
    end
    else if (rnext && (read_index != C_BURST_LEN - 1))
    begin
        read_index <= read_index + 1;
    end
    else
        read_index <= read_index;
end


/*
 The Read Data channel returns the results of the read request

 In this example the data checker is always able to accept
 more data, so no need to throttle the RREADY signal
 */
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || cpu_reset == 1'b1 )
    begin
        axi_rready <= 1'b0;
    end
    // accept/acknowledge rdata/rresp with axi_rready by the master
    // when M_AXI_RVALID is asserted by slave
    else if (M_AXI_RVALID)
    begin
        if (M_AXI_RLAST && axi_rready)
        begin
            axi_rready <= 1'b0;
        end
        else
        begin
            axi_rready <= 1'b1;
        end
    end
    // retain the previous value
end

//Flag any read response errors
assign read_resp_error = axi_rready & M_AXI_RVALID & M_AXI_RRESP[1];

// write_burst_counter counter keeps track with the number of burst transaction initiated
// against the number of burst transactions the master needs to initiate
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || cpu_reset == 1'b1 )
    begin
        write_burst_counter <= 'b0;
    end
    else if (M_AXI_AWREADY && axi_awvalid)
    begin
        if (write_burst_counter[C_NO_BURSTS_REQ] == 1'b0)
        begin
            write_burst_counter <= write_burst_counter + 1'b1;
            //write_burst_counter[C_NO_BURSTS_REQ] <= 1'b1;
        end
    end
    else
        write_burst_counter <= write_burst_counter;
end

// read_burst_counter counter keeps track with the number of burst transaction initiated
// against the number of burst transactions the master needs to initiate
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || cpu_reset == 1'b1)
    begin
        read_burst_counter <= 'b0;
    end
    else if (M_AXI_ARREADY && axi_arvalid)
    begin
        if (read_burst_counter[C_NO_BURSTS_REQ] == 1'b0)
        begin
            read_burst_counter <= read_burst_counter + 1'b1;
            //read_burst_counter[C_NO_BURSTS_REQ] <= 1'b1;
        end
    end
    else
        read_burst_counter <= read_burst_counter;
end

//--------------------------------------------------------------------------------------
// start_single_burst_read is controlled by AXI BUS state machine
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0)
    begin
        start_single_burst_read <= 1'b0;
    end
    else if (S_nxt == READ)
    begin
        if (~axi_arvalid && ~burst_read_active && ~start_single_burst_read)
        begin
            start_single_burst_read <= 1'b1;
        end
        else
        begin
            start_single_burst_read <= 1'b0; //Negate to generate a pulse
        end
    end
    else
        start_single_burst_read <= 1'b0;
end

// start_single_burst_write is controlled by AXI BUS state machine
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0)
        start_single_burst_write <= 1'b0;
    else if (S_nxt == WRITE)
    begin
        if (~axi_awvalid && ~start_single_burst_write && ~burst_write_active)
        begin
            start_single_burst_write <= 1'b1;
        end
        else
        begin
            start_single_burst_write <= 1'b0; //Negate to generate a pulse
        end
    end
    else
        start_single_burst_write <= 1'b0;
end
//--------------------------------------------------------------------------------------

// burst_write_active signal is asserted when there is a burst write transaction
// is initiated by the assertion of start_single_burst_write. burst_write_active
// signal remains asserted until the burst write is accepted by the slave
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || cpu_reset == 1'b1)
        burst_write_active <= 1'b0;

    //The burst_write_active is asserted when a write burst transaction is initiated
    else if (start_single_burst_write)
        burst_write_active <= 1'b1;
    else if (M_AXI_BVALID && axi_bready)
        burst_write_active <= 0;
end

// Check for last write completion.

// This logic is to qualify the last write count with the final write
// response. This demonstrates how to confirm that a write has been
// committed.

always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || cpu_reset == 1'b1)
        writes_done <= 1'b0;

    //The writes_done should be associated with a bready response
    else if (M_AXI_BVALID && (write_index == C_BURST_LEN - 1) && axi_bready)
        writes_done <= 1'b1;
    else if (writes_done == 1'b1)
        writes_done <= 1'b0;
    else
        writes_done <= writes_done;
end

// burst_read_active signal is asserted when there is a burst write transaction
// is initiated by the assertion of start_single_burst_write. start_single_burst_read
// signal remains asserted until the burst read is accepted by the master
always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || cpu_reset == 1'b1)
        burst_read_active <= 1'b0;

    //The burst_write_active is asserted when a write burst transaction is initiated
    else if (start_single_burst_read)
        burst_read_active <= 1'b1;
    else if (M_AXI_RVALID && axi_rready && M_AXI_RLAST)
        burst_read_active <= 0;
end


// Check for last read completion.

// This logic is to qualify the last read count with the final read
// response. This demonstrates how to confirm that a read has been
// committed.

always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0 || cpu_reset == 1'b1)
        reads_done <= 1'b0;

    //The reads_done should be associated with a rready response
    else if (M_AXI_RVALID && axi_rready && (read_index == C_BURST_LEN - 1))
        reads_done <= 1'b1;
    else if (reads_done == 1'b1)
        reads_done <= 1'b0;
    else
        reads_done <= reads_done;
end

// Add user logic here
always @(posedge M_AXI_ACLK)
begin
    if (rnext)
        rBuffer[read_index] <= M_AXI_RDATA;
end
always @(posedge M_AXI_ACLK)
begin
    wBuffer[0] <= M_DCACHE_dataout[255: 224];
    wBuffer[1] <= M_DCACHE_dataout[223: 192];
    wBuffer[2] <= M_DCACHE_dataout[191: 160];
    wBuffer[3] <= M_DCACHE_dataout[159: 128];
    wBuffer[4] <= M_DCACHE_dataout[127: 96];
    wBuffer[5] <= M_DCACHE_dataout[ 95: 64];
    wBuffer[6] <= M_DCACHE_dataout[ 63: 32];
    wBuffer[7] <= M_DCACHE_dataout[ 31: 0];
end

always @(posedge M_AXI_ACLK)
begin
    if (M_AXI_ARESETN == 0)
        S <= IDLE;
    else
        S <= S_nxt;
end

always @( * )
begin
    case (S)
        IDLE:
            if (M_DCACHE_strobe)
                S_nxt = (M_DCACHE_rw) ? WRITE : READ;
            else
                S_nxt = IDLE;
        READ:
            if (reads_done)
                S_nxt = DONE;
            else
                S_nxt = READ;
        WRITE:
            if (writes_done)
                S_nxt = DONE;
            else
                S_nxt = WRITE;
        DONE:
            S_nxt = IDLE;
        default:
            S_nxt = IDLE;
    endcase
end

assign M_DCACHE_done = ( ( (S == READ) && reads_done) || ( (S == WRITE) && writes_done ) );
assign M_DCACHE_datain = (M_DCACHE_done) ? {rBuffer[0], rBuffer[1], rBuffer[2], rBuffer[3],
        rBuffer[4], rBuffer[5], rBuffer[6], rBuffer[7]} : {C_CACHE_LINE_SIZE{1'b0}};

// User logic ends

endmodule
