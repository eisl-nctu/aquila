// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaquila_testharness.h for the primary calling header

#ifndef _Vaquila_testharness_aquila_testharness_H_
#define _Vaquila_testharness_aquila_testharness_H_

#include "verilated_heavy.h"
#include "Vaquila_testharness__Dpi.h"

class Vaquila_testharness__Syms;
class Vaquila_testharness_dp_ram;
class VerilatedVcd;

//----------

VL_MODULE(Vaquila_testharness_aquila_testharness) {
  public:
    // CELLS
    Vaquila_testharness_dp_ram*	mock_ram;
    
    // PORTS
    // Begin mtask footprint  all: 
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN(main_memory_addr,31,0);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
	// Begin mtask footprint  all: 
	VL_SIG8(__PVT__RISCV_rst,0,0);
	VL_SIG8(__PVT__M_DEVICE_rw,0,0);
	VL_SIG8(__PVT__M_DEVICE_data_ready,0,0);
	VL_SIG8(__PVT__rst,0,0);
	VL_SIG8(__PVT__N,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__mem_sel,1,0);
	VL_SIG8(__PVT__aquila_core__DOT__p_i_ready,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__p_d_strobe,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__p_d_ready,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__i_m_strobe,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__d_m_strobe,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__d_m_rw,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__tmr_irq,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__sys_jump,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_valid2dec,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_regfile_we2exe,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_we2exe,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_re2exe,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_load_ext_sel2exe,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_instr_valid2csr,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rd_addr2exe,4,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs1_addr2fwd,4,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs2_addr2fwd,4,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_imm2csr,4,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_inA_sel2exe,1,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_inB_sel2exe,1,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_input_sel2exe,1,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_regfile_sel2exe,2,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe,2,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__alu_muldiv_sel2exe,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__shift_sel2exe,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_branch2exe,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_jal2exe,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_jalr2exe,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_csr_instr2csr,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_branch_taken,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_we,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_re,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_regfile_we2mem_wb,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_load_ext_sel2mem_wb,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rd_addr2mem_wb,4,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem,1,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_regfile_input_sel2mem_wb,2,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_IF,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_ID,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_EXE,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_result_IF,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_result_ID,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_result_EXE,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__uncond_branch_hit_IF,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__uncond_branch_hit_ID,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__uncond_branch_hit_EXE,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_misprediction,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__irq_taken,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS,1,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt,1,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dS,1,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dS_nxt,1,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Pipeline_Control__DOT__is_load_use,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Pipeline_Control__DOT__branch_flush,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__we,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__read_addr,4,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__update_addr,4,0);
    };
    struct {
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__write_addr,4,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__we,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__read_addr,4,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__write_addr,4,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__we,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_op,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_op_imm,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_jal,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_jalr,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_load,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_store,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_branch,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_lui,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_auipc,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_miscmem,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_system,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_amo,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_csr,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_sys_op,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_ecall,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_mret,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__stall_from_muldiv,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_ready,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation,2,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_req,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__is_a_neg,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__is_b_neg,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__signed_adjust,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__cnt,5,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S,1,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt,1,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__mul_add,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__div_sub,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__regfile_input_sel_r,2,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__regfile_we_r,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r,4,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_load_ext_sel_r,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_addr_alignment_r,1,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus_mpie_r,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus_mie_r,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_meie_r,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_mtie_r,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_msie_r,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mip_meip_r,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mip_mtip_r,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mip_msip_r,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__CLINT__DOT__carry,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__I_Cache__DOT__cache_hit,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__I_Cache__DOT__victim_sel,1,0);
	VL_SIG8(__PVT__aquila_core__DOT__I_Cache__DOT__index_prev,4,0);
	VL_SIG8(__PVT__aquila_core__DOT__I_Cache__DOT__S,1,0);
	VL_SIG8(__PVT__aquila_core__DOT__I_Cache__DOT__S_nxt,1,0);
	VL_SIG8(__PVT__aquila_core__DOT__D_Cache__DOT__S,2,0);
	VL_SIG8(__PVT__aquila_core__DOT__D_Cache__DOT__S_nxt,2,0);
	VL_SIG8(__PVT__aquila_core__DOT__D_Cache__DOT__rw,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__D_Cache__DOT__byte_enable_from_p,3,0);
	VL_SIG8(__PVT__aquila_core__DOT__D_Cache__DOT__cache_hit,0,0);
	VL_SIG8(__PVT__aquila_core__DOT__D_Cache__DOT__victim_sel,1,0);
	VL_SIG8(__PVT__mock_uart_0__DOT__cur_state,1,0);
	VL_SIG8(__PVT__mock_uart_0__DOT__next_state,1,0);
	VL_SIG8(__PVT__mock_uart_0__DOT__uart_tx_fifo,7,0);
	VL_SIG8(__PVT__mock_uart_0__DOT__uart_rx_fifo,7,0);
	VL_SIG8(__PVT__mock_uart_0__DOT__uart_status,7,0);
	VL_SIG8(__PVT__mock_uart_0__DOT__uart_tx_push,0,0);
    };
    struct {
	VL_SIG8(__PVT__mock_uart_0__DOT__uart_rx_pop,0,0);
	VL_SIG8(__PVT__mock_uart_0__DOT__uart_tx_fifo_full,0,0);
	VL_SIG8(__PVT__mock_uart_0__DOT__uart_tx_fifo_empty,0,0);
	VL_SIG8(__PVT__mock_uart_0__DOT__uart_rx_fifo_full,0,0);
	VL_SIG8(__PVT__mock_uart_0__DOT__uart_rx_fifo_valid,0,0);
	VL_SIG8(__PVT__mock_uart_0__DOT__transmit_counter,7,0);
	VL_SIG8(__PVT__mock_uart_0__DOT__read_counter,7,0);
	VL_SIG8(__PVT__mock_uart_0__DOT__write_counter,7,0);
	VL_SIG16(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__sys_jump_csr_addr,11,0);
	VL_SIG16(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr,11,0);
	VL_SIGW(__PVT__M_DCACHE_datain,255,0,8);
	VL_SIGW(__PVT__M_DCACHE_dataout,255,0,8);
	VL_SIG(__PVT__M_DEVICE_addr,31,0);
	VL_SIG(__PVT__M_DEVICE_core2dev_data,31,0);
	VL_SIG(__PVT__M_DEVICE_dev2core_data,31,0);
	VL_SIG(__PVT__aquila_core__DOT__p_d_dout,31,0);
	VL_SIG(__PVT__aquila_core__DOT__i_m_addr,31,0);
	VL_SIG(__PVT__aquila_core__DOT__d_m_addr,31,0);
	VL_SIGW(__PVT__aquila_core__DOT__d_m_din,255,0,8);
	VL_SIG(__PVT__aquila_core__DOT__clint_mem_data,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_pc2dec,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_imm2exe,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs1_data2fwd,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs2_data2fwd,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rs2_data2mem,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_p_data,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__data_o,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__data2mem_wb,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF,23,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE,23,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__idx,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__i,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF,19,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE,19,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__idx,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__i,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__i,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_increment,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_result,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_result,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__ALU__DOT__ones,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__op_a,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__op_b,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__reg32,31,0);
	VL_SIGW(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result,64,0,3);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__quotient,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__remainder,31,0);
	VL_SIGW(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result_tmp,64,0,3);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__p_data_r,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_data_r,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__aligned_data_o,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_data,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__misa_r,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mtvec_r,31,0);
    };
    struct {
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mscratch_r,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mepc_r,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mcause_r,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__irq_cause,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mip,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__csr_data,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__csr_inputB,31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__updated_csr_data,31,0);
	VL_SIG(__PVT__aquila_core__DOT__CLINT__DOT__counter,16,0);
	VL_SIGW(__PVT__aquila_core__DOT__I_Cache__DOT__c_instr,255,0,8);
	VL_SIG(__PVT__aquila_core__DOT__I_Cache__DOT__idx,31,0);
	VL_SIG(__PVT__aquila_core__DOT__I_Cache__DOT__jdx,31,0);
	VL_SIG(__PVT__aquila_core__DOT__D_Cache__DOT__datain_from_p,31,0);
	VL_SIGW(__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i,255,0,8);
	VL_SIGW(__PVT__aquila_core__DOT__D_Cache__DOT__c_data,255,0,8);
	VL_SIGW(__PVT__aquila_core__DOT__D_Cache__DOT__m_data,255,0,8);
	VL_SIG(__PVT__aquila_core__DOT__D_Cache__DOT__idx,31,0);
	VL_SIG(__PVT__aquila_core__DOT__D_Cache__DOT__jdx,31,0);
	VL_SIG(__PVT__aquila_core__DOT__D_Cache__DOT__fromCache,31,0);
	VL_SIG(__PVT__aquila_core__DOT__D_Cache__DOT__fromMem,31,0);
	VL_SIG(__PVT__aquila_core__DOT__D_Cache__DOT__update_data,31,0);
	VL_SIG64(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__adder_opa,32,0);
	VL_SIG64(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mcycle_r,63,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[24],31,0);
	VL_SIG8(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[24],1,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[24],31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[20],31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[20],31,0);
	VL_SIG(__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[32],31,0);
	VL_SIG(__PVT__aquila_core__DOT__CLINT__DOT__clint_mem[5],31,0);
	VL_SIG8(__PVT__aquila_core__DOT__I_Cache__DOT__way_hit[4],0,0);
	VL_SIGW(__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[4],255,0,8);
	VL_SIG8(__PVT__aquila_core__DOT__I_Cache__DOT__cache_write[4],0,0);
	VL_SIG8(__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[32][4],0,0);
	VL_SIG(__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[32][4],21,0);
	VL_SIG8(__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[32],1,0);
	VL_SIGW(__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[32],255,0,8);
	VL_SIGW(__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[32],255,0,8);
	VL_SIGW(__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[32],255,0,8);
	VL_SIGW(__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[32],255,0,8);
	VL_SIG(__PVT__aquila_core__DOT__D_Cache__DOT__c_tag_o[4],21,0);
	VL_SIG8(__PVT__aquila_core__DOT__D_Cache__DOT__way_hit[4],0,0);
	VL_SIGW(__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[4],255,0,8);
	VL_SIG8(__PVT__aquila_core__DOT__D_Cache__DOT__cache_write[4],0,0);
	VL_SIG8(__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[32],1,0);
	VL_SIG8(__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[32][4],0,0);
	VL_SIG8(__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[32][4],0,0);
	VL_SIG(__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[32],21,0);
	VL_SIGW(__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[32],255,0,8);
	VL_SIG(__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[32],21,0);
	VL_SIGW(__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[32],255,0,8);
	VL_SIG(__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[32],21,0);
	VL_SIGW(__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[32],255,0,8);
	VL_SIG(__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[32],21,0);
	VL_SIGW(__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[32],255,0,8);
    };
    
    // LOCAL VARIABLES
    // Begin mtask footprint  all: 
    VL_SIG8(__Vcellinp__aquila_core__rst,0,0);
    VL_SIG8(aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Fetch__flush,0,0);
    VL_SIG8(aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Fetch__stall,0,0);
    VL_SIG8(aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Decode__flush,0,0);
    VL_SIG8(aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5,1,0);
    VL_SIG8(aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound6,1,0);
    VL_SIG8(aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound7,1,0);
    VL_SIG8(aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound8,1,0);
    VL_SIG8(aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound9,1,0);
    VL_SIG8(aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound10,1,0);
    VL_SIG8(__Vtableidx1,4,0);
    VL_SIG8(__Vtableidx2,5,0);
    VL_SIG8(__Vtableidx3,4,0);
    VL_SIG8(__Vtableidx4,5,0);
    VL_SIG(aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2,31,0);
    VL_SIG(aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound3,31,0);
    VL_SIG(aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT____Vlvbound2,31,0);
    VL_SIG(aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2,31,0);
    VL_SIG(aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound3,31,0);
    VL_SIG(aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT____Vlvbound2,31,0);
    VL_SIG(aquila_core__DOT__CLINT__DOT____Vlvbound1,31,0);
    VL_SIGW(aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o,255,0,8);
    VL_SIGW(aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o,255,0,8);
    VL_SIGW(aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o,255,0,8);
    VL_SIGW(aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o,255,0,8);
    VL_SIG(aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__TAG_BRAM__data_o,21,0);
    VL_SIGW(aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o,255,0,8);
    VL_SIG(aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__TAG_BRAM__data_o,21,0);
    VL_SIGW(aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o,255,0,8);
    VL_SIG(aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__TAG_BRAM__data_o,21,0);
    VL_SIGW(aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o,255,0,8);
    VL_SIG(aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__TAG_BRAM__data_o,21,0);
    VL_SIGW(aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o,255,0,8);
    VL_SIG(__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__abs__0__Vfuncout,31,0);
    VL_SIG(__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__abs__0__num,31,0);
    VL_SIG(__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__1__Vfuncout,31,0);
    VL_SIG(__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__1__num,31,0);
    VL_SIG(__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__abs__2__Vfuncout,31,0);
    VL_SIG(__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__abs__2__num,31,0);
    VL_SIG(__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__3__Vfuncout,31,0);
    VL_SIG(__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__3__num,31,0);
    VL_SIG(__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__4__Vfuncout,31,0);
    VL_SIG(__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__4__num,31,0);
    VL_SIG(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r,31,0);
    static VL_ST_SIG8(__Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt[32],1,0);
    static VL_ST_SIG8(__Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[64],1,0);
    static VL_ST_SIG8(__Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt[32],1,0);
    static VL_ST_SIG8(__Vtable4___PVT__mock_uart_0__DOT__next_state[64],1,0);
    
    // INTERNAL VARIABLES
  private:
    Vaquila_testharness__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vaquila_testharness_aquila_testharness);  ///< Copying not allowed
  public:
    Vaquila_testharness_aquila_testharness(const char* name="TOP");
    ~Vaquila_testharness_aquila_testharness();
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vaquila_testharness__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _initial__TOP__aquila_testharness__4(Vaquila_testharness__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__aquila_testharness__2(Vaquila_testharness__Syms* __restrict vlSymsp);
    static void _sequent__TOP__aquila_testharness__3(Vaquila_testharness__Syms* __restrict vlSymsp);
    static void _settle__TOP__aquila_testharness__1(Vaquila_testharness__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
