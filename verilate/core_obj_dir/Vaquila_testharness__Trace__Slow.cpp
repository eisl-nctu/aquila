// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vaquila_testharness__Syms.h"


//======================

void Vaquila_testharness::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Vaquila_testharness::traceInit, &Vaquila_testharness::traceFull, &Vaquila_testharness::traceChg, this);
}
void Vaquila_testharness::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vaquila_testharness* t=(Vaquila_testharness*)userthis;
    Vaquila_testharness__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vaquila_testharness::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vaquila_testharness* t=(Vaquila_testharness*)userthis;
    Vaquila_testharness__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Vaquila_testharness::traceInitThis(Vaquila_testharness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vaquila_testharness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vaquila_testharness::traceFullThis(Vaquila_testharness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vaquila_testharness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vaquila_testharness::traceInitThis__1(Vaquila_testharness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vaquila_testharness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit(c+3027,"clk",-1);
	vcdp->declBit(c+3028,"rst_n",-1);
	vcdp->declBus(c+3029,"main_memory_addr",-1,31,0);
	vcdp->declBus(c+3030,"aquila_testharness C_S_CONFIG_PORT_DATA_WIDTH",-1,31,0);
	vcdp->declBus(c+3031,"aquila_testharness C_M_ICACHE_PORT_ID_WIDTH",-1,31,0);
	vcdp->declBus(c+3030,"aquila_testharness C_M_ICACHE_PORT_ADDR_WIDTH",-1,31,0);
	vcdp->declBus(c+3030,"aquila_testharness C_M_ICACHE_PORT_DATA_WIDTH",-1,31,0);
	vcdp->declBus(c+3031,"aquila_testharness C_M_DCACHE_PORT_ID_WIDTH",-1,31,0);
	vcdp->declBus(c+3030,"aquila_testharness C_M_DCACHE_PORT_ADDR_WIDTH",-1,31,0);
	vcdp->declBus(c+3030,"aquila_testharness C_M_DCACHE_PORT_DATA_WIDTH",-1,31,0);
	vcdp->declBus(c+3030,"aquila_testharness C_M_DEVICE_PORT_ADDR_WIDTH",-1,31,0);
	vcdp->declBus(c+3030,"aquila_testharness C_M_DEVICE_PORT_DATA_WIDTH",-1,31,0);
	vcdp->declBit(c+3027,"aquila_testharness clk",-1);
	vcdp->declBit(c+3028,"aquila_testharness rst_n",-1);
	vcdp->declBus(c+3029,"aquila_testharness main_memory_addr",-1,31,0);
	vcdp->declBit(c+3032,"aquila_testharness RISCV_rst",-1);
	vcdp->declBit(c+336,"aquila_testharness M_ICACHE_strobe",-1);
	vcdp->declBit(c+337,"aquila_testharness M_ICACHE_done",-1);
	vcdp->declBit(c+338,"aquila_testharness M_DCACHE_strobe",-1);
	vcdp->declBit(c+339,"aquila_testharness M_DCACHE_done",-1);
	vcdp->declBit(c+340,"aquila_testharness M_DCACHE_rw",-1);
	vcdp->declBus(c+341,"aquila_testharness M_ICACHE_addr",-1,31,0);
	vcdp->declBus(c+342,"aquila_testharness M_DCACHE_addr",-1,31,0);
	vcdp->declArray(c+343,"aquila_testharness M_ICACHE_datain",-1,255,0);
	vcdp->declArray(c+3033,"aquila_testharness M_DCACHE_datain",-1,255,0);
	vcdp->declArray(c+4,"aquila_testharness M_DCACHE_dataout",-1,255,0);
	vcdp->declBit(c+12,"aquila_testharness M_DEVICE_strobe",-1);
	vcdp->declBus(c+13,"aquila_testharness M_DEVICE_addr",-1,31,0);
	vcdp->declBit(c+14,"aquila_testharness M_DEVICE_rw",-1);
	vcdp->declBus(c+351,"aquila_testharness M_DEVICE_byte_enable",-1,3,0);
	vcdp->declBus(c+15,"aquila_testharness M_DEVICE_core2dev_data",-1,31,0);
	vcdp->declBit(c+3041,"aquila_testharness M_DEVICE_data_ready",-1);
	vcdp->declBus(c+352,"aquila_testharness M_DEVICE_dev2core_data",-1,31,0);
	vcdp->declBit(c+3042,"aquila_testharness rst",-1);
	vcdp->declBit(c+3043,"aquila_testharness N",-1);
	vcdp->declBus(c+3030,"aquila_testharness aquila_core ADDR_WIDTH",-1,31,0);
	vcdp->declBus(c+3030,"aquila_testharness aquila_core DATA_WIDTH",-1,31,0);
	vcdp->declBus(c+3044,"aquila_testharness aquila_core CACHE_LINE_SIZE",-1,31,0);
	vcdp->declBit(c+3027,"aquila_testharness aquila_core clk",-1);
	vcdp->declBit(c+1,"aquila_testharness aquila_core rst",-1);
	vcdp->declBus(c+3029,"aquila_testharness aquila_core base_addr",-1,31,0);
	vcdp->declBit(c+336,"aquila_testharness aquila_core M_ICACHE_strobe",-1);
	vcdp->declBus(c+341,"aquila_testharness aquila_core M_ICACHE_addr",-1,31,0);
	vcdp->declBit(c+337,"aquila_testharness aquila_core M_ICACHE_done",-1);
	vcdp->declArray(c+343,"aquila_testharness aquila_core M_ICACHE_datain",-1,255,0);
	vcdp->declBit(c+338,"aquila_testharness aquila_core M_DCACHE_strobe",-1);
	vcdp->declBus(c+342,"aquila_testharness aquila_core M_DCACHE_addr",-1,31,0);
	vcdp->declBit(c+340,"aquila_testharness aquila_core M_DCACHE_rw",-1);
	vcdp->declArray(c+4,"aquila_testharness aquila_core M_DCACHE_dataout",-1,255,0);
	vcdp->declBit(c+339,"aquila_testharness aquila_core M_DCACHE_done",-1);
	vcdp->declArray(c+3033,"aquila_testharness aquila_core M_DCACHE_datain",-1,255,0);
	vcdp->declBit(c+12,"aquila_testharness aquila_core M_DEVICE_strobe",-1);
	vcdp->declBus(c+13,"aquila_testharness aquila_core M_DEVICE_addr",-1,31,0);
	vcdp->declBit(c+14,"aquila_testharness aquila_core M_DEVICE_rw",-1);
	vcdp->declBus(c+351,"aquila_testharness aquila_core M_DEVICE_byte_enable",-1,3,0);
	vcdp->declBus(c+15,"aquila_testharness aquila_core M_DEVICE_core2dev_data",-1,31,0);
	vcdp->declBit(c+3041,"aquila_testharness aquila_core M_DEVICE_data_ready",-1);
	vcdp->declBus(c+352,"aquila_testharness aquila_core M_DEVICE_dev2core_data",-1,31,0);
	vcdp->declBus(c+16,"aquila_testharness aquila_core data_read_sel",-1,31,0);
	vcdp->declBus(c+17,"aquila_testharness aquila_core mem_sel",-1,1,0);
	vcdp->declBit(c+353,"aquila_testharness aquila_core data_rw",-1);
	vcdp->declBit(c+18,"aquila_testharness aquila_core data_ready",-1);
	vcdp->declBus(c+354,"aquila_testharness aquila_core instr_addr",-1,31,0);
	vcdp->declBus(c+355,"aquila_testharness aquila_core data_addr",-1,31,0);
	vcdp->declBit(c+356,"aquila_testharness aquila_core p_i_strobe",-1);
	vcdp->declBit(c+19,"aquila_testharness aquila_core p_i_ready",-1);
	vcdp->declBus(c+20,"aquila_testharness aquila_core p_i_instr",-1,31,0);
	vcdp->declBit(c+357,"aquila_testharness aquila_core p_d_strobe",-1);
	vcdp->declBit(c+358,"aquila_testharness aquila_core p_d_ready",-1);
	vcdp->declBus(c+351,"aquila_testharness aquila_core p_d_byte_enable",-1,3,0);
	vcdp->declBus(c+359,"aquila_testharness aquila_core p_d_dout",-1,31,0);
	vcdp->declBus(c+21,"aquila_testharness aquila_core p_d_din",-1,31,0);
	vcdp->declBit(c+336,"aquila_testharness aquila_core i_m_strobe",-1);
	vcdp->declBit(c+337,"aquila_testharness aquila_core i_m_ready",-1);
	vcdp->declBit(c+338,"aquila_testharness aquila_core d_m_strobe",-1);
	vcdp->declBit(c+340,"aquila_testharness aquila_core d_m_rw",-1);
	vcdp->declBit(c+339,"aquila_testharness aquila_core d_m_ready",-1);
	vcdp->declBus(c+341,"aquila_testharness aquila_core i_m_addr",-1,31,0);
	vcdp->declBus(c+342,"aquila_testharness aquila_core d_m_addr",-1,31,0);
	vcdp->declArray(c+343,"aquila_testharness aquila_core i_m_dout",-1,255,0);
	vcdp->declArray(c+360,"aquila_testharness aquila_core d_m_din",-1,255,0);
	vcdp->declArray(c+3033,"aquila_testharness aquila_core d_m_dout",-1,255,0);
	vcdp->declBit(c+22,"aquila_testharness aquila_core tmr_irq",-1);
	vcdp->declBit(c+368,"aquila_testharness aquila_core sft_irq",-1);
	vcdp->declBus(c+369,"aquila_testharness aquila_core clint_mem_data",-1,31,0);
	vcdp->declBus(c+3045,"aquila_testharness aquila_core COND_ENTRY_NUM",-1,31,0);
	vcdp->declBus(c+3046,"aquila_testharness aquila_core COND_DATA_WIDTH",-1,31,0);
	vcdp->declBus(c+3047,"aquila_testharness aquila_core UNCOND_ENTRY_NUM",-1,31,0);
	vcdp->declBus(c+3046,"aquila_testharness aquila_core UNCOND_DATA_WIDTH",-1,31,0);
	vcdp->declBus(c+3048,"aquila_testharness aquila_core ICACHE_SIZE",-1,31,0);
	vcdp->declBus(c+3048,"aquila_testharness aquila_core DCACHE_SIZE",-1,31,0);
	vcdp->declBus(c+3046,"aquila_testharness aquila_core RISCV_CORE0 DATA_WIDTH",-1,31,0);
	vcdp->declBus(c+3049,"aquila_testharness aquila_core RISCV_CORE0 HART_ID",-1,31,0);
	vcdp->declBus(c+3045,"aquila_testharness aquila_core RISCV_CORE0 COND_ENTRY_NUM",-1,31,0);
	vcdp->declBus(c+3046,"aquila_testharness aquila_core RISCV_CORE0 COND_DATA_WIDTH",-1,31,0);
	vcdp->declBus(c+3047,"aquila_testharness aquila_core RISCV_CORE0 UNCOND_ENTRY_NUM",-1,31,0);
	vcdp->declBus(c+3046,"aquila_testharness aquila_core RISCV_CORE0 UNCOND_DATA_WIDTH",-1,31,0);
	vcdp->declBit(c+3027,"aquila_testharness aquila_core RISCV_CORE0 clk",-1);
	vcdp->declBit(c+1,"aquila_testharness aquila_core RISCV_CORE0 rst",-1);
	vcdp->declBit(c+3050,"aquila_testharness aquila_core RISCV_CORE0 stall",-1);
	vcdp->declBus(c+3029,"aquila_testharness aquila_core RISCV_CORE0 init_pc_addr",-1,31,0);
	vcdp->declBus(c+20,"aquila_testharness aquila_core RISCV_CORE0 instruction",-1,31,0);
	vcdp->declBit(c+19,"aquila_testharness aquila_core RISCV_CORE0 instruction_ready",-1);
	vcdp->declBus(c+354,"aquila_testharness aquila_core RISCV_CORE0 instruction_addr",-1,31,0);
	vcdp->declBit(c+356,"aquila_testharness aquila_core RISCV_CORE0 instruction_req",-1);
	vcdp->declBus(c+16,"aquila_testharness aquila_core RISCV_CORE0 data_read",-1,31,0);
	vcdp->declBit(c+18,"aquila_testharness aquila_core RISCV_CORE0 data_ready",-1);
	vcdp->declBus(c+21,"aquila_testharness aquila_core RISCV_CORE0 data_write",-1,31,0);
	vcdp->declBus(c+355,"aquila_testharness aquila_core RISCV_CORE0 data_addr",-1,31,0);
	vcdp->declBit(c+353,"aquila_testharness aquila_core RISCV_CORE0 data_rw",-1);
	vcdp->declBus(c+351,"aquila_testharness aquila_core RISCV_CORE0 data_byte_enable",-1,3,0);
	vcdp->declBit(c+357,"aquila_testharness aquila_core RISCV_CORE0 data_req",-1);
	vcdp->declBit(c+3050,"aquila_testharness aquila_core RISCV_CORE0 ext_irq",-1);
	vcdp->declBit(c+22,"aquila_testharness aquila_core RISCV_CORE0 tmr_irq",-1);
	vcdp->declBit(c+368,"aquila_testharness aquila_core RISCV_CORE0 sft_irq",-1);
	vcdp->declBit(c+23,"aquila_testharness aquila_core RISCV_CORE0 sys_jump",-1);
	vcdp->declBus(c+24,"aquila_testharness aquila_core RISCV_CORE0 sys_jump_csr_addr",-1,11,0);
	vcdp->declBus(c+25,"aquila_testharness aquila_core RISCV_CORE0 sys_jump_csr_data",-1,31,0);
	vcdp->declBit(c+26,"aquila_testharness aquila_core RISCV_CORE0 flush2fet",-1);
	vcdp->declBit(c+27,"aquila_testharness aquila_core RISCV_CORE0 flush2dec",-1);
	vcdp->declBit(c+28,"aquila_testharness aquila_core RISCV_CORE0 stall_from_hazard",-1);
	vcdp->declBus(c+29,"aquila_testharness aquila_core RISCV_CORE0 rs1_fwd",-1,31,0);
	vcdp->declBus(c+30,"aquila_testharness aquila_core RISCV_CORE0 rs2_fwd",-1,31,0);
	vcdp->declBus(c+354,"aquila_testharness aquila_core RISCV_CORE0 pc",-1,31,0);
	vcdp->declBus(c+370,"aquila_testharness aquila_core RISCV_CORE0 fet_instr2dec",-1,31,0);
	vcdp->declBus(c+371,"aquila_testharness aquila_core RISCV_CORE0 fet_pc2dec",-1,31,0);
	vcdp->declBit(c+372,"aquila_testharness aquila_core RISCV_CORE0 fet_valid2dec",-1);
	vcdp->declBus(c+31,"aquila_testharness aquila_core RISCV_CORE0 rs1_data2dec",-1,31,0);
	vcdp->declBus(c+32,"aquila_testharness aquila_core RISCV_CORE0 rs2_data2dec",-1,31,0);
	vcdp->declBus(c+373,"aquila_testharness aquila_core RISCV_CORE0 dec_rs1_addr2regfile",-1,4,0);
	vcdp->declBus(c+374,"aquila_testharness aquila_core RISCV_CORE0 dec_rs2_addr2regfile",-1,4,0);
	vcdp->declBit(c+33,"aquila_testharness aquila_core RISCV_CORE0 dec_illegal_instr",-1);
	vcdp->declBus(c+375,"aquila_testharness aquila_core RISCV_CORE0 dec_pc2exe",-1,31,0);
	vcdp->declBus(c+376,"aquila_testharness aquila_core RISCV_CORE0 dec_imm2exe",-1,31,0);
	vcdp->declBus(c+377,"aquila_testharness aquila_core RISCV_CORE0 dec_rs1_data2fwd",-1,31,0);
	vcdp->declBus(c+378,"aquila_testharness aquila_core RISCV_CORE0 dec_rs2_data2fwd",-1,31,0);
	vcdp->declBit(c+379,"aquila_testharness aquila_core RISCV_CORE0 dec_regfile_we2exe",-1);
	vcdp->declBit(c+380,"aquila_testharness aquila_core RISCV_CORE0 dec_we2exe",-1);
	vcdp->declBit(c+381,"aquila_testharness aquila_core RISCV_CORE0 dec_re2exe",-1);
	vcdp->declBit(c+382,"aquila_testharness aquila_core RISCV_CORE0 dec_load_ext_sel2exe",-1);
	vcdp->declBit(c+383,"aquila_testharness aquila_core RISCV_CORE0 dec_instr_valid2csr",-1);
	vcdp->declBus(c+384,"aquila_testharness aquila_core RISCV_CORE0 dec_rd_addr2exe",-1,4,0);
	vcdp->declBus(c+385,"aquila_testharness aquila_core RISCV_CORE0 dec_rs1_addr2fwd",-1,4,0);
	vcdp->declBus(c+386,"aquila_testharness aquila_core RISCV_CORE0 dec_rs2_addr2fwd",-1,4,0);
	vcdp->declBus(c+387,"aquila_testharness aquila_core RISCV_CORE0 dec_csr_imm2csr",-1,4,0);
	vcdp->declBus(c+388,"aquila_testharness aquila_core RISCV_CORE0 dec_inA_sel2exe",-1,1,0);
	vcdp->declBus(c+389,"aquila_testharness aquila_core RISCV_CORE0 dec_inB_sel2exe",-1,1,0);
	vcdp->declBus(c+390,"aquila_testharness aquila_core RISCV_CORE0 dec_input_sel2exe",-1,1,0);
	vcdp->declBus(c+391,"aquila_testharness aquila_core RISCV_CORE0 dec_regfile_sel2exe",-1,2,0);
	vcdp->declBus(c+392,"aquila_testharness aquila_core RISCV_CORE0 dec_operation_sel2exe",-1,2,0);
	vcdp->declBus(c+393,"aquila_testharness aquila_core RISCV_CORE0 dec_csr_addr2csr",-1,11,0);
	vcdp->declBit(c+394,"aquila_testharness aquila_core RISCV_CORE0 alu_muldiv_sel2exe",-1);
	vcdp->declBit(c+395,"aquila_testharness aquila_core RISCV_CORE0 shift_sel2exe",-1);
	vcdp->declBit(c+396,"aquila_testharness aquila_core RISCV_CORE0 is_branch2exe",-1);
	vcdp->declBit(c+397,"aquila_testharness aquila_core RISCV_CORE0 is_jal2exe",-1);
	vcdp->declBit(c+398,"aquila_testharness aquila_core RISCV_CORE0 is_jalr2exe",-1);
	vcdp->declBit(c+399,"aquila_testharness aquila_core RISCV_CORE0 is_csr_instr2csr",-1);
	vcdp->declBit(c+34,"aquila_testharness aquila_core RISCV_CORE0 exe_branch_taken",-1);
	vcdp->declBit(c+400,"aquila_testharness aquila_core RISCV_CORE0 stall_from_exe",-1);
	vcdp->declBus(c+401,"aquila_testharness aquila_core RISCV_CORE0 exe_pc2pc",-1,31,0);
	vcdp->declBus(c+35,"aquila_testharness aquila_core RISCV_CORE0 exe_branch_target_addr",-1,31,0);
	vcdp->declBit(c+353,"aquila_testharness aquila_core RISCV_CORE0 exe_mem_we",-1);
	vcdp->declBit(c+402,"aquila_testharness aquila_core RISCV_CORE0 exe_mem_re",-1);
	vcdp->declBit(c+403,"aquila_testharness aquila_core RISCV_CORE0 exe_regfile_we2mem_wb",-1);
	vcdp->declBit(c+404,"aquila_testharness aquila_core RISCV_CORE0 exe_mem_load_ext_sel2mem_wb",-1);
	vcdp->declBus(c+405,"aquila_testharness aquila_core RISCV_CORE0 exe_rs2_data2mem",-1,31,0);
	vcdp->declBus(c+355,"aquila_testharness aquila_core RISCV_CORE0 exe_mem_addr2mem",-1,31,0);
	vcdp->declBus(c+406,"aquila_testharness aquila_core RISCV_CORE0 exe_p_data",-1,31,0);
	vcdp->declBus(c+407,"aquila_testharness aquila_core RISCV_CORE0 exe_rd_addr2mem_wb",-1,4,0);
	vcdp->declBus(c+408,"aquila_testharness aquila_core RISCV_CORE0 exe_mem_input_sel2mem",-1,1,0);
	vcdp->declBus(c+409,"aquila_testharness aquila_core RISCV_CORE0 exe_regfile_input_sel2mem_wb",-1,2,0);
	vcdp->declBus(c+36,"aquila_testharness aquila_core RISCV_CORE0 csr_data2exe",-1,31,0);
	vcdp->declBus(c+21,"aquila_testharness aquila_core RISCV_CORE0 data_o",-1,31,0);
	vcdp->declBus(c+3051,"aquila_testharness aquila_core RISCV_CORE0 data2mem_wb",-1,31,0);
	vcdp->declBus(c+351,"aquila_testharness aquila_core RISCV_CORE0 byte_write_sel",-1,3,0);
	vcdp->declBit(c+410,"aquila_testharness aquila_core RISCV_CORE0 memory_alignment_exception",-1);
	vcdp->declBus(c+37,"aquila_testharness aquila_core RISCV_CORE0 rd_data2wb",-1,31,0);
	vcdp->declBit(c+411,"aquila_testharness aquila_core RISCV_CORE0 rd_we2wb",-1);
	vcdp->declBus(c+412,"aquila_testharness aquila_core RISCV_CORE0 rd_addr2wb",-1,4,0);
	vcdp->declBus(c+3052,"aquila_testharness aquila_core RISCV_CORE0 COND_ADDR_WIDTH",-1,31,0);
	vcdp->declBus(c+3052,"aquila_testharness aquila_core RISCV_CORE0 UNCOND_ADDR_WIDTH",-1,31,0);
	vcdp->declBit(c+38,"aquila_testharness aquila_core RISCV_CORE0 cond_branch_hit_IF",-1);
	vcdp->declBit(c+413,"aquila_testharness aquila_core RISCV_CORE0 cond_branch_hit_ID",-1);
	vcdp->declBit(c+414,"aquila_testharness aquila_core RISCV_CORE0 cond_branch_hit_EXE",-1);
	vcdp->declBit(c+39,"aquila_testharness aquila_core RISCV_CORE0 cond_branch_result_IF",-1);
	vcdp->declBit(c+415,"aquila_testharness aquila_core RISCV_CORE0 cond_branch_result_ID",-1);
	vcdp->declBit(c+416,"aquila_testharness aquila_core RISCV_CORE0 cond_branch_result_EXE",-1);
	vcdp->declBit(c+40,"aquila_testharness aquila_core RISCV_CORE0 uncond_branch_hit_IF",-1);
	vcdp->declBit(c+417,"aquila_testharness aquila_core RISCV_CORE0 uncond_branch_hit_ID",-1);
	vcdp->declBit(c+418,"aquila_testharness aquila_core RISCV_CORE0 uncond_branch_hit_EXE",-1);
	vcdp->declBit(c+41,"aquila_testharness aquila_core RISCV_CORE0 cond_branch_misprediction",-1);
	vcdp->declBus(c+42,"aquila_testharness aquila_core RISCV_CORE0 cond_branch_target_addr",-1,31,0);
	vcdp->declBus(c+43,"aquila_testharness aquila_core RISCV_CORE0 uncond_branch_target_addr",-1,31,0);
	vcdp->declBit(c+44,"aquila_testharness aquila_core RISCV_CORE0 irq_taken",-1);
	vcdp->declBus(c+45,"aquila_testharness aquila_core RISCV_CORE0 PC_handler",-1,31,0);
	vcdp->declBus(c+3049,"aquila_testharness aquila_core RISCV_CORE0 i_IDLE",-1,31,0);
	vcdp->declBus(c+3053,"aquila_testharness aquila_core RISCV_CORE0 i_NEXT",-1,31,0);
	vcdp->declBus(c+3054,"aquila_testharness aquila_core RISCV_CORE0 i_WAIT",-1,31,0);
	vcdp->declBus(c+3055,"aquila_testharness aquila_core RISCV_CORE0 i_DONE",-1,31,0);
	vcdp->declBus(c+3049,"aquila_testharness aquila_core RISCV_CORE0 d_IDLE",-1,31,0);
	vcdp->declBus(c+3053,"aquila_testharness aquila_core RISCV_CORE0 d_WAIT",-1,31,0);
	vcdp->declBus(c+419,"aquila_testharness aquila_core RISCV_CORE0 iS",-1,1,0);
	vcdp->declBus(c+46,"aquila_testharness aquila_core RISCV_CORE0 iS_nxt",-1,1,0);
	vcdp->declBus(c+420,"aquila_testharness aquila_core RISCV_CORE0 dS",-1,1,0);
	vcdp->declBus(c+47,"aquila_testharness aquila_core RISCV_CORE0 dS_nxt",-1,1,0);
	vcdp->declBit(c+48,"aquila_testharness aquila_core RISCV_CORE0 stall_for_instr_fetch",-1);
	vcdp->declBit(c+49,"aquila_testharness aquila_core RISCV_CORE0 stall_for_data_fetch",-1);
	vcdp->declBit(c+50,"aquila_testharness aquila_core RISCV_CORE0 stall_pipeline",-1);
	vcdp->declBus(c+373,"aquila_testharness aquila_core RISCV_CORE0 Pipeline_Control rs1_addr",-1,4,0);
	vcdp->declBus(c+374,"aquila_testharness aquila_core RISCV_CORE0 Pipeline_Control rs2_addr",-1,4,0);
	vcdp->declBit(c+33,"aquila_testharness aquila_core RISCV_CORE0 Pipeline_Control illegal_instr",-1);
	vcdp->declBus(c+384,"aquila_testharness aquila_core RISCV_CORE0 Pipeline_Control rd_addr_DEC_EXE",-1,4,0);
	vcdp->declBit(c+381,"aquila_testharness aquila_core RISCV_CORE0 Pipeline_Control is_load_instr_DEC_EXE",-1);
	vcdp->declBit(c+414,"aquila_testharness aquila_core RISCV_CORE0 Pipeline_Control cond_branch_hit_EXE",-1);
	vcdp->declBit(c+418,"aquila_testharness aquila_core RISCV_CORE0 Pipeline_Control uncond_branch_hit_EXE",-1);
	vcdp->declBit(c+34,"aquila_testharness aquila_core RISCV_CORE0 Pipeline_Control branch_taken",-1);
	vcdp->declBit(c+41,"aquila_testharness aquila_core RISCV_CORE0 Pipeline_Control cond_branch_misprediction",-1);
	vcdp->declBit(c+23,"aquila_testharness aquila_core RISCV_CORE0 Pipeline_Control sys_jump",-1);
	vcdp->declBit(c+26,"aquila_testharness aquila_core RISCV_CORE0 Pipeline_Control flush2fet",-1);
	vcdp->declBit(c+27,"aquila_testharness aquila_core RISCV_CORE0 Pipeline_Control flush2dec",-1);
	vcdp->declBit(c+28,"aquila_testharness aquila_core RISCV_CORE0 Pipeline_Control stall_from_hazard",-1);
	vcdp->declBit(c+421,"aquila_testharness aquila_core RISCV_CORE0 Pipeline_Control is_rs1_rd_DEC_EXE_same",-1);
	vcdp->declBit(c+422,"aquila_testharness aquila_core RISCV_CORE0 Pipeline_Control is_rs2_rd_DEC_EXE_same",-1);
	vcdp->declBit(c+28,"aquila_testharness aquila_core RISCV_CORE0 Pipeline_Control is_load_use",-1);
	vcdp->declBit(c+51,"aquila_testharness aquila_core RISCV_CORE0 Pipeline_Control branch_flush",-1);
	vcdp->declBus(c+3046,"aquila_testharness aquila_core RISCV_CORE0 Forwarding_Unit DATA_WIDTH",-1,31,0);
	vcdp->declBus(c+385,"aquila_testharness aquila_core RISCV_CORE0 Forwarding_Unit rs1_addr",-1,4,0);
	vcdp->declBus(c+386,"aquila_testharness aquila_core RISCV_CORE0 Forwarding_Unit rs2_addr",-1,4,0);
	vcdp->declBus(c+377,"aquila_testharness aquila_core RISCV_CORE0 Forwarding_Unit rs1_data",-1,31,0);
	vcdp->declBus(c+378,"aquila_testharness aquila_core RISCV_CORE0 Forwarding_Unit rs2_data",-1,31,0);
	vcdp->declBus(c+407,"aquila_testharness aquila_core RISCV_CORE0 Forwarding_Unit rd_addr_EXE_MEM",-1,4,0);
	vcdp->declBit(c+403,"aquila_testharness aquila_core RISCV_CORE0 Forwarding_Unit regfile_we_EXE_MEM",-1);
	vcdp->declBus(c+409,"aquila_testharness aquila_core RISCV_CORE0 Forwarding_Unit regfile_input_sel_EXE_MEM",-1,2,0);
	vcdp->declBus(c+406,"aquila_testharness aquila_core RISCV_CORE0 Forwarding_Unit p_data_EXE_MEM",-1,31,0);
	vcdp->declBus(c+412,"aquila_testharness aquila_core RISCV_CORE0 Forwarding_Unit rd_addr_MEM_WB",-1,4,0);
	vcdp->declBit(c+411,"aquila_testharness aquila_core RISCV_CORE0 Forwarding_Unit regfile_we_MEM_WB",-1);
	vcdp->declBus(c+37,"aquila_testharness aquila_core RISCV_CORE0 Forwarding_Unit rd_data_MEM_WB",-1,31,0);
	vcdp->declBus(c+29,"aquila_testharness aquila_core RISCV_CORE0 Forwarding_Unit rs1_fwd",-1,31,0);
	vcdp->declBus(c+30,"aquila_testharness aquila_core RISCV_CORE0 Forwarding_Unit rs2_fwd",-1,31,0);
	vcdp->declBit(c+423,"aquila_testharness aquila_core RISCV_CORE0 Forwarding_Unit is_rs1_rd_EXE_MEM_same",-1);
	vcdp->declBit(c+424,"aquila_testharness aquila_core RISCV_CORE0 Forwarding_Unit is_rs2_rd_EXE_MEM_same",-1);
	vcdp->declBit(c+425,"aquila_testharness aquila_core RISCV_CORE0 Forwarding_Unit is_rs1_rd_MEM_WB_same",-1);
	vcdp->declBit(c+426,"aquila_testharness aquila_core RISCV_CORE0 Forwarding_Unit is_rs2_rd_MEM_WB_same",-1);
	vcdp->declBit(c+427,"aquila_testharness aquila_core RISCV_CORE0 Forwarding_Unit is_rd_EXE_MEM_not_zero",-1);
	vcdp->declBit(c+428,"aquila_testharness aquila_core RISCV_CORE0 Forwarding_Unit is_rd_MEM_WB_not_zero",-1);
	vcdp->declBit(c+429,"aquila_testharness aquila_core RISCV_CORE0 Forwarding_Unit rs1_EXE_MEM_fwd",-1);
	vcdp->declBit(c+430,"aquila_testharness aquila_core RISCV_CORE0 Forwarding_Unit rs2_EXE_MEM_fwd",-1);
	vcdp->declBit(c+431,"aquila_testharness aquila_core RISCV_CORE0 Forwarding_Unit rs1_MEM_WB_fwd",-1);
	vcdp->declBit(c+432,"aquila_testharness aquila_core RISCV_CORE0 Forwarding_Unit rs2_MEM_WB_fwd",-1);
	vcdp->declBus(c+29,"aquila_testharness aquila_core RISCV_CORE0 Forwarding_Unit correct_rs1_data",-1,31,0);
	vcdp->declBus(c+30,"aquila_testharness aquila_core RISCV_CORE0 Forwarding_Unit correct_rs2_data",-1,31,0);
	vcdp->declBus(c+37,"aquila_testharness aquila_core RISCV_CORE0 Forwarding_Unit correct_fwd_src2",-1,31,0);
	vcdp->declBus(c+406,"aquila_testharness aquila_core RISCV_CORE0 Forwarding_Unit correct_fwd_src1",-1,31,0);
	vcdp->declBus(c+3045,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit ENTRY_NUM",-1,31,0);
	vcdp->declBus(c+3052,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit ADDR_WIDTH",-1,31,0);
	vcdp->declBus(c+3046,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit DATA_WIDTH",-1,31,0);
	vcdp->declBit(c+3027,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit clk",-1);
	vcdp->declBit(c+1,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit rst",-1);
	vcdp->declBit(c+50,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit stall",-1);
	vcdp->declBus(c+354,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit pc_IF",-1,31,0);
	vcdp->declBit(c+396,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit is_cond_branch",-1);
	vcdp->declBus(c+375,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit pc_EXE",-1,31,0);
	vcdp->declBit(c+34,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit branch_taken",-1);
	vcdp->declBus(c+35,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit branch_target_addr",-1,31,0);
	vcdp->declBit(c+41,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit cond_branch_misprediction",-1);
	vcdp->declBit(c+38,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit cond_branch_hit",-1);
	vcdp->declBit(c+39,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit cond_branch_result",-1);
	vcdp->declBus(c+42,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit cond_branch_target_addr",-1,31,0);
	vcdp->declBit(c+52,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit we",-1);
	vcdp->declBus(c+53,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit data_o",-1,31,0);
	vcdp->declBus(c+54,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit addr_hit_IF",-1,23,0);
	vcdp->declBus(c+55,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit addr_hit_EXE",-1,23,0);
	vcdp->declBus(c+56,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit read_addr",-1,4,0);
	vcdp->declBus(c+57,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit update_addr",-1,4,0);
	vcdp->declBus(c+433,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit write_addr",-1,4,0);
	{int i; for (i=0; i<24; i++) {
		vcdp->declBus(c+434+i*1,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit cond_branch_pc_table",(i+0),31,0);}}
	{int i; for (i=0; i<24; i++) {
		vcdp->declBus(c+458+i*1,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit prediction_table",(i+0),1,0);}}
	// Tracing: aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit i // Ignored: Verilator trace_off at ../ip_repo/aquila/hdl/core_rtl/bpu.v:96
	vcdp->declBus(c+482,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit idx",-1,31,0);
	vcdp->declBus(c+3045,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit BPU_distri_ram_0 ENTRY_NUM",-1,31,0);
	vcdp->declBus(c+3052,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit BPU_distri_ram_0 ADDR_WIDTH",-1,31,0);
	vcdp->declBus(c+3046,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit BPU_distri_ram_0 DATA_WIDTH",-1,31,0);
	vcdp->declBit(c+3027,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit BPU_distri_ram_0 clk",-1);
	vcdp->declBit(c+52,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit BPU_distri_ram_0 we",-1);
	vcdp->declBus(c+35,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit BPU_distri_ram_0 branch_target_addr",-1,31,0);
	vcdp->declBus(c+433,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit BPU_distri_ram_0 write_addr",-1,4,0);
	vcdp->declBus(c+56,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit BPU_distri_ram_0 read_addr",-1,4,0);
	vcdp->declBus(c+53,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit BPU_distri_ram_0 data_o",-1,31,0);
	{int i; for (i=0; i<24; i++) {
		vcdp->declBus(c+58+i*1,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit BPU_distri_ram_0 history_table",(i+0),31,0);}}
	vcdp->declBus(c+2,"aquila_testharness aquila_core RISCV_CORE0 Branch_Prediction_Unit BPU_distri_ram_0 i",-1,31,0);
	vcdp->declBus(c+3047,"aquila_testharness aquila_core RISCV_CORE0 JAL_BHT ENTRY_NUM",-1,31,0);
	vcdp->declBus(c+3052,"aquila_testharness aquila_core RISCV_CORE0 JAL_BHT ADDR_WIDTH",-1,31,0);
	vcdp->declBus(c+3046,"aquila_testharness aquila_core RISCV_CORE0 JAL_BHT DATA_WIDTH",-1,31,0);
	vcdp->declBit(c+3027,"aquila_testharness aquila_core RISCV_CORE0 JAL_BHT clk",-1);
	vcdp->declBit(c+1,"aquila_testharness aquila_core RISCV_CORE0 JAL_BHT rst",-1);
	vcdp->declBit(c+50,"aquila_testharness aquila_core RISCV_CORE0 JAL_BHT stall",-1);
	vcdp->declBus(c+354,"aquila_testharness aquila_core RISCV_CORE0 JAL_BHT pc_IF",-1,31,0);
	vcdp->declBit(c+397,"aquila_testharness aquila_core RISCV_CORE0 JAL_BHT is_uncond_branch",-1);
	vcdp->declBus(c+375,"aquila_testharness aquila_core RISCV_CORE0 JAL_BHT pc_EXE",-1,31,0);
	vcdp->declBus(c+35,"aquila_testharness aquila_core RISCV_CORE0 JAL_BHT branch_target_addr",-1,31,0);
	vcdp->declBit(c+40,"aquila_testharness aquila_core RISCV_CORE0 JAL_BHT uncond_branch_hit",-1);
	vcdp->declBus(c+43,"aquila_testharness aquila_core RISCV_CORE0 JAL_BHT uncond_branch_target_addr",-1,31,0);
	{int i; for (i=0; i<20; i++) {
		vcdp->declBus(c+483+i*1,"aquila_testharness aquila_core RISCV_CORE0 JAL_BHT uncond_branch_pc_table",(i+0),31,0);}}
	vcdp->declBit(c+82,"aquila_testharness aquila_core RISCV_CORE0 JAL_BHT we",-1);
	vcdp->declBus(c+83,"aquila_testharness aquila_core RISCV_CORE0 JAL_BHT data_o",-1,31,0);
	vcdp->declBus(c+84,"aquila_testharness aquila_core RISCV_CORE0 JAL_BHT addr_hit_IF",-1,19,0);
	vcdp->declBus(c+85,"aquila_testharness aquila_core RISCV_CORE0 JAL_BHT addr_hit_EXE",-1,19,0);
	vcdp->declBus(c+86,"aquila_testharness aquila_core RISCV_CORE0 JAL_BHT read_addr",-1,4,0);
	vcdp->declBus(c+503,"aquila_testharness aquila_core RISCV_CORE0 JAL_BHT write_addr",-1,4,0);
	// Tracing: aquila_testharness aquila_core RISCV_CORE0 JAL_BHT i // Ignored: Verilator trace_off at ../ip_repo/aquila/hdl/core_rtl/uncond_BHT.v:93
	vcdp->declBus(c+504,"aquila_testharness aquila_core RISCV_CORE0 JAL_BHT idx",-1,31,0);
	vcdp->declBus(c+3047,"aquila_testharness aquila_core RISCV_CORE0 JAL_BHT uncond_BHT_distri_ram_0 ENTRY_NUM",-1,31,0);
	vcdp->declBus(c+3052,"aquila_testharness aquila_core RISCV_CORE0 JAL_BHT uncond_BHT_distri_ram_0 ADDR_WIDTH",-1,31,0);
	vcdp->declBus(c+3046,"aquila_testharness aquila_core RISCV_CORE0 JAL_BHT uncond_BHT_distri_ram_0 DATA_WIDTH",-1,31,0);
	vcdp->declBit(c+3027,"aquila_testharness aquila_core RISCV_CORE0 JAL_BHT uncond_BHT_distri_ram_0 clk",-1);
	vcdp->declBit(c+82,"aquila_testharness aquila_core RISCV_CORE0 JAL_BHT uncond_BHT_distri_ram_0 we",-1);
	vcdp->declBus(c+35,"aquila_testharness aquila_core RISCV_CORE0 JAL_BHT uncond_BHT_distri_ram_0 branch_target_addr",-1,31,0);
	vcdp->declBus(c+503,"aquila_testharness aquila_core RISCV_CORE0 JAL_BHT uncond_BHT_distri_ram_0 write_addr",-1,4,0);
	vcdp->declBus(c+86,"aquila_testharness aquila_core RISCV_CORE0 JAL_BHT uncond_BHT_distri_ram_0 read_addr",-1,4,0);
	vcdp->declBus(c+83,"aquila_testharness aquila_core RISCV_CORE0 JAL_BHT uncond_BHT_distri_ram_0 data_o",-1,31,0);
	{int i; for (i=0; i<20; i++) {
		vcdp->declBus(c+87+i*1,"aquila_testharness aquila_core RISCV_CORE0 JAL_BHT uncond_BHT_distri_ram_0 history_table",(i+0),31,0);}}
	vcdp->declBus(c+3,"aquila_testharness aquila_core RISCV_CORE0 JAL_BHT uncond_BHT_distri_ram_0 i",-1,31,0);
	vcdp->declBus(c+3056,"aquila_testharness aquila_core RISCV_CORE0 Register_File stack_pointer_addr",-1,31,0);
	vcdp->declBit(c+3027,"aquila_testharness aquila_core RISCV_CORE0 Register_File clk",-1);
	vcdp->declBit(c+1,"aquila_testharness aquila_core RISCV_CORE0 Register_File rst",-1);
	vcdp->declBus(c+373,"aquila_testharness aquila_core RISCV_CORE0 Register_File rs1_addr",-1,4,0);
	vcdp->declBus(c+374,"aquila_testharness aquila_core RISCV_CORE0 Register_File rs2_addr",-1,4,0);
	vcdp->declBit(c+411,"aquila_testharness aquila_core RISCV_CORE0 Register_File regfile_we",-1);
	vcdp->declBus(c+412,"aquila_testharness aquila_core RISCV_CORE0 Register_File rd_addr",-1,4,0);
	vcdp->declBus(c+37,"aquila_testharness aquila_core RISCV_CORE0 Register_File rd_data",-1,31,0);
	vcdp->declBus(c+31,"aquila_testharness aquila_core RISCV_CORE0 Register_File rs1_data_o",-1,31,0);
	vcdp->declBus(c+32,"aquila_testharness aquila_core RISCV_CORE0 Register_File rs2_data_o",-1,31,0);
	vcdp->declBit(c+107,"aquila_testharness aquila_core RISCV_CORE0 Register_File we",-1);
	{int i; for (i=0; i<32; i++) {
		vcdp->declBus(c+505+i*1,"aquila_testharness aquila_core RISCV_CORE0 Register_File rf",(i+0),31,0);}}
	vcdp->declBus(c+3057,"aquila_testharness aquila_core RISCV_CORE0 Register_File i",-1,31,0);
	vcdp->declBus(c+3046,"aquila_testharness aquila_core RISCV_CORE0 Program_Counter ADDR_WIDTH",-1,31,0);
	vcdp->declBus(c+3046,"aquila_testharness aquila_core RISCV_CORE0 Program_Counter DATA_WIDTH",-1,31,0);
	vcdp->declBit(c+3027,"aquila_testharness aquila_core RISCV_CORE0 Program_Counter clk",-1);
	vcdp->declBit(c+1,"aquila_testharness aquila_core RISCV_CORE0 Program_Counter rst",-1);
	vcdp->declBus(c+3029,"aquila_testharness aquila_core RISCV_CORE0 Program_Counter init_pc_addr",-1,31,0);
	vcdp->declBit(c+44,"aquila_testharness aquila_core RISCV_CORE0 Program_Counter irq_taken",-1);
	vcdp->declBus(c+45,"aquila_testharness aquila_core RISCV_CORE0 Program_Counter PC_handler",-1,31,0);
	vcdp->declBit(c+108,"aquila_testharness aquila_core RISCV_CORE0 Program_Counter stall",-1);
	vcdp->declBit(c+38,"aquila_testharness aquila_core RISCV_CORE0 Program_Counter cond_branch_hit_IF",-1);
	vcdp->declBit(c+39,"aquila_testharness aquila_core RISCV_CORE0 Program_Counter cond_branch_result_IF",-1);
	vcdp->declBus(c+42,"aquila_testharness aquila_core RISCV_CORE0 Program_Counter cond_branch_target_addr",-1,31,0);
	vcdp->declBit(c+40,"aquila_testharness aquila_core RISCV_CORE0 Program_Counter uncond_branch_hit_IF",-1);
	vcdp->declBus(c+43,"aquila_testharness aquila_core RISCV_CORE0 Program_Counter uncond_branch_target_addr",-1,31,0);
	vcdp->declBit(c+23,"aquila_testharness aquila_core RISCV_CORE0 Program_Counter sys_jump",-1);
	vcdp->declBus(c+25,"aquila_testharness aquila_core RISCV_CORE0 Program_Counter sys_jump_csr_data",-1,31,0);
	vcdp->declBit(c+414,"aquila_testharness aquila_core RISCV_CORE0 Program_Counter cond_branch_hit_EXE",-1);
	vcdp->declBit(c+416,"aquila_testharness aquila_core RISCV_CORE0 Program_Counter cond_branch_result_EXE",-1);
	vcdp->declBit(c+418,"aquila_testharness aquila_core RISCV_CORE0 Program_Counter uncond_branch_hit_EXE",-1);
	vcdp->declBit(c+41,"aquila_testharness aquila_core RISCV_CORE0 Program_Counter cond_branch_misprediction",-1);
	vcdp->declBit(c+34,"aquila_testharness aquila_core RISCV_CORE0 Program_Counter branch_taken",-1);
	vcdp->declBus(c+35,"aquila_testharness aquila_core RISCV_CORE0 Program_Counter branch_target_addr",-1,31,0);
	vcdp->declBus(c+401,"aquila_testharness aquila_core RISCV_CORE0 Program_Counter branch_restore_addr",-1,31,0);
	vcdp->declBus(c+354,"aquila_testharness aquila_core RISCV_CORE0 Program_Counter pc_o",-1,31,0);
	vcdp->declBus(c+354,"aquila_testharness aquila_core RISCV_CORE0 Program_Counter pc_r",-1,31,0);
	vcdp->declBit(c+3058,"aquila_testharness aquila_core RISCV_CORE0 Program_Counter rv32",-1);
	vcdp->declBus(c+3059,"aquila_testharness aquila_core RISCV_CORE0 Program_Counter pc_offset",-1,2,0);
	vcdp->declBus(c+537,"aquila_testharness aquila_core RISCV_CORE0 Program_Counter pc_increment",-1,31,0);
	vcdp->declBus(c+3046,"aquila_testharness aquila_core RISCV_CORE0 Fetch DATA_WIDTH",-1,31,0);
	vcdp->declBit(c+3027,"aquila_testharness aquila_core RISCV_CORE0 Fetch clk",-1);
	vcdp->declBit(c+1,"aquila_testharness aquila_core RISCV_CORE0 Fetch rst",-1);
	vcdp->declBit(c+109,"aquila_testharness aquila_core RISCV_CORE0 Fetch stall",-1);
	vcdp->declBit(c+110,"aquila_testharness aquila_core RISCV_CORE0 Fetch flush",-1);
	vcdp->declBus(c+20,"aquila_testharness aquila_core RISCV_CORE0 Fetch instruction",-1,31,0);
	vcdp->declBus(c+354,"aquila_testharness aquila_core RISCV_CORE0 Fetch pc",-1,31,0);
	vcdp->declBit(c+38,"aquila_testharness aquila_core RISCV_CORE0 Fetch cond_branch_hit_IF",-1);
	vcdp->declBit(c+39,"aquila_testharness aquila_core RISCV_CORE0 Fetch cond_branch_result_IF",-1);
	vcdp->declBit(c+40,"aquila_testharness aquila_core RISCV_CORE0 Fetch uncond_branch_hit_IF",-1);
	vcdp->declBus(c+370,"aquila_testharness aquila_core RISCV_CORE0 Fetch instruction_o",-1,31,0);
	vcdp->declBus(c+371,"aquila_testharness aquila_core RISCV_CORE0 Fetch pc_o",-1,31,0);
	vcdp->declBit(c+372,"aquila_testharness aquila_core RISCV_CORE0 Fetch instr_valid_o",-1);
	vcdp->declBit(c+413,"aquila_testharness aquila_core RISCV_CORE0 Fetch cond_branch_hit_ID",-1);
	vcdp->declBit(c+415,"aquila_testharness aquila_core RISCV_CORE0 Fetch cond_branch_result_ID",-1);
	vcdp->declBit(c+417,"aquila_testharness aquila_core RISCV_CORE0 Fetch uncond_branch_hit_ID",-1);
	vcdp->declBus(c+3046,"aquila_testharness aquila_core RISCV_CORE0 Decode DATA_WIDTH",-1,31,0);
	vcdp->declBit(c+3027,"aquila_testharness aquila_core RISCV_CORE0 Decode clk",-1);
	vcdp->declBit(c+1,"aquila_testharness aquila_core RISCV_CORE0 Decode rst",-1);
	vcdp->declBit(c+50,"aquila_testharness aquila_core RISCV_CORE0 Decode stall",-1);
	vcdp->declBit(c+111,"aquila_testharness aquila_core RISCV_CORE0 Decode flush",-1);
	vcdp->declBus(c+371,"aquila_testharness aquila_core RISCV_CORE0 Decode pc",-1,31,0);
	vcdp->declBus(c+370,"aquila_testharness aquila_core RISCV_CORE0 Decode instruction",-1,31,0);
	vcdp->declBit(c+372,"aquila_testharness aquila_core RISCV_CORE0 Decode instr_valid",-1);
	vcdp->declBit(c+413,"aquila_testharness aquila_core RISCV_CORE0 Decode cond_branch_hit_ID",-1);
	vcdp->declBit(c+415,"aquila_testharness aquila_core RISCV_CORE0 Decode cond_branch_result_ID",-1);
	vcdp->declBit(c+417,"aquila_testharness aquila_core RISCV_CORE0 Decode uncond_branch_hit_ID",-1);
	vcdp->declBus(c+31,"aquila_testharness aquila_core RISCV_CORE0 Decode rs1_data",-1,31,0);
	vcdp->declBus(c+32,"aquila_testharness aquila_core RISCV_CORE0 Decode rs2_data",-1,31,0);
	vcdp->declBus(c+373,"aquila_testharness aquila_core RISCV_CORE0 Decode rs1_addr2regfile_o",-1,4,0);
	vcdp->declBus(c+374,"aquila_testharness aquila_core RISCV_CORE0 Decode rs2_addr2regfile_o",-1,4,0);
	vcdp->declBit(c+23,"aquila_testharness aquila_core RISCV_CORE0 Decode sys_jump_o",-1);
	vcdp->declBus(c+24,"aquila_testharness aquila_core RISCV_CORE0 Decode sys_jump_csr_addr_o",-1,11,0);
	vcdp->declBit(c+33,"aquila_testharness aquila_core RISCV_CORE0 Decode illegal_instr_o",-1);
	vcdp->declBus(c+375,"aquila_testharness aquila_core RISCV_CORE0 Decode pc_o",-1,31,0);
	vcdp->declBus(c+376,"aquila_testharness aquila_core RISCV_CORE0 Decode imm_o",-1,31,0);
	vcdp->declBus(c+388,"aquila_testharness aquila_core RISCV_CORE0 Decode inputA_sel_o",-1,1,0);
	vcdp->declBus(c+389,"aquila_testharness aquila_core RISCV_CORE0 Decode inputB_sel_o",-1,1,0);
	vcdp->declBus(c+392,"aquila_testharness aquila_core RISCV_CORE0 Decode operation_sel_o",-1,2,0);
	vcdp->declBit(c+382,"aquila_testharness aquila_core RISCV_CORE0 Decode mem_load_ext_sel_o",-1);
	vcdp->declBit(c+394,"aquila_testharness aquila_core RISCV_CORE0 Decode alu_muldiv_sel_o",-1);
	vcdp->declBit(c+395,"aquila_testharness aquila_core RISCV_CORE0 Decode shift_sel_o",-1);
	vcdp->declBit(c+396,"aquila_testharness aquila_core RISCV_CORE0 Decode is_branch_o",-1);
	vcdp->declBit(c+397,"aquila_testharness aquila_core RISCV_CORE0 Decode is_jal_o",-1);
	vcdp->declBit(c+398,"aquila_testharness aquila_core RISCV_CORE0 Decode is_jalr_o",-1);
	vcdp->declBit(c+414,"aquila_testharness aquila_core RISCV_CORE0 Decode cond_branch_hit_EXE",-1);
	vcdp->declBit(c+416,"aquila_testharness aquila_core RISCV_CORE0 Decode cond_branch_result_EXE",-1);
	vcdp->declBit(c+418,"aquila_testharness aquila_core RISCV_CORE0 Decode uncond_branch_hit_EXE",-1);
	vcdp->declBit(c+399,"aquila_testharness aquila_core RISCV_CORE0 Decode is_csr_instr_o",-1);
	vcdp->declBus(c+393,"aquila_testharness aquila_core RISCV_CORE0 Decode csr_addr_o",-1,11,0);
	vcdp->declBus(c+387,"aquila_testharness aquila_core RISCV_CORE0 Decode csr_imm_o",-1,4,0);
	vcdp->declBit(c+383,"aquila_testharness aquila_core RISCV_CORE0 Decode instr_valid_o",-1);
	vcdp->declBit(c+379,"aquila_testharness aquila_core RISCV_CORE0 Decode regfile_we_o",-1);
	vcdp->declBus(c+391,"aquila_testharness aquila_core RISCV_CORE0 Decode regfile_input_sel_o",-1,2,0);
	vcdp->declBit(c+380,"aquila_testharness aquila_core RISCV_CORE0 Decode mem_we_o",-1);
	vcdp->declBit(c+381,"aquila_testharness aquila_core RISCV_CORE0 Decode mem_re_o",-1);
	vcdp->declBus(c+390,"aquila_testharness aquila_core RISCV_CORE0 Decode mem_input_sel_o",-1,1,0);
	vcdp->declBus(c+384,"aquila_testharness aquila_core RISCV_CORE0 Decode rd_addr_o",-1,4,0);
	vcdp->declBus(c+385,"aquila_testharness aquila_core RISCV_CORE0 Decode rs1_addr_o",-1,4,0);
	vcdp->declBus(c+386,"aquila_testharness aquila_core RISCV_CORE0 Decode rs2_addr_o",-1,4,0);
	vcdp->declBus(c+377,"aquila_testharness aquila_core RISCV_CORE0 Decode rs1_data_o",-1,31,0);
	vcdp->declBus(c+378,"aquila_testharness aquila_core RISCV_CORE0 Decode rs2_data_o",-1,31,0);
	vcdp->declBus(c+112,"aquila_testharness aquila_core RISCV_CORE0 Decode imm",-1,31,0);
	vcdp->declBus(c+538,"aquila_testharness aquila_core RISCV_CORE0 Decode rd_addr",-1,4,0);
	vcdp->declBit(c+113,"aquila_testharness aquila_core RISCV_CORE0 Decode mem_we",-1);
	vcdp->declBit(c+114,"aquila_testharness aquila_core RISCV_CORE0 Decode mem_re",-1);
	vcdp->declBit(c+115,"aquila_testharness aquila_core RISCV_CORE0 Decode regfile_we",-1);
	vcdp->declBus(c+116,"aquila_testharness aquila_core RISCV_CORE0 Decode inputA_sel",-1,1,0);
	vcdp->declBus(c+117,"aquila_testharness aquila_core RISCV_CORE0 Decode inputB_sel",-1,1,0);
	vcdp->declBus(c+118,"aquila_testharness aquila_core RISCV_CORE0 Decode regfile_input_sel",-1,2,0);
	vcdp->declBus(c+119,"aquila_testharness aquila_core RISCV_CORE0 Decode operation_sel",-1,2,0);
	vcdp->declBus(c+539,"aquila_testharness aquila_core RISCV_CORE0 Decode mem_input_sel",-1,1,0);
	vcdp->declBit(c+540,"aquila_testharness aquila_core RISCV_CORE0 Decode mem_load_ext_sel",-1);
	vcdp->declBit(c+120,"aquila_testharness aquila_core RISCV_CORE0 Decode alu_muldiv_sel",-1);
	vcdp->declBit(c+541,"aquila_testharness aquila_core RISCV_CORE0 Decode shift_sel",-1);
	vcdp->declBit(c+121,"aquila_testharness aquila_core RISCV_CORE0 Decode is_branch",-1);
	vcdp->declBit(c+122,"aquila_testharness aquila_core RISCV_CORE0 Decode is_jal",-1);
	vcdp->declBit(c+123,"aquila_testharness aquila_core RISCV_CORE0 Decode is_jalr",-1);
	vcdp->declBit(c+124,"aquila_testharness aquila_core RISCV_CORE0 Decode is_csr_instr",-1);
	vcdp->declBus(c+542,"aquila_testharness aquila_core RISCV_CORE0 Decode csr_addr",-1,11,0);
	vcdp->declBus(c+373,"aquila_testharness aquila_core RISCV_CORE0 Decode csr_imm",-1,4,0);
	vcdp->declBus(c+370,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_instr",-1,31,0);
	vcdp->declBus(c+543,"aquila_testharness aquila_core RISCV_CORE0 Decode opcode",-1,6,0);
	vcdp->declBus(c+374,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_shamt",-1,4,0);
	vcdp->declBus(c+544,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct3",-1,2,0);
	vcdp->declBus(c+545,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct7",-1,6,0);
	vcdp->declBus(c+546,"aquila_testharness aquila_core RISCV_CORE0 Decode immI",-1,31,0);
	vcdp->declBus(c+547,"aquila_testharness aquila_core RISCV_CORE0 Decode immS",-1,31,0);
	vcdp->declBus(c+548,"aquila_testharness aquila_core RISCV_CORE0 Decode immB",-1,31,0);
	vcdp->declBus(c+549,"aquila_testharness aquila_core RISCV_CORE0 Decode immU",-1,31,0);
	vcdp->declBus(c+550,"aquila_testharness aquila_core RISCV_CORE0 Decode immJ",-1,31,0);
	vcdp->declBit(c+551,"aquila_testharness aquila_core RISCV_CORE0 Decode opcode_4_2_000",-1);
	vcdp->declBit(c+552,"aquila_testharness aquila_core RISCV_CORE0 Decode opcode_4_2_001",-1);
	vcdp->declBit(c+553,"aquila_testharness aquila_core RISCV_CORE0 Decode opcode_4_2_010",-1);
	vcdp->declBit(c+554,"aquila_testharness aquila_core RISCV_CORE0 Decode opcode_4_2_011",-1);
	vcdp->declBit(c+555,"aquila_testharness aquila_core RISCV_CORE0 Decode opcode_4_2_100",-1);
	vcdp->declBit(c+556,"aquila_testharness aquila_core RISCV_CORE0 Decode opcode_4_2_101",-1);
	vcdp->declBit(c+557,"aquila_testharness aquila_core RISCV_CORE0 Decode opcode_4_2_110",-1);
	vcdp->declBit(c+558,"aquila_testharness aquila_core RISCV_CORE0 Decode opcode_4_2_111",-1);
	vcdp->declBit(c+559,"aquila_testharness aquila_core RISCV_CORE0 Decode opcode_6_5_00",-1);
	vcdp->declBit(c+560,"aquila_testharness aquila_core RISCV_CORE0 Decode opcode_6_5_01",-1);
	vcdp->declBit(c+561,"aquila_testharness aquila_core RISCV_CORE0 Decode opcode_6_5_10",-1);
	vcdp->declBit(c+562,"aquila_testharness aquila_core RISCV_CORE0 Decode opcode_6_5_11",-1);
	vcdp->declBit(c+563,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct3_000",-1);
	vcdp->declBit(c+564,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct3_001",-1);
	vcdp->declBit(c+565,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct3_010",-1);
	vcdp->declBit(c+566,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct3_011",-1);
	vcdp->declBit(c+567,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct3_100",-1);
	vcdp->declBit(c+568,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct3_101",-1);
	vcdp->declBit(c+569,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct3_110",-1);
	vcdp->declBit(c+570,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct3_111",-1);
	vcdp->declBit(c+571,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct7_0000000",-1);
	vcdp->declBit(c+541,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct7_0100000",-1);
	vcdp->declBit(c+572,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct7_0000001",-1);
	vcdp->declBit(c+573,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct7_0000101",-1);
	vcdp->declBit(c+574,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct7_0001001",-1);
	vcdp->declBit(c+575,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct7_0001101",-1);
	vcdp->declBit(c+576,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct7_0010101",-1);
	vcdp->declBit(c+577,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct7_0100001",-1);
	vcdp->declBit(c+578,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct7_0010001",-1);
	vcdp->declBit(c+579,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct7_0101101",-1);
	vcdp->declBit(c+580,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct7_1111111",-1);
	vcdp->declBit(c+581,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct7_0000100",-1);
	vcdp->declBit(c+582,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct7_0001000",-1);
	vcdp->declBit(c+583,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct7_0001100",-1);
	vcdp->declBit(c+584,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct7_0101100",-1);
	vcdp->declBit(c+585,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct7_0010000",-1);
	vcdp->declBit(c+586,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct7_0010100",-1);
	vcdp->declBit(c+587,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct7_1100000",-1);
	vcdp->declBit(c+588,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct7_1110000",-1);
	vcdp->declBit(c+589,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct7_1010000",-1);
	vcdp->declBit(c+590,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct7_1101000",-1);
	vcdp->declBit(c+591,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct7_1111000",-1);
	vcdp->declBit(c+592,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct7_1010001",-1);
	vcdp->declBit(c+593,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct7_1110001",-1);
	vcdp->declBit(c+594,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct7_1100001",-1);
	vcdp->declBit(c+595,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_funct7_1101001",-1);
	vcdp->declBit(c+125,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_op",-1);
	vcdp->declBit(c+126,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_op_imm",-1);
	vcdp->declBit(c+122,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_jal",-1);
	vcdp->declBit(c+123,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_jalr",-1);
	vcdp->declBit(c+127,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_load",-1);
	vcdp->declBit(c+113,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_store",-1);
	vcdp->declBit(c+121,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_branch",-1);
	vcdp->declBit(c+128,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_lui",-1);
	vcdp->declBit(c+129,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_auipc",-1);
	vcdp->declBit(c+130,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_miscmem",-1);
	vcdp->declBit(c+131,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_system",-1);
	vcdp->declBit(c+132,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_amo",-1);
	vcdp->declBit(c+120,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32m",-1);
	vcdp->declBit(c+133,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_imm_seli",-1);
	vcdp->declBit(c+113,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_imm_sels",-1);
	vcdp->declBit(c+121,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_imm_selb",-1);
	vcdp->declBit(c+134,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_imm_selu",-1);
	vcdp->declBit(c+122,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_imm_selj",-1);
	vcdp->declBit(c+135,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_sub",-1);
	vcdp->declBit(c+136,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_beq",-1);
	vcdp->declBit(c+137,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_bne",-1);
	vcdp->declBit(c+138,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_blt",-1);
	vcdp->declBit(c+139,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_bgt",-1);
	vcdp->declBit(c+140,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_bltu",-1);
	vcdp->declBit(c+141,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_bgtu",-1);
	vcdp->declBit(c+142,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_fence",-1);
	vcdp->declBit(c+143,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_fence_i",-1);
	vcdp->declBit(c+144,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_csrrw",-1);
	vcdp->declBit(c+145,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_csrrs",-1);
	vcdp->declBit(c+146,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_csrrc",-1);
	vcdp->declBit(c+147,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_csrrwi",-1);
	vcdp->declBit(c+148,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_csrrsi",-1);
	vcdp->declBit(c+149,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_csrrci",-1);
	vcdp->declBit(c+124,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_csr",-1);
	vcdp->declBit(c+150,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_sys_op",-1);
	vcdp->declBit(c+151,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_ecall",-1);
	vcdp->declBit(c+152,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_ebreak",-1);
	vcdp->declBit(c+153,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_mret",-1);
	vcdp->declBit(c+154,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_lb",-1);
	vcdp->declBit(c+155,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_lh",-1);
	vcdp->declBit(c+156,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_lw",-1);
	vcdp->declBit(c+157,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_lbu",-1);
	vcdp->declBit(c+158,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_lhu",-1);
	vcdp->declBit(c+159,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_sb",-1);
	vcdp->declBit(c+160,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_sh",-1);
	vcdp->declBit(c+161,"aquila_testharness aquila_core RISCV_CORE0 Decode rv32_sw",-1);
	vcdp->declBus(c+3046,"aquila_testharness aquila_core RISCV_CORE0 Execute DATA_WIDTH",-1,31,0);
	vcdp->declBit(c+3027,"aquila_testharness aquila_core RISCV_CORE0 Execute clk",-1);
	vcdp->declBit(c+1,"aquila_testharness aquila_core RISCV_CORE0 Execute rst",-1);
	vcdp->declBus(c+375,"aquila_testharness aquila_core RISCV_CORE0 Execute pc",-1,31,0);
	vcdp->declBit(c+50,"aquila_testharness aquila_core RISCV_CORE0 Execute stall",-1);
	vcdp->declBus(c+376,"aquila_testharness aquila_core RISCV_CORE0 Execute imm",-1,31,0);
	vcdp->declBus(c+388,"aquila_testharness aquila_core RISCV_CORE0 Execute inputA_sel",-1,1,0);
	vcdp->declBus(c+389,"aquila_testharness aquila_core RISCV_CORE0 Execute inputB_sel",-1,1,0);
	vcdp->declBus(c+392,"aquila_testharness aquila_core RISCV_CORE0 Execute operation_sel",-1,2,0);
	vcdp->declBit(c+394,"aquila_testharness aquila_core RISCV_CORE0 Execute alu_muldiv_sel",-1);
	vcdp->declBit(c+395,"aquila_testharness aquila_core RISCV_CORE0 Execute shift_sel",-1);
	vcdp->declBit(c+396,"aquila_testharness aquila_core RISCV_CORE0 Execute is_branch",-1);
	vcdp->declBit(c+397,"aquila_testharness aquila_core RISCV_CORE0 Execute is_jal",-1);
	vcdp->declBit(c+398,"aquila_testharness aquila_core RISCV_CORE0 Execute is_jalr",-1);
	vcdp->declBit(c+414,"aquila_testharness aquila_core RISCV_CORE0 Execute cond_branch_hit_EXE",-1);
	vcdp->declBit(c+416,"aquila_testharness aquila_core RISCV_CORE0 Execute cond_branch_result_EXE",-1);
	vcdp->declBit(c+379,"aquila_testharness aquila_core RISCV_CORE0 Execute regfile_we",-1);
	vcdp->declBus(c+391,"aquila_testharness aquila_core RISCV_CORE0 Execute regfile_input_sel",-1,2,0);
	vcdp->declBit(c+380,"aquila_testharness aquila_core RISCV_CORE0 Execute mem_we",-1);
	vcdp->declBit(c+381,"aquila_testharness aquila_core RISCV_CORE0 Execute mem_re",-1);
	vcdp->declBus(c+390,"aquila_testharness aquila_core RISCV_CORE0 Execute mem_input_sel",-1,1,0);
	vcdp->declBit(c+382,"aquila_testharness aquila_core RISCV_CORE0 Execute mem_load_ext_sel",-1);
	vcdp->declBus(c+384,"aquila_testharness aquila_core RISCV_CORE0 Execute rd_addr",-1,4,0);
	vcdp->declBus(c+36,"aquila_testharness aquila_core RISCV_CORE0 Execute csr_data",-1,31,0);
	vcdp->declBus(c+29,"aquila_testharness aquila_core RISCV_CORE0 Execute rs1_data",-1,31,0);
	vcdp->declBus(c+30,"aquila_testharness aquila_core RISCV_CORE0 Execute rs2_data",-1,31,0);
	vcdp->declBus(c+401,"aquila_testharness aquila_core RISCV_CORE0 Execute pc_o",-1,31,0);
	vcdp->declBus(c+35,"aquila_testharness aquila_core RISCV_CORE0 Execute branch_target_addr_o",-1,31,0);
	vcdp->declBit(c+34,"aquila_testharness aquila_core RISCV_CORE0 Execute branch_taken_o",-1);
	vcdp->declBit(c+41,"aquila_testharness aquila_core RISCV_CORE0 Execute cond_branch_misprediction_o",-1);
	vcdp->declBit(c+400,"aquila_testharness aquila_core RISCV_CORE0 Execute stall_from_exe_o",-1);
	vcdp->declBit(c+353,"aquila_testharness aquila_core RISCV_CORE0 Execute mem_we_o",-1);
	vcdp->declBit(c+402,"aquila_testharness aquila_core RISCV_CORE0 Execute mem_re_o",-1);
	vcdp->declBus(c+405,"aquila_testharness aquila_core RISCV_CORE0 Execute rs2_data_o",-1,31,0);
	vcdp->declBus(c+355,"aquila_testharness aquila_core RISCV_CORE0 Execute mem_addr_o",-1,31,0);
	vcdp->declBus(c+408,"aquila_testharness aquila_core RISCV_CORE0 Execute mem_input_sel_o",-1,1,0);
	vcdp->declBus(c+409,"aquila_testharness aquila_core RISCV_CORE0 Execute regfile_input_sel_o",-1,2,0);
	vcdp->declBit(c+403,"aquila_testharness aquila_core RISCV_CORE0 Execute regfile_we_o",-1);
	vcdp->declBus(c+407,"aquila_testharness aquila_core RISCV_CORE0 Execute rd_addr_o",-1,4,0);
	vcdp->declBus(c+406,"aquila_testharness aquila_core RISCV_CORE0 Execute p_data_o",-1,31,0);
	vcdp->declBit(c+404,"aquila_testharness aquila_core RISCV_CORE0 Execute mem_load_ext_sel_o",-1);
	vcdp->declBus(c+162,"aquila_testharness aquila_core RISCV_CORE0 Execute inputA",-1,31,0);
	vcdp->declBus(c+163,"aquila_testharness aquila_core RISCV_CORE0 Execute inputB",-1,31,0);
	vcdp->declBus(c+35,"aquila_testharness aquila_core RISCV_CORE0 Execute alu_result",-1,31,0);
	vcdp->declBus(c+596,"aquila_testharness aquila_core RISCV_CORE0 Execute muldiv_result",-1,31,0);
	vcdp->declBit(c+164,"aquila_testharness aquila_core RISCV_CORE0 Execute compare_result",-1);
	vcdp->declBit(c+3060,"aquila_testharness aquila_core RISCV_CORE0 Execute stall_from_muldiv",-1);
	vcdp->declBit(c+597,"aquila_testharness aquila_core RISCV_CORE0 Execute muldiv_ready",-1);
	vcdp->declBus(c+165,"aquila_testharness aquila_core RISCV_CORE0 Execute result",-1,31,0);
	vcdp->declBus(c+166,"aquila_testharness aquila_core RISCV_CORE0 Execute mem_addr",-1,31,0);
	vcdp->declBus(c+167,"aquila_testharness aquila_core RISCV_CORE0 Execute alu_operation",-1,2,0);
	vcdp->declBus(c+392,"aquila_testharness aquila_core RISCV_CORE0 Execute muldiv_operation",-1,2,0);
	vcdp->declBit(c+168,"aquila_testharness aquila_core RISCV_CORE0 Execute muldiv_req",-1);
	vcdp->declBus(c+392,"aquila_testharness aquila_core RISCV_CORE0 Execute branch_operation",-1,2,0);
	vcdp->declBus(c+3046,"aquila_testharness aquila_core RISCV_CORE0 Execute ALU DATA_WIDTH",-1,31,0);
	vcdp->declBus(c+162,"aquila_testharness aquila_core RISCV_CORE0 Execute ALU a",-1,31,0);
	vcdp->declBus(c+163,"aquila_testharness aquila_core RISCV_CORE0 Execute ALU b",-1,31,0);
	vcdp->declBus(c+167,"aquila_testharness aquila_core RISCV_CORE0 Execute ALU operation_sel",-1,2,0);
	vcdp->declBit(c+395,"aquila_testharness aquila_core RISCV_CORE0 Execute ALU shift_sel",-1);
	vcdp->declBus(c+35,"aquila_testharness aquila_core RISCV_CORE0 Execute ALU alu_result",-1,31,0);
	vcdp->declBus(c+3061,"aquila_testharness aquila_core RISCV_CORE0 Execute ALU ones",-1,31,0);
	vcdp->declBus(c+169,"aquila_testharness aquila_core RISCV_CORE0 Execute ALU result_add",-1,31,0);
	vcdp->declBus(c+170,"aquila_testharness aquila_core RISCV_CORE0 Execute ALU result_sll",-1,31,0);
	vcdp->declBus(c+171,"aquila_testharness aquila_core RISCV_CORE0 Execute ALU result_slt",-1,31,0);
	vcdp->declBus(c+172,"aquila_testharness aquila_core RISCV_CORE0 Execute ALU result_sltu",-1,31,0);
	vcdp->declBus(c+173,"aquila_testharness aquila_core RISCV_CORE0 Execute ALU result_xor",-1,31,0);
	vcdp->declBus(c+174,"aquila_testharness aquila_core RISCV_CORE0 Execute ALU result_sr",-1,31,0);
	vcdp->declBus(c+175,"aquila_testharness aquila_core RISCV_CORE0 Execute ALU result_or",-1,31,0);
	vcdp->declBus(c+176,"aquila_testharness aquila_core RISCV_CORE0 Execute ALU result_and",-1,31,0);
	vcdp->declBit(c+177,"aquila_testharness aquila_core RISCV_CORE0 Execute ALU operation_add",-1);
	vcdp->declBit(c+178,"aquila_testharness aquila_core RISCV_CORE0 Execute ALU operation_sll",-1);
	vcdp->declBit(c+179,"aquila_testharness aquila_core RISCV_CORE0 Execute ALU operation_slt",-1);
	vcdp->declBit(c+180,"aquila_testharness aquila_core RISCV_CORE0 Execute ALU operation_sltu",-1);
	vcdp->declBit(c+181,"aquila_testharness aquila_core RISCV_CORE0 Execute ALU operation_xor",-1);
	vcdp->declBit(c+182,"aquila_testharness aquila_core RISCV_CORE0 Execute ALU operation_sr",-1);
	vcdp->declBit(c+183,"aquila_testharness aquila_core RISCV_CORE0 Execute ALU operation_or",-1);
	vcdp->declBit(c+184,"aquila_testharness aquila_core RISCV_CORE0 Execute ALU operation_and",-1);
	vcdp->declBus(c+3046,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv DATA_WIDTH",-1,31,0);
	vcdp->declBit(c+3027,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv clk",-1);
	vcdp->declBit(c+1,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv rst",-1);
	vcdp->declBus(c+162,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv a",-1,31,0);
	vcdp->declBus(c+163,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv b",-1,31,0);
	vcdp->declBit(c+168,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv req",-1);
	vcdp->declBus(c+392,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv operation_sel",-1,2,0);
	vcdp->declBus(c+596,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv muldiv_result",-1,31,0);
	vcdp->declBit(c+597,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv ready",-1);
	vcdp->declBit(c+598,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv operation_mul",-1);
	vcdp->declBit(c+599,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv operation_mulh",-1);
	vcdp->declBit(c+600,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv operation_mulhsu",-1);
	vcdp->declBit(c+601,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv operation_mulhu",-1);
	vcdp->declBit(c+602,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv operation_div",-1);
	vcdp->declBit(c+603,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv operation_divu",-1);
	vcdp->declBit(c+604,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv operation_rem",-1);
	vcdp->declBit(c+605,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv operation_remu",-1);
	vcdp->declBit(c+606,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv is_divider",-1);
	vcdp->declBit(c+185,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv is_a_zero",-1);
	vcdp->declBit(c+186,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv is_b_zero",-1);
	vcdp->declBit(c+187,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv is_a_neg",-1);
	vcdp->declBit(c+188,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv is_b_neg",-1);
	vcdp->declBit(c+189,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv signed_adjust",-1);
	vcdp->declBit(c+190,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv mul_overflow",-1);
	vcdp->declBus(c+191,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv op_a",-1,31,0);
	vcdp->declBus(c+192,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv op_b",-1,31,0);
	vcdp->declBit(c+607,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv is_calc_done",-1);
	vcdp->declBus(c+608,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv reg32",-1,31,0);
	vcdp->declArray(c+609,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv result",-1,64,0);
	vcdp->declBus(c+612,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv cnt",-1,5,0);
	vcdp->declBus(c+613,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv mull",-1,31,0);
	vcdp->declBus(c+614,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv mulh",-1,31,0);
	vcdp->declBus(c+613,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv quotient",-1,31,0);
	vcdp->declBus(c+615,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv remainder",-1,31,0);
	vcdp->declBus(c+3062,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv S_IDLE",-1,1,0);
	vcdp->declBus(c+3063,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv S_CALC",-1,1,0);
	vcdp->declBus(c+3064,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv S_SIGN_ADJUST",-1,1,0);
	vcdp->declBus(c+3065,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv S_DONE",-1,1,0);
	vcdp->declBus(c+616,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv S",-1,1,0);
	vcdp->declBus(c+193,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv S_nxt",-1,1,0);
	vcdp->declBit(c+617,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv mul_add",-1);
	vcdp->declBit(c+618,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv div_sub",-1);
	vcdp->declQuad(c+194,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv adder_opa",-1,32,0);
	vcdp->declQuad(c+619,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv adder_opb",-1,32,0);
	vcdp->declQuad(c+196,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv adder_tmp",-1,32,0);
	vcdp->declArray(c+198,"aquila_testharness aquila_core RISCV_CORE0 Execute MulDiv result_tmp",-1,64,0);
	vcdp->declBus(c+3046,"aquila_testharness aquila_core RISCV_CORE0 Execute BCU DATA_WIDTH",-1,31,0);
	vcdp->declBus(c+29,"aquila_testharness aquila_core RISCV_CORE0 Execute BCU a",-1,31,0);
	vcdp->declBus(c+30,"aquila_testharness aquila_core RISCV_CORE0 Execute BCU b",-1,31,0);
	vcdp->declBus(c+392,"aquila_testharness aquila_core RISCV_CORE0 Execute BCU operation_sel",-1,2,0);
	vcdp->declBit(c+164,"aquila_testharness aquila_core RISCV_CORE0 Execute BCU compare_result",-1);
	vcdp->declBus(c+29,"aquila_testharness aquila_core RISCV_CORE0 Execute BCU signed_a",-1,31,0);
	vcdp->declBus(c+30,"aquila_testharness aquila_core RISCV_CORE0 Execute BCU signed_b",-1,31,0);
	vcdp->declBit(c+201,"aquila_testharness aquila_core RISCV_CORE0 Execute BCU result_beq",-1);
	vcdp->declBit(c+202,"aquila_testharness aquila_core RISCV_CORE0 Execute BCU result_bne",-1);
	vcdp->declBit(c+203,"aquila_testharness aquila_core RISCV_CORE0 Execute BCU result_blt",-1);
	vcdp->declBit(c+204,"aquila_testharness aquila_core RISCV_CORE0 Execute BCU result_bge",-1);
	vcdp->declBit(c+205,"aquila_testharness aquila_core RISCV_CORE0 Execute BCU result_bltu",-1);
	vcdp->declBit(c+206,"aquila_testharness aquila_core RISCV_CORE0 Execute BCU result_bgeu",-1);
	vcdp->declBit(c+598,"aquila_testharness aquila_core RISCV_CORE0 Execute BCU operation_beq",-1);
	vcdp->declBit(c+599,"aquila_testharness aquila_core RISCV_CORE0 Execute BCU operation_bne",-1);
	vcdp->declBit(c+602,"aquila_testharness aquila_core RISCV_CORE0 Execute BCU operation_blt",-1);
	vcdp->declBit(c+603,"aquila_testharness aquila_core RISCV_CORE0 Execute BCU operation_bge",-1);
	vcdp->declBit(c+604,"aquila_testharness aquila_core RISCV_CORE0 Execute BCU operation_bltu",-1);
	vcdp->declBit(c+605,"aquila_testharness aquila_core RISCV_CORE0 Execute BCU operation_bgeu",-1);
	vcdp->declBus(c+3046,"aquila_testharness aquila_core RISCV_CORE0 Memory_Access DATA_WIDTH",-1,31,0);
	vcdp->declBus(c+405,"aquila_testharness aquila_core RISCV_CORE0 Memory_Access unaligned_data",-1,31,0);
	vcdp->declBus(c+621,"aquila_testharness aquila_core RISCV_CORE0 Memory_Access mem_addr_alignment",-1,1,0);
	vcdp->declBus(c+408,"aquila_testharness aquila_core RISCV_CORE0 Memory_Access mem_input_sel",-1,1,0);
	vcdp->declBus(c+21,"aquila_testharness aquila_core RISCV_CORE0 Memory_Access data_o",-1,31,0);
	vcdp->declBus(c+351,"aquila_testharness aquila_core RISCV_CORE0 Memory_Access byte_write_sel",-1,3,0);
	vcdp->declBit(c+410,"aquila_testharness aquila_core RISCV_CORE0 Memory_Access memory_alignment_exception",-1);
	vcdp->declBus(c+3046,"aquila_testharness aquila_core RISCV_CORE0 Writeback DATA_WIDTH",-1,31,0);
	vcdp->declBit(c+3027,"aquila_testharness aquila_core RISCV_CORE0 Writeback clk",-1);
	vcdp->declBit(c+1,"aquila_testharness aquila_core RISCV_CORE0 Writeback rst",-1);
	vcdp->declBit(c+50,"aquila_testharness aquila_core RISCV_CORE0 Writeback stall",-1);
	vcdp->declBit(c+403,"aquila_testharness aquila_core RISCV_CORE0 Writeback regfile_we",-1);
	vcdp->declBus(c+407,"aquila_testharness aquila_core RISCV_CORE0 Writeback rd_addr",-1,4,0);
	vcdp->declBus(c+409,"aquila_testharness aquila_core RISCV_CORE0 Writeback regfile_input_sel",-1,2,0);
	vcdp->declBit(c+404,"aquila_testharness aquila_core RISCV_CORE0 Writeback mem_load_ext_sel",-1);
	vcdp->declBus(c+621,"aquila_testharness aquila_core RISCV_CORE0 Writeback mem_addr_alignment",-1,1,0);
	vcdp->declBus(c+406,"aquila_testharness aquila_core RISCV_CORE0 Writeback p_data",-1,31,0);
	vcdp->declBus(c+16,"aquila_testharness aquila_core RISCV_CORE0 Writeback mem_data",-1,31,0);
	vcdp->declBit(c+411,"aquila_testharness aquila_core RISCV_CORE0 Writeback rd_we_o",-1);
	vcdp->declBus(c+412,"aquila_testharness aquila_core RISCV_CORE0 Writeback rd_addr_o",-1,4,0);
	vcdp->declBus(c+37,"aquila_testharness aquila_core RISCV_CORE0 Writeback rd_data_o",-1,31,0);
	vcdp->declBus(c+622,"aquila_testharness aquila_core RISCV_CORE0 Writeback regfile_input_sel_r",-1,2,0);
	vcdp->declBit(c+411,"aquila_testharness aquila_core RISCV_CORE0 Writeback regfile_we_r",-1);
	vcdp->declBus(c+412,"aquila_testharness aquila_core RISCV_CORE0 Writeback rd_addr_r",-1,4,0);
	vcdp->declBit(c+623,"aquila_testharness aquila_core RISCV_CORE0 Writeback mem_load_ext_sel_r",-1);
	vcdp->declBus(c+624,"aquila_testharness aquila_core RISCV_CORE0 Writeback mem_addr_alignment_r",-1,1,0);
	vcdp->declBus(c+625,"aquila_testharness aquila_core RISCV_CORE0 Writeback p_data_r",-1,31,0);
	vcdp->declBus(c+626,"aquila_testharness aquila_core RISCV_CORE0 Writeback mem_data_r",-1,31,0);
	vcdp->declBus(c+207,"aquila_testharness aquila_core RISCV_CORE0 Writeback aligned_data_o",-1,31,0);
	vcdp->declBus(c+37,"aquila_testharness aquila_core RISCV_CORE0 Writeback rd_data",-1,31,0);
	vcdp->declBus(c+3049,"aquila_testharness aquila_core RISCV_CORE0 CSR HART_ID",-1,31,0);
	vcdp->declBus(c+3046,"aquila_testharness aquila_core RISCV_CORE0 CSR ADDR_WIDTH",-1,31,0);
	vcdp->declBus(c+3046,"aquila_testharness aquila_core RISCV_CORE0 CSR DATA_WIDTH",-1,31,0);
	vcdp->declBit(c+3027,"aquila_testharness aquila_core RISCV_CORE0 CSR clk",-1);
	vcdp->declBit(c+1,"aquila_testharness aquila_core RISCV_CORE0 CSR rst",-1);
	vcdp->declBit(c+399,"aquila_testharness aquila_core RISCV_CORE0 CSR is_csr_instr",-1);
	vcdp->declBus(c+393,"aquila_testharness aquila_core RISCV_CORE0 CSR csr_addr",-1,11,0);
	vcdp->declBus(c+392,"aquila_testharness aquila_core RISCV_CORE0 CSR csr_op",-1,2,0);
	vcdp->declBus(c+387,"aquila_testharness aquila_core RISCV_CORE0 CSR csr_imm",-1,4,0);
	vcdp->declBus(c+29,"aquila_testharness aquila_core RISCV_CORE0 CSR rs1_data",-1,31,0);
	vcdp->declBit(c+3050,"aquila_testharness aquila_core RISCV_CORE0 CSR ext_irq",-1);
	vcdp->declBit(c+22,"aquila_testharness aquila_core RISCV_CORE0 CSR tmr_irq",-1);
	vcdp->declBit(c+368,"aquila_testharness aquila_core RISCV_CORE0 CSR sft_irq",-1);
	vcdp->declBit(c+44,"aquila_testharness aquila_core RISCV_CORE0 CSR irq_taken",-1);
	vcdp->declBus(c+45,"aquila_testharness aquila_core RISCV_CORE0 CSR PC_handler",-1,31,0);
	vcdp->declBus(c+371,"aquila_testharness aquila_core RISCV_CORE0 CSR nxt_unexec_PC",-1,31,0);
	vcdp->declBus(c+36,"aquila_testharness aquila_core RISCV_CORE0 CSR csr_data_o",-1,31,0);
	vcdp->declBit(c+23,"aquila_testharness aquila_core RISCV_CORE0 CSR sys_jump",-1);
	vcdp->declBus(c+24,"aquila_testharness aquila_core RISCV_CORE0 CSR sys_jump_csr_addr",-1,11,0);
	vcdp->declBus(c+375,"aquila_testharness aquila_core RISCV_CORE0 CSR sys_jump_pc",-1,31,0);
	vcdp->declBus(c+25,"aquila_testharness aquila_core RISCV_CORE0 CSR sys_jump_csr_data",-1,31,0);
	vcdp->declBus(c+208,"aquila_testharness aquila_core RISCV_CORE0 CSR mstatus",-1,31,0);
	vcdp->declBit(c+627,"aquila_testharness aquila_core RISCV_CORE0 CSR mstatus_mpie_r",-1);
	vcdp->declBit(c+628,"aquila_testharness aquila_core RISCV_CORE0 CSR mstatus_mie_r",-1);
	vcdp->declBus(c+3066,"aquila_testharness aquila_core RISCV_CORE0 CSR misa_r",-1,31,0);
	vcdp->declBus(c+209,"aquila_testharness aquila_core RISCV_CORE0 CSR mie",-1,31,0);
	vcdp->declBit(c+629,"aquila_testharness aquila_core RISCV_CORE0 CSR mie_meie_r",-1);
	vcdp->declBit(c+630,"aquila_testharness aquila_core RISCV_CORE0 CSR mie_mtie_r",-1);
	vcdp->declBit(c+631,"aquila_testharness aquila_core RISCV_CORE0 CSR mie_msie_r",-1);
	vcdp->declBus(c+632,"aquila_testharness aquila_core RISCV_CORE0 CSR mtvec_r",-1,31,0);
	vcdp->declBus(c+633,"aquila_testharness aquila_core RISCV_CORE0 CSR mtvec_base",-1,31,0);
	vcdp->declBus(c+634,"aquila_testharness aquila_core RISCV_CORE0 CSR mtvec_mode",-1,2,0);
	vcdp->declBus(c+635,"aquila_testharness aquila_core RISCV_CORE0 CSR mscratch_r",-1,31,0);
	vcdp->declBus(c+636,"aquila_testharness aquila_core RISCV_CORE0 CSR mepc_r",-1,31,0);
	vcdp->declBus(c+637,"aquila_testharness aquila_core RISCV_CORE0 CSR mcause_r",-1,31,0);
	vcdp->declBus(c+210,"aquila_testharness aquila_core RISCV_CORE0 CSR irq_cause",-1,31,0);
	vcdp->declBus(c+211,"aquila_testharness aquila_core RISCV_CORE0 CSR excp_code",-1,30,0);
	vcdp->declBus(c+212,"aquila_testharness aquila_core RISCV_CORE0 CSR mip",-1,31,0);
	vcdp->declBit(c+638,"aquila_testharness aquila_core RISCV_CORE0 CSR mip_meip_r",-1);
	vcdp->declBit(c+639,"aquila_testharness aquila_core RISCV_CORE0 CSR mip_mtip_r",-1);
	vcdp->declBit(c+640,"aquila_testharness aquila_core RISCV_CORE0 CSR mip_msip_r",-1);
	vcdp->declBit(c+213,"aquila_testharness aquila_core RISCV_CORE0 CSR mirq",-1);
	vcdp->declQuad(c+641,"aquila_testharness aquila_core RISCV_CORE0 CSR mcycle_r",-1,63,0);
	vcdp->declBus(c+3049,"aquila_testharness aquila_core RISCV_CORE0 CSR mvendorid",-1,31,0);
	vcdp->declBus(c+3049,"aquila_testharness aquila_core RISCV_CORE0 CSR marchid",-1,31,0);
	vcdp->declBus(c+3049,"aquila_testharness aquila_core RISCV_CORE0 CSR mimpid",-1,31,0);
	vcdp->declBus(c+3049,"aquila_testharness aquila_core RISCV_CORE0 CSR mhartid",-1,31,0);
	vcdp->declBit(c+214,"aquila_testharness aquila_core RISCV_CORE0 CSR is_mret",-1);
	vcdp->declBit(c+215,"aquila_testharness aquila_core RISCV_CORE0 CSR is_ecall",-1);
	vcdp->declBus(c+36,"aquila_testharness aquila_core RISCV_CORE0 CSR csr_data",-1,31,0);
	vcdp->declBus(c+36,"aquila_testharness aquila_core RISCV_CORE0 CSR csr_inputA",-1,31,0);
	vcdp->declBus(c+216,"aquila_testharness aquila_core RISCV_CORE0 CSR csr_inputB",-1,31,0);
	vcdp->declBus(c+217,"aquila_testharness aquila_core RISCV_CORE0 CSR updated_csr_data",-1,31,0);
	vcdp->declBus(c+3067,"aquila_testharness aquila_core CLINT TIMER",-1,31,0);
	vcdp->declBit(c+3027,"aquila_testharness aquila_core CLINT clk",-1);
	vcdp->declBit(c+1,"aquila_testharness aquila_core CLINT rst",-1);
	vcdp->declBit(c+218,"aquila_testharness aquila_core CLINT en",-1);
	vcdp->declBit(c+219,"aquila_testharness aquila_core CLINT we",-1);
	vcdp->declBus(c+643,"aquila_testharness aquila_core CLINT addr",-1,31,0);
	vcdp->declBus(c+21,"aquila_testharness aquila_core CLINT data_in",-1,31,0);
	vcdp->declBus(c+369,"aquila_testharness aquila_core CLINT data_out",-1,31,0);
	vcdp->declBit(c+22,"aquila_testharness aquila_core CLINT tmr_irq",-1);
	vcdp->declBit(c+368,"aquila_testharness aquila_core CLINT sft_irq",-1);
	{int i; for (i=0; i<5; i++) {
		vcdp->declBus(c+644+i*1,"aquila_testharness aquila_core CLINT clint_mem",(i+0),31,0);}}
	vcdp->declQuad(c+649,"aquila_testharness aquila_core CLINT mtime",-1,63,0);
	vcdp->declQuad(c+651,"aquila_testharness aquila_core CLINT mtimecmp",-1,63,0);
	vcdp->declBus(c+653,"aquila_testharness aquila_core CLINT msip",-1,31,0);
	vcdp->declBus(c+654,"aquila_testharness aquila_core CLINT counter",-1,16,0);
	vcdp->declBit(c+655,"aquila_testharness aquila_core CLINT carry",-1);
	vcdp->declBus(c+3046,"aquila_testharness aquila_core I_Cache ADDR_WIDTH",-1,31,0);
	vcdp->declBus(c+3046,"aquila_testharness aquila_core I_Cache DATA_WIDTH",-1,31,0);
	vcdp->declBus(c+3048,"aquila_testharness aquila_core I_Cache CACHE_SIZE",-1,31,0);
	vcdp->declBus(c+3068,"aquila_testharness aquila_core I_Cache LINE_SIZE",-1,31,0);
	vcdp->declBit(c+3027,"aquila_testharness aquila_core I_Cache clk",-1);
	vcdp->declBit(c+1,"aquila_testharness aquila_core I_Cache rst",-1);
	vcdp->declBit(c+356,"aquila_testharness aquila_core I_Cache p_strobe",-1);
	vcdp->declBus(c+354,"aquila_testharness aquila_core I_Cache p_addr",-1,31,0);
	vcdp->declBit(c+19,"aquila_testharness aquila_core I_Cache p_ready_o",-1);
	vcdp->declBus(c+20,"aquila_testharness aquila_core I_Cache p_instr_o",-1,31,0);
	vcdp->declBit(c+336,"aquila_testharness aquila_core I_Cache m_strobe_o",-1);
	vcdp->declBus(c+341,"aquila_testharness aquila_core I_Cache m_addr_o",-1,31,0);
	vcdp->declBit(c+337,"aquila_testharness aquila_core I_Cache m_ready",-1);
	vcdp->declArray(c+343,"aquila_testharness aquila_core I_Cache m_dout",-1,255,0);
	vcdp->declBus(c+3048,"aquila_testharness aquila_core I_Cache N_WAYS",-1,31,0);
	vcdp->declBus(c+3069,"aquila_testharness aquila_core I_Cache WORDS_PER_LINE",-1,31,0);
	vcdp->declBus(c+3046,"aquila_testharness aquila_core I_Cache N_LINES",-1,31,0);
	vcdp->declBus(c+3054,"aquila_testharness aquila_core I_Cache WAY_BITS",-1,31,0);
	vcdp->declBus(c+3054,"aquila_testharness aquila_core I_Cache BYTE_BITS",-1,31,0);
	vcdp->declBus(c+3055,"aquila_testharness aquila_core I_Cache WORD_BITS",-1,31,0);
	vcdp->declBus(c+3052,"aquila_testharness aquila_core I_Cache LINE_BITS",-1,31,0);
	vcdp->declBus(c+3070,"aquila_testharness aquila_core I_Cache NONTAG_BITS",-1,31,0);
	vcdp->declBus(c+3071,"aquila_testharness aquila_core I_Cache TAG_BITS",-1,31,0);
	vcdp->declBus(c+656,"aquila_testharness aquila_core I_Cache line_offset",-1,2,0);
	vcdp->declBus(c+657,"aquila_testharness aquila_core I_Cache line_index",-1,4,0);
	vcdp->declBus(c+658,"aquila_testharness aquila_core I_Cache tag",-1,21,0);
	{int i; for (i=0; i<4; i++) {
		vcdp->declBit(c+220+i*1,"aquila_testharness aquila_core I_Cache way_hit",(i+0));}}
	vcdp->declBit(c+224,"aquila_testharness aquila_core I_Cache cache_hit",-1);
	{int i; for (i=0; i<4; i++) {
		vcdp->declArray(c+225+i*8,"aquila_testharness aquila_core I_Cache c_instr_o",(i+0),255,0);}}
	vcdp->declArray(c+257,"aquila_testharness aquila_core I_Cache c_instr",-1,255,0);
	{int i; for (i=0; i<4; i++) {
		vcdp->declBit(c+265+i*1,"aquila_testharness aquila_core I_Cache cache_write",(i+0));}}
	// Tracing: aquila_testharness aquila_core I_Cache VALID_ // Ignored: Wide memory > --trace-max-array ents at ../ip_repo/aquila/hdl/core_rtl/icache.v:113
	// Tracing: aquila_testharness aquila_core I_Cache TAG_ // Ignored: Wide memory > --trace-max-array ents at ../ip_repo/aquila/hdl/core_rtl/icache.v:114
	{int i; for (i=0; i<32; i++) {
		vcdp->declBus(c+659+i*1,"aquila_testharness aquila_core I_Cache FIFO_cnt",(i+0),1,0);}}
	vcdp->declBus(c+691,"aquila_testharness aquila_core I_Cache victim_sel",-1,1,0);
	vcdp->declBit(c+692,"aquila_testharness aquila_core I_Cache is_diff_index",-1);
	vcdp->declBus(c+693,"aquila_testharness aquila_core I_Cache index_prev",-1,4,0);
	vcdp->declBus(c+3049,"aquila_testharness aquila_core I_Cache Idle",-1,31,0);
	vcdp->declBus(c+3053,"aquila_testharness aquila_core I_Cache Next",-1,31,0);
	vcdp->declBus(c+3054,"aquila_testharness aquila_core I_Cache RdfromMem",-1,31,0);
	vcdp->declBus(c+3055,"aquila_testharness aquila_core I_Cache RdfromMemFinish",-1,31,0);
	vcdp->declBus(c+694,"aquila_testharness aquila_core I_Cache S",-1,1,0);
	vcdp->declBus(c+269,"aquila_testharness aquila_core I_Cache S_nxt",-1,1,0);
	vcdp->declBus(c+270,"aquila_testharness aquila_core I_Cache idx",-1,31,0);
	vcdp->declBus(c+695,"aquila_testharness aquila_core I_Cache jdx",-1,31,0);
	vcdp->declBus(c+271,"aquila_testharness aquila_core I_Cache fromCache",-1,31,0);
	vcdp->declBus(c+696,"aquila_testharness aquila_core I_Cache fromMem",-1,31,0);
	// Tracing: aquila_testharness aquila_core I_Cache i // Ignored: Verilator trace_off at ../ip_repo/aquila/hdl/core_rtl/icache.v:306
	vcdp->declBus(c+3046,"aquila_testharness aquila_core I_Cache genblk1[0] DATA_BRAM N_ENTRIES",-1,31,0);
	vcdp->declBus(c+3068,"aquila_testharness aquila_core I_Cache genblk1[0] DATA_BRAM DATA_WIDTH",-1,31,0);
	vcdp->declBit(c+3027,"aquila_testharness aquila_core I_Cache genblk1[0] DATA_BRAM clk",-1);
	vcdp->declBit(c+3058,"aquila_testharness aquila_core I_Cache genblk1[0] DATA_BRAM en",-1);
	vcdp->declBit(c+272,"aquila_testharness aquila_core I_Cache genblk1[0] DATA_BRAM we",-1);
	vcdp->declBus(c+657,"aquila_testharness aquila_core I_Cache genblk1[0] DATA_BRAM addr",-1,4,0);
	vcdp->declArray(c+343,"aquila_testharness aquila_core I_Cache genblk1[0] DATA_BRAM data_i",-1,255,0);
	vcdp->declArray(c+697,"aquila_testharness aquila_core I_Cache genblk1[0] DATA_BRAM data_o",-1,255,0);
	{int i; for (i=0; i<32; i++) {
		vcdp->declArray(c+705+i*8,"aquila_testharness aquila_core I_Cache genblk1[0] DATA_BRAM RAM",(i+0),255,0);}}
	vcdp->declBus(c+3046,"aquila_testharness aquila_core I_Cache genblk1[1] DATA_BRAM N_ENTRIES",-1,31,0);
	vcdp->declBus(c+3068,"aquila_testharness aquila_core I_Cache genblk1[1] DATA_BRAM DATA_WIDTH",-1,31,0);
	vcdp->declBit(c+3027,"aquila_testharness aquila_core I_Cache genblk1[1] DATA_BRAM clk",-1);
	vcdp->declBit(c+3058,"aquila_testharness aquila_core I_Cache genblk1[1] DATA_BRAM en",-1);
	vcdp->declBit(c+273,"aquila_testharness aquila_core I_Cache genblk1[1] DATA_BRAM we",-1);
	vcdp->declBus(c+657,"aquila_testharness aquila_core I_Cache genblk1[1] DATA_BRAM addr",-1,4,0);
	vcdp->declArray(c+343,"aquila_testharness aquila_core I_Cache genblk1[1] DATA_BRAM data_i",-1,255,0);
	vcdp->declArray(c+961,"aquila_testharness aquila_core I_Cache genblk1[1] DATA_BRAM data_o",-1,255,0);
	{int i; for (i=0; i<32; i++) {
		vcdp->declArray(c+969+i*8,"aquila_testharness aquila_core I_Cache genblk1[1] DATA_BRAM RAM",(i+0),255,0);}}
	vcdp->declBus(c+3046,"aquila_testharness aquila_core I_Cache genblk1[2] DATA_BRAM N_ENTRIES",-1,31,0);
	vcdp->declBus(c+3068,"aquila_testharness aquila_core I_Cache genblk1[2] DATA_BRAM DATA_WIDTH",-1,31,0);
	vcdp->declBit(c+3027,"aquila_testharness aquila_core I_Cache genblk1[2] DATA_BRAM clk",-1);
	vcdp->declBit(c+3058,"aquila_testharness aquila_core I_Cache genblk1[2] DATA_BRAM en",-1);
	vcdp->declBit(c+274,"aquila_testharness aquila_core I_Cache genblk1[2] DATA_BRAM we",-1);
	vcdp->declBus(c+657,"aquila_testharness aquila_core I_Cache genblk1[2] DATA_BRAM addr",-1,4,0);
	vcdp->declArray(c+343,"aquila_testharness aquila_core I_Cache genblk1[2] DATA_BRAM data_i",-1,255,0);
	vcdp->declArray(c+1225,"aquila_testharness aquila_core I_Cache genblk1[2] DATA_BRAM data_o",-1,255,0);
	{int i; for (i=0; i<32; i++) {
		vcdp->declArray(c+1233+i*8,"aquila_testharness aquila_core I_Cache genblk1[2] DATA_BRAM RAM",(i+0),255,0);}}
	vcdp->declBus(c+3046,"aquila_testharness aquila_core I_Cache genblk1[3] DATA_BRAM N_ENTRIES",-1,31,0);
	vcdp->declBus(c+3068,"aquila_testharness aquila_core I_Cache genblk1[3] DATA_BRAM DATA_WIDTH",-1,31,0);
	vcdp->declBit(c+3027,"aquila_testharness aquila_core I_Cache genblk1[3] DATA_BRAM clk",-1);
	vcdp->declBit(c+3058,"aquila_testharness aquila_core I_Cache genblk1[3] DATA_BRAM en",-1);
	vcdp->declBit(c+275,"aquila_testharness aquila_core I_Cache genblk1[3] DATA_BRAM we",-1);
	vcdp->declBus(c+657,"aquila_testharness aquila_core I_Cache genblk1[3] DATA_BRAM addr",-1,4,0);
	vcdp->declArray(c+343,"aquila_testharness aquila_core I_Cache genblk1[3] DATA_BRAM data_i",-1,255,0);
	vcdp->declArray(c+1489,"aquila_testharness aquila_core I_Cache genblk1[3] DATA_BRAM data_o",-1,255,0);
	{int i; for (i=0; i<32; i++) {
		vcdp->declArray(c+1497+i*8,"aquila_testharness aquila_core I_Cache genblk1[3] DATA_BRAM RAM",(i+0),255,0);}}
	vcdp->declBus(c+3046,"aquila_testharness aquila_core D_Cache ADDR_WIDTH",-1,31,0);
	vcdp->declBus(c+3046,"aquila_testharness aquila_core D_Cache DATA_WIDTH",-1,31,0);
	vcdp->declBus(c+3048,"aquila_testharness aquila_core D_Cache CACHE_SIZE",-1,31,0);
	vcdp->declBus(c+3068,"aquila_testharness aquila_core D_Cache LINE_SIZE",-1,31,0);
	vcdp->declBit(c+3027,"aquila_testharness aquila_core D_Cache clk",-1);
	vcdp->declBit(c+1,"aquila_testharness aquila_core D_Cache rst",-1);
	vcdp->declBit(c+276,"aquila_testharness aquila_core D_Cache p_strobe",-1);
	vcdp->declBit(c+277,"aquila_testharness aquila_core D_Cache p_rw",-1);
	vcdp->declBus(c+351,"aquila_testharness aquila_core D_Cache p_byte_enable",-1,3,0);
	vcdp->declBus(c+355,"aquila_testharness aquila_core D_Cache p_addr",-1,31,0);
	vcdp->declBus(c+359,"aquila_testharness aquila_core D_Cache p_dout_o",-1,31,0);
	vcdp->declBus(c+21,"aquila_testharness aquila_core D_Cache p_din",-1,31,0);
	vcdp->declBit(c+358,"aquila_testharness aquila_core D_Cache p_ready_o",-1);
	vcdp->declBus(c+342,"aquila_testharness aquila_core D_Cache m_addr_o",-1,31,0);
	vcdp->declArray(c+3033,"aquila_testharness aquila_core D_Cache m_dout",-1,255,0);
	vcdp->declArray(c+360,"aquila_testharness aquila_core D_Cache m_din_o",-1,255,0);
	vcdp->declBit(c+338,"aquila_testharness aquila_core D_Cache m_strobe_o",-1);
	vcdp->declBit(c+340,"aquila_testharness aquila_core D_Cache m_rw_o",-1);
	vcdp->declBit(c+339,"aquila_testharness aquila_core D_Cache m_ready",-1);
	vcdp->declBus(c+3048,"aquila_testharness aquila_core D_Cache N_WAYS",-1,31,0);
	vcdp->declBus(c+3069,"aquila_testharness aquila_core D_Cache WORDS_PER_LINE",-1,31,0);
	vcdp->declBus(c+3046,"aquila_testharness aquila_core D_Cache N_LINES",-1,31,0);
	vcdp->declBus(c+3054,"aquila_testharness aquila_core D_Cache WAY_BITS",-1,31,0);
	vcdp->declBus(c+3054,"aquila_testharness aquila_core D_Cache BYTE_BITS",-1,31,0);
	vcdp->declBus(c+3055,"aquila_testharness aquila_core D_Cache WORD_BITS",-1,31,0);
	vcdp->declBus(c+3052,"aquila_testharness aquila_core D_Cache LINE_BITS",-1,31,0);
	vcdp->declBus(c+3070,"aquila_testharness aquila_core D_Cache NONTAG_BITS",-1,31,0);
	vcdp->declBus(c+3071,"aquila_testharness aquila_core D_Cache TAG_BITS",-1,31,0);
	vcdp->declBus(c+3049,"aquila_testharness aquila_core D_Cache Idle",-1,31,0);
	vcdp->declBus(c+3053,"aquila_testharness aquila_core D_Cache Analysis",-1,31,0);
	vcdp->declBus(c+3054,"aquila_testharness aquila_core D_Cache WbtoMem",-1,31,0);
	vcdp->declBus(c+3055,"aquila_testharness aquila_core D_Cache WbtoMemFinish",-1,31,0);
	vcdp->declBus(c+3048,"aquila_testharness aquila_core D_Cache RdfromMem",-1,31,0);
	vcdp->declBus(c+3052,"aquila_testharness aquila_core D_Cache RdfromMemFinish",-1,31,0);
	vcdp->declBus(c+1753,"aquila_testharness aquila_core D_Cache S",-1,2,0);
	vcdp->declBus(c+278,"aquila_testharness aquila_core D_Cache S_nxt",-1,2,0);
	vcdp->declBus(c+1754,"aquila_testharness aquila_core D_Cache datain_from_p",-1,31,0);
	vcdp->declBit(c+1755,"aquila_testharness aquila_core D_Cache rw",-1);
	vcdp->declBus(c+1756,"aquila_testharness aquila_core D_Cache byte_enable_from_p",-1,3,0);
	{int i; for (i=0; i<4; i++) {
		vcdp->declBus(c+279+i*1,"aquila_testharness aquila_core D_Cache c_tag_o",(i+0),21,0);}}
	{int i; for (i=0; i<4; i++) {
		vcdp->declBit(c+283+i*1,"aquila_testharness aquila_core D_Cache way_hit",(i+0));}}
	vcdp->declBit(c+287,"aquila_testharness aquila_core D_Cache cache_hit",-1);
	vcdp->declArray(c+1757,"aquila_testharness aquila_core D_Cache c_data_i",-1,255,0);
	{int i; for (i=0; i<4; i++) {
		vcdp->declArray(c+288+i*8,"aquila_testharness aquila_core D_Cache c_data_o",(i+0),255,0);}}
	vcdp->declArray(c+320,"aquila_testharness aquila_core D_Cache c_data",-1,255,0);
	{int i; for (i=0; i<4; i++) {
		vcdp->declBit(c+1765+i*1,"aquila_testharness aquila_core D_Cache cache_write",(i+0));}}
	{int i; for (i=0; i<32; i++) {
		vcdp->declBus(c+1769+i*1,"aquila_testharness aquila_core D_Cache FIFO_cnt",(i+0),1,0);}}
	vcdp->declBus(c+1801,"aquila_testharness aquila_core D_Cache victim_sel",-1,1,0);
	// Tracing: aquila_testharness aquila_core D_Cache VALID_ // Ignored: Wide memory > --trace-max-array ents at ../ip_repo/aquila/hdl/core_rtl/dcache.v:133
	// Tracing: aquila_testharness aquila_core D_Cache DIRTY_ // Ignored: Wide memory > --trace-max-array ents at ../ip_repo/aquila/hdl/core_rtl/dcache.v:134
	vcdp->declArray(c+1802,"aquila_testharness aquila_core D_Cache m_data",-1,255,0);
	vcdp->declBus(c+1810,"aquila_testharness aquila_core D_Cache line_offset",-1,2,0);
	vcdp->declBus(c+1811,"aquila_testharness aquila_core D_Cache line_index",-1,4,0);
	vcdp->declBus(c+1812,"aquila_testharness aquila_core D_Cache tag",-1,21,0);
	vcdp->declBus(c+1813,"aquila_testharness aquila_core D_Cache idx",-1,31,0);
	vcdp->declBus(c+1814,"aquila_testharness aquila_core D_Cache jdx",-1,31,0);
	vcdp->declBus(c+328,"aquila_testharness aquila_core D_Cache fromCache",-1,31,0);
	vcdp->declBus(c+329,"aquila_testharness aquila_core D_Cache fromMem",-1,31,0);
	vcdp->declBus(c+330,"aquila_testharness aquila_core D_Cache update_data",-1,31,0);
	// Tracing: aquila_testharness aquila_core D_Cache i // Ignored: Verilator trace_off at ../ip_repo/aquila/hdl/core_rtl/dcache.v:472
	vcdp->declBus(c+3046,"aquila_testharness aquila_core D_Cache genblk1[0] TAG_BRAM N_ENTRIES",-1,31,0);
	vcdp->declBus(c+3071,"aquila_testharness aquila_core D_Cache genblk1[0] TAG_BRAM DATA_WIDTH",-1,31,0);
	vcdp->declBit(c+3027,"aquila_testharness aquila_core D_Cache genblk1[0] TAG_BRAM clk",-1);
	vcdp->declBit(c+3058,"aquila_testharness aquila_core D_Cache genblk1[0] TAG_BRAM en",-1);
	vcdp->declBit(c+1815,"aquila_testharness aquila_core D_Cache genblk1[0] TAG_BRAM we",-1);
	vcdp->declBus(c+1811,"aquila_testharness aquila_core D_Cache genblk1[0] TAG_BRAM addr",-1,4,0);
	vcdp->declBus(c+1812,"aquila_testharness aquila_core D_Cache genblk1[0] TAG_BRAM data_i",-1,21,0);
	vcdp->declBus(c+1816,"aquila_testharness aquila_core D_Cache genblk1[0] TAG_BRAM data_o",-1,21,0);
	{int i; for (i=0; i<32; i++) {
		vcdp->declBus(c+1817+i*1,"aquila_testharness aquila_core D_Cache genblk1[0] TAG_BRAM RAM",(i+0),21,0);}}
	vcdp->declBus(c+3046,"aquila_testharness aquila_core D_Cache genblk1[0] DATA_BRAM N_ENTRIES",-1,31,0);
	vcdp->declBus(c+3068,"aquila_testharness aquila_core D_Cache genblk1[0] DATA_BRAM DATA_WIDTH",-1,31,0);
	vcdp->declBit(c+3027,"aquila_testharness aquila_core D_Cache genblk1[0] DATA_BRAM clk",-1);
	vcdp->declBit(c+3058,"aquila_testharness aquila_core D_Cache genblk1[0] DATA_BRAM en",-1);
	vcdp->declBit(c+1815,"aquila_testharness aquila_core D_Cache genblk1[0] DATA_BRAM we",-1);
	vcdp->declBus(c+1811,"aquila_testharness aquila_core D_Cache genblk1[0] DATA_BRAM addr",-1,4,0);
	vcdp->declArray(c+1757,"aquila_testharness aquila_core D_Cache genblk1[0] DATA_BRAM data_i",-1,255,0);
	vcdp->declArray(c+1849,"aquila_testharness aquila_core D_Cache genblk1[0] DATA_BRAM data_o",-1,255,0);
	{int i; for (i=0; i<32; i++) {
		vcdp->declArray(c+1857+i*8,"aquila_testharness aquila_core D_Cache genblk1[0] DATA_BRAM RAM",(i+0),255,0);}}
	vcdp->declBus(c+3046,"aquila_testharness aquila_core D_Cache genblk1[1] TAG_BRAM N_ENTRIES",-1,31,0);
	vcdp->declBus(c+3071,"aquila_testharness aquila_core D_Cache genblk1[1] TAG_BRAM DATA_WIDTH",-1,31,0);
	vcdp->declBit(c+3027,"aquila_testharness aquila_core D_Cache genblk1[1] TAG_BRAM clk",-1);
	vcdp->declBit(c+3058,"aquila_testharness aquila_core D_Cache genblk1[1] TAG_BRAM en",-1);
	vcdp->declBit(c+2113,"aquila_testharness aquila_core D_Cache genblk1[1] TAG_BRAM we",-1);
	vcdp->declBus(c+1811,"aquila_testharness aquila_core D_Cache genblk1[1] TAG_BRAM addr",-1,4,0);
	vcdp->declBus(c+1812,"aquila_testharness aquila_core D_Cache genblk1[1] TAG_BRAM data_i",-1,21,0);
	vcdp->declBus(c+2114,"aquila_testharness aquila_core D_Cache genblk1[1] TAG_BRAM data_o",-1,21,0);
	{int i; for (i=0; i<32; i++) {
		vcdp->declBus(c+2115+i*1,"aquila_testharness aquila_core D_Cache genblk1[1] TAG_BRAM RAM",(i+0),21,0);}}
	vcdp->declBus(c+3046,"aquila_testharness aquila_core D_Cache genblk1[1] DATA_BRAM N_ENTRIES",-1,31,0);
	vcdp->declBus(c+3068,"aquila_testharness aquila_core D_Cache genblk1[1] DATA_BRAM DATA_WIDTH",-1,31,0);
	vcdp->declBit(c+3027,"aquila_testharness aquila_core D_Cache genblk1[1] DATA_BRAM clk",-1);
	vcdp->declBit(c+3058,"aquila_testharness aquila_core D_Cache genblk1[1] DATA_BRAM en",-1);
	vcdp->declBit(c+2113,"aquila_testharness aquila_core D_Cache genblk1[1] DATA_BRAM we",-1);
	vcdp->declBus(c+1811,"aquila_testharness aquila_core D_Cache genblk1[1] DATA_BRAM addr",-1,4,0);
	vcdp->declArray(c+1757,"aquila_testharness aquila_core D_Cache genblk1[1] DATA_BRAM data_i",-1,255,0);
	vcdp->declArray(c+2147,"aquila_testharness aquila_core D_Cache genblk1[1] DATA_BRAM data_o",-1,255,0);
	{int i; for (i=0; i<32; i++) {
		vcdp->declArray(c+2155+i*8,"aquila_testharness aquila_core D_Cache genblk1[1] DATA_BRAM RAM",(i+0),255,0);}}
	vcdp->declBus(c+3046,"aquila_testharness aquila_core D_Cache genblk1[2] TAG_BRAM N_ENTRIES",-1,31,0);
	vcdp->declBus(c+3071,"aquila_testharness aquila_core D_Cache genblk1[2] TAG_BRAM DATA_WIDTH",-1,31,0);
	vcdp->declBit(c+3027,"aquila_testharness aquila_core D_Cache genblk1[2] TAG_BRAM clk",-1);
	vcdp->declBit(c+3058,"aquila_testharness aquila_core D_Cache genblk1[2] TAG_BRAM en",-1);
	vcdp->declBit(c+2411,"aquila_testharness aquila_core D_Cache genblk1[2] TAG_BRAM we",-1);
	vcdp->declBus(c+1811,"aquila_testharness aquila_core D_Cache genblk1[2] TAG_BRAM addr",-1,4,0);
	vcdp->declBus(c+1812,"aquila_testharness aquila_core D_Cache genblk1[2] TAG_BRAM data_i",-1,21,0);
	vcdp->declBus(c+2412,"aquila_testharness aquila_core D_Cache genblk1[2] TAG_BRAM data_o",-1,21,0);
	{int i; for (i=0; i<32; i++) {
		vcdp->declBus(c+2413+i*1,"aquila_testharness aquila_core D_Cache genblk1[2] TAG_BRAM RAM",(i+0),21,0);}}
	vcdp->declBus(c+3046,"aquila_testharness aquila_core D_Cache genblk1[2] DATA_BRAM N_ENTRIES",-1,31,0);
	vcdp->declBus(c+3068,"aquila_testharness aquila_core D_Cache genblk1[2] DATA_BRAM DATA_WIDTH",-1,31,0);
	vcdp->declBit(c+3027,"aquila_testharness aquila_core D_Cache genblk1[2] DATA_BRAM clk",-1);
	vcdp->declBit(c+3058,"aquila_testharness aquila_core D_Cache genblk1[2] DATA_BRAM en",-1);
	vcdp->declBit(c+2411,"aquila_testharness aquila_core D_Cache genblk1[2] DATA_BRAM we",-1);
	vcdp->declBus(c+1811,"aquila_testharness aquila_core D_Cache genblk1[2] DATA_BRAM addr",-1,4,0);
	vcdp->declArray(c+1757,"aquila_testharness aquila_core D_Cache genblk1[2] DATA_BRAM data_i",-1,255,0);
	vcdp->declArray(c+2445,"aquila_testharness aquila_core D_Cache genblk1[2] DATA_BRAM data_o",-1,255,0);
	{int i; for (i=0; i<32; i++) {
		vcdp->declArray(c+2453+i*8,"aquila_testharness aquila_core D_Cache genblk1[2] DATA_BRAM RAM",(i+0),255,0);}}
	vcdp->declBus(c+3046,"aquila_testharness aquila_core D_Cache genblk1[3] TAG_BRAM N_ENTRIES",-1,31,0);
	vcdp->declBus(c+3071,"aquila_testharness aquila_core D_Cache genblk1[3] TAG_BRAM DATA_WIDTH",-1,31,0);
	vcdp->declBit(c+3027,"aquila_testharness aquila_core D_Cache genblk1[3] TAG_BRAM clk",-1);
	vcdp->declBit(c+3058,"aquila_testharness aquila_core D_Cache genblk1[3] TAG_BRAM en",-1);
	vcdp->declBit(c+2709,"aquila_testharness aquila_core D_Cache genblk1[3] TAG_BRAM we",-1);
	vcdp->declBus(c+1811,"aquila_testharness aquila_core D_Cache genblk1[3] TAG_BRAM addr",-1,4,0);
	vcdp->declBus(c+1812,"aquila_testharness aquila_core D_Cache genblk1[3] TAG_BRAM data_i",-1,21,0);
	vcdp->declBus(c+2710,"aquila_testharness aquila_core D_Cache genblk1[3] TAG_BRAM data_o",-1,21,0);
	{int i; for (i=0; i<32; i++) {
		vcdp->declBus(c+2711+i*1,"aquila_testharness aquila_core D_Cache genblk1[3] TAG_BRAM RAM",(i+0),21,0);}}
	vcdp->declBus(c+3046,"aquila_testharness aquila_core D_Cache genblk1[3] DATA_BRAM N_ENTRIES",-1,31,0);
	vcdp->declBus(c+3068,"aquila_testharness aquila_core D_Cache genblk1[3] DATA_BRAM DATA_WIDTH",-1,31,0);
	vcdp->declBit(c+3027,"aquila_testharness aquila_core D_Cache genblk1[3] DATA_BRAM clk",-1);
	vcdp->declBit(c+3058,"aquila_testharness aquila_core D_Cache genblk1[3] DATA_BRAM en",-1);
	vcdp->declBit(c+2709,"aquila_testharness aquila_core D_Cache genblk1[3] DATA_BRAM we",-1);
	vcdp->declBus(c+1811,"aquila_testharness aquila_core D_Cache genblk1[3] DATA_BRAM addr",-1,4,0);
	vcdp->declArray(c+1757,"aquila_testharness aquila_core D_Cache genblk1[3] DATA_BRAM data_i",-1,255,0);
	vcdp->declArray(c+2743,"aquila_testharness aquila_core D_Cache genblk1[3] DATA_BRAM data_o",-1,255,0);
	{int i; for (i=0; i<32; i++) {
		vcdp->declArray(c+2751+i*8,"aquila_testharness aquila_core D_Cache genblk1[3] DATA_BRAM RAM",(i+0),255,0);}}
	vcdp->declBus(c+3030,"aquila_testharness mock_uart_0 C_M_AXI_ADDR_WIDTH",-1,31,0);
	vcdp->declBus(c+3030,"aquila_testharness mock_uart_0 C_M_AXI_DATA_WIDTH",-1,31,0);
	vcdp->declBus(c+3031,"aquila_testharness mock_uart_0 UART_TX_FIFO_DELAY",-1,31,0);
	vcdp->declBus(c+3072,"aquila_testharness mock_uart_0 AXI_LANTENCY",-1,31,0);
	vcdp->declBus(c+3073,"aquila_testharness mock_uart_0 UART_RXFIFO_ADDR",-1,31,0);
	vcdp->declBus(c+3074,"aquila_testharness mock_uart_0 UART_TXFIFO_ADDR",-1,31,0);
	vcdp->declBus(c+3075,"aquila_testharness mock_uart_0 UART_STATUS_ADDR",-1,31,0);
	vcdp->declBit(c+3027,"aquila_testharness mock_uart_0 clk",-1);
	vcdp->declBit(c+3028,"aquila_testharness mock_uart_0 rst_n",-1);
	vcdp->declBit(c+12,"aquila_testharness mock_uart_0 M_DEVICE_strobe",-1);
	vcdp->declBus(c+13,"aquila_testharness mock_uart_0 M_DEVICE_addr",-1,31,0);
	vcdp->declBit(c+14,"aquila_testharness mock_uart_0 M_DEVICE_rw",-1);
	vcdp->declBus(c+351,"aquila_testharness mock_uart_0 M_DEVICE_byte_enable",-1,3,0);
	vcdp->declBus(c+15,"aquila_testharness mock_uart_0 M_DEVICE_core2dev_data",-1,31,0);
	vcdp->declBit(c+3041,"aquila_testharness mock_uart_0 M_DEVICE_data_ready",-1);
	vcdp->declBus(c+352,"aquila_testharness mock_uart_0 M_DEVICE_dev2core_data",-1,31,0);
	vcdp->declBus(c+3007,"aquila_testharness mock_uart_0 cur_state",-1,1,0);
	vcdp->declBus(c+331,"aquila_testharness mock_uart_0 next_state",-1,1,0);
	vcdp->declBus(c+3055,"aquila_testharness mock_uart_0 TX_FIFO_FULL_bit",-1,31,0);
	vcdp->declBus(c+3054,"aquila_testharness mock_uart_0 TX_FIFO_EMPTY_bit",-1,31,0);
	vcdp->declBus(c+3053,"aquila_testharness mock_uart_0 RX_FIFO_FULL_bit",-1,31,0);
	vcdp->declBus(c+3049,"aquila_testharness mock_uart_0 RX_FIFO_VALID_bit",-1,31,0);
	vcdp->declBus(c+3008,"aquila_testharness mock_uart_0 uart_tx_fifo",-1,7,0);
	vcdp->declBus(c+3009,"aquila_testharness mock_uart_0 uart_rx_fifo",-1,7,0);
	vcdp->declBus(c+332,"aquila_testharness mock_uart_0 uart_status",-1,7,0);
	vcdp->declBit(c+333,"aquila_testharness mock_uart_0 uart_tx_push",-1);
	vcdp->declBit(c+3010,"aquila_testharness mock_uart_0 uart_tx_pop",-1);
	vcdp->declBit(c+3050,"aquila_testharness mock_uart_0 uart_rx_push",-1);
	vcdp->declBit(c+334,"aquila_testharness mock_uart_0 uart_rx_pop",-1);
	vcdp->declBit(c+3011,"aquila_testharness mock_uart_0 uart_tx_fifo_full",-1);
	vcdp->declBit(c+3012,"aquila_testharness mock_uart_0 uart_tx_fifo_empty",-1);
	vcdp->declBit(c+3013,"aquila_testharness mock_uart_0 uart_rx_fifo_full",-1);
	vcdp->declBit(c+3014,"aquila_testharness mock_uart_0 uart_rx_fifo_valid",-1);
	vcdp->declBus(c+3015,"aquila_testharness mock_uart_0 transmit_counter",-1,7,0);
	vcdp->declBus(c+3016,"aquila_testharness mock_uart_0 read_counter",-1,7,0);
	vcdp->declBus(c+3017,"aquila_testharness mock_uart_0 write_counter",-1,7,0);
	vcdp->declBit(c+3058,"aquila_testharness mock_uart_0 reads_done",-1);
	vcdp->declBit(c+3058,"aquila_testharness mock_uart_0 writes_done",-1);
	vcdp->declBus(c+3076,"aquila_testharness mock_ram ADDR_WIDTH",-1,31,0);
	vcdp->declBus(c+3076,"aquila_testharness mock_ram DATA_WIDTH",-1,31,0);
	vcdp->declBus(c+3077,"aquila_testharness mock_ram MEM_SIZE",-1,31,0);
	vcdp->declBus(c+3078,"aquila_testharness mock_ram ACCESS_LANTENCY",-1,31,0);
	vcdp->declBit(c+3027,"aquila_testharness mock_ram clk",-1);
	vcdp->declBit(c+3028,"aquila_testharness mock_ram rst_n",-1);
	vcdp->declBit(c+336,"aquila_testharness mock_ram strobe_icache",-1);
	vcdp->declBus(c+341,"aquila_testharness mock_ram addr_icache_i",-1,31,0);
	vcdp->declBus(c+3018,"aquila_testharness mock_ram rdata_icache_o",-1,31,0);
	vcdp->declBit(c+337,"aquila_testharness mock_ram done_icache_o",-1);
	vcdp->declBit(c+338,"aquila_testharness mock_ram strobe_dcache",-1);
	vcdp->declBus(c+342,"aquila_testharness mock_ram addr_dcache_i",-1,31,0);
	vcdp->declBus(c+3079,"aquila_testharness mock_ram wdata_dcache_i",-1,31,0);
	vcdp->declBus(c+3019,"aquila_testharness mock_ram rdata_dcache_o",-1,31,0);
	vcdp->declBit(c+340,"aquila_testharness mock_ram rw_dcache_i",-1);
	vcdp->declBit(c+339,"aquila_testharness mock_ram done_dcache_o",-1);
	vcdp->declBus(c+3071,"aquila_testharness mock_ram PART_ADDR_WIDTH",-1,31,0);
	vcdp->declBus(c+3020,"aquila_testharness mock_ram icache_cur_state",-1,1,0);
	vcdp->declBus(c+3021,"aquila_testharness mock_ram icache_next_state",-1,1,0);
	vcdp->declBus(c+3022,"aquila_testharness mock_ram dcache_cur_state",-1,1,0);
	vcdp->declBus(c+335,"aquila_testharness mock_ram dcache_next_state",-1,1,0);
	vcdp->declBus(c+3023,"aquila_testharness mock_ram icache_addr",-1,21,0);
	vcdp->declBus(c+3024,"aquila_testharness mock_ram dcache_addr",-1,21,0);
	// Tracing: aquila_testharness mock_ram mem // Ignored: Wide memory > --trace-max-array ents at core-ver-src/dp_ram.sv:43
	vcdp->declBus(c+3025,"aquila_testharness mock_ram icache_delay_counter",-1,7,0);
	vcdp->declBus(c+3026,"aquila_testharness mock_ram dcache_delay_counter",-1,7,0);
	vcdp->declBit(c+3058,"aquila_testharness mock_ram icache_reads_done",-1);
	vcdp->declBit(c+3058,"aquila_testharness mock_ram dcache_reads_done",-1);
	vcdp->declBit(c+3058,"aquila_testharness mock_ram dcache_writes_done",-1);
    }
}

void Vaquila_testharness::traceFullThis__1(Vaquila_testharness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vaquila_testharness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp1,255,0,8);
    VL_SIGW(__Vtemp2,255,0,8);
    VL_SIGW(__Vtemp3,255,0,8);
    VL_SIGW(__Vtemp4,255,0,8);
    VL_SIGW(__Vtemp5,255,0,8);
    VL_SIGW(__Vtemp6,255,0,8);
    VL_SIGW(__Vtemp7,255,0,8);
    VL_SIGW(__Vtemp8,255,0,8);
    VL_SIGW(__Vtemp9,255,0,8);
    VL_SIGW(__Vtemp10,255,0,8);
    VL_SIGW(__Vtemp11,255,0,8);
    VL_SIGW(__Vtemp12,255,0,8);
    VL_SIGW(__Vtemp13,255,0,8);
    VL_SIGW(__Vtemp14,255,0,8);
    VL_SIGW(__Vtemp15,255,0,8);
    // Body
    {
	vcdp->fullBit(c+1,(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst));
	vcdp->fullBus(c+2,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__i),32);
	vcdp->fullBus(c+3,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__i),32);
	vcdp->fullArray(c+4,(vlSymsp->TOP__aquila_testharness.__PVT__M_DCACHE_dataout),256);
	vcdp->fullBit(c+12,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_d_strobe) 
			     & (1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel)))));
	vcdp->fullBus(c+13,(vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_addr),32);
	vcdp->fullBit(c+14,(vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_rw));
	vcdp->fullBus(c+15,(vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_core2dev_data),32);
	vcdp->fullBus(c+16,(((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel))
			      ? vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_dev2core_data
			      : ((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel))
				  ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__clint_mem_data
				  : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_d_dout))),32);
	vcdp->fullBus(c+17,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel),2);
	vcdp->fullBit(c+18,((1U & ((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel))
				    ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_data_ready)
				    : ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel))
				        ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_d_ready)
				        : 1U)))));
	vcdp->fullBit(c+19,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_i_ready));
	VL_EXTEND_WI(256,32, __Vtemp1, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
	VL_EXTEND_WI(256,32, __Vtemp2, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
	VL_EXTEND_WI(256,32, __Vtemp3, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
	VL_EXTEND_WI(256,32, __Vtemp4, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
	VL_EXTEND_WI(256,32, __Vtemp5, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
	VL_EXTEND_WI(256,32, __Vtemp6, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
	VL_EXTEND_WI(256,32, __Vtemp7, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
	vcdp->fullBus(c+20,((((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__S)) 
			      & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_hit))
			      ? ((0x10U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
				  ? ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
				      ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
					  ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[0U]
					  : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[1U])
				      : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
					  ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[2U]
					  : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[3U]))
				  : ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
				      ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
					  ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[4U]
					  : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[5U])
				      : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
					  ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[6U]
					  : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[7U])))
			      : ((IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_icache_o)
				  ? ((0x10U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
				      ? ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
					  ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
					      ? vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o
					      : __Vtemp1[1U])
					  : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
					      ? __Vtemp2[2U]
					      : __Vtemp3[3U]))
				      : ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
					  ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
					      ? __Vtemp4[4U]
					      : __Vtemp5[5U])
					  : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
					      ? __Vtemp6[6U]
					      : __Vtemp7[7U])))
				  : 0U))),32);
	vcdp->fullBus(c+21,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__data_o),32);
	vcdp->fullBit(c+22,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__tmr_irq));
	vcdp->fullBit(c+23,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__sys_jump));
	vcdp->fullBus(c+24,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__sys_jump_csr_addr),12);
	vcdp->fullBus(c+25,(((0x341U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__sys_jump_csr_addr))
			      ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mepc_r
			      : ((0x305U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__sys_jump_csr_addr))
				  ? (0xfffffffcU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mtvec_r)
				  : 0U))),32);
	vcdp->fullBit(c+26,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Pipeline_Control__DOT__branch_flush) 
			     | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__sys_jump))));
	vcdp->fullBit(c+27,((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Pipeline_Control__DOT__branch_flush) 
			      | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Pipeline_Control__DOT__is_load_use)) 
			     | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_miscmem) 
				 & ((0U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						  >> 0xcU))) 
				    | (1U == (7U & 
					      (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					       >> 0xcU))))) 
				| ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_sys_op) 
				   & (1U == (0xfffU 
					     & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						>> 0x14U))))))));
	vcdp->fullBit(c+28,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Pipeline_Control__DOT__is_load_use));
	vcdp->fullBus(c+29,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data),32);
	vcdp->fullBus(c+30,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data),32);
	vcdp->fullBus(c+31,((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__we) 
			      & ((0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					   >> 0xfU)) 
				 == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r)))
			      ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_data
			      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf
			     [(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					>> 0xfU))])),32);
	vcdp->fullBus(c+32,((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__we) 
			      & ((0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					   >> 0x14U)) 
				 == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r)))
			      ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_data
			      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf
			     [(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					>> 0x14U))])),32);
	vcdp->fullBit(c+33,((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_miscmem) 
			      & ((0U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					       >> 0xcU))) 
				 | (1U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						 >> 0xcU))))) 
			     | ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_sys_op) 
				& (1U == (0xfffU & 
					  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					   >> 0x14U)))))));
	vcdp->fullBit(c+34,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_branch_taken));
	vcdp->fullBus(c+35,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_result),32);
	vcdp->fullBus(c+36,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__csr_data),32);
	vcdp->fullBus(c+37,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_data),32);
	vcdp->fullBit(c+38,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_IF));
	vcdp->fullBit(c+39,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_result_IF));
	vcdp->fullBit(c+40,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__uncond_branch_hit_IF));
	vcdp->fullBit(c+41,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_misprediction));
	vcdp->fullBus(c+42,((VL_NEGATE_I((IData)((0U 
						  != vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF))) 
			     & ((0x17U >= (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__read_addr))
				 ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table
				[vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__read_addr]
				 : 0U))),32);
	vcdp->fullBus(c+43,((VL_NEGATE_I((IData)((0U 
						  != vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF))) 
			     & ((0x13U >= (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__read_addr))
				 ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table
				[vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__read_addr]
				 : 0U))),32);
	vcdp->fullBit(c+44,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__irq_taken));
	vcdp->fullBus(c+45,(((0U == (3U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mtvec_r))
			      ? (0xfffffffcU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mtvec_r)
			      : ((0xfffffffcU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mtvec_r) 
				 + (0xfffffffcU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__irq_cause 
						   << 2U))))),32);
	vcdp->fullBus(c+46,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt),2);
	vcdp->fullBus(c+47,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dS_nxt),2);
	vcdp->fullBit(c+48,((1U & (~ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_i_ready)))));
	vcdp->fullBit(c+49,((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dS_nxt))));
	vcdp->fullBit(c+50,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline));
	vcdp->fullBit(c+51,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Pipeline_Control__DOT__branch_flush));
	vcdp->fullBit(c+52,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__we));
	vcdp->fullBus(c+53,(((0x17U >= (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__read_addr))
			      ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table
			     [vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__read_addr]
			      : 0U)),32);
	vcdp->fullBus(c+54,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF),24);
	vcdp->fullBus(c+55,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE),24);
	vcdp->fullBus(c+56,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__read_addr),5);
	vcdp->fullBus(c+57,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__update_addr),5);
	vcdp->fullBus(c+58,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[0]),32);
	vcdp->fullBus(c+59,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[1]),32);
	vcdp->fullBus(c+60,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[2]),32);
	vcdp->fullBus(c+61,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[3]),32);
	vcdp->fullBus(c+62,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[4]),32);
	vcdp->fullBus(c+63,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[5]),32);
	vcdp->fullBus(c+64,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[6]),32);
	vcdp->fullBus(c+65,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[7]),32);
	vcdp->fullBus(c+66,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[8]),32);
	vcdp->fullBus(c+67,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[9]),32);
	vcdp->fullBus(c+68,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[10]),32);
	vcdp->fullBus(c+69,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[11]),32);
	vcdp->fullBus(c+70,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[12]),32);
	vcdp->fullBus(c+71,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[13]),32);
	vcdp->fullBus(c+72,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[14]),32);
	vcdp->fullBus(c+73,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[15]),32);
	vcdp->fullBus(c+74,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[16]),32);
	vcdp->fullBus(c+75,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[17]),32);
	vcdp->fullBus(c+76,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[18]),32);
	vcdp->fullBus(c+77,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[19]),32);
	vcdp->fullBus(c+78,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[20]),32);
	vcdp->fullBus(c+79,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[21]),32);
	vcdp->fullBus(c+80,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[22]),32);
	vcdp->fullBus(c+81,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[23]),32);
	vcdp->fullBit(c+82,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__we));
	vcdp->fullBus(c+83,(((0x13U >= (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__read_addr))
			      ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table
			     [vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__read_addr]
			      : 0U)),32);
	vcdp->fullBus(c+84,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF),20);
	vcdp->fullBus(c+85,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE),20);
	vcdp->fullBus(c+86,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__read_addr),5);
	vcdp->fullBus(c+87,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[0]),32);
	vcdp->fullBus(c+88,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[1]),32);
	vcdp->fullBus(c+89,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[2]),32);
	vcdp->fullBus(c+90,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[3]),32);
	vcdp->fullBus(c+91,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[4]),32);
	vcdp->fullBus(c+92,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[5]),32);
	vcdp->fullBus(c+93,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[6]),32);
	vcdp->fullBus(c+94,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[7]),32);
	vcdp->fullBus(c+95,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[8]),32);
	vcdp->fullBus(c+96,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[9]),32);
	vcdp->fullBus(c+97,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[10]),32);
	vcdp->fullBus(c+98,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[11]),32);
	vcdp->fullBus(c+99,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[12]),32);
	vcdp->fullBus(c+100,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[13]),32);
	vcdp->fullBus(c+101,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[14]),32);
	vcdp->fullBus(c+102,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[15]),32);
	vcdp->fullBus(c+103,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[16]),32);
	vcdp->fullBus(c+104,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[17]),32);
	vcdp->fullBus(c+105,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[18]),32);
	vcdp->fullBus(c+106,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[19]),32);
	vcdp->fullBit(c+107,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__we));
	vcdp->fullBit(c+108,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline) 
			      | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Pipeline_Control__DOT__is_load_use))));
	vcdp->fullBit(c+109,(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Fetch__stall));
	vcdp->fullBit(c+110,(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Fetch__flush));
	vcdp->fullBit(c+111,(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Decode__flush));
	vcdp->fullBus(c+112,((((((VL_NEGATE_I((IData)(
						      (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_op_imm) 
							| (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_jalr)) 
						       | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_load)))) 
				  & ((0xfffff800U & 
				      (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
							       >> 0x1fU)))) 
				       << 0xbU)) | 
				     (0x7ffU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						>> 0x14U)))) 
				 | (VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_store))) 
				    & ((0xfffff800U 
					& (VL_NEGATE_I((IData)(
							       (1U 
								& (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
								   >> 0x1fU)))) 
					   << 0xbU)) 
				       | ((0x7e0U & 
					   (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					    >> 0x14U)) 
					  | (0x1fU 
					     & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						>> 7U)))))) 
				| (VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_branch))) 
				   & ((0xfffff000U 
				       & (VL_NEGATE_I((IData)(
							      (1U 
							       & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
								  >> 0x1fU)))) 
					  << 0xcU)) 
				      | ((0x800U & 
					  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					   << 4U)) 
					 | ((0x7e0U 
					     & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						>> 0x14U)) 
					    | (0x1eU 
					       & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						  >> 7U))))))) 
			       | (0xfffff000U & (VL_NEGATE_I((IData)(
								     ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_lui) 
								      | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_auipc)))) 
						 & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec))) 
			      | (VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_jal))) 
				 & ((0xfff00000U & 
				     (VL_NEGATE_I((IData)(
							  (1U 
							   & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
							      >> 0x1fU)))) 
				      << 0x14U)) | 
				    ((0xff000U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec) 
				     | ((0x800U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						   >> 9U)) 
					| ((0x7e0U 
					    & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					       >> 0x14U)) 
					   | (0x1eU 
					      & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						 >> 0x14U))))))))),32);
	vcdp->fullBit(c+113,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_store));
	vcdp->fullBit(c+114,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_load) 
			      | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_amo))));
	vcdp->fullBit(c+115,((((((((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_lui) 
				     | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_auipc)) 
				    | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_load)) 
				   | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_op_imm)) 
				  | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_op)) 
				 | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_csr)) 
				| (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_amo)) 
			       | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_jal)) 
			      | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_jalr))));
	vcdp->fullBus(c+116,(((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_auipc) 
				| (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_jal)) 
			       | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_branch))
			       ? 1U : (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_lui) 
					| (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_store))
				        ? 0U : 2U))),2);
	vcdp->fullBus(c+117,(((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_op) 
				& (0U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						>> 0xcU)))) 
			       & (0x20U == (0x7fU & 
					    (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					     >> 0x19U))))
			       ? 2U : ((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_store) 
					 | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_op)) 
					| (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_amo))
				        ? 1U : 0U))),2);
	vcdp->fullBus(c+118,((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_load) 
			       & ((0U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						>> 0xcU))) 
				  | (4U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						  >> 0xcU)))))
			       ? 0U : (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_load) 
					& ((1U == (7U 
						   & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						      >> 0xcU))) 
					   | (5U == 
					      (7U & 
					       (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						>> 0xcU)))))
				        ? 1U : (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_load) 
						 & (2U 
						    == 
						    (7U 
						     & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
							>> 0xcU))))
						 ? 2U
						 : 
						(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_jal) 
						  | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_jalr))
						  ? 3U
						  : 
						 ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_csr)
						   ? 5U
						   : 4U)))))),3);
	vcdp->fullBus(c+119,((7U & (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_lui) 
				     | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_auipc))
				     ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					     >> 0xcU)))),3);
	vcdp->fullBit(c+120,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_op) 
			      & (1U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						 >> 0x19U))))));
	vcdp->fullBit(c+121,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_branch));
	vcdp->fullBit(c+122,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_jal));
	vcdp->fullBit(c+123,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_jalr));
	vcdp->fullBit(c+124,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_csr));
	vcdp->fullBit(c+125,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_op));
	vcdp->fullBit(c+126,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_op_imm));
	vcdp->fullBit(c+127,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_load));
	vcdp->fullBit(c+128,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_lui));
	vcdp->fullBit(c+129,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_auipc));
	vcdp->fullBit(c+130,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_miscmem));
	vcdp->fullBit(c+131,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_system));
	vcdp->fullBit(c+132,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_amo));
	vcdp->fullBit(c+133,((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_op_imm) 
			       | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_jalr)) 
			      | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_load))));
	vcdp->fullBit(c+134,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_lui) 
			      | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_auipc))));
	vcdp->fullBit(c+135,((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_op) 
			       & (0U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					       >> 0xcU)))) 
			      & (0x20U == (0x7fU & 
					   (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					    >> 0x19U))))));
	vcdp->fullBit(c+136,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_branch) 
			      & (0U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					      >> 0xcU))))));
	vcdp->fullBit(c+137,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_branch) 
			      & (1U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					      >> 0xcU))))));
	vcdp->fullBit(c+138,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_branch) 
			      & (4U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					      >> 0xcU))))));
	vcdp->fullBit(c+139,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_branch) 
			      & (5U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					      >> 0xcU))))));
	vcdp->fullBit(c+140,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_branch) 
			      & (6U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					      >> 0xcU))))));
	vcdp->fullBit(c+141,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_branch) 
			      & (7U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					      >> 0xcU))))));
	vcdp->fullBit(c+142,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_miscmem) 
			      & (0U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					      >> 0xcU))))));
	vcdp->fullBit(c+143,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_miscmem) 
			      & (1U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					      >> 0xcU))))));
	vcdp->fullBit(c+144,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_system) 
			      & (1U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					      >> 0xcU))))));
	vcdp->fullBit(c+145,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_system) 
			      & (2U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					      >> 0xcU))))));
	vcdp->fullBit(c+146,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_system) 
			      & (3U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					      >> 0xcU))))));
	vcdp->fullBit(c+147,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_system) 
			      & (5U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					      >> 0xcU))))));
	vcdp->fullBit(c+148,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_system) 
			      & (6U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					      >> 0xcU))))));
	vcdp->fullBit(c+149,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_system) 
			      & (7U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					      >> 0xcU))))));
	vcdp->fullBit(c+150,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_sys_op));
	vcdp->fullBit(c+151,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_ecall));
	vcdp->fullBit(c+152,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_sys_op) 
			      & (1U == (0xfffU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						  >> 0x14U))))));
	vcdp->fullBit(c+153,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_mret));
	vcdp->fullBit(c+154,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_load) 
			      & (0U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					      >> 0xcU))))));
	vcdp->fullBit(c+155,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_load) 
			      & (1U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					      >> 0xcU))))));
	vcdp->fullBit(c+156,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_load) 
			      & (2U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					      >> 0xcU))))));
	vcdp->fullBit(c+157,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_load) 
			      & (4U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					      >> 0xcU))))));
	vcdp->fullBit(c+158,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_load) 
			      & (5U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					      >> 0xcU))))));
	vcdp->fullBit(c+159,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_store) 
			      & (0U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					      >> 0xcU))))));
	vcdp->fullBit(c+160,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_store) 
			      & (1U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					      >> 0xcU))))));
	vcdp->fullBit(c+161,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_store) 
			      & (2U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					      >> 0xcU))))));
	vcdp->fullBus(c+162,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA),32);
	vcdp->fullBus(c+163,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB),32);
	vcdp->fullBit(c+164,((((((((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)) 
				   & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data 
				       == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data)
				       ? 1U : 0U)) 
				  | ((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)) 
				     & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data 
					 != vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data)
					 ? 1U : 0U))) 
				 | ((4U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)) 
				    & (VL_LTS_III(1,32,32, vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data, vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data)
				        ? 1U : 0U))) 
				| ((5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)) 
				   & (VL_GTES_III(1,32,32, vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data, vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data)
				       ? 1U : 0U))) 
			       | ((6U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)) 
				  & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data 
				      < vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data)
				      ? 1U : 0U))) 
			      | ((7U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)) 
				 & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data 
				     >= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data)
				     ? 1U : 0U)))));
	vcdp->fullBus(c+165,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__alu_muldiv_sel2exe)
			       ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_result
			       : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_result)),32);
	vcdp->fullBus(c+166,((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data 
			      + vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_imm2exe)),32);
	vcdp->fullBus(c+167,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation),3);
	vcdp->fullBit(c+168,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_req));
	vcdp->fullBus(c+169,((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
			      + vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB)),32);
	vcdp->fullBus(c+170,((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
			      << (0x1fU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB))),32);
	vcdp->fullBus(c+171,((VL_LTS_III(1,32,32, vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA, vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB)
			       ? 1U : 0U)),32);
	vcdp->fullBus(c+172,(((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
			       < vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB)
			       ? 1U : 0U)),32);
	vcdp->fullBus(c+173,((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
			      ^ vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB)),32);
	vcdp->fullBus(c+174,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__shift_sel2exe)
			       ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
				  >> (0x1fU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB))
			       : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
				  >> (0x1fU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB)))),32);
	vcdp->fullBus(c+175,((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
			      | vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB)),32);
	vcdp->fullBus(c+176,((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
			      & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB)),32);
	vcdp->fullBit(c+177,((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation))));
	vcdp->fullBit(c+178,((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation))));
	vcdp->fullBit(c+179,((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation))));
	vcdp->fullBit(c+180,((3U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation))));
	vcdp->fullBit(c+181,((4U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation))));
	vcdp->fullBit(c+182,((5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation))));
	vcdp->fullBit(c+183,((6U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation))));
	vcdp->fullBit(c+184,((7U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation))));
	vcdp->fullBit(c+185,((0U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA)));
	vcdp->fullBit(c+186,((0U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB)));
	vcdp->fullBit(c+187,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__is_a_neg));
	vcdp->fullBit(c+188,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__is_b_neg));
	vcdp->fullBit(c+189,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__signed_adjust));
	vcdp->fullBit(c+190,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__is_a_neg) 
			      & (0U == (0x7fffffffU 
					& vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA)))));
	vcdp->fullBus(c+191,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__op_a),32);
	vcdp->fullBus(c+192,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__op_b),32);
	vcdp->fullBus(c+193,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt),2);
	vcdp->fullQuad(c+194,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__adder_opa),33);
	vcdp->fullQuad(c+196,((VL_ULL(0x1ffffffff) 
			       & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__adder_opa 
				  + (QData)((IData)(
						    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U]))))),33);
	vcdp->fullArray(c+198,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result_tmp),65);
	vcdp->fullBit(c+201,((1U & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data 
				     == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data)
				     ? 1U : 0U))));
	vcdp->fullBit(c+202,((1U & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data 
				     != vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data)
				     ? 1U : 0U))));
	vcdp->fullBit(c+203,((1U & (VL_LTS_III(1,32,32, vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data, vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data)
				     ? 1U : 0U))));
	vcdp->fullBit(c+204,((1U & (VL_GTES_III(1,32,32, vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data, vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data)
				     ? 1U : 0U))));
	vcdp->fullBit(c+205,((1U & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data 
				     < vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data)
				     ? 1U : 0U))));
	vcdp->fullBit(c+206,((1U & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data 
				     >= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data)
				     ? 1U : 0U))));
	vcdp->fullBus(c+207,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__aligned_data_o),32);
	vcdp->fullBus(c+208,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus),32);
	vcdp->fullBus(c+209,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie),32);
	vcdp->fullBus(c+210,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__irq_cause),32);
	vcdp->fullBus(c+211,((0x7fffffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__irq_cause)),31);
	vcdp->fullBus(c+212,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mip),32);
	vcdp->fullBit(c+213,((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__tmr_irq) 
			       & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_mtie_r)) 
			      | ((0U != vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem
				  [4U]) & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_msie_r)))));
	vcdp->fullBit(c+214,((0x341U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__sys_jump_csr_addr))));
	vcdp->fullBit(c+215,((0x305U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__sys_jump_csr_addr))));
	vcdp->fullBus(c+216,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__csr_inputB),32);
	vcdp->fullBus(c+217,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__updated_csr_data),32);
	vcdp->fullBit(c+218,((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel))));
	vcdp->fullBit(c+219,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_we) 
			      & (2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel)))));
	vcdp->fullBit(c+220,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit[0]));
	vcdp->fullBit(c+221,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit[1]));
	vcdp->fullBit(c+222,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit[2]));
	vcdp->fullBit(c+223,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit[3]));
	vcdp->fullBit(c+224,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_hit));
	vcdp->fullArray(c+225,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[0]),256);
	vcdp->fullArray(c+233,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[1]),256);
	vcdp->fullArray(c+241,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[2]),256);
	vcdp->fullArray(c+249,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[3]),256);
	vcdp->fullArray(c+257,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr),256);
	vcdp->fullBit(c+265,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write[0]));
	vcdp->fullBit(c+266,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write[1]));
	vcdp->fullBit(c+267,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write[2]));
	vcdp->fullBit(c+268,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write[3]));
	vcdp->fullBus(c+269,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__S_nxt),2);
	vcdp->fullBus(c+270,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__idx),32);
	vcdp->fullBus(c+271,(((0x10U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
			       ? ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
				   ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
				       ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[0U]
				       : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[1U])
				   : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
				       ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[2U]
				       : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[3U]))
			       : ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
				   ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
				       ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[4U]
				       : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[5U])
				   : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
				       ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[6U]
				       : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[7U])))),32);
	vcdp->fullBit(c+272,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write
			     [0U]));
	vcdp->fullBit(c+273,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write
			     [1U]));
	vcdp->fullBit(c+274,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write
			     [2U]));
	vcdp->fullBit(c+275,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write
			     [3U]));
	vcdp->fullBit(c+276,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_d_strobe) 
			      & (0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel)))));
	vcdp->fullBit(c+277,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_we) 
			      & (0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel)))));
	vcdp->fullBus(c+278,((7U & ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
				     ? (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_d_strobe) 
					 & (0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel)))
					 ? 1U : 0U)
				     : ((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
					 ? ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_hit)
					     ? 0U : 
					    (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_
					     [(0x1fU 
					       & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
						  >> 5U))]
					     [vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__victim_sel]
					      ? 2U : 4U))
					 : ((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
					     ? ((IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_dcache_o)
						 ? 3U
						 : 2U)
					     : ((3U 
						 == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
						 ? 4U
						 : 
						((4U 
						  == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
						  ? 
						 ((IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_dcache_o)
						   ? 5U
						   : 4U)
						  : 0U))))))),3);
	vcdp->fullBus(c+279,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_tag_o[0]),22);
	vcdp->fullBus(c+280,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_tag_o[1]),22);
	vcdp->fullBus(c+281,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_tag_o[2]),22);
	vcdp->fullBus(c+282,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_tag_o[3]),22);
	vcdp->fullBit(c+283,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit[0]));
	vcdp->fullBit(c+284,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit[1]));
	vcdp->fullBit(c+285,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit[2]));
	vcdp->fullBit(c+286,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit[3]));
	vcdp->fullBit(c+287,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_hit));
	vcdp->fullArray(c+288,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[0]),256);
	vcdp->fullArray(c+296,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[1]),256);
	vcdp->fullArray(c+304,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[2]),256);
	vcdp->fullArray(c+312,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[3]),256);
	vcdp->fullArray(c+320,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data),256);
	vcdp->fullBus(c+328,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromCache),32);
	vcdp->fullBus(c+329,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromMem),32);
	vcdp->fullBus(c+330,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__update_data),32);
	vcdp->fullBus(c+331,(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__next_state),2);
	vcdp->fullBus(c+332,(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_status),8);
	vcdp->fullBit(c+333,(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_tx_push));
	vcdp->fullBit(c+334,(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_rx_pop));
	vcdp->fullBus(c+335,(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__dcache_next_state),2);
	vcdp->fullBit(c+336,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__i_m_strobe));
	vcdp->fullBit(c+337,(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_icache_o));
	vcdp->fullBit(c+338,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_strobe));
	vcdp->fullBit(c+339,(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_dcache_o));
	vcdp->fullBit(c+340,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_rw));
	vcdp->fullBus(c+341,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__i_m_addr),32);
	vcdp->fullBus(c+342,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_addr),32);
	VL_EXTEND_WI(256,32, __Vtemp8, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
	vcdp->fullArray(c+343,(__Vtemp8),256);
	vcdp->fullBus(c+351,(((2U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			       ? ((1U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
				   ? ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
				       ? 8U : 0U) : 
				  ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
				    ? 4U : ((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
					     ? 0xcU
					     : 0U)))
			       : ((1U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
				   ? ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
				       ? 2U : 0U) : 
				  ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
				    ? 1U : ((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
					     ? 3U : 
					    ((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
					      ? 0xfU
					      : 0U)))))),4);
	vcdp->fullBus(c+352,(vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_dev2core_data),32);
	vcdp->fullBit(c+353,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_we));
	vcdp->fullBus(c+354,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r),32);
	vcdp->fullBus(c+355,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem),32);
	vcdp->fullBit(c+356,((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS))));
	vcdp->fullBit(c+357,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_d_strobe));
	vcdp->fullBit(c+358,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_d_ready));
	vcdp->fullBus(c+359,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_d_dout),32);
	vcdp->fullArray(c+360,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_din),256);
	vcdp->fullBit(c+368,((0U != vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem
			      [4U])));
	vcdp->fullBus(c+369,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__clint_mem_data),32);
	vcdp->fullBus(c+370,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec),32);
	vcdp->fullBus(c+371,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_pc2dec),32);
	vcdp->fullBit(c+372,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_valid2dec));
	vcdp->fullBus(c+373,((0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
				       >> 0xfU))),5);
	vcdp->fullBus(c+374,((0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
				       >> 0x14U))),5);
	vcdp->fullBus(c+375,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe),32);
	vcdp->fullBus(c+376,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_imm2exe),32);
	vcdp->fullBus(c+377,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs1_data2fwd),32);
	vcdp->fullBus(c+378,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs2_data2fwd),32);
	vcdp->fullBit(c+379,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_regfile_we2exe));
	vcdp->fullBit(c+380,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_we2exe));
	vcdp->fullBit(c+381,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_re2exe));
	vcdp->fullBit(c+382,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_load_ext_sel2exe));
	vcdp->fullBit(c+383,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_instr_valid2csr));
	vcdp->fullBus(c+384,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rd_addr2exe),5);
	vcdp->fullBus(c+385,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs1_addr2fwd),5);
	vcdp->fullBus(c+386,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs2_addr2fwd),5);
	vcdp->fullBus(c+387,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_imm2csr),5);
	vcdp->fullBus(c+388,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_inA_sel2exe),2);
	vcdp->fullBus(c+389,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_inB_sel2exe),2);
	vcdp->fullBus(c+390,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_input_sel2exe),2);
	vcdp->fullBus(c+391,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_regfile_sel2exe),3);
	vcdp->fullBus(c+392,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe),3);
	vcdp->fullBus(c+393,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr),12);
	vcdp->fullBit(c+394,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__alu_muldiv_sel2exe));
	vcdp->fullBit(c+395,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__shift_sel2exe));
	vcdp->fullBit(c+396,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_branch2exe));
	vcdp->fullBit(c+397,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_jal2exe));
	vcdp->fullBit(c+398,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_jalr2exe));
	vcdp->fullBit(c+399,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_csr_instr2csr));
	vcdp->fullBit(c+400,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__alu_muldiv_sel2exe) 
			      & (~ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_ready)))));
	vcdp->fullBus(c+401,(((IData)(4U) + vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe)),32);
	vcdp->fullBit(c+402,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_re));
	vcdp->fullBit(c+403,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_regfile_we2mem_wb));
	vcdp->fullBit(c+404,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_load_ext_sel2mem_wb));
	vcdp->fullBus(c+405,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rs2_data2mem),32);
	vcdp->fullBus(c+406,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_p_data),32);
	vcdp->fullBus(c+407,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rd_addr2mem_wb),5);
	vcdp->fullBus(c+408,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem),2);
	vcdp->fullBus(c+409,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_regfile_input_sel2mem_wb),3);
	vcdp->fullBit(c+410,(((2U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			       ? ((1U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
				   ? (0U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
				   : ((0U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem)) 
				      & (1U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))))
			       : ((1U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
				   ? (0U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
				   : ((0U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem)) 
				      & ((1U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem)) 
					 & (2U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))))))));
	vcdp->fullBit(c+411,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__regfile_we_r));
	vcdp->fullBus(c+412,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r),5);
	vcdp->fullBit(c+413,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_ID));
	vcdp->fullBit(c+414,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_EXE));
	vcdp->fullBit(c+415,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_result_ID));
	vcdp->fullBit(c+416,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_result_EXE));
	vcdp->fullBit(c+417,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__uncond_branch_hit_ID));
	vcdp->fullBit(c+418,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__uncond_branch_hit_EXE));
	vcdp->fullBus(c+419,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS),2);
	vcdp->fullBus(c+420,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dS),2);
	vcdp->fullBit(c+421,(((0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					>> 0xfU)) == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rd_addr2exe))));
	vcdp->fullBit(c+422,(((0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					>> 0x14U)) 
			      == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rd_addr2exe))));
	vcdp->fullBit(c+423,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs1_addr2fwd) 
			      == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rd_addr2mem_wb))));
	vcdp->fullBit(c+424,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs2_addr2fwd) 
			      == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rd_addr2mem_wb))));
	vcdp->fullBit(c+425,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs1_addr2fwd) 
			      == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r))));
	vcdp->fullBit(c+426,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs2_addr2fwd) 
			      == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r))));
	vcdp->fullBit(c+427,((0U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rd_addr2mem_wb))));
	vcdp->fullBit(c+428,((0U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r))));
	vcdp->fullBit(c+429,((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_regfile_we2mem_wb) 
			       & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs1_addr2fwd) 
				  == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rd_addr2mem_wb))) 
			      & (0U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rd_addr2mem_wb)))));
	vcdp->fullBit(c+430,((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_regfile_we2mem_wb) 
			       & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs2_addr2fwd) 
				  == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rd_addr2mem_wb))) 
			      & (0U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rd_addr2mem_wb)))));
	vcdp->fullBit(c+431,((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__regfile_we_r) 
			       & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs1_addr2fwd) 
				  == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r))) 
			      & (0U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r)))));
	vcdp->fullBit(c+432,((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__regfile_we_r) 
			       & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs2_addr2fwd) 
				  == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r))) 
			      & (0U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r)))));
	vcdp->fullBus(c+433,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__write_addr),5);
	vcdp->fullBus(c+434,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[0]),32);
	vcdp->fullBus(c+435,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[1]),32);
	vcdp->fullBus(c+436,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[2]),32);
	vcdp->fullBus(c+437,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[3]),32);
	vcdp->fullBus(c+438,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[4]),32);
	vcdp->fullBus(c+439,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[5]),32);
	vcdp->fullBus(c+440,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[6]),32);
	vcdp->fullBus(c+441,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[7]),32);
	vcdp->fullBus(c+442,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[8]),32);
	vcdp->fullBus(c+443,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[9]),32);
	vcdp->fullBus(c+444,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[10]),32);
	vcdp->fullBus(c+445,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[11]),32);
	vcdp->fullBus(c+446,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[12]),32);
	vcdp->fullBus(c+447,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[13]),32);
	vcdp->fullBus(c+448,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[14]),32);
	vcdp->fullBus(c+449,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[15]),32);
	vcdp->fullBus(c+450,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[16]),32);
	vcdp->fullBus(c+451,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[17]),32);
	vcdp->fullBus(c+452,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[18]),32);
	vcdp->fullBus(c+453,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[19]),32);
	vcdp->fullBus(c+454,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[20]),32);
	vcdp->fullBus(c+455,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[21]),32);
	vcdp->fullBus(c+456,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[22]),32);
	vcdp->fullBus(c+457,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[23]),32);
	vcdp->fullBus(c+458,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[0]),2);
	vcdp->fullBus(c+459,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[1]),2);
	vcdp->fullBus(c+460,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[2]),2);
	vcdp->fullBus(c+461,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[3]),2);
	vcdp->fullBus(c+462,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[4]),2);
	vcdp->fullBus(c+463,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[5]),2);
	vcdp->fullBus(c+464,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[6]),2);
	vcdp->fullBus(c+465,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[7]),2);
	vcdp->fullBus(c+466,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[8]),2);
	vcdp->fullBus(c+467,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[9]),2);
	vcdp->fullBus(c+468,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[10]),2);
	vcdp->fullBus(c+469,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[11]),2);
	vcdp->fullBus(c+470,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[12]),2);
	vcdp->fullBus(c+471,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[13]),2);
	vcdp->fullBus(c+472,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[14]),2);
	vcdp->fullBus(c+473,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[15]),2);
	vcdp->fullBus(c+474,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[16]),2);
	vcdp->fullBus(c+475,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[17]),2);
	vcdp->fullBus(c+476,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[18]),2);
	vcdp->fullBus(c+477,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[19]),2);
	vcdp->fullBus(c+478,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[20]),2);
	vcdp->fullBus(c+479,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[21]),2);
	vcdp->fullBus(c+480,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[22]),2);
	vcdp->fullBus(c+481,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[23]),2);
	vcdp->fullBus(c+482,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__idx),32);
	vcdp->fullBus(c+483,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[0]),32);
	vcdp->fullBus(c+484,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[1]),32);
	vcdp->fullBus(c+485,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[2]),32);
	vcdp->fullBus(c+486,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[3]),32);
	vcdp->fullBus(c+487,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[4]),32);
	vcdp->fullBus(c+488,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[5]),32);
	vcdp->fullBus(c+489,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[6]),32);
	vcdp->fullBus(c+490,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[7]),32);
	vcdp->fullBus(c+491,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[8]),32);
	vcdp->fullBus(c+492,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[9]),32);
	vcdp->fullBus(c+493,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[10]),32);
	vcdp->fullBus(c+494,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[11]),32);
	vcdp->fullBus(c+495,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[12]),32);
	vcdp->fullBus(c+496,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[13]),32);
	vcdp->fullBus(c+497,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[14]),32);
	vcdp->fullBus(c+498,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[15]),32);
	vcdp->fullBus(c+499,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[16]),32);
	vcdp->fullBus(c+500,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[17]),32);
	vcdp->fullBus(c+501,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[18]),32);
	vcdp->fullBus(c+502,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[19]),32);
	vcdp->fullBus(c+503,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__write_addr),5);
	vcdp->fullBus(c+504,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__idx),32);
	vcdp->fullBus(c+505,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[0]),32);
	vcdp->fullBus(c+506,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[1]),32);
	vcdp->fullBus(c+507,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[2]),32);
	vcdp->fullBus(c+508,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[3]),32);
	vcdp->fullBus(c+509,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[4]),32);
	vcdp->fullBus(c+510,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[5]),32);
	vcdp->fullBus(c+511,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[6]),32);
	vcdp->fullBus(c+512,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[7]),32);
	vcdp->fullBus(c+513,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[8]),32);
	vcdp->fullBus(c+514,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[9]),32);
	vcdp->fullBus(c+515,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[10]),32);
	vcdp->fullBus(c+516,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[11]),32);
	vcdp->fullBus(c+517,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[12]),32);
	vcdp->fullBus(c+518,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[13]),32);
	vcdp->fullBus(c+519,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[14]),32);
	vcdp->fullBus(c+520,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[15]),32);
	vcdp->fullBus(c+521,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[16]),32);
	vcdp->fullBus(c+522,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[17]),32);
	vcdp->fullBus(c+523,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[18]),32);
	vcdp->fullBus(c+524,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[19]),32);
	vcdp->fullBus(c+525,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[20]),32);
	vcdp->fullBus(c+526,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[21]),32);
	vcdp->fullBus(c+527,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[22]),32);
	vcdp->fullBus(c+528,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[23]),32);
	vcdp->fullBus(c+529,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[24]),32);
	vcdp->fullBus(c+530,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[25]),32);
	vcdp->fullBus(c+531,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[26]),32);
	vcdp->fullBus(c+532,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[27]),32);
	vcdp->fullBus(c+533,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[28]),32);
	vcdp->fullBus(c+534,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[29]),32);
	vcdp->fullBus(c+535,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[30]),32);
	vcdp->fullBus(c+536,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[31]),32);
	vcdp->fullBus(c+537,(((IData)(4U) + vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)),32);
	vcdp->fullBus(c+538,((0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
				       >> 7U))),5);
	vcdp->fullBus(c+539,((3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
				    >> 0xcU))),2);
	vcdp->fullBit(c+540,((1U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
				    >> 0xeU))));
	vcdp->fullBit(c+541,((0x20U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						 >> 0x19U)))));
	vcdp->fullBus(c+542,((0xfffU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					>> 0x14U))),12);
	vcdp->fullBus(c+543,((0x7fU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec)),7);
	vcdp->fullBus(c+544,((7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
				    >> 0xcU))),3);
	vcdp->fullBus(c+545,((0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
				       >> 0x19U))),7);
	vcdp->fullBus(c+546,(((0xfffff800U & (VL_NEGATE_I((IData)(
								  (1U 
								   & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
								      >> 0x1fU)))) 
					      << 0xbU)) 
			      | (0x7ffU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					   >> 0x14U)))),32);
	vcdp->fullBus(c+547,(((0xfffff800U & (VL_NEGATE_I((IData)(
								  (1U 
								   & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
								      >> 0x1fU)))) 
					      << 0xbU)) 
			      | ((0x7e0U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					    >> 0x14U)) 
				 | (0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					     >> 7U))))),32);
	vcdp->fullBus(c+548,(((0xfffff000U & (VL_NEGATE_I((IData)(
								  (1U 
								   & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
								      >> 0x1fU)))) 
					      << 0xcU)) 
			      | ((0x800U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					    << 4U)) 
				 | ((0x7e0U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					       >> 0x14U)) 
				    | (0x1eU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						>> 7U)))))),32);
	vcdp->fullBus(c+549,((0xfffff000U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec)),32);
	vcdp->fullBus(c+550,(((0xfff00000U & (VL_NEGATE_I((IData)(
								  (1U 
								   & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
								      >> 0x1fU)))) 
					      << 0x14U)) 
			      | ((0xff000U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec) 
				 | ((0x800U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					       >> 9U)) 
				    | ((0x7e0U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						  >> 0x14U)) 
				       | (0x1eU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						   >> 0x14U))))))),32);
	vcdp->fullBit(c+551,((0U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					   >> 2U)))));
	vcdp->fullBit(c+552,((1U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					   >> 2U)))));
	vcdp->fullBit(c+553,((2U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					   >> 2U)))));
	vcdp->fullBit(c+554,((3U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					   >> 2U)))));
	vcdp->fullBit(c+555,((4U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					   >> 2U)))));
	vcdp->fullBit(c+556,((5U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					   >> 2U)))));
	vcdp->fullBit(c+557,((6U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					   >> 2U)))));
	vcdp->fullBit(c+558,((7U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					   >> 2U)))));
	vcdp->fullBit(c+559,((0U == (3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					   >> 5U)))));
	vcdp->fullBit(c+560,((1U == (3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					   >> 5U)))));
	vcdp->fullBit(c+561,((2U == (3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					   >> 5U)))));
	vcdp->fullBit(c+562,((3U == (3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					   >> 5U)))));
	vcdp->fullBit(c+563,((0U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					   >> 0xcU)))));
	vcdp->fullBit(c+564,((1U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					   >> 0xcU)))));
	vcdp->fullBit(c+565,((2U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					   >> 0xcU)))));
	vcdp->fullBit(c+566,((3U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					   >> 0xcU)))));
	vcdp->fullBit(c+567,((4U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					   >> 0xcU)))));
	vcdp->fullBit(c+568,((5U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					   >> 0xcU)))));
	vcdp->fullBit(c+569,((6U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					   >> 0xcU)))));
	vcdp->fullBit(c+570,((7U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					   >> 0xcU)))));
	vcdp->fullBit(c+571,((0U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					      >> 0x19U)))));
	vcdp->fullBit(c+572,((1U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					      >> 0x19U)))));
	vcdp->fullBit(c+573,((5U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					      >> 0x19U)))));
	vcdp->fullBit(c+574,((9U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					      >> 0x19U)))));
	vcdp->fullBit(c+575,((0xdU == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						>> 0x19U)))));
	vcdp->fullBit(c+576,((0x15U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						 >> 0x19U)))));
	vcdp->fullBit(c+577,((0x21U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						 >> 0x19U)))));
	vcdp->fullBit(c+578,((0x11U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						 >> 0x19U)))));
	vcdp->fullBit(c+579,((0x2dU == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						 >> 0x19U)))));
	vcdp->fullBit(c+580,((0x7fU == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						 >> 0x19U)))));
	vcdp->fullBit(c+581,((4U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					      >> 0x19U)))));
	vcdp->fullBit(c+582,((8U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					      >> 0x19U)))));
	vcdp->fullBit(c+583,((0xcU == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						>> 0x19U)))));
	vcdp->fullBit(c+584,((0x2cU == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						 >> 0x19U)))));
	vcdp->fullBit(c+585,((0x10U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						 >> 0x19U)))));
	vcdp->fullBit(c+586,((0x14U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						 >> 0x19U)))));
	vcdp->fullBit(c+587,((0x60U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						 >> 0x19U)))));
	vcdp->fullBit(c+588,((0x70U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						 >> 0x19U)))));
	vcdp->fullBit(c+589,((0x50U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						 >> 0x19U)))));
	vcdp->fullBit(c+590,((0x68U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						 >> 0x19U)))));
	vcdp->fullBit(c+591,((0x78U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						 >> 0x19U)))));
	vcdp->fullBit(c+592,((0x51U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						 >> 0x19U)))));
	vcdp->fullBit(c+593,((0x71U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						 >> 0x19U)))));
	vcdp->fullBit(c+594,((0x61U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						 >> 0x19U)))));
	vcdp->fullBit(c+595,((0x69U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						 >> 0x19U)))));
	vcdp->fullBus(c+596,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_result),32);
	vcdp->fullBit(c+597,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_ready));
	vcdp->fullBit(c+598,((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))));
	vcdp->fullBit(c+599,((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))));
	vcdp->fullBit(c+600,((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))));
	vcdp->fullBit(c+601,((3U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))));
	vcdp->fullBit(c+602,((4U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))));
	vcdp->fullBit(c+603,((5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))));
	vcdp->fullBit(c+604,((6U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))));
	vcdp->fullBit(c+605,((7U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))));
	vcdp->fullBit(c+606,((1U & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe) 
				    >> 2U))));
	vcdp->fullBit(c+607,((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__cnt)))))));
	vcdp->fullBus(c+608,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__reg32),32);
	vcdp->fullArray(c+609,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result),65);
	vcdp->fullBus(c+612,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__cnt),6);
	vcdp->fullBus(c+613,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[0U]),32);
	vcdp->fullBus(c+614,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U]),32);
	vcdp->fullBus(c+615,(((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[2U] 
			       << 0x1fU) | (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U] 
					    >> 1U))),32);
	vcdp->fullBus(c+616,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S),2);
	vcdp->fullBit(c+617,((1U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[0U])));
	vcdp->fullBit(c+618,((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U] 
			      >= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__reg32)));
	vcdp->fullQuad(c+619,((QData)((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U]))),33);
	vcdp->fullBus(c+621,((3U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)),2);
	vcdp->fullBus(c+622,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__regfile_input_sel_r),3);
	vcdp->fullBit(c+623,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_load_ext_sel_r));
	vcdp->fullBus(c+624,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_addr_alignment_r),2);
	vcdp->fullBus(c+625,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__p_data_r),32);
	vcdp->fullBus(c+626,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_data_r),32);
	vcdp->fullBit(c+627,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus_mpie_r));
	vcdp->fullBit(c+628,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus_mie_r));
	vcdp->fullBit(c+629,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_meie_r));
	vcdp->fullBit(c+630,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_mtie_r));
	vcdp->fullBit(c+631,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_msie_r));
	vcdp->fullBus(c+632,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mtvec_r),32);
	vcdp->fullBus(c+633,((0xfffffffcU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mtvec_r)),32);
	vcdp->fullBus(c+634,((3U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mtvec_r)),3);
	vcdp->fullBus(c+635,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mscratch_r),32);
	vcdp->fullBus(c+636,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mepc_r),32);
	vcdp->fullBus(c+637,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mcause_r),32);
	vcdp->fullBit(c+638,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mip_meip_r));
	vcdp->fullBit(c+639,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mip_mtip_r));
	vcdp->fullBit(c+640,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mip_msip_r));
	vcdp->fullQuad(c+641,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mcycle_r),64);
	vcdp->fullBus(c+643,((0x3ffffffU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
					    >> 2U))),32);
	vcdp->fullBus(c+644,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem[0]),32);
	vcdp->fullBus(c+645,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem[1]),32);
	vcdp->fullBus(c+646,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem[2]),32);
	vcdp->fullBus(c+647,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem[3]),32);
	vcdp->fullBus(c+648,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem[4]),32);
	vcdp->fullQuad(c+649,((((QData)((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem
						[1U])) 
				<< 0x20U) | (QData)((IData)(
							    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem
							    [0U])))),64);
	vcdp->fullQuad(c+651,((((QData)((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem
						[3U])) 
				<< 0x20U) | (QData)((IData)(
							    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem
							    [2U])))),64);
	vcdp->fullBus(c+653,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem
			     [4U]),32);
	vcdp->fullBus(c+654,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__counter),17);
	vcdp->fullBit(c+655,((0xffffffffU == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem
			      [1U])));
	vcdp->fullBus(c+656,((7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
				    >> 2U))),3);
	vcdp->fullBus(c+657,((0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
				       >> 5U))),5);
	vcdp->fullBus(c+658,((0x3fffffU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
					   >> 0xaU))),22);
	vcdp->fullBus(c+659,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[0]),2);
	vcdp->fullBus(c+660,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[1]),2);
	vcdp->fullBus(c+661,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[2]),2);
	vcdp->fullBus(c+662,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[3]),2);
	vcdp->fullBus(c+663,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[4]),2);
	vcdp->fullBus(c+664,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[5]),2);
	vcdp->fullBus(c+665,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[6]),2);
	vcdp->fullBus(c+666,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[7]),2);
	vcdp->fullBus(c+667,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[8]),2);
	vcdp->fullBus(c+668,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[9]),2);
	vcdp->fullBus(c+669,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[10]),2);
	vcdp->fullBus(c+670,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[11]),2);
	vcdp->fullBus(c+671,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[12]),2);
	vcdp->fullBus(c+672,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[13]),2);
	vcdp->fullBus(c+673,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[14]),2);
	vcdp->fullBus(c+674,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[15]),2);
	vcdp->fullBus(c+675,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[16]),2);
	vcdp->fullBus(c+676,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[17]),2);
	vcdp->fullBus(c+677,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[18]),2);
	vcdp->fullBus(c+678,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[19]),2);
	vcdp->fullBus(c+679,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[20]),2);
	vcdp->fullBus(c+680,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[21]),2);
	vcdp->fullBus(c+681,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[22]),2);
	vcdp->fullBus(c+682,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[23]),2);
	vcdp->fullBus(c+683,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[24]),2);
	vcdp->fullBus(c+684,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[25]),2);
	vcdp->fullBus(c+685,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[26]),2);
	vcdp->fullBus(c+686,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[27]),2);
	vcdp->fullBus(c+687,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[28]),2);
	vcdp->fullBus(c+688,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[29]),2);
	vcdp->fullBus(c+689,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[30]),2);
	vcdp->fullBus(c+690,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[31]),2);
	vcdp->fullBus(c+691,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__victim_sel),2);
	vcdp->fullBit(c+692,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__index_prev) 
			      != (0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
					   >> 5U)))));
	vcdp->fullBus(c+693,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__index_prev),5);
	vcdp->fullBus(c+694,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__S),2);
	vcdp->fullBus(c+695,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__jdx),32);
	VL_EXTEND_WI(256,32, __Vtemp9, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
	VL_EXTEND_WI(256,32, __Vtemp10, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
	VL_EXTEND_WI(256,32, __Vtemp11, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
	VL_EXTEND_WI(256,32, __Vtemp12, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
	VL_EXTEND_WI(256,32, __Vtemp13, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
	VL_EXTEND_WI(256,32, __Vtemp14, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
	VL_EXTEND_WI(256,32, __Vtemp15, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
	vcdp->fullBus(c+696,(((0x10U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
			       ? ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
				   ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
				       ? vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o
				       : __Vtemp9[1U])
				   : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
				       ? __Vtemp10[2U]
				       : __Vtemp11[3U]))
			       : ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
				   ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
				       ? __Vtemp12[4U]
				       : __Vtemp13[5U])
				   : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
				       ? __Vtemp14[6U]
				       : __Vtemp15[7U])))),32);
	vcdp->fullArray(c+697,(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o),256);
	vcdp->fullArray(c+705,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[0]),256);
	vcdp->fullArray(c+713,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[1]),256);
	vcdp->fullArray(c+721,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[2]),256);
	vcdp->fullArray(c+729,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[3]),256);
	vcdp->fullArray(c+737,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[4]),256);
	vcdp->fullArray(c+745,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[5]),256);
	vcdp->fullArray(c+753,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[6]),256);
	vcdp->fullArray(c+761,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[7]),256);
	vcdp->fullArray(c+769,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[8]),256);
	vcdp->fullArray(c+777,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[9]),256);
	vcdp->fullArray(c+785,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[10]),256);
	vcdp->fullArray(c+793,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[11]),256);
	vcdp->fullArray(c+801,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[12]),256);
	vcdp->fullArray(c+809,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[13]),256);
	vcdp->fullArray(c+817,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[14]),256);
	vcdp->fullArray(c+825,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[15]),256);
	vcdp->fullArray(c+833,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[16]),256);
	vcdp->fullArray(c+841,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[17]),256);
	vcdp->fullArray(c+849,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[18]),256);
	vcdp->fullArray(c+857,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[19]),256);
	vcdp->fullArray(c+865,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[20]),256);
	vcdp->fullArray(c+873,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[21]),256);
	vcdp->fullArray(c+881,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[22]),256);
	vcdp->fullArray(c+889,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[23]),256);
	vcdp->fullArray(c+897,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[24]),256);
	vcdp->fullArray(c+905,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[25]),256);
	vcdp->fullArray(c+913,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[26]),256);
	vcdp->fullArray(c+921,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[27]),256);
	vcdp->fullArray(c+929,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[28]),256);
	vcdp->fullArray(c+937,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[29]),256);
	vcdp->fullArray(c+945,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[30]),256);
	vcdp->fullArray(c+953,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[31]),256);
	vcdp->fullArray(c+961,(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o),256);
	vcdp->fullArray(c+969,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[0]),256);
	vcdp->fullArray(c+977,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[1]),256);
	vcdp->fullArray(c+985,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[2]),256);
	vcdp->fullArray(c+993,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[3]),256);
	vcdp->fullArray(c+1001,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[4]),256);
	vcdp->fullArray(c+1009,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[5]),256);
	vcdp->fullArray(c+1017,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[6]),256);
	vcdp->fullArray(c+1025,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[7]),256);
	vcdp->fullArray(c+1033,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[8]),256);
	vcdp->fullArray(c+1041,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[9]),256);
	vcdp->fullArray(c+1049,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[10]),256);
	vcdp->fullArray(c+1057,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[11]),256);
	vcdp->fullArray(c+1065,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[12]),256);
	vcdp->fullArray(c+1073,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[13]),256);
	vcdp->fullArray(c+1081,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[14]),256);
	vcdp->fullArray(c+1089,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[15]),256);
	vcdp->fullArray(c+1097,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[16]),256);
	vcdp->fullArray(c+1105,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[17]),256);
	vcdp->fullArray(c+1113,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[18]),256);
	vcdp->fullArray(c+1121,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[19]),256);
	vcdp->fullArray(c+1129,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[20]),256);
	vcdp->fullArray(c+1137,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[21]),256);
	vcdp->fullArray(c+1145,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[22]),256);
	vcdp->fullArray(c+1153,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[23]),256);
	vcdp->fullArray(c+1161,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[24]),256);
	vcdp->fullArray(c+1169,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[25]),256);
	vcdp->fullArray(c+1177,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[26]),256);
	vcdp->fullArray(c+1185,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[27]),256);
	vcdp->fullArray(c+1193,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[28]),256);
	vcdp->fullArray(c+1201,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[29]),256);
	vcdp->fullArray(c+1209,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[30]),256);
	vcdp->fullArray(c+1217,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[31]),256);
	vcdp->fullArray(c+1225,(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o),256);
	vcdp->fullArray(c+1233,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[0]),256);
	vcdp->fullArray(c+1241,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[1]),256);
	vcdp->fullArray(c+1249,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[2]),256);
	vcdp->fullArray(c+1257,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[3]),256);
	vcdp->fullArray(c+1265,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[4]),256);
	vcdp->fullArray(c+1273,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[5]),256);
	vcdp->fullArray(c+1281,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[6]),256);
	vcdp->fullArray(c+1289,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[7]),256);
	vcdp->fullArray(c+1297,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[8]),256);
	vcdp->fullArray(c+1305,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[9]),256);
	vcdp->fullArray(c+1313,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[10]),256);
	vcdp->fullArray(c+1321,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[11]),256);
	vcdp->fullArray(c+1329,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[12]),256);
	vcdp->fullArray(c+1337,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[13]),256);
	vcdp->fullArray(c+1345,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[14]),256);
	vcdp->fullArray(c+1353,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[15]),256);
	vcdp->fullArray(c+1361,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[16]),256);
	vcdp->fullArray(c+1369,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[17]),256);
	vcdp->fullArray(c+1377,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[18]),256);
	vcdp->fullArray(c+1385,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[19]),256);
	vcdp->fullArray(c+1393,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[20]),256);
	vcdp->fullArray(c+1401,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[21]),256);
	vcdp->fullArray(c+1409,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[22]),256);
	vcdp->fullArray(c+1417,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[23]),256);
	vcdp->fullArray(c+1425,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[24]),256);
	vcdp->fullArray(c+1433,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[25]),256);
	vcdp->fullArray(c+1441,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[26]),256);
	vcdp->fullArray(c+1449,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[27]),256);
	vcdp->fullArray(c+1457,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[28]),256);
	vcdp->fullArray(c+1465,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[29]),256);
	vcdp->fullArray(c+1473,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[30]),256);
	vcdp->fullArray(c+1481,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[31]),256);
	vcdp->fullArray(c+1489,(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o),256);
	vcdp->fullArray(c+1497,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[0]),256);
	vcdp->fullArray(c+1505,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[1]),256);
	vcdp->fullArray(c+1513,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[2]),256);
	vcdp->fullArray(c+1521,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[3]),256);
	vcdp->fullArray(c+1529,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[4]),256);
	vcdp->fullArray(c+1537,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[5]),256);
	vcdp->fullArray(c+1545,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[6]),256);
	vcdp->fullArray(c+1553,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[7]),256);
	vcdp->fullArray(c+1561,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[8]),256);
	vcdp->fullArray(c+1569,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[9]),256);
	vcdp->fullArray(c+1577,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[10]),256);
	vcdp->fullArray(c+1585,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[11]),256);
	vcdp->fullArray(c+1593,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[12]),256);
	vcdp->fullArray(c+1601,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[13]),256);
	vcdp->fullArray(c+1609,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[14]),256);
	vcdp->fullArray(c+1617,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[15]),256);
	vcdp->fullArray(c+1625,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[16]),256);
	vcdp->fullArray(c+1633,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[17]),256);
	vcdp->fullArray(c+1641,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[18]),256);
	vcdp->fullArray(c+1649,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[19]),256);
	vcdp->fullArray(c+1657,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[20]),256);
	vcdp->fullArray(c+1665,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[21]),256);
	vcdp->fullArray(c+1673,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[22]),256);
	vcdp->fullArray(c+1681,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[23]),256);
	vcdp->fullArray(c+1689,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[24]),256);
	vcdp->fullArray(c+1697,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[25]),256);
	vcdp->fullArray(c+1705,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[26]),256);
	vcdp->fullArray(c+1713,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[27]),256);
	vcdp->fullArray(c+1721,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[28]),256);
	vcdp->fullArray(c+1729,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[29]),256);
	vcdp->fullArray(c+1737,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[30]),256);
	vcdp->fullArray(c+1745,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[31]),256);
	vcdp->fullBus(c+1753,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S),3);
	vcdp->fullBus(c+1754,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__datain_from_p),32);
	vcdp->fullBit(c+1755,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__rw));
	vcdp->fullBus(c+1756,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__byte_enable_from_p),4);
	vcdp->fullArray(c+1757,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i),256);
	vcdp->fullBit(c+1765,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_write[0]));
	vcdp->fullBit(c+1766,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_write[1]));
	vcdp->fullBit(c+1767,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_write[2]));
	vcdp->fullBit(c+1768,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_write[3]));
	vcdp->fullBus(c+1769,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[0]),2);
	vcdp->fullBus(c+1770,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[1]),2);
	vcdp->fullBus(c+1771,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[2]),2);
	vcdp->fullBus(c+1772,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[3]),2);
	vcdp->fullBus(c+1773,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[4]),2);
	vcdp->fullBus(c+1774,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[5]),2);
	vcdp->fullBus(c+1775,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[6]),2);
	vcdp->fullBus(c+1776,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[7]),2);
	vcdp->fullBus(c+1777,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[8]),2);
	vcdp->fullBus(c+1778,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[9]),2);
	vcdp->fullBus(c+1779,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[10]),2);
	vcdp->fullBus(c+1780,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[11]),2);
	vcdp->fullBus(c+1781,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[12]),2);
	vcdp->fullBus(c+1782,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[13]),2);
	vcdp->fullBus(c+1783,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[14]),2);
	vcdp->fullBus(c+1784,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[15]),2);
	vcdp->fullBus(c+1785,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[16]),2);
	vcdp->fullBus(c+1786,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[17]),2);
	vcdp->fullBus(c+1787,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[18]),2);
	vcdp->fullBus(c+1788,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[19]),2);
	vcdp->fullBus(c+1789,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[20]),2);
	vcdp->fullBus(c+1790,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[21]),2);
	vcdp->fullBus(c+1791,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[22]),2);
	vcdp->fullBus(c+1792,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[23]),2);
	vcdp->fullBus(c+1793,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[24]),2);
	vcdp->fullBus(c+1794,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[25]),2);
	vcdp->fullBus(c+1795,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[26]),2);
	vcdp->fullBus(c+1796,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[27]),2);
	vcdp->fullBus(c+1797,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[28]),2);
	vcdp->fullBus(c+1798,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[29]),2);
	vcdp->fullBus(c+1799,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[30]),2);
	vcdp->fullBus(c+1800,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[31]),2);
	vcdp->fullBus(c+1801,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__victim_sel),2);
	vcdp->fullArray(c+1802,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data),256);
	vcdp->fullBus(c+1810,((7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
				     >> 2U))),3);
	vcdp->fullBus(c+1811,((0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
					>> 5U))),5);
	vcdp->fullBus(c+1812,((0x3fffffU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
					    >> 0xaU))),22);
	vcdp->fullBus(c+1813,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__idx),32);
	vcdp->fullBus(c+1814,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__jdx),32);
	vcdp->fullBit(c+1815,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_write
			      [0U]));
	vcdp->fullBus(c+1816,(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__TAG_BRAM__data_o),22);
	vcdp->fullBus(c+1817,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[0]),22);
	vcdp->fullBus(c+1818,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[1]),22);
	vcdp->fullBus(c+1819,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[2]),22);
	vcdp->fullBus(c+1820,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[3]),22);
	vcdp->fullBus(c+1821,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[4]),22);
	vcdp->fullBus(c+1822,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[5]),22);
	vcdp->fullBus(c+1823,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[6]),22);
	vcdp->fullBus(c+1824,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[7]),22);
	vcdp->fullBus(c+1825,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[8]),22);
	vcdp->fullBus(c+1826,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[9]),22);
	vcdp->fullBus(c+1827,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[10]),22);
	vcdp->fullBus(c+1828,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[11]),22);
	vcdp->fullBus(c+1829,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[12]),22);
	vcdp->fullBus(c+1830,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[13]),22);
	vcdp->fullBus(c+1831,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[14]),22);
	vcdp->fullBus(c+1832,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[15]),22);
	vcdp->fullBus(c+1833,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[16]),22);
	vcdp->fullBus(c+1834,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[17]),22);
	vcdp->fullBus(c+1835,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[18]),22);
	vcdp->fullBus(c+1836,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[19]),22);
	vcdp->fullBus(c+1837,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[20]),22);
	vcdp->fullBus(c+1838,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[21]),22);
	vcdp->fullBus(c+1839,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[22]),22);
	vcdp->fullBus(c+1840,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[23]),22);
	vcdp->fullBus(c+1841,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[24]),22);
	vcdp->fullBus(c+1842,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[25]),22);
	vcdp->fullBus(c+1843,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[26]),22);
	vcdp->fullBus(c+1844,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[27]),22);
	vcdp->fullBus(c+1845,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[28]),22);
	vcdp->fullBus(c+1846,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[29]),22);
	vcdp->fullBus(c+1847,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[30]),22);
	vcdp->fullBus(c+1848,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[31]),22);
	vcdp->fullArray(c+1849,(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o),256);
	vcdp->fullArray(c+1857,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[0]),256);
	vcdp->fullArray(c+1865,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[1]),256);
	vcdp->fullArray(c+1873,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[2]),256);
	vcdp->fullArray(c+1881,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[3]),256);
	vcdp->fullArray(c+1889,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[4]),256);
	vcdp->fullArray(c+1897,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[5]),256);
	vcdp->fullArray(c+1905,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[6]),256);
	vcdp->fullArray(c+1913,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[7]),256);
	vcdp->fullArray(c+1921,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[8]),256);
	vcdp->fullArray(c+1929,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[9]),256);
	vcdp->fullArray(c+1937,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[10]),256);
	vcdp->fullArray(c+1945,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[11]),256);
	vcdp->fullArray(c+1953,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[12]),256);
	vcdp->fullArray(c+1961,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[13]),256);
	vcdp->fullArray(c+1969,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[14]),256);
	vcdp->fullArray(c+1977,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[15]),256);
	vcdp->fullArray(c+1985,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[16]),256);
	vcdp->fullArray(c+1993,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[17]),256);
	vcdp->fullArray(c+2001,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[18]),256);
	vcdp->fullArray(c+2009,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[19]),256);
	vcdp->fullArray(c+2017,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[20]),256);
	vcdp->fullArray(c+2025,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[21]),256);
	vcdp->fullArray(c+2033,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[22]),256);
	vcdp->fullArray(c+2041,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[23]),256);
	vcdp->fullArray(c+2049,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[24]),256);
	vcdp->fullArray(c+2057,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[25]),256);
	vcdp->fullArray(c+2065,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[26]),256);
	vcdp->fullArray(c+2073,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[27]),256);
	vcdp->fullArray(c+2081,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[28]),256);
	vcdp->fullArray(c+2089,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[29]),256);
	vcdp->fullArray(c+2097,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[30]),256);
	vcdp->fullArray(c+2105,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[31]),256);
	vcdp->fullBit(c+2113,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_write
			      [1U]));
	vcdp->fullBus(c+2114,(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__TAG_BRAM__data_o),22);
	vcdp->fullBus(c+2115,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[0]),22);
	vcdp->fullBus(c+2116,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[1]),22);
	vcdp->fullBus(c+2117,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[2]),22);
	vcdp->fullBus(c+2118,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[3]),22);
	vcdp->fullBus(c+2119,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[4]),22);
	vcdp->fullBus(c+2120,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[5]),22);
	vcdp->fullBus(c+2121,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[6]),22);
	vcdp->fullBus(c+2122,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[7]),22);
	vcdp->fullBus(c+2123,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[8]),22);
	vcdp->fullBus(c+2124,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[9]),22);
	vcdp->fullBus(c+2125,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[10]),22);
	vcdp->fullBus(c+2126,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[11]),22);
	vcdp->fullBus(c+2127,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[12]),22);
	vcdp->fullBus(c+2128,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[13]),22);
	vcdp->fullBus(c+2129,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[14]),22);
	vcdp->fullBus(c+2130,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[15]),22);
	vcdp->fullBus(c+2131,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[16]),22);
	vcdp->fullBus(c+2132,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[17]),22);
	vcdp->fullBus(c+2133,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[18]),22);
	vcdp->fullBus(c+2134,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[19]),22);
	vcdp->fullBus(c+2135,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[20]),22);
	vcdp->fullBus(c+2136,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[21]),22);
	vcdp->fullBus(c+2137,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[22]),22);
	vcdp->fullBus(c+2138,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[23]),22);
	vcdp->fullBus(c+2139,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[24]),22);
	vcdp->fullBus(c+2140,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[25]),22);
	vcdp->fullBus(c+2141,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[26]),22);
	vcdp->fullBus(c+2142,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[27]),22);
	vcdp->fullBus(c+2143,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[28]),22);
	vcdp->fullBus(c+2144,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[29]),22);
	vcdp->fullBus(c+2145,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[30]),22);
	vcdp->fullBus(c+2146,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[31]),22);
	vcdp->fullArray(c+2147,(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o),256);
	vcdp->fullArray(c+2155,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[0]),256);
	vcdp->fullArray(c+2163,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[1]),256);
	vcdp->fullArray(c+2171,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[2]),256);
	vcdp->fullArray(c+2179,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[3]),256);
	vcdp->fullArray(c+2187,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[4]),256);
	vcdp->fullArray(c+2195,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[5]),256);
	vcdp->fullArray(c+2203,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[6]),256);
	vcdp->fullArray(c+2211,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[7]),256);
	vcdp->fullArray(c+2219,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[8]),256);
	vcdp->fullArray(c+2227,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[9]),256);
	vcdp->fullArray(c+2235,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[10]),256);
	vcdp->fullArray(c+2243,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[11]),256);
	vcdp->fullArray(c+2251,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[12]),256);
	vcdp->fullArray(c+2259,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[13]),256);
	vcdp->fullArray(c+2267,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[14]),256);
	vcdp->fullArray(c+2275,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[15]),256);
	vcdp->fullArray(c+2283,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[16]),256);
	vcdp->fullArray(c+2291,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[17]),256);
	vcdp->fullArray(c+2299,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[18]),256);
	vcdp->fullArray(c+2307,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[19]),256);
	vcdp->fullArray(c+2315,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[20]),256);
	vcdp->fullArray(c+2323,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[21]),256);
	vcdp->fullArray(c+2331,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[22]),256);
	vcdp->fullArray(c+2339,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[23]),256);
	vcdp->fullArray(c+2347,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[24]),256);
	vcdp->fullArray(c+2355,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[25]),256);
	vcdp->fullArray(c+2363,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[26]),256);
	vcdp->fullArray(c+2371,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[27]),256);
	vcdp->fullArray(c+2379,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[28]),256);
	vcdp->fullArray(c+2387,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[29]),256);
	vcdp->fullArray(c+2395,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[30]),256);
	vcdp->fullArray(c+2403,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[31]),256);
	vcdp->fullBit(c+2411,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_write
			      [2U]));
	vcdp->fullBus(c+2412,(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__TAG_BRAM__data_o),22);
	vcdp->fullBus(c+2413,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[0]),22);
	vcdp->fullBus(c+2414,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[1]),22);
	vcdp->fullBus(c+2415,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[2]),22);
	vcdp->fullBus(c+2416,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[3]),22);
	vcdp->fullBus(c+2417,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[4]),22);
	vcdp->fullBus(c+2418,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[5]),22);
	vcdp->fullBus(c+2419,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[6]),22);
	vcdp->fullBus(c+2420,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[7]),22);
	vcdp->fullBus(c+2421,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[8]),22);
	vcdp->fullBus(c+2422,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[9]),22);
	vcdp->fullBus(c+2423,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[10]),22);
	vcdp->fullBus(c+2424,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[11]),22);
	vcdp->fullBus(c+2425,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[12]),22);
	vcdp->fullBus(c+2426,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[13]),22);
	vcdp->fullBus(c+2427,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[14]),22);
	vcdp->fullBus(c+2428,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[15]),22);
	vcdp->fullBus(c+2429,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[16]),22);
	vcdp->fullBus(c+2430,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[17]),22);
	vcdp->fullBus(c+2431,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[18]),22);
	vcdp->fullBus(c+2432,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[19]),22);
	vcdp->fullBus(c+2433,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[20]),22);
	vcdp->fullBus(c+2434,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[21]),22);
	vcdp->fullBus(c+2435,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[22]),22);
	vcdp->fullBus(c+2436,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[23]),22);
	vcdp->fullBus(c+2437,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[24]),22);
	vcdp->fullBus(c+2438,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[25]),22);
	vcdp->fullBus(c+2439,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[26]),22);
	vcdp->fullBus(c+2440,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[27]),22);
	vcdp->fullBus(c+2441,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[28]),22);
	vcdp->fullBus(c+2442,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[29]),22);
	vcdp->fullBus(c+2443,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[30]),22);
	vcdp->fullBus(c+2444,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[31]),22);
	vcdp->fullArray(c+2445,(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o),256);
	vcdp->fullArray(c+2453,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[0]),256);
	vcdp->fullArray(c+2461,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[1]),256);
	vcdp->fullArray(c+2469,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[2]),256);
	vcdp->fullArray(c+2477,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[3]),256);
	vcdp->fullArray(c+2485,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[4]),256);
	vcdp->fullArray(c+2493,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[5]),256);
	vcdp->fullArray(c+2501,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[6]),256);
	vcdp->fullArray(c+2509,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[7]),256);
	vcdp->fullArray(c+2517,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[8]),256);
	vcdp->fullArray(c+2525,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[9]),256);
	vcdp->fullArray(c+2533,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[10]),256);
	vcdp->fullArray(c+2541,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[11]),256);
	vcdp->fullArray(c+2549,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[12]),256);
	vcdp->fullArray(c+2557,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[13]),256);
	vcdp->fullArray(c+2565,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[14]),256);
	vcdp->fullArray(c+2573,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[15]),256);
	vcdp->fullArray(c+2581,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[16]),256);
	vcdp->fullArray(c+2589,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[17]),256);
	vcdp->fullArray(c+2597,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[18]),256);
	vcdp->fullArray(c+2605,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[19]),256);
	vcdp->fullArray(c+2613,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[20]),256);
	vcdp->fullArray(c+2621,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[21]),256);
	vcdp->fullArray(c+2629,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[22]),256);
	vcdp->fullArray(c+2637,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[23]),256);
	vcdp->fullArray(c+2645,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[24]),256);
	vcdp->fullArray(c+2653,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[25]),256);
	vcdp->fullArray(c+2661,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[26]),256);
	vcdp->fullArray(c+2669,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[27]),256);
	vcdp->fullArray(c+2677,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[28]),256);
	vcdp->fullArray(c+2685,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[29]),256);
	vcdp->fullArray(c+2693,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[30]),256);
	vcdp->fullArray(c+2701,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[31]),256);
	vcdp->fullBit(c+2709,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_write
			      [3U]));
	vcdp->fullBus(c+2710,(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__TAG_BRAM__data_o),22);
	vcdp->fullBus(c+2711,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[0]),22);
	vcdp->fullBus(c+2712,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[1]),22);
	vcdp->fullBus(c+2713,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[2]),22);
	vcdp->fullBus(c+2714,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[3]),22);
	vcdp->fullBus(c+2715,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[4]),22);
	vcdp->fullBus(c+2716,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[5]),22);
	vcdp->fullBus(c+2717,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[6]),22);
	vcdp->fullBus(c+2718,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[7]),22);
	vcdp->fullBus(c+2719,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[8]),22);
	vcdp->fullBus(c+2720,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[9]),22);
	vcdp->fullBus(c+2721,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[10]),22);
	vcdp->fullBus(c+2722,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[11]),22);
	vcdp->fullBus(c+2723,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[12]),22);
	vcdp->fullBus(c+2724,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[13]),22);
	vcdp->fullBus(c+2725,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[14]),22);
	vcdp->fullBus(c+2726,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[15]),22);
	vcdp->fullBus(c+2727,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[16]),22);
	vcdp->fullBus(c+2728,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[17]),22);
	vcdp->fullBus(c+2729,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[18]),22);
	vcdp->fullBus(c+2730,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[19]),22);
	vcdp->fullBus(c+2731,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[20]),22);
	vcdp->fullBus(c+2732,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[21]),22);
	vcdp->fullBus(c+2733,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[22]),22);
	vcdp->fullBus(c+2734,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[23]),22);
	vcdp->fullBus(c+2735,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[24]),22);
	vcdp->fullBus(c+2736,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[25]),22);
	vcdp->fullBus(c+2737,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[26]),22);
	vcdp->fullBus(c+2738,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[27]),22);
	vcdp->fullBus(c+2739,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[28]),22);
	vcdp->fullBus(c+2740,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[29]),22);
	vcdp->fullBus(c+2741,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[30]),22);
	vcdp->fullBus(c+2742,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[31]),22);
	vcdp->fullArray(c+2743,(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o),256);
	vcdp->fullArray(c+2751,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[0]),256);
	vcdp->fullArray(c+2759,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[1]),256);
	vcdp->fullArray(c+2767,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[2]),256);
	vcdp->fullArray(c+2775,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[3]),256);
	vcdp->fullArray(c+2783,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[4]),256);
	vcdp->fullArray(c+2791,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[5]),256);
	vcdp->fullArray(c+2799,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[6]),256);
	vcdp->fullArray(c+2807,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[7]),256);
	vcdp->fullArray(c+2815,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[8]),256);
	vcdp->fullArray(c+2823,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[9]),256);
	vcdp->fullArray(c+2831,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[10]),256);
	vcdp->fullArray(c+2839,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[11]),256);
	vcdp->fullArray(c+2847,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[12]),256);
	vcdp->fullArray(c+2855,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[13]),256);
	vcdp->fullArray(c+2863,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[14]),256);
	vcdp->fullArray(c+2871,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[15]),256);
	vcdp->fullArray(c+2879,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[16]),256);
	vcdp->fullArray(c+2887,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[17]),256);
	vcdp->fullArray(c+2895,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[18]),256);
	vcdp->fullArray(c+2903,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[19]),256);
	vcdp->fullArray(c+2911,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[20]),256);
	vcdp->fullArray(c+2919,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[21]),256);
	vcdp->fullArray(c+2927,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[22]),256);
	vcdp->fullArray(c+2935,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[23]),256);
	vcdp->fullArray(c+2943,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[24]),256);
	vcdp->fullArray(c+2951,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[25]),256);
	vcdp->fullArray(c+2959,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[26]),256);
	vcdp->fullArray(c+2967,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[27]),256);
	vcdp->fullArray(c+2975,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[28]),256);
	vcdp->fullArray(c+2983,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[29]),256);
	vcdp->fullArray(c+2991,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[30]),256);
	vcdp->fullArray(c+2999,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[31]),256);
	vcdp->fullBus(c+3007,(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__cur_state),2);
	vcdp->fullBus(c+3008,(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_tx_fifo),8);
	vcdp->fullBus(c+3009,(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_rx_fifo),8);
	vcdp->fullBit(c+3010,((1U <= (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__transmit_counter))));
	vcdp->fullBit(c+3011,(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_tx_fifo_full));
	vcdp->fullBit(c+3012,(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_tx_fifo_empty));
	vcdp->fullBit(c+3013,(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_rx_fifo_full));
	vcdp->fullBit(c+3014,(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_rx_fifo_valid));
	vcdp->fullBus(c+3015,(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__transmit_counter),8);
	vcdp->fullBus(c+3016,(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__read_counter),8);
	vcdp->fullBus(c+3017,(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__write_counter),8);
	vcdp->fullBus(c+3018,(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o),32);
	vcdp->fullBus(c+3019,(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_dcache_o),32);
	vcdp->fullBus(c+3020,(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__icache_cur_state),2);
	vcdp->fullBus(c+3021,(((0U == (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__icache_cur_state))
			        ? ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__i_m_strobe)
				    ? 1U : 0U) : ((1U 
						   == (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__icache_cur_state))
						   ? 3U
						   : 0U))),2);
	vcdp->fullBus(c+3022,(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__dcache_cur_state),2);
	vcdp->fullBus(c+3023,((0x3fffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__i_m_addr)),22);
	vcdp->fullBus(c+3024,((0x3fffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_addr)),22);
	vcdp->fullBus(c+3025,(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__icache_delay_counter),8);
	vcdp->fullBus(c+3026,(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__dcache_delay_counter),8);
	vcdp->fullBit(c+3027,(vlTOPp->clk));
	vcdp->fullBit(c+3028,(vlTOPp->rst_n));
	vcdp->fullBus(c+3029,(vlTOPp->main_memory_addr),32);
	vcdp->fullBus(c+3030,(0x20U),32);
	vcdp->fullBus(c+3031,(1U),32);
	vcdp->fullBit(c+3032,(vlSymsp->TOP__aquila_testharness.__PVT__RISCV_rst));
	vcdp->fullArray(c+3033,(vlSymsp->TOP__aquila_testharness.__PVT__M_DCACHE_datain),256);
	vcdp->fullBit(c+3041,(vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_data_ready));
	vcdp->fullBit(c+3042,(vlSymsp->TOP__aquila_testharness.__PVT__rst));
	vcdp->fullBit(c+3043,(vlSymsp->TOP__aquila_testharness.__PVT__N));
	vcdp->fullBus(c+3044,(0x100U),32);
	vcdp->fullBus(c+3045,(0x18U),32);
	vcdp->fullBus(c+3046,(0x20U),32);
	vcdp->fullBus(c+3047,(0x14U),32);
	vcdp->fullBus(c+3048,(4U),32);
	vcdp->fullBus(c+3049,(0U),32);
	vcdp->fullBit(c+3050,(0U));
	vcdp->fullBus(c+3051,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__data2mem_wb),32);
	vcdp->fullBus(c+3052,(5U),32);
	vcdp->fullBus(c+3053,(1U),32);
	vcdp->fullBus(c+3054,(2U),32);
	vcdp->fullBus(c+3055,(3U),32);
	vcdp->fullBus(c+3056,(0x4000U),32);
	vcdp->fullBus(c+3057,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__i),32);
	vcdp->fullBit(c+3058,(1U));
	vcdp->fullBus(c+3059,(4U),3);
	vcdp->fullBit(c+3060,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__stall_from_muldiv));
	vcdp->fullBus(c+3061,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__ALU__DOT__ones),32);
	vcdp->fullBus(c+3062,(0U),2);
	vcdp->fullBus(c+3063,(1U),2);
	vcdp->fullBus(c+3064,(2U),2);
	vcdp->fullBus(c+3065,(3U),2);
	vcdp->fullBus(c+3066,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__misa_r),32);
	vcdp->fullBus(c+3067,(0x186a0U),32);
	vcdp->fullBus(c+3068,(0x100U),32);
	vcdp->fullBus(c+3069,(8U),32);
	vcdp->fullBus(c+3070,(0xaU),32);
	vcdp->fullBus(c+3071,(0x16U),32);
	vcdp->fullBus(c+3072,(0U),32);
	vcdp->fullBus(c+3073,(0xc0000000U),32);
	vcdp->fullBus(c+3074,(0xc0000004U),32);
	vcdp->fullBus(c+3075,(0xc0000008U),32);
	vcdp->fullBus(c+3076,(0x20U),32);
	vcdp->fullBus(c+3077,(0x200000U),32);
	vcdp->fullBus(c+3078,(0U),32);
	vcdp->fullBus(c+3079,(vlSymsp->TOP__aquila_testharness.__PVT__M_DCACHE_datain[0U]),32);
    }
}
