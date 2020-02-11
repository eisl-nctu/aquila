`timescale 1 ps / 1 ps

module aquila_soc
   (
    rst_n,
	boot_ready,
	clk
    //rs232_uart_rxd,
    //rs232_uart_txd,
    //sys_diff_clock_clk_n,
    //sys_diff_clock_clk_p
);
//input rs232_uart_rxd;
//output rs232_uart_txd;
//input sys_diff_clock_clk_n;
//input sys_diff_clock_clk_p;
input rst_n;
input clk;
input boot_ready;

wire [31:0]aquila_0_M_DCACHE_PORT_ARADDR;
wire [1:0]aquila_0_M_DCACHE_PORT_ARBURST;
wire [3:0]aquila_0_M_DCACHE_PORT_ARCACHE;
wire [0:0]aquila_0_M_DCACHE_PORT_ARID;
wire [7:0]aquila_0_M_DCACHE_PORT_ARLEN;
wire aquila_0_M_DCACHE_PORT_ARLOCK;
wire [2:0]aquila_0_M_DCACHE_PORT_ARPROT;
wire [3:0]aquila_0_M_DCACHE_PORT_ARQOS;
wire aquila_0_M_DCACHE_PORT_ARREADY;
wire [2:0]aquila_0_M_DCACHE_PORT_ARSIZE;
wire [0:0]aquila_0_M_DCACHE_PORT_ARUSER;
wire aquila_0_M_DCACHE_PORT_ARVALID;
wire [31:0]aquila_0_M_DCACHE_PORT_AWADDR;
wire [1:0]aquila_0_M_DCACHE_PORT_AWBURST;
wire [3:0]aquila_0_M_DCACHE_PORT_AWCACHE;
wire [0:0]aquila_0_M_DCACHE_PORT_AWID;
wire [7:0]aquila_0_M_DCACHE_PORT_AWLEN;
wire aquila_0_M_DCACHE_PORT_AWLOCK;
wire [2:0]aquila_0_M_DCACHE_PORT_AWPROT;
wire [3:0]aquila_0_M_DCACHE_PORT_AWQOS;
wire aquila_0_M_DCACHE_PORT_AWREADY;
wire [2:0]aquila_0_M_DCACHE_PORT_AWSIZE;
wire [0:0]aquila_0_M_DCACHE_PORT_AWUSER;
wire aquila_0_M_DCACHE_PORT_AWVALID;
wire [0:0]aquila_0_M_DCACHE_PORT_BID;
wire aquila_0_M_DCACHE_PORT_BREADY;
wire [1:0]aquila_0_M_DCACHE_PORT_BRESP;
wire [0:0]aquila_0_M_DCACHE_PORT_BUSER;
wire aquila_0_M_DCACHE_PORT_BVALID;
wire [31:0]aquila_0_M_DCACHE_PORT_RDATA;
wire [0:0]aquila_0_M_DCACHE_PORT_RID;
wire aquila_0_M_DCACHE_PORT_RLAST;
wire aquila_0_M_DCACHE_PORT_RREADY;
wire [1:0]aquila_0_M_DCACHE_PORT_RRESP;
wire aquila_0_M_DCACHE_PORT_RVALID;
wire [31:0]aquila_0_M_DCACHE_PORT_WDATA;
wire aquila_0_M_DCACHE_PORT_WLAST;
wire aquila_0_M_DCACHE_PORT_WREADY;
wire [3:0]aquila_0_M_DCACHE_PORT_WSTRB;
wire aquila_0_M_DCACHE_PORT_WVALID;
wire [31:0]aquila_0_M_DEVICE_PORT_ARADDR;
wire aquila_0_M_DEVICE_PORT_ARREADY;
wire aquila_0_M_DEVICE_PORT_ARVALID;
wire [31:0]aquila_0_M_DEVICE_PORT_AWADDR;
wire aquila_0_M_DEVICE_PORT_AWREADY;
wire aquila_0_M_DEVICE_PORT_AWVALID;
wire aquila_0_M_DEVICE_PORT_BREADY;
wire [1:0]aquila_0_M_DEVICE_PORT_BRESP;
wire aquila_0_M_DEVICE_PORT_BVALID;
wire [31:0]aquila_0_M_DEVICE_PORT_RDATA;
wire aquila_0_M_DEVICE_PORT_RREADY;
wire [1:0]aquila_0_M_DEVICE_PORT_RRESP;
wire aquila_0_M_DEVICE_PORT_RVALID;
wire [31:0]aquila_0_M_DEVICE_PORT_WDATA;
wire aquila_0_M_DEVICE_PORT_WREADY;
wire [3:0]aquila_0_M_DEVICE_PORT_WSTRB;
wire aquila_0_M_DEVICE_PORT_WVALID;
wire [31:0]aquila_0_M_ICACHE_PORT_ARADDR;
wire [1:0]aquila_0_M_ICACHE_PORT_ARBURST;
wire [3:0]aquila_0_M_ICACHE_PORT_ARCACHE;
wire [0:0]aquila_0_M_ICACHE_PORT_ARID;
wire [7:0]aquila_0_M_ICACHE_PORT_ARLEN;
wire aquila_0_M_ICACHE_PORT_ARLOCK;
wire [2:0]aquila_0_M_ICACHE_PORT_ARPROT;
wire [3:0]aquila_0_M_ICACHE_PORT_ARQOS;
wire aquila_0_M_ICACHE_PORT_ARREADY;
wire [2:0]aquila_0_M_ICACHE_PORT_ARSIZE;
wire [0:0]aquila_0_M_ICACHE_PORT_ARUSER;
wire aquila_0_M_ICACHE_PORT_ARVALID;
wire [31:0]aquila_0_M_ICACHE_PORT_AWADDR;
wire [1:0]aquila_0_M_ICACHE_PORT_AWBURST;
wire [3:0]aquila_0_M_ICACHE_PORT_AWCACHE;
wire [0:0]aquila_0_M_ICACHE_PORT_AWID;
wire [7:0]aquila_0_M_ICACHE_PORT_AWLEN;
wire aquila_0_M_ICACHE_PORT_AWLOCK;
wire [2:0]aquila_0_M_ICACHE_PORT_AWPROT;
wire [3:0]aquila_0_M_ICACHE_PORT_AWQOS;
wire aquila_0_M_ICACHE_PORT_AWREADY;
wire [2:0]aquila_0_M_ICACHE_PORT_AWSIZE;
wire [0:0]aquila_0_M_ICACHE_PORT_AWUSER;
wire aquila_0_M_ICACHE_PORT_AWVALID;
wire [0:0]aquila_0_M_ICACHE_PORT_BID;
wire aquila_0_M_ICACHE_PORT_BREADY;
wire [1:0]aquila_0_M_ICACHE_PORT_BRESP;
wire [0:0]aquila_0_M_ICACHE_PORT_BUSER;
wire aquila_0_M_ICACHE_PORT_BVALID;
wire [31:0]aquila_0_M_ICACHE_PORT_RDATA;
wire [0:0]aquila_0_M_ICACHE_PORT_RID;
wire aquila_0_M_ICACHE_PORT_RLAST;
wire aquila_0_M_ICACHE_PORT_RREADY;
wire [1:0]aquila_0_M_ICACHE_PORT_RRESP;
wire aquila_0_M_ICACHE_PORT_RVALID;
wire [31:0]aquila_0_M_ICACHE_PORT_WDATA;
wire aquila_0_M_ICACHE_PORT_WLAST;
wire aquila_0_M_ICACHE_PORT_WREADY;
wire [3:0]aquila_0_M_ICACHE_PORT_WSTRB;
wire aquila_0_M_ICACHE_PORT_WVALID;
wire axi_uartlite_0_UART_RxD;
wire axi_uartlite_0_UART_TxD;
wire [31:0]bdm_1_M_BOOT_PORT_ARADDR;
wire [2:0]bdm_1_M_BOOT_PORT_ARPROT;
wire bdm_1_M_BOOT_PORT_ARREADY;
wire bdm_1_M_BOOT_PORT_ARVALID;
wire [31:0]bdm_1_M_BOOT_PORT_AWADDR;
wire [2:0]bdm_1_M_BOOT_PORT_AWPROT;
wire bdm_1_M_BOOT_PORT_AWREADY;
wire bdm_1_M_BOOT_PORT_AWVALID;
wire bdm_1_M_BOOT_PORT_BREADY;
wire [1:0]bdm_1_M_BOOT_PORT_BRESP;
wire bdm_1_M_BOOT_PORT_BVALID;
wire [31:0]bdm_1_M_BOOT_PORT_RDATA;
wire bdm_1_M_BOOT_PORT_RREADY;
wire [1:0]bdm_1_M_BOOT_PORT_RRESP;
wire bdm_1_M_BOOT_PORT_RVALID;
wire [31:0]bdm_1_M_BOOT_PORT_WDATA;
wire bdm_1_M_BOOT_PORT_WREADY;
wire [3:0]bdm_1_M_BOOT_PORT_WSTRB;
wire bdm_1_M_BOOT_PORT_WVALID;

//assign axi_uartlite_0_UART_RxD = rs232_uart_rxd;
//assign rs232_uart_txd = axi_uartlite_0_UART_TxD;
//assign sys_diff_clock_1_CLK_N = sys_diff_clock_clk_n;
//assign sys_diff_clock_1_CLK_P = sys_diff_clock_clk_p;
 aquila #(
    .C_S_CONFIG_PORT_DATA_WIDTH(32),  // Width of S_AXI data bus
    .C_S_CONFIG_PORT_ADDR_WIDTH(5),  // Width of S_AXI address bus
    .C_M_DCACHE_PORT_ID_WIDTH(1),  // Thread ID Width
    .C_M_DCACHE_PORT_ADDR_WIDTH(32),  // Width of Address Bus
    .C_M_DCACHE_PORT_DATA_WIDTH(32),  // Width of Data Bus
    .C_M_DCACHE_PORT_AWUSER_WIDTH(1),  // Width of User Write Address Bus
    .C_M_DCACHE_PORT_ARUSER_WIDTH(1),  // Width of User Read Address Bus
    .C_M_DCACHE_PORT_WUSER_WIDTH(0),  // Width of User Write Data Bus
    .C_M_DCACHE_PORT_RUSER_WIDTH(0),  // Width of User Read Data Bus
    .C_M_DCACHE_PORT_BUSER_WIDTH(1),  // Width of User Response Bus
    .C_M_DEVICE_PORT_ADDR_WIDTH(32),  // Width of M_AXI address bus. 
    // The master generates the read and write addresses of width specified as C_M_AXI_ADDR_WIDTH.
    .C_M_DEVICE_PORT_DATA_WIDTH(32),  // Width of M_AXI data bus. 
    // The master issues write data and accept read data where the width of the data bus is C_M_AXI_DATA_WIDTH
    .C_M_ICACHE_PORT_ID_WIDTH(1),  // Thread ID Width
    .C_M_ICACHE_PORT_ADDR_WIDTH(32),  // Width of Address Bus
    .C_M_ICACHE_PORT_DATA_WIDTH(32),  // Width of Data Bus
    .C_M_ICACHE_PORT_AWUSER_WIDTH(1),  // Width of User Write Address Bus
    .C_M_ICACHE_PORT_ARUSER_WIDTH(1),  // Width of User Read Address Bus
    .C_M_ICACHE_PORT_WUSER_WIDTH(0),  // Width of User Write Data Bus
    .C_M_ICACHE_PORT_RUSER_WIDTH(0),  // Width of User Read Data Bus
    .C_M_ICACHE_PORT_BUSER_WIDTH(1)  // Width of User Response Bus
  ) inst (.cache_aclk(clk),
        .cache_aresetn(rst_n),
        .cfg_dev_aclk(clk),
        .cfg_dev_aresetn(rst_n),
        .m_dcache_port_araddr(aquila_0_M_DCACHE_PORT_ARADDR),
        .m_dcache_port_arburst(aquila_0_M_DCACHE_PORT_ARBURST),
        .m_dcache_port_arcache(aquila_0_M_DCACHE_PORT_ARCACHE),
        .m_dcache_port_arid(aquila_0_M_DCACHE_PORT_ARID),
        .m_dcache_port_arlen(aquila_0_M_DCACHE_PORT_ARLEN),
        .m_dcache_port_arlock(aquila_0_M_DCACHE_PORT_ARLOCK),
        .m_dcache_port_arprot(aquila_0_M_DCACHE_PORT_ARPROT),
        .m_dcache_port_arqos(aquila_0_M_DCACHE_PORT_ARQOS),
        .m_dcache_port_arready(aquila_0_M_DCACHE_PORT_ARREADY),
        .m_dcache_port_arsize(aquila_0_M_DCACHE_PORT_ARSIZE),
        .m_dcache_port_aruser(aquila_0_M_DCACHE_PORT_ARUSER),
        .m_dcache_port_arvalid(aquila_0_M_DCACHE_PORT_ARVALID),
        .m_dcache_port_awaddr(aquila_0_M_DCACHE_PORT_AWADDR),
        .m_dcache_port_awburst(aquila_0_M_DCACHE_PORT_AWBURST),
        .m_dcache_port_awcache(aquila_0_M_DCACHE_PORT_AWCACHE),
        .m_dcache_port_awid(aquila_0_M_DCACHE_PORT_AWID),
        .m_dcache_port_awlen(aquila_0_M_DCACHE_PORT_AWLEN),
        .m_dcache_port_awlock(aquila_0_M_DCACHE_PORT_AWLOCK),
        .m_dcache_port_awprot(aquila_0_M_DCACHE_PORT_AWPROT),
        .m_dcache_port_awqos(aquila_0_M_DCACHE_PORT_AWQOS),
        .m_dcache_port_awready(aquila_0_M_DCACHE_PORT_AWREADY),
        .m_dcache_port_awsize(aquila_0_M_DCACHE_PORT_AWSIZE),
        .m_dcache_port_awuser(aquila_0_M_DCACHE_PORT_AWUSER),
        .m_dcache_port_awvalid(aquila_0_M_DCACHE_PORT_AWVALID),
        .m_dcache_port_bid(aquila_0_M_DCACHE_PORT_BID),
        .m_dcache_port_bready(aquila_0_M_DCACHE_PORT_BREADY),
        .m_dcache_port_bresp(aquila_0_M_DCACHE_PORT_BRESP),
        .m_dcache_port_buser(aquila_0_M_DCACHE_PORT_BUSER),
        .m_dcache_port_bvalid(aquila_0_M_DCACHE_PORT_BVALID),
        .m_dcache_port_rdata(aquila_0_M_DCACHE_PORT_RDATA),
        .m_dcache_port_rid(aquila_0_M_DCACHE_PORT_RID),
        .m_dcache_port_rlast(aquila_0_M_DCACHE_PORT_RLAST),
        .m_dcache_port_rready(aquila_0_M_DCACHE_PORT_RREADY),
        .m_dcache_port_rresp(aquila_0_M_DCACHE_PORT_RRESP),
        .m_dcache_port_rvalid(aquila_0_M_DCACHE_PORT_RVALID),
        .m_dcache_port_wdata(aquila_0_M_DCACHE_PORT_WDATA),
        .m_dcache_port_wlast(aquila_0_M_DCACHE_PORT_WLAST),
        .m_dcache_port_wready(aquila_0_M_DCACHE_PORT_WREADY),
        .m_dcache_port_wstrb(aquila_0_M_DCACHE_PORT_WSTRB),
        .m_dcache_port_wvalid(aquila_0_M_DCACHE_PORT_WVALID),
        .m_device_port_araddr(aquila_0_M_DEVICE_PORT_ARADDR),
        .m_device_port_arready(aquila_0_M_DEVICE_PORT_ARREADY),
        .m_device_port_arvalid(aquila_0_M_DEVICE_PORT_ARVALID),
        .m_device_port_awaddr(aquila_0_M_DEVICE_PORT_AWADDR),
        .m_device_port_awready(aquila_0_M_DEVICE_PORT_AWREADY),
        .m_device_port_awvalid(aquila_0_M_DEVICE_PORT_AWVALID),
        .m_device_port_bready(aquila_0_M_DEVICE_PORT_BREADY),
        .m_device_port_bresp(aquila_0_M_DEVICE_PORT_BRESP),
        .m_device_port_bvalid(aquila_0_M_DEVICE_PORT_BVALID),
        .m_device_port_rdata(aquila_0_M_DEVICE_PORT_RDATA),
        .m_device_port_rready(aquila_0_M_DEVICE_PORT_RREADY),
        .m_device_port_rresp(aquila_0_M_DEVICE_PORT_RRESP),
        .m_device_port_rvalid(aquila_0_M_DEVICE_PORT_RVALID),
        .m_device_port_wdata(aquila_0_M_DEVICE_PORT_WDATA),
        .m_device_port_wready(aquila_0_M_DEVICE_PORT_WREADY),
        .m_device_port_wstrb(aquila_0_M_DEVICE_PORT_WSTRB),
        .m_device_port_wvalid(aquila_0_M_DEVICE_PORT_WVALID),
        .m_icache_port_araddr(aquila_0_M_ICACHE_PORT_ARADDR),
        .m_icache_port_arburst(aquila_0_M_ICACHE_PORT_ARBURST),
        .m_icache_port_arcache(aquila_0_M_ICACHE_PORT_ARCACHE),
        .m_icache_port_arid(aquila_0_M_ICACHE_PORT_ARID),
        .m_icache_port_arlen(aquila_0_M_ICACHE_PORT_ARLEN),
        .m_icache_port_arlock(aquila_0_M_ICACHE_PORT_ARLOCK),
        .m_icache_port_arprot(aquila_0_M_ICACHE_PORT_ARPROT),
        .m_icache_port_arqos(aquila_0_M_ICACHE_PORT_ARQOS),
        .m_icache_port_arready(aquila_0_M_ICACHE_PORT_ARREADY),
        .m_icache_port_arsize(aquila_0_M_ICACHE_PORT_ARSIZE),
        .m_icache_port_aruser(aquila_0_M_ICACHE_PORT_ARUSER),
        .m_icache_port_arvalid(aquila_0_M_ICACHE_PORT_ARVALID),
        .m_icache_port_awaddr(aquila_0_M_ICACHE_PORT_AWADDR),
        .m_icache_port_awburst(aquila_0_M_ICACHE_PORT_AWBURST),
        .m_icache_port_awcache(aquila_0_M_ICACHE_PORT_AWCACHE),
        .m_icache_port_awid(aquila_0_M_ICACHE_PORT_AWID),
        .m_icache_port_awlen(aquila_0_M_ICACHE_PORT_AWLEN),
        .m_icache_port_awlock(aquila_0_M_ICACHE_PORT_AWLOCK),
        .m_icache_port_awprot(aquila_0_M_ICACHE_PORT_AWPROT),
        .m_icache_port_awqos(aquila_0_M_ICACHE_PORT_AWQOS),
        .m_icache_port_awready(aquila_0_M_ICACHE_PORT_AWREADY),
        .m_icache_port_awsize(aquila_0_M_ICACHE_PORT_AWSIZE),
        .m_icache_port_awuser(aquila_0_M_ICACHE_PORT_AWUSER),
        .m_icache_port_awvalid(aquila_0_M_ICACHE_PORT_AWVALID),
        .m_icache_port_bid(aquila_0_M_ICACHE_PORT_BID),
        .m_icache_port_bready(aquila_0_M_ICACHE_PORT_BREADY),
        .m_icache_port_bresp(aquila_0_M_ICACHE_PORT_BRESP),
        .m_icache_port_buser(aquila_0_M_ICACHE_PORT_BUSER),
        .m_icache_port_bvalid(aquila_0_M_ICACHE_PORT_BVALID),
        .m_icache_port_rdata(aquila_0_M_ICACHE_PORT_RDATA),
        .m_icache_port_rid(aquila_0_M_ICACHE_PORT_RID),
        .m_icache_port_rlast(aquila_0_M_ICACHE_PORT_RLAST),
        .m_icache_port_rready(aquila_0_M_ICACHE_PORT_RREADY),
        .m_icache_port_rresp(aquila_0_M_ICACHE_PORT_RRESP),
        .m_icache_port_rvalid(aquila_0_M_ICACHE_PORT_RVALID),
        .m_icache_port_wdata(aquila_0_M_ICACHE_PORT_WDATA),
        .m_icache_port_wlast(aquila_0_M_ICACHE_PORT_WLAST),
        .m_icache_port_wready(aquila_0_M_ICACHE_PORT_WREADY),
        .m_icache_port_wstrb(aquila_0_M_ICACHE_PORT_WSTRB),
        .m_icache_port_wvalid(aquila_0_M_ICACHE_PORT_WVALID),
        .s_config_port_araddr(bdm_1_M_BOOT_PORT_ARADDR[4:0]),
        .s_config_port_arprot(bdm_1_M_BOOT_PORT_ARPROT),
        .s_config_port_arready(bdm_1_M_BOOT_PORT_ARREADY),
        .s_config_port_arvalid(bdm_1_M_BOOT_PORT_ARVALID),
        .s_config_port_awaddr(bdm_1_M_BOOT_PORT_AWADDR[4:0]),
        .s_config_port_awprot(bdm_1_M_BOOT_PORT_AWPROT),
        .s_config_port_awready(bdm_1_M_BOOT_PORT_AWREADY),
        .s_config_port_awvalid(bdm_1_M_BOOT_PORT_AWVALID),
        .s_config_port_bready(bdm_1_M_BOOT_PORT_BREADY),
        .s_config_port_bresp(bdm_1_M_BOOT_PORT_BRESP),
        .s_config_port_bvalid(bdm_1_M_BOOT_PORT_BVALID),
        .s_config_port_rdata(bdm_1_M_BOOT_PORT_RDATA),
        .s_config_port_rready(bdm_1_M_BOOT_PORT_RREADY),
        .s_config_port_rresp(bdm_1_M_BOOT_PORT_RRESP),
        .s_config_port_rvalid(bdm_1_M_BOOT_PORT_RVALID),
        .s_config_port_wdata(bdm_1_M_BOOT_PORT_WDATA),
        .s_config_port_wready(bdm_1_M_BOOT_PORT_WREADY),
        .s_config_port_wstrb(bdm_1_M_BOOT_PORT_WSTRB),
        .s_config_port_wvalid(bdm_1_M_BOOT_PORT_WVALID));
  aquila_mock_bdm #(
	.C_M_BOOT_PORT_ADDR_WIDTH(32),  // Width of M_AXI address bus. 
    // The master generates the read and write addresses of width specified as C_M_AXI_ADDR_WIDTH.
    .C_M_BOOT_PORT_DATA_WIDTH(32),  // Width of M_AXI data bus. 
    // The master issues write data and accept read data where the width of the data bus is C_M_AXI_DATA_WIDTH
    .C_BOOT_CODE_ADDR('HB0000000)
	) bdm_0 (
		.boot_ready(boot_ready),
		.boot_aclk(clk),
        .boot_aresetn(rst_n),
        .m_boot_port_araddr(bdm_1_M_BOOT_PORT_ARADDR),
        .m_boot_port_arprot(bdm_1_M_BOOT_PORT_ARPROT),
        .m_boot_port_arready(bdm_1_M_BOOT_PORT_ARREADY),
        .m_boot_port_arvalid(bdm_1_M_BOOT_PORT_ARVALID),
        .m_boot_port_awaddr(bdm_1_M_BOOT_PORT_AWADDR),
        .m_boot_port_awprot(bdm_1_M_BOOT_PORT_AWPROT),
        .m_boot_port_awready(bdm_1_M_BOOT_PORT_AWREADY),
        .m_boot_port_awvalid(bdm_1_M_BOOT_PORT_AWVALID),
        .m_boot_port_bready(bdm_1_M_BOOT_PORT_BREADY),
        .m_boot_port_bresp(bdm_1_M_BOOT_PORT_BRESP),
        .m_boot_port_bvalid(bdm_1_M_BOOT_PORT_BVALID),
        .m_boot_port_rdata(bdm_1_M_BOOT_PORT_RDATA),
        .m_boot_port_rready(bdm_1_M_BOOT_PORT_RREADY),
        .m_boot_port_rresp(bdm_1_M_BOOT_PORT_RRESP),
        .m_boot_port_rvalid(bdm_1_M_BOOT_PORT_RVALID),
        .m_boot_port_wdata(bdm_1_M_BOOT_PORT_WDATA),
        .m_boot_port_wready(bdm_1_M_BOOT_PORT_WREADY),
        .m_boot_port_wstrb(bdm_1_M_BOOT_PORT_WSTRB),
        .m_boot_port_wvalid(bdm_1_M_BOOT_PORT_WVALID));
aquila_soc_mock_smartconnect axi_smc
       (
        .ICACHE_AXI_araddr(aquila_0_M_ICACHE_PORT_ARADDR),
        .ICACHE_AXI_arburst(aquila_0_M_ICACHE_PORT_ARBURST),
        .ICACHE_AXI_arcache(aquila_0_M_ICACHE_PORT_ARCACHE),
        .ICACHE_AXI_arid(aquila_0_M_ICACHE_PORT_ARID),
        .ICACHE_AXI_arlen(aquila_0_M_ICACHE_PORT_ARLEN),
        .ICACHE_AXI_arlock(aquila_0_M_ICACHE_PORT_ARLOCK),
        .ICACHE_AXI_arprot(aquila_0_M_ICACHE_PORT_ARPROT),
        .ICACHE_AXI_arqos(aquila_0_M_ICACHE_PORT_ARQOS),
        .ICACHE_AXI_arready(aquila_0_M_ICACHE_PORT_ARREADY),
        .ICACHE_AXI_arsize(aquila_0_M_ICACHE_PORT_ARSIZE),
        .ICACHE_AXI_aruser(aquila_0_M_ICACHE_PORT_ARUSER),
        .ICACHE_AXI_arvalid(aquila_0_M_ICACHE_PORT_ARVALID),
        .ICACHE_AXI_awaddr(aquila_0_M_ICACHE_PORT_AWADDR),
        .ICACHE_AXI_awburst(aquila_0_M_ICACHE_PORT_AWBURST),
        .ICACHE_AXI_awcache(aquila_0_M_ICACHE_PORT_AWCACHE),
        .ICACHE_AXI_awid(aquila_0_M_ICACHE_PORT_AWID),
        .ICACHE_AXI_awlen(aquila_0_M_ICACHE_PORT_AWLEN),
        .ICACHE_AXI_awlock(aquila_0_M_ICACHE_PORT_AWLOCK),
        .ICACHE_AXI_awprot(aquila_0_M_ICACHE_PORT_AWPROT),
        .ICACHE_AXI_awqos(aquila_0_M_ICACHE_PORT_AWQOS),
        .ICACHE_AXI_awready(aquila_0_M_ICACHE_PORT_AWREADY),
        .ICACHE_AXI_awsize(aquila_0_M_ICACHE_PORT_AWSIZE),
        .ICACHE_AXI_awuser(aquila_0_M_ICACHE_PORT_AWUSER),
        .ICACHE_AXI_awvalid(aquila_0_M_ICACHE_PORT_AWVALID),
        .ICACHE_AXI_bid(aquila_0_M_ICACHE_PORT_BID),
        .ICACHE_AXI_bready(aquila_0_M_ICACHE_PORT_BREADY),
        .ICACHE_AXI_bresp(aquila_0_M_ICACHE_PORT_BRESP),
        .ICACHE_AXI_buser(aquila_0_M_ICACHE_PORT_BUSER),
        .ICACHE_AXI_bvalid(aquila_0_M_ICACHE_PORT_BVALID),
        .ICACHE_AXI_rdata(aquila_0_M_ICACHE_PORT_RDATA),
        .ICACHE_AXI_rid(aquila_0_M_ICACHE_PORT_RID),
        .ICACHE_AXI_rlast(aquila_0_M_ICACHE_PORT_RLAST),
        .ICACHE_AXI_rready(aquila_0_M_ICACHE_PORT_RREADY),
        .ICACHE_AXI_rresp(aquila_0_M_ICACHE_PORT_RRESP),
        .ICACHE_AXI_rvalid(aquila_0_M_ICACHE_PORT_RVALID),
        .ICACHE_AXI_wdata(aquila_0_M_ICACHE_PORT_WDATA),
        .ICACHE_AXI_wlast(aquila_0_M_ICACHE_PORT_WLAST),
        .ICACHE_AXI_wready(aquila_0_M_ICACHE_PORT_WREADY),
        .ICACHE_AXI_wstrb(aquila_0_M_ICACHE_PORT_WSTRB),
        .ICACHE_AXI_wvalid(aquila_0_M_ICACHE_PORT_WVALID),
        .DCACHE_AXI_araddr(aquila_0_M_DCACHE_PORT_ARADDR),
        .DCACHE_AXI_arburst(aquila_0_M_DCACHE_PORT_ARBURST),
        .DCACHE_AXI_arcache(aquila_0_M_DCACHE_PORT_ARCACHE),
        .DCACHE_AXI_arid(aquila_0_M_DCACHE_PORT_ARID),
        .DCACHE_AXI_arlen(aquila_0_M_DCACHE_PORT_ARLEN),
        .DCACHE_AXI_arlock(aquila_0_M_DCACHE_PORT_ARLOCK),
        .DCACHE_AXI_arprot(aquila_0_M_DCACHE_PORT_ARPROT),
        .DCACHE_AXI_arqos(aquila_0_M_DCACHE_PORT_ARQOS),
        .DCACHE_AXI_arready(aquila_0_M_DCACHE_PORT_ARREADY),
        .DCACHE_AXI_arsize(aquila_0_M_DCACHE_PORT_ARSIZE),
        .DCACHE_AXI_aruser(aquila_0_M_DCACHE_PORT_ARUSER),
        .DCACHE_AXI_arvalid(aquila_0_M_DCACHE_PORT_ARVALID),
        .DCACHE_AXI_awaddr(aquila_0_M_DCACHE_PORT_AWADDR),
        .DCACHE_AXI_awburst(aquila_0_M_DCACHE_PORT_AWBURST),
        .DCACHE_AXI_awcache(aquila_0_M_DCACHE_PORT_AWCACHE),
        .DCACHE_AXI_awid(aquila_0_M_DCACHE_PORT_AWID),
        .DCACHE_AXI_awlen(aquila_0_M_DCACHE_PORT_AWLEN),
        .DCACHE_AXI_awlock(aquila_0_M_DCACHE_PORT_AWLOCK),
        .DCACHE_AXI_awprot(aquila_0_M_DCACHE_PORT_AWPROT),
        .DCACHE_AXI_awqos(aquila_0_M_DCACHE_PORT_AWQOS),
        .DCACHE_AXI_awready(aquila_0_M_DCACHE_PORT_AWREADY),
        .DCACHE_AXI_awsize(aquila_0_M_DCACHE_PORT_AWSIZE),
        .DCACHE_AXI_awuser(aquila_0_M_DCACHE_PORT_AWUSER),
        .DCACHE_AXI_awvalid(aquila_0_M_DCACHE_PORT_AWVALID),
        .DCACHE_AXI_bid(aquila_0_M_DCACHE_PORT_BID),
        .DCACHE_AXI_bready(aquila_0_M_DCACHE_PORT_BREADY),
        .DCACHE_AXI_bresp(aquila_0_M_DCACHE_PORT_BRESP),
        .DCACHE_AXI_buser(aquila_0_M_DCACHE_PORT_BUSER),
        .DCACHE_AXI_bvalid(aquila_0_M_DCACHE_PORT_BVALID),
        .DCACHE_AXI_rdata(aquila_0_M_DCACHE_PORT_RDATA),
        .DCACHE_AXI_rid(aquila_0_M_DCACHE_PORT_RID),
        .DCACHE_AXI_rlast(aquila_0_M_DCACHE_PORT_RLAST),
        .DCACHE_AXI_rready(aquila_0_M_DCACHE_PORT_RREADY),
        .DCACHE_AXI_rresp(aquila_0_M_DCACHE_PORT_RRESP),
        .DCACHE_AXI_rvalid(aquila_0_M_DCACHE_PORT_RVALID),
        .DCACHE_AXI_wdata(aquila_0_M_DCACHE_PORT_WDATA),
        .DCACHE_AXI_wlast(aquila_0_M_DCACHE_PORT_WLAST),
        .DCACHE_AXI_wready(aquila_0_M_DCACHE_PORT_WREADY),
        .DCACHE_AXI_wstrb(aquila_0_M_DCACHE_PORT_WSTRB),
        .DCACHE_AXI_wvalid(aquila_0_M_DCACHE_PORT_WVALID),
        .clk(clk),
        .rst_n(rst_n));
endmodule

