module aquila_soc_mock_smartconnect #
(
		// Width of ID for for write address, write data, read address and read data
	parameter integer C_S_AXI_ID_WIDTH  = 1,
	// Width of S_AXI data bus
	parameter integer C_S_AXI_DATA_WIDTH    = 32, 
	// Width of S_AXI address bus
	parameter integer C_S_AXI_ADDR_WIDTH    = 6,
	// Width of optional user defined signal in write address channel
	parameter integer C_S_AXI_AWUSER_WIDTH  = 0,
	// Width of optional user defined signal in read address channel
	parameter integer C_S_AXI_ARUSER_WIDTH  = 0,
	// Width of optional user defined signal in write data channel
	parameter integer C_S_AXI_WUSER_WIDTH   = 0,
	// Width of optional user defined signal in read data channel
	parameter integer C_S_AXI_RUSER_WIDTH   = 0,
	// Width of optional user defined signal in write response channel
	parameter integer C_S_AXI_BUSER_WIDTH   = 0 
)
(
	clk,
	rst_n,
	ICACHE_AXI_awid,
	ICACHE_AXI_awaddr,
	ICACHE_AXI_awlen,
	ICACHE_AXI_awsize,
	ICACHE_AXI_awburst,
	ICACHE_AXI_awlock,
	ICACHE_AXI_awcache,
	ICACHE_AXI_awprot,
	ICACHE_AXI_awqos,
	ICACHE_AXI_awuser,
	ICACHE_AXI_awvalid,
	ICACHE_AXI_awready,
	ICACHE_AXI_wdata,
	ICACHE_AXI_wstrb,
	ICACHE_AXI_wlast,
	ICACHE_AXI_wvalid,
	ICACHE_AXI_wready,
	ICACHE_AXI_bid,
	ICACHE_AXI_bresp,
	ICACHE_AXI_buser,
	ICACHE_AXI_bvalid,
	ICACHE_AXI_bready,
	ICACHE_AXI_arid,
	ICACHE_AXI_araddr,
	ICACHE_AXI_arlen,
	ICACHE_AXI_arsize,
	ICACHE_AXI_arburst,
	ICACHE_AXI_arlock,
	ICACHE_AXI_arcache,
	ICACHE_AXI_arprot,
	ICACHE_AXI_arqos,
	ICACHE_AXI_aruser,
	ICACHE_AXI_arvalid,
	ICACHE_AXI_arready,
	ICACHE_AXI_rid,
	ICACHE_AXI_rdata,
	ICACHE_AXI_rresp,
	ICACHE_AXI_rlast,
	ICACHE_AXI_rvalid,
	ICACHE_AXI_rready,
	DCACHE_AXI_awid,
	DCACHE_AXI_awaddr,
	DCACHE_AXI_awlen,
	DCACHE_AXI_awsize,
	DCACHE_AXI_awburst,
	DCACHE_AXI_awlock,
	DCACHE_AXI_awcache,
	DCACHE_AXI_awprot,
	DCACHE_AXI_awqos,
	DCACHE_AXI_awuser,
	DCACHE_AXI_awvalid,
	DCACHE_AXI_awready,
	DCACHE_AXI_wdata,
	DCACHE_AXI_wstrb,
	DCACHE_AXI_wlast,
	DCACHE_AXI_wvalid,
	DCACHE_AXI_wready,
	DCACHE_AXI_bid,
	DCACHE_AXI_bresp,
	DCACHE_AXI_buser,
	DCACHE_AXI_bvalid,
	DCACHE_AXI_bready,
	DCACHE_AXI_arid,
	DCACHE_AXI_araddr,
	DCACHE_AXI_arlen,
	DCACHE_AXI_arsize,
	DCACHE_AXI_arburst,
	DCACHE_AXI_arlock,
	DCACHE_AXI_arcache,
	DCACHE_AXI_arprot,
	DCACHE_AXI_arqos,
	DCACHE_AXI_aruser,
	DCACHE_AXI_arvalid,
	DCACHE_AXI_arready,
	DCACHE_AXI_rid,
	DCACHE_AXI_rdata,
	DCACHE_AXI_rresp,
	DCACHE_AXI_rlast,
	DCACHE_AXI_rvalid,
	DCACHE_AXI_rready
);

input rst_n;
input clk;

input wire [0 : 0] ICACHE_AXI_awid;
input wire [31 : 0] ICACHE_AXI_awaddr;
input wire [7 : 0] ICACHE_AXI_awlen;
input wire [2 : 0] ICACHE_AXI_awsize;
input wire [1 : 0] ICACHE_AXI_awburst;
input wire [0 : 0] ICACHE_AXI_awlock;
input wire [3 : 0] ICACHE_AXI_awcache;
input wire [2 : 0] ICACHE_AXI_awprot;
input wire [3 : 0] ICACHE_AXI_awqos;
input wire [0 : 0] ICACHE_AXI_awuser;
input wire ICACHE_AXI_awvalid;
output wire ICACHE_AXI_awready;
input wire [31 : 0] ICACHE_AXI_wdata;
input wire [3 : 0] ICACHE_AXI_wstrb;
input wire ICACHE_AXI_wlast;
input wire ICACHE_AXI_wvalid;
output wire ICACHE_AXI_wready;
output wire [0 : 0] ICACHE_AXI_bid;
output wire [1 : 0] ICACHE_AXI_bresp;
output wire [0 : 0] ICACHE_AXI_buser;
output wire ICACHE_AXI_bvalid;
input wire ICACHE_AXI_bready;
input wire [0 : 0] ICACHE_AXI_arid;
input wire [31 : 0] ICACHE_AXI_araddr;
input wire [7 : 0] ICACHE_AXI_arlen;
input wire [2 : 0] ICACHE_AXI_arsize;
input wire [1 : 0] ICACHE_AXI_arburst;
input wire [0 : 0] ICACHE_AXI_arlock;
input wire [3 : 0] ICACHE_AXI_arcache;
input wire [2 : 0] ICACHE_AXI_arprot;
input wire [3 : 0] ICACHE_AXI_arqos;
input wire [0 : 0] ICACHE_AXI_aruser;
input wire ICACHE_AXI_arvalid;
output wire ICACHE_AXI_arready;
output wire [0 : 0] ICACHE_AXI_rid;
output wire [31 : 0] ICACHE_AXI_rdata;
output wire [1 : 0] ICACHE_AXI_rresp;
output wire ICACHE_AXI_rlast;
output wire ICACHE_AXI_rvalid;
input wire ICACHE_AXI_rready;
input wire [0 : 0] DCACHE_AXI_awid;
input wire [31 : 0] DCACHE_AXI_awaddr;
input wire [7 : 0] DCACHE_AXI_awlen;
input wire [2 : 0] DCACHE_AXI_awsize;
input wire [1 : 0] DCACHE_AXI_awburst;
input wire [0 : 0] DCACHE_AXI_awlock;
input wire [3 : 0] DCACHE_AXI_awcache;
input wire [2 : 0] DCACHE_AXI_awprot;
input wire [3 : 0] DCACHE_AXI_awqos;
input wire [0 : 0] DCACHE_AXI_awuser;
input wire DCACHE_AXI_awvalid;
output wire DCACHE_AXI_awready;
input wire [31 : 0] DCACHE_AXI_wdata;
input wire [3 : 0] DCACHE_AXI_wstrb;
input wire DCACHE_AXI_wlast;
input wire DCACHE_AXI_wvalid;
output wire DCACHE_AXI_wready;
output wire [0 : 0] DCACHE_AXI_bid;
output wire [1 : 0] DCACHE_AXI_bresp;
output wire [0 : 0] DCACHE_AXI_buser;
output wire DCACHE_AXI_bvalid;
input wire DCACHE_AXI_bready;
input wire [0 : 0] DCACHE_AXI_arid;
input wire [31 : 0] DCACHE_AXI_araddr;
input wire [7 : 0] DCACHE_AXI_arlen;
input wire [2 : 0] DCACHE_AXI_arsize;
input wire [1 : 0] DCACHE_AXI_arburst;
input wire [0 : 0] DCACHE_AXI_arlock;
input wire [3 : 0] DCACHE_AXI_arcache;
input wire [2 : 0] DCACHE_AXI_arprot;
input wire [3 : 0] DCACHE_AXI_arqos;
input wire [0 : 0] DCACHE_AXI_aruser;
input wire DCACHE_AXI_arvalid;
output wire DCACHE_AXI_arready;
output wire [0 : 0] DCACHE_AXI_rid;
output wire [31 : 0] DCACHE_AXI_rdata;
output wire [1 : 0] DCACHE_AXI_rresp;
output wire DCACHE_AXI_rlast;
output wire DCACHE_AXI_rvalid;
input wire DCACHE_AXI_rready;

MOCK_DCACHE_AXI_SLAVE mock_dcache_axi_slave(
		.S_AXI_ACLK(clk),
    .S_AXI_ARESETN(rst_n),
    .S_AXI_AWID(DCACHE_AXI_awid),
    .S_AXI_AWADDR(DCACHE_AXI_awaddr),
    .S_AXI_AWLEN(DCACHE_AXI_awlen),
    .S_AXI_AWSIZE(DCACHE_AXI_awsize),
    .S_AXI_AWBURST(DCACHE_AXI_awburst),
    .S_AXI_AWLOCK(DCACHE_AXI_awlock),
    .S_AXI_AWCACHE(DCACHE_AXI_awcache),
    .S_AXI_AWPROT(DCACHE_AXI_awprot),
    .S_AXI_AWQOS(DCACHE_AXI_awqos),
    .S_AXI_AWUSER(DCACHE_AXI_awuser),
    .S_AXI_AWVALID(DCACHE_AXI_awvalid),
    .S_AXI_AWREADY(DCACHE_AXI_awready),
    .S_AXI_WDATA(DCACHE_AXI_wdata),
    .S_AXI_WSTRB(DCACHE_AXI_wstrb),
    .S_AXI_WLAST(DCACHE_AXI_wlast),
    .S_AXI_WVALID(DCACHE_AXI_wvalid),
    .S_AXI_WREADY(DCACHE_AXI_wready),
    .S_AXI_BID(DCACHE_AXI_bid),
    .S_AXI_BRESP(DCACHE_AXI_bresp),
    .S_AXI_BUSER(DCACHE_AXI_buser),
    .S_AXI_BVALID(DCACHE_AXI_bvalid),
    .S_AXI_BREADY(DCACHE_AXI_bready),
    .S_AXI_ARID(DCACHE_AXI_arid),
    .S_AXI_ARADDR(DCACHE_AXI_araddr),
    .S_AXI_ARLEN(DCACHE_AXI_arlen),
    .S_AXI_ARSIZE(DCACHE_AXI_arsize),
    .S_AXI_ARBURST(DCACHE_AXI_arburst),
    .S_AXI_ARLOCK(DCACHE_AXI_arlock),
    .S_AXI_ARCACHE(DCACHE_AXI_arcache),
    .S_AXI_ARPROT(DCACHE_AXI_arprot),
    .S_AXI_ARQOS(DCACHE_AXI_arqos),
    .S_AXI_ARUSER(DCACHE_AXI_aruser),
    .S_AXI_ARVALID(DCACHE_AXI_arvalid),
    .S_AXI_ARREADY(DCACHE_AXI_arready),
    .S_AXI_RID(DCACHE_AXI_rid),
    .S_AXI_RDATA(DCACHE_AXI_rdata),
    .S_AXI_RRESP(DCACHE_AXI_rresp),
    .S_AXI_RLAST(DCACHE_AXI_rlast),
    .S_AXI_RVALID(DCACHE_AXI_rvalid),
    .S_AXI_RREADY(DCACHE_AXI_rready)
);

MOCK_ICACHE_AXI_SLAVE mock_icache_axi_slave(
		.S_AXI_ACLK(clk),
    .S_AXI_ARESETN(rst_n),
    .S_AXI_AWID(ICACHE_AXI_awid),
    .S_AXI_AWADDR(ICACHE_AXI_awaddr),
    .S_AXI_AWLEN(ICACHE_AXI_awlen),
    .S_AXI_AWSIZE(ICACHE_AXI_awsize),
    .S_AXI_AWBURST(ICACHE_AXI_awburst),
    .S_AXI_AWLOCK(ICACHE_AXI_awlock),
    .S_AXI_AWCACHE(ICACHE_AXI_awcache),
    .S_AXI_AWPROT(ICACHE_AXI_awprot),
    .S_AXI_AWQOS(ICACHE_AXI_awqos),
    .S_AXI_AWUSER(ICACHE_AXI_awuser),
    .S_AXI_AWVALID(ICACHE_AXI_awvalid),
    .S_AXI_AWREADY(ICACHE_AXI_awready),
    .S_AXI_WDATA(ICACHE_AXI_wdata),
    .S_AXI_WSTRB(ICACHE_AXI_wstrb),
    .S_AXI_WLAST(ICACHE_AXI_wlast),
    .S_AXI_WVALID(ICACHE_AXI_wvalid),
    .S_AXI_WREADY(ICACHE_AXI_wready),
    .S_AXI_BID(ICACHE_AXI_bid),
    .S_AXI_BRESP(ICACHE_AXI_bresp),
    .S_AXI_BUSER(ICACHE_AXI_buser),
    .S_AXI_BVALID(ICACHE_AXI_bvalid),
    .S_AXI_BREADY(ICACHE_AXI_bready),
    .S_AXI_ARID(ICACHE_AXI_arid),
    .S_AXI_ARADDR(ICACHE_AXI_araddr),
    .S_AXI_ARLEN(ICACHE_AXI_arlen),
    .S_AXI_ARSIZE(ICACHE_AXI_arsize),
    .S_AXI_ARBURST(ICACHE_AXI_arburst),
    .S_AXI_ARLOCK(ICACHE_AXI_arlock),
    .S_AXI_ARCACHE(ICACHE_AXI_arcache),
    .S_AXI_ARPROT(ICACHE_AXI_arprot),
    .S_AXI_ARQOS(ICACHE_AXI_arqos),
    .S_AXI_ARUSER(ICACHE_AXI_aruser),
    .S_AXI_ARVALID(ICACHE_AXI_arvalid),
    .S_AXI_ARREADY(ICACHE_AXI_arready),
    .S_AXI_RID(ICACHE_AXI_rid),
    .S_AXI_RDATA(ICACHE_AXI_rdata),
    .S_AXI_RRESP(ICACHE_AXI_rresp),
    .S_AXI_RLAST(ICACHE_AXI_rlast),
    .S_AXI_RVALID(ICACHE_AXI_rvalid),
    .S_AXI_RREADY(ICACHE_AXI_rready)
);
endmodule
