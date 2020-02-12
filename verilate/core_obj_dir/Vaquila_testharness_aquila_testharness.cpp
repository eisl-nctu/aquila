// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_testharness.h for the primary calling header

#include "Vaquila_testharness_aquila_testharness.h"
#include "Vaquila_testharness__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES

// Begin mtask footprint  all: 
VL_ST_SIG8(Vaquila_testharness_aquila_testharness::__Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt[32],1,0);
VL_ST_SIG8(Vaquila_testharness_aquila_testharness::__Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[64],1,0);
VL_ST_SIG8(Vaquila_testharness_aquila_testharness::__Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt[32],1,0);
VL_ST_SIG8(Vaquila_testharness_aquila_testharness::__Vtable4___PVT__mock_uart_0__DOT__next_state[64],1,0);

//--------------------

VL_CTOR_IMP(Vaquila_testharness_aquila_testharness) {
    VL_CELL(mock_ram, Vaquila_testharness_dp_ram);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vaquila_testharness_aquila_testharness::__Vconfigure(Vaquila_testharness__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vaquila_testharness_aquila_testharness::~Vaquila_testharness_aquila_testharness() {
}

//--------------------
// Internal Methods

void Vaquila_testharness_aquila_testharness::_settle__TOP__aquila_testharness__1(Vaquila_testharness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vaquila_testharness_aquila_testharness::_settle__TOP__aquila_testharness__1\n"); );
    Vaquila_testharness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/icache.v:190
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__idx = 4U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_op 
	= ((1U == (3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
			 >> 5U))) & (4U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						  >> 2U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_op_imm 
	= ((0U == (3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
			 >> 5U))) & (4U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						  >> 2U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_jal 
	= ((3U == (3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
			 >> 5U))) & (3U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						  >> 2U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_jalr 
	= ((3U == (3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
			 >> 5U))) & (1U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						  >> 2U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_load 
	= ((0U == (3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
			 >> 5U))) & (0U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						  >> 2U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_store 
	= ((1U == (3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
			 >> 5U))) & (0U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						  >> 2U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_branch 
	= ((3U == (3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
			 >> 5U))) & (0U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						  >> 2U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_lui 
	= ((1U == (3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
			 >> 5U))) & (5U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						  >> 2U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_auipc 
	= ((0U == (3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
			 >> 5U))) & (5U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						  >> 2U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_amo 
	= ((1U == (3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
			 >> 5U))) & (3U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						  >> 2U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__quotient 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[0U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__remainder 
	= ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[2U] 
	    << 0x1fU) | (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U] 
			 >> 1U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__mul_add 
	= (1U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[0U]);
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__we 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__regfile_we_r) 
	   & (0U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r)));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__div_sub 
	= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U] 
	   >= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__reg32);
    vlSymsp->TOP__aquila_testharness.__PVT__M_DCACHE_dataout[0U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_din[0U];
    vlSymsp->TOP__aquila_testharness.__PVT__M_DCACHE_dataout[1U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_din[1U];
    vlSymsp->TOP__aquila_testharness.__PVT__M_DCACHE_dataout[2U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_din[2U];
    vlSymsp->TOP__aquila_testharness.__PVT__M_DCACHE_dataout[3U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_din[3U];
    vlSymsp->TOP__aquila_testharness.__PVT__M_DCACHE_dataout[4U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_din[4U];
    vlSymsp->TOP__aquila_testharness.__PVT__M_DCACHE_dataout[5U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_din[5U];
    vlSymsp->TOP__aquila_testharness.__PVT__M_DCACHE_dataout[6U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_din[6U];
    vlSymsp->TOP__aquila_testharness.__PVT__M_DCACHE_dataout[7U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_din[7U];
    // ALWAYS at core-ver-src/mock_uart.sv:99
    // ALWAYS at core-ver-src/mock_uart.sv:122
    vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_status 
	= (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_rx_fifo_full) 
	    << 3U) | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_tx_fifo_empty) 
		       << 2U) | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_rx_fifo_full) 
				  << 1U) | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_rx_fifo_valid))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[0U][0U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[0U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[0U][1U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[1U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[0U][2U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[2U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[0U][3U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[3U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[0U][4U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[4U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[0U][5U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[5U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[0U][6U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[6U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[0U][7U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[7U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[1U][0U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[0U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[1U][1U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[1U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[1U][2U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[2U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[1U][3U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[3U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[1U][4U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[4U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[1U][5U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[5U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[1U][6U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[6U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[1U][7U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[7U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[2U][0U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[0U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[2U][1U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[1U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[2U][2U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[2U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[2U][3U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[3U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[2U][4U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[4U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[2U][5U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[5U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[2U][6U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[6U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[2U][7U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[7U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[3U][0U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[0U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[3U][1U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[1U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[3U][2U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[2U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[3U][3U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[3U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[3U][4U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[4U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[3U][5U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[5U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[3U][6U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[6U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[3U][7U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[7U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation 
	= ((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_branch2exe) 
	     | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_jal2exe)) 
	    | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_jalr2exe))
	    ? 0U : (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/muldiv.v:204
    vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__4__num 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__reg32;
    vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__4__Vfuncout 
	= ((IData)(1U) + (~ vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__4__num));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__adder_opa 
	= ((4U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))
	    ? (QData)((IData)(vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__4__Vfuncout))
	    : (QData)((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__reg32)));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_miscmem 
	= ((0U == (3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
			 >> 5U))) & (3U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						  >> 2U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_req 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__alu_muldiv_sel2exe) 
	   & (~ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_ready)));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie 
	= (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_meie_r) 
	    << 0xbU) | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_mtie_r) 
			 << 7U) | ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_msie_r) 
				   << 3U)));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mip 
	= (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mip_meip_r) 
	    << 0xbU) | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mip_mtip_r) 
			 << 7U) | ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mip_msip_r) 
				   << 3U)));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Pipeline_Control__DOT__is_load_use 
	= ((((0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
		       >> 0xfU)) == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rd_addr2exe)) 
	    | ((0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
			 >> 0x14U)) == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rd_addr2exe))) 
	   & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_re2exe));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[0U][0U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[0U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[0U][1U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[1U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[0U][2U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[2U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[0U][3U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[3U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[0U][4U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[4U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[0U][5U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[5U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[0U][6U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[6U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[0U][7U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[7U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[1U][0U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[0U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[1U][1U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[1U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[1U][2U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[2U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[1U][3U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[3U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[1U][4U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[4U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[1U][5U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[5U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[1U][6U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[6U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[1U][7U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[7U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[2U][0U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[0U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[2U][1U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[1U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[2U][2U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[2U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[2U][3U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[3U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[2U][4U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[4U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[2U][5U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[5U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[2U][6U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[6U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[2U][7U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[7U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[3U][0U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[0U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[3U][1U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[1U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[3U][2U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[2U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[3U][3U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[3U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[3U][4U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[4U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[3U][5U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[5U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[3U][6U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[6U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[3U][7U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[7U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_system 
	= ((3U == (3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
			 >> 5U))) & (4U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						  >> 2U))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/writeback.v:132
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__aligned_data_o 
	= ((2U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_addr_alignment_r))
	    ? ((1U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_addr_alignment_r))
	        ? ((0xffffff00U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_data_r 
				   << 8U)) | (0xffU 
					      & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_data_r 
						 >> 0x18U)))
	        : ((0xffff0000U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_data_r 
				   << 0x10U)) | (0xffffU 
						 & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_data_r 
						    >> 0x10U))))
	    : ((1U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_addr_alignment_r))
	        ? ((0xff000000U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_data_r 
				   << 0x18U)) | (0xffffffU 
						 & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_data_r 
						    >> 8U)))
	        : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_data_r));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_tag_o[0U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__TAG_BRAM__data_o;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_tag_o[1U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__TAG_BRAM__data_o;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_tag_o[2U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__TAG_BRAM__data_o;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_tag_o[3U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__TAG_BRAM__data_o;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__carry 
	= (0xffffffffU == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem
	   [1U]);
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/icache.v:190
    if (vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_icache_o) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write[0U] 
	    = (0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__victim_sel));
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write[1U] 
	    = (1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__victim_sel));
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write[2U] 
	    = (2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__victim_sel));
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write[3U] 
	    = (3U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__victim_sel));
    } else {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write[0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write[1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write[2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write[3U] = 0U;
    }
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xffffeU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	      [0U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xffffdU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [1U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 1U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xffffbU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [2U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 2U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xffff7U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [3U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 3U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xfffefU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [4U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 4U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xfffdfU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [5U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 5U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xfffbfU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [6U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 6U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xfff7fU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [7U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 7U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xffeffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [8U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 8U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xffdffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [9U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 9U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xffbffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0xaU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0xaU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xff7ffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0xbU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0xbU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xfefffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0xcU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0xcU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xfdfffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0xdU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0xdU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xfbfffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0xeU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0xeU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xf7fffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0xfU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0xfU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xeffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0x10U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0x10U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xdffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0x11U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0x11U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xbffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0x12U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0x12U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0x7ffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0x13U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0x13U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus 
	= (0x1800U | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus_mpie_r) 
		       << 7U) | ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus_mie_r) 
				 << 3U)));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xfffffeU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	      [0U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xfffffdU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [1U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 1U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xfffffbU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [2U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 2U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xfffff7U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [3U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 3U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xffffefU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [4U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 4U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xffffdfU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [5U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 5U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xffffbfU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [6U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 6U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xffff7fU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [7U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 7U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xfffeffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [8U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 8U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xfffdffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [9U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 9U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xfffbffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0xaU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0xaU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xfff7ffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0xbU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0xbU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xffefffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0xcU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0xcU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xffdfffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0xdU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0xdU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xffbfffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0xeU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0xeU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xff7fffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0xfU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0xfU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xfeffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0x10U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0x10U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xfdffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0x11U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0x11U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xfbffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0x12U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0x12U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xf7ffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0x13U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0x13U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xefffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0x14U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0x14U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xdfffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0x15U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0x15U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xbfffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0x16U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0x16U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0x7fffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0x17U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0x17U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__tmr_irq 
	= ((((QData)((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem
			     [1U])) << 0x20U) | (QData)((IData)(
								vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem
								[0U]))) 
	   >= (((QData)((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem
				[3U])) << 0x20U) | (QData)((IData)(
								   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem
								   [2U]))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_increment 
	= ((IData)(4U) + vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r);
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/memory_access.v:73
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__data_o 
	= ((2U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
	    ? ((1U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
	        ? ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
		    ? (0xff000000U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rs2_data2mem 
				      << 0x18U)) : 0U)
	        : ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
		    ? (0xff0000U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rs2_data2mem 
				    << 0x10U)) : ((1U 
						   == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
						   ? 
						  (0xffff0000U 
						   & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rs2_data2mem 
						      << 0x10U))
						   : 0U)))
	    : ((1U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
	        ? ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
		    ? (0xff00U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rs2_data2mem 
				  << 8U)) : 0U) : (
						   (0U 
						    == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
						    ? 
						   (0xffU 
						    & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rs2_data2mem)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
						     ? 
						    (0xffffU 
						     & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rs2_data2mem)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
						      ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rs2_data2mem
						      : 0U)))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/dcache.v:289
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromMem 
	= ((0x10U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
	    ? ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
	        ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[0U]
		    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[1U])
	        : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[2U]
		    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[3U]))
	    : ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
	        ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[4U]
		    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[5U])
	        : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[6U]
		    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[7U])));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xffffeU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	      [0U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xffffdU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [1U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 1U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xffffbU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [2U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 2U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xffff7U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [3U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 3U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xfffefU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [4U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 4U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xfffdfU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [5U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 5U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xfffbfU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [6U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 6U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xfff7fU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [7U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 7U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xffeffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [8U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 8U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xffdffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [9U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 9U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xffbffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0xaU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0xaU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xff7ffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0xbU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0xbU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xfefffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0xcU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0xcU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xfdfffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0xdU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0xdU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xfbfffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0xeU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0xeU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xf7fffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0xfU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0xfU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xeffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0x10U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0x10U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xdffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0x11U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0x11U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xbffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0x12U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0x12U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0x7ffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0x13U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0x13U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xfffffeU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	      [0U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xfffffdU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [1U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 1U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xfffffbU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [2U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 2U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xfffff7U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [3U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 3U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xffffefU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [4U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 4U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xffffdfU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [5U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 5U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xffffbfU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [6U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 6U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xffff7fU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [7U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 7U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xfffeffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [8U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 8U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xfffdffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [9U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 9U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xfffbffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0xaU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0xaU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xfff7ffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0xbU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0xbU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xffefffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0xcU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0xcU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xffdfffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0xdU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0xdU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xffbfffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0xeU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0xeU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xff7fffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0xfU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0xfU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xfeffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0x10U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0x10U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xfdffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0x11U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0x11U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xfbffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0x12U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0x12U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xf7ffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0x13U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0x13U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xefffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0x14U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0x14U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xdfffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0x15U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0x15U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xbfffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0x16U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0x16U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0x7fffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0x17U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0x17U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit[0U] 
	= (1U & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_
		  [(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
			     >> 5U))][0U] & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_
					     [(0x1fU 
					       & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
						  >> 5U))]
					     [0U] == 
					     (0x3fffffU 
					      & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
						 >> 0xaU))))
		  ? 1U : 0U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit[1U] 
	= (1U & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_
		  [(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
			     >> 5U))][1U] & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_
					     [(0x1fU 
					       & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
						  >> 5U))]
					     [1U] == 
					     (0x3fffffU 
					      & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
						 >> 0xaU))))
		  ? 1U : 0U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit[2U] 
	= (1U & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_
		  [(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
			     >> 5U))][2U] & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_
					     [(0x1fU 
					       & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
						  >> 5U))]
					     [2U] == 
					     (0x3fffffU 
					      & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
						 >> 0xaU))))
		  ? 1U : 0U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit[3U] 
	= (1U & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_
		  [(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
			     >> 5U))][3U] & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_
					     [(0x1fU 
					       & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
						  >> 5U))]
					     [3U] == 
					     (0x3fffffU 
					      & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
						 >> 0xaU))))
		  ? 1U : 0U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel 
	= (3U & ((0xcU == (0xfU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
				   >> 0x1cU))) ? 1U
		  : ((0xfU == (0xfU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
				       >> 0x1cU))) ? 2U
		      : 0U)));
    vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst 
	= (1U & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__rst) 
		 - (IData)(vlSymsp->TOP__aquila_testharness.__PVT__N)));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result_tmp[0U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[0U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result_tmp[1U] 
	= (IData)((VL_ULL(0x1ffffffff) & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__adder_opa 
					  + (QData)((IData)(
							    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U])))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result_tmp[2U] 
	= (IData)(((VL_ULL(0x1ffffffff) & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__adder_opa 
					   + (QData)((IData)(
							     vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U])))) 
		   >> 0x20U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_csr 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_system) 
	   & (0U != (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
			   >> 0xcU))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_sys_op 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_system) 
	   & (0U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
			   >> 0xcU))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/writeback.v:143
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_data 
	= ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__regfile_input_sel_r))
	    ? ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_load_ext_sel_r)
	        ? (0xffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__aligned_data_o)
	        : ((0xffffff00U & (VL_NEGATE_I((IData)(
						       (1U 
							& (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__aligned_data_o 
							   >> 7U)))) 
				   << 8U)) | (0xffU 
					      & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__aligned_data_o)))
	    : ((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__regfile_input_sel_r))
	        ? ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_load_ext_sel_r)
		    ? (0xffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__aligned_data_o)
		    : ((0xffff0000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__aligned_data_o 
							       >> 0xfU)))) 
				       << 0x10U)) | 
		       (0xffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__aligned_data_o)))
	        : ((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__regfile_input_sel_r))
		    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__aligned_data_o
		    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__p_data_r)));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit[0U] 
	= (1U & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_
		  [(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
			     >> 5U))][0U] & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_tag_o
					     [0U] == 
					     (0x3fffffU 
					      & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
						 >> 0xaU))))
		  ? 1U : 0U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit[1U] 
	= (1U & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_
		  [(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
			     >> 5U))][1U] & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_tag_o
					     [1U] == 
					     (0x3fffffU 
					      & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
						 >> 0xaU))))
		  ? 1U : 0U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit[2U] 
	= (1U & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_
		  [(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
			     >> 5U))][2U] & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_tag_o
					     [2U] == 
					     (0x3fffffU 
					      & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
						 >> 0xaU))))
		  ? 1U : 0U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit[3U] 
	= (1U & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_
		  [(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
			     >> 5U))][3U] & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_tag_o
					     [3U] == 
					     (0x3fffffU 
					      & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
						 >> 0xaU))))
		  ? 1U : 0U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__we 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_jal2exe) 
	   & (~ (IData)((0U != vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/csr_file.v:392
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__csr_data 
	= ((0x800U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
	    ? ((0x400U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
	        ? ((0x200U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
		    ? ((0x100U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
		        ? ((0x80U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
			    ? 0U : ((0x40U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
				     ? 0U : ((0x20U 
					      & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
					      ? 0U : 
					     ((0x10U 
					       & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
					       ? ((8U 
						   & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						   ? 0U
						   : 
						  ((4U 
						    & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						    ? 
						   ((2U 
						     & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						     ? 0U
						     : 
						    ((1U 
						      & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						      ? 0U
						      : 0U))
						    : 
						   ((2U 
						     & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						     ? 0U
						     : 
						    ((1U 
						      & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						      ? 0U
						      : 0U))))
					       : 0U))))
		        : 0U) : ((0x100U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
				  ? 0U : ((0x80U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
					   ? 0U : (
						   (0x40U 
						    & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						    ? 0U
						    : 
						   ((0x20U 
						     & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						     ? 0U
						     : 
						    ((0x10U 
						      & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						      ? 0U
						      : 
						     ((8U 
						       & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						       ? 0U
						       : 
						      ((4U 
							& (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						        ? 0U
						        : 
						       ((2U 
							 & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
							 ? 0U
							 : 
							((1U 
							  & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
							  ? 0U
							  : (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mcycle_r)))))))))))
	        : ((0x200U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
		    ? ((0x100U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
		        ? ((0x80U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
			    ? ((0x40U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
			        ? 0U : ((0x20U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
					 ? 0U : ((0x10U 
						  & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						  ? 0U
						  : 
						 ((8U 
						   & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						   ? 0U
						   : 
						  ((4U 
						    & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						    ? 0U
						    : 
						   ((2U 
						     & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						     ? 0U
						     : 
						    ((1U 
						      & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						      ? 0U
						      : (IData)(
								(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mcycle_r 
								 >> 0x20U)))))))))
			    : ((0x40U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
			        ? 0U : ((0x20U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
					 ? 0U : ((0x10U 
						  & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						  ? 0U
						  : 
						 ((8U 
						   & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						   ? 0U
						   : 
						  ((4U 
						    & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						    ? 0U
						    : 
						   ((2U 
						     & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						     ? 0U
						     : 
						    ((1U 
						      & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						      ? 0U
						      : (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mcycle_r)))))))))
		        : 0U) : 0U)) : ((0x400U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
					 ? 0U : ((0x200U 
						  & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						  ? 
						 ((0x100U 
						   & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						   ? 
						  ((0x80U 
						    & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						    ? 0U
						    : 
						   ((0x40U 
						     & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						     ? 
						    ((0x20U 
						      & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						      ? 0U
						      : 
						     ((0x10U 
						       & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						       ? 0U
						       : 
						      ((8U 
							& (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						        ? 0U
						        : 
						       ((4U 
							 & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
							 ? 
							((2U 
							  & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
							  ? 0U
							  : 
							 ((1U 
							   & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
							   ? 0U
							   : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mip))
							 : 
							((2U 
							  & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
							  ? 
							 ((1U 
							   & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
							   ? 0U
							   : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mcause_r)
							  : 
							 ((1U 
							   & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
							   ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mepc_r
							   : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mscratch_r))))))
						     : 
						    ((0x20U 
						      & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						      ? 0U
						      : 
						     ((0x10U 
						       & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						       ? 0U
						       : 
						      ((8U 
							& (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						        ? 0U
						        : 
						       ((4U 
							 & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
							 ? 
							((2U 
							  & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
							  ? 0U
							  : 
							 ((1U 
							   & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
							   ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mtvec_r
							   : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie))
							 : 
							((2U 
							  & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
							  ? 0U
							  : 
							 ((1U 
							   & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
							   ? 0U
							   : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus))))))))
						   : 0U)
						  : 0U)));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/bpu.v:171
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__update_addr 
	= (((((((((2U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
		  | (4U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)) 
		 | (8U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)) 
		| (0x10U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)) 
	       | (0x20U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)) 
	      | (0x40U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)) 
	     | (0x80U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)) 
	    | (0x100U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE))
	    ? ((2U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
	        ? 1U : ((4U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
			 ? 2U : ((8U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
				  ? 3U : ((0x10U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
					   ? 4U : (
						   (0x20U 
						    == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
						    ? 5U
						    : 
						   ((0x40U 
						     == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
						     ? 6U
						     : 
						    ((0x80U 
						      == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
						      ? 7U
						      : 8U)))))))
	    : (((((((((0x200U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
		      | (0x400U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)) 
		     | (0x800U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)) 
		    | (0x1000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)) 
		   | (0x2000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)) 
		  | (0x4000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)) 
		 | (0x8000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)) 
		| (0x10000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE))
	        ? ((0x200U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
		    ? 9U : ((0x400U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
			     ? 0xaU : ((0x800U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
				        ? 0xbU : ((0x1000U 
						   == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
						   ? 0xcU
						   : 
						  ((0x2000U 
						    == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
						    ? 0xdU
						    : 
						   ((0x4000U 
						     == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
						     ? 0xeU
						     : 
						    ((0x8000U 
						      == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
						      ? 0xfU
						      : 0x10U)))))))
	        : ((((((((0x20000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
			 | (0x40000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)) 
			| (0x80000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)) 
		       | (0x100000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)) 
		      | (0x200000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)) 
		     | (0x400000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)) 
		    | (0x800000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE))
		    ? ((0x20000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
		        ? 0x11U : ((0x40000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
				    ? 0x12U : ((0x80000U 
						== vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
					        ? 0x13U
					        : (
						   (0x100000U 
						    == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
						    ? 0x14U
						    : 
						   ((0x200000U 
						     == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
						     ? 0x15U
						     : 
						    ((0x400000U 
						      == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
						      ? 0x16U
						      : 
						     ((0x800000U 
						       == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
						       ? 0x17U
						       : 0x18U)))))))
		    : 0U)));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__we 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_branch2exe) 
	   & (~ (IData)((0U != vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__irq_cause 
	= (0x80000000U | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__tmr_irq) 
			   & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_mtie_r))
			   ? 7U : (((0U != vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem
				     [4U]) & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_msie_r))
				    ? 3U : 0U)));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__irq_taken 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus_mie_r) 
	   & (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__tmr_irq) 
	       & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_mtie_r)) 
	      | ((0U != vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem
		  [4U]) & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_msie_r))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/uncond_BHT.v:115
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__read_addr 
	= (((((((((2U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
		  | (4U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)) 
		 | (8U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)) 
		| (0x10U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)) 
	       | (0x20U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)) 
	      | (0x40U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)) 
	     | (0x80U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)) 
	    | (0x100U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF))
	    ? ((2U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)
	        ? 1U : ((4U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)
			 ? 2U : ((8U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)
				  ? 3U : ((0x10U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)
					   ? 4U : (
						   (0x20U 
						    == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)
						    ? 5U
						    : 
						   ((0x40U 
						     == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)
						     ? 6U
						     : 
						    ((0x80U 
						      == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)
						      ? 7U
						      : 8U)))))))
	    : (((((((((0x200U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
		      | (0x400U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)) 
		     | (0x800U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)) 
		    | (0x1000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)) 
		   | (0x2000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)) 
		  | (0x4000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)) 
		 | (0x8000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)) 
		| (0x10000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF))
	        ? ((0x200U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)
		    ? 9U : ((0x400U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)
			     ? 0xaU : ((0x800U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)
				        ? 0xbU : ((0x1000U 
						   == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)
						   ? 0xcU
						   : 
						  ((0x2000U 
						    == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)
						    ? 0xdU
						    : 
						   ((0x4000U 
						     == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)
						     ? 0xeU
						     : 
						    ((0x8000U 
						      == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)
						      ? 0xfU
						      : 0x10U)))))))
	        : ((((0x20000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
		     | (0x40000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)) 
		    | (0x80000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF))
		    ? ((0x20000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)
		        ? 0x11U : ((0x40000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)
				    ? 0x12U : ((0x80000U 
						== vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)
					        ? 0x13U
					        : 0x18U)))
		    : 0U)));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__uncond_branch_hit_IF 
	= ((0U != vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   & (0U != vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_IF 
	= ((0U != vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   & (0U != vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/bpu.v:134
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__read_addr 
	= (((((((((2U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
		  | (4U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)) 
		 | (8U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)) 
		| (0x10U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)) 
	       | (0x20U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)) 
	      | (0x40U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)) 
	     | (0x80U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)) 
	    | (0x100U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF))
	    ? ((2U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
	        ? 1U : ((4U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
			 ? 2U : ((8U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
				  ? 3U : ((0x10U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
					   ? 4U : (
						   (0x20U 
						    == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
						    ? 5U
						    : 
						   ((0x40U 
						     == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
						     ? 6U
						     : 
						    ((0x80U 
						      == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
						      ? 7U
						      : 8U)))))))
	    : (((((((((0x200U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
		      | (0x400U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)) 
		     | (0x800U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)) 
		    | (0x1000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)) 
		   | (0x2000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)) 
		  | (0x4000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)) 
		 | (0x8000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)) 
		| (0x10000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF))
	        ? ((0x200U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
		    ? 9U : ((0x400U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
			     ? 0xaU : ((0x800U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
				        ? 0xbU : ((0x1000U 
						   == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
						   ? 0xcU
						   : 
						  ((0x2000U 
						    == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
						    ? 0xdU
						    : 
						   ((0x4000U 
						     == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
						     ? 0xeU
						     : 
						    ((0x8000U 
						      == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
						      ? 0xfU
						      : 0x10U)))))))
	        : ((((((((0x20000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
			 | (0x40000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)) 
			| (0x80000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)) 
		       | (0x100000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)) 
		      | (0x200000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)) 
		     | (0x400000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)) 
		    | (0x800000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF))
		    ? ((0x20000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
		        ? 0x11U : ((0x40000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
				    ? 0x12U : ((0x80000U 
						== vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
					        ? 0x13U
					        : (
						   (0x100000U 
						    == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
						    ? 0x14U
						    : 
						   ((0x200000U 
						     == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
						     ? 0x15U
						     : 
						    ((0x400000U 
						      == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
						      ? 0x16U
						      : 
						     ((0x800000U 
						       == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
						       ? 0x17U
						       : 0x18U)))))))
		    : 0U)));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/icache.v:176
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[0U] 
	= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	   [0U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
		   [1U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
				[2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
					     [3U] ? 0U
					      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
					     [0U][0U])))
	    : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	       [1U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
		       [2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
				    [3U] ? 0U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
				    [1U][0U])) : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						  [2U]
						   ? 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						   [3U]
						    ? 0U
						    : 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
						   [2U][0U])
						   : 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						   [3U]
						    ? 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
						   [3U][0U]
						    : 0U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[1U] 
	= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	   [0U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
		   [1U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
				[2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
					     [3U] ? 0U
					      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
					     [0U][1U])))
	    : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	       [1U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
		       [2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
				    [3U] ? 0U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
				    [1U][1U])) : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						  [2U]
						   ? 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						   [3U]
						    ? 0U
						    : 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
						   [2U][1U])
						   : 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						   [3U]
						    ? 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
						   [3U][1U]
						    : 0U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[2U] 
	= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	   [0U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
		   [1U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
				[2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
					     [3U] ? 0U
					      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
					     [0U][2U])))
	    : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	       [1U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
		       [2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
				    [3U] ? 0U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
				    [1U][2U])) : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						  [2U]
						   ? 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						   [3U]
						    ? 0U
						    : 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
						   [2U][2U])
						   : 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						   [3U]
						    ? 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
						   [3U][2U]
						    : 0U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[3U] 
	= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	   [0U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
		   [1U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
				[2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
					     [3U] ? 0U
					      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
					     [0U][3U])))
	    : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	       [1U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
		       [2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
				    [3U] ? 0U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
				    [1U][3U])) : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						  [2U]
						   ? 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						   [3U]
						    ? 0U
						    : 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
						   [2U][3U])
						   : 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						   [3U]
						    ? 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
						   [3U][3U]
						    : 0U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[4U] 
	= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	   [0U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
		   [1U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
				[2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
					     [3U] ? 0U
					      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
					     [0U][4U])))
	    : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	       [1U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
		       [2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
				    [3U] ? 0U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
				    [1U][4U])) : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						  [2U]
						   ? 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						   [3U]
						    ? 0U
						    : 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
						   [2U][4U])
						   : 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						   [3U]
						    ? 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
						   [3U][4U]
						    : 0U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[5U] 
	= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	   [0U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
		   [1U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
				[2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
					     [3U] ? 0U
					      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
					     [0U][5U])))
	    : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	       [1U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
		       [2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
				    [3U] ? 0U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
				    [1U][5U])) : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						  [2U]
						   ? 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						   [3U]
						    ? 0U
						    : 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
						   [2U][5U])
						   : 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						   [3U]
						    ? 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
						   [3U][5U]
						    : 0U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[6U] 
	= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	   [0U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
		   [1U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
				[2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
					     [3U] ? 0U
					      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
					     [0U][6U])))
	    : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	       [1U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
		       [2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
				    [3U] ? 0U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
				    [1U][6U])) : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						  [2U]
						   ? 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						   [3U]
						    ? 0U
						    : 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
						   [2U][6U])
						   : 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						   [3U]
						    ? 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
						   [3U][6U]
						    : 0U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[7U] 
	= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	   [0U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
		   [1U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
				[2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
					     [3U] ? 0U
					      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
					     [0U][7U])))
	    : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	       [1U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
		       [2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
				    [3U] ? 0U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
				    [1U][7U])) : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						  [2U]
						   ? 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						   [3U]
						    ? 0U
						    : 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
						   [2U][7U])
						   : 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						   [3U]
						    ? 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
						   [3U][7U]
						    : 0U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_hit 
	= (((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	     [0U] | vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	     [1U]) | vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	    [2U]) | vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	   [3U]);
    vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_core2dev_data 
	= ((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel))
	    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__data_o
	    : 0U);
    vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_addr 
	= ((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel))
	    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem
	    : 0U);
    vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_rw 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_we) 
	   & (1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel)));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/core_top.v:261
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dS_nxt 
	= ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dS))
	    ? (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_re) 
		| (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_we))
	        ? 1U : 0U) : ((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dS))
			       ? ((1U & ((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel))
					  ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_data_ready)
					  : ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel))
					      ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_d_ready)
					      : 1U)))
				   ? 0U : 1U) : 0U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_ecall 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_sys_op) 
	   & (0U == (0xfffU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
			       >> 0x14U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_mret 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_sys_op) 
	   & (0x302U == (0xfffU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
				   >> 0x14U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data 
	= ((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_regfile_we2mem_wb) 
	     & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs2_addr2fwd) 
		== (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rd_addr2mem_wb))) 
	    & (0U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rd_addr2mem_wb)))
	    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_p_data
	    : ((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__regfile_we_r) 
		 & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs2_addr2fwd) 
		    == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r))) 
		& (0U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r)))
	        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_data
	        : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs2_data2fwd));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data 
	= ((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_regfile_we2mem_wb) 
	     & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs1_addr2fwd) 
		== (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rd_addr2mem_wb))) 
	    & (0U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rd_addr2mem_wb)))
	    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_p_data
	    : ((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__regfile_we_r) 
		 & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs1_addr2fwd) 
		    == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r))) 
		& (0U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r)))
	        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_data
	        : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs1_data2fwd));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_hit 
	= (((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	     [0U] | vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	     [1U]) | vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	    [2U]) | vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	   [3U]);
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/dcache.v:221
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[0U] 
	= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	   [0U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
		   [1U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
				[2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
					     [3U] ? 0U
					      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
					     [0U][0U])))
	    : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	       [1U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
		       [2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
				    [3U] ? 0U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
				    [1U][0U])) : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						  [2U]
						   ? 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						   [3U]
						    ? 0U
						    : 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
						   [2U][0U])
						   : 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						   [3U]
						    ? 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
						   [3U][0U]
						    : 0U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[1U] 
	= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	   [0U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
		   [1U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
				[2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
					     [3U] ? 0U
					      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
					     [0U][1U])))
	    : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	       [1U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
		       [2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
				    [3U] ? 0U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
				    [1U][1U])) : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						  [2U]
						   ? 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						   [3U]
						    ? 0U
						    : 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
						   [2U][1U])
						   : 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						   [3U]
						    ? 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
						   [3U][1U]
						    : 0U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[2U] 
	= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	   [0U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
		   [1U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
				[2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
					     [3U] ? 0U
					      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
					     [0U][2U])))
	    : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	       [1U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
		       [2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
				    [3U] ? 0U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
				    [1U][2U])) : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						  [2U]
						   ? 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						   [3U]
						    ? 0U
						    : 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
						   [2U][2U])
						   : 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						   [3U]
						    ? 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
						   [3U][2U]
						    : 0U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[3U] 
	= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	   [0U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
		   [1U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
				[2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
					     [3U] ? 0U
					      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
					     [0U][3U])))
	    : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	       [1U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
		       [2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
				    [3U] ? 0U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
				    [1U][3U])) : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						  [2U]
						   ? 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						   [3U]
						    ? 0U
						    : 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
						   [2U][3U])
						   : 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						   [3U]
						    ? 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
						   [3U][3U]
						    : 0U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[4U] 
	= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	   [0U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
		   [1U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
				[2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
					     [3U] ? 0U
					      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
					     [0U][4U])))
	    : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	       [1U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
		       [2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
				    [3U] ? 0U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
				    [1U][4U])) : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						  [2U]
						   ? 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						   [3U]
						    ? 0U
						    : 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
						   [2U][4U])
						   : 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						   [3U]
						    ? 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
						   [3U][4U]
						    : 0U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[5U] 
	= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	   [0U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
		   [1U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
				[2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
					     [3U] ? 0U
					      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
					     [0U][5U])))
	    : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	       [1U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
		       [2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
				    [3U] ? 0U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
				    [1U][5U])) : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						  [2U]
						   ? 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						   [3U]
						    ? 0U
						    : 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
						   [2U][5U])
						   : 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						   [3U]
						    ? 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
						   [3U][5U]
						    : 0U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[6U] 
	= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	   [0U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
		   [1U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
				[2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
					     [3U] ? 0U
					      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
					     [0U][6U])))
	    : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	       [1U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
		       [2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
				    [3U] ? 0U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
				    [1U][6U])) : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						  [2U]
						   ? 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						   [3U]
						    ? 0U
						    : 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
						   [2U][6U])
						   : 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						   [3U]
						    ? 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
						   [3U][6U]
						    : 0U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[7U] 
	= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	   [0U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
		   [1U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
				[2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
					     [3U] ? 0U
					      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
					     [0U][7U])))
	    : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	       [1U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
		       [2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
				    [3U] ? 0U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
				    [1U][7U])) : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						  [2U]
						   ? 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						   [3U]
						    ? 0U
						    : 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
						   [2U][7U])
						   : 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						   [3U]
						    ? 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
						   [3U][7U]
						    : 0U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_result_IF 
	= (1U & (((0x17U >= (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__read_addr))
		   ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table
		  [vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__read_addr]
		   : 0U) >> 1U));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/icache.v:143
    vlSymsp->TOP__aquila_testharness.__Vtableidx3 = 
	(((IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_icache_o) 
	  << 4U) | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_hit) 
		     << 3U) | (((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS)) 
				<< 2U) | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__S))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__S_nxt 
	= vlSymsp->TOP__aquila_testharness.__Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt
	[vlSymsp->TOP__aquila_testharness.__Vtableidx3];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_i_ready 
	= (1U & (((((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__S)) 
		    & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_hit)) 
		   & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__index_prev) 
		      == (0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
				   >> 5U)))) | (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_icache_o))
		  ? 1U : 0U));
    // ALWAYS at core-ver-src/mock_uart.sv:55
    vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_tx_push 
	= ((0xc0000004U == vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_addr) 
	   & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_rw));
    // ALWAYS at core-ver-src/mock_uart.sv:61
    vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_rx_pop 
	= ((0xc0000000U == vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_addr) 
	   & (~ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_rw)));
    // ALWAYS at core-ver-src/mock_uart.sv:173
    vlSymsp->TOP__aquila_testharness.__Vtableidx4 = 
	(0xcU | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_rw) 
		  << 5U) | ((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_d_strobe) 
			      & (1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel))) 
			     << 4U) | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__cur_state))));
    vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__next_state 
	= vlSymsp->TOP__aquila_testharness.__Vtable4___PVT__mock_uart_0__DOT__next_state
	[vlSymsp->TOP__aquila_testharness.__Vtableidx4];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__sys_jump_csr_addr 
	= ((0x341U & VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_mret)))) 
	   | (0x305U & VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_ecall)))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__sys_jump 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_mret) 
	   | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_ecall));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/execute.v:148
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB 
	= ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_inB_sel2exe))
	    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_imm2exe
	    : ((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_inB_sel2exe))
	        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data
	        : ((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_inB_sel2exe))
		    ? ((IData)(1U) + (~ vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data))
		    : 0U)));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__csr_inputB 
	= ((4U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))
	    ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_imm2csr)
	    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data);
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/execute.v:138
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
	= ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_inA_sel2exe))
	    ? 0U : ((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_inA_sel2exe))
		     ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe
		     : ((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_inA_sel2exe))
			 ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data
			 : 0U)));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_branch_taken 
	= ((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_branch2exe) 
	     & (((((((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)) 
		     & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data 
			 == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data)
			 ? 1U : 0U)) | ((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)) 
					& ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data 
					    != vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data)
					    ? 1U : 0U))) 
		   | ((4U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)) 
		      & (VL_LTS_III(1,32,32, vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data, vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data)
			  ? 1U : 0U))) | ((5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)) 
					  & (VL_GTES_III(1,32,32, vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data, vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data)
					      ? 1U : 0U))) 
		 | ((6U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)) 
		    & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data 
			< vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data)
		        ? 1U : 0U))) | ((7U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)) 
					& ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data 
					    >= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data)
					    ? 1U : 0U)))) 
	    | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_jal2exe)) 
	   | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_jalr2exe));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/dcache.v:183
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S_nxt 
	= (7U & ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
		  ? (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_d_strobe) 
		      & (0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel)))
		      ? 1U : 0U) : ((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
				     ? ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_hit)
					 ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_
						 [(0x1fU 
						   & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
						      >> 5U))]
						 [vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__victim_sel]
						  ? 2U
						  : 4U))
				     : ((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
					 ? ((IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_dcache_o)
					     ? 3U : 2U)
					 : ((3U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
					     ? 4U : 
					    ((4U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
					      ? ((IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_dcache_o)
						  ? 5U
						  : 4U)
					      : 0U))))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/dcache.v:275
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromCache 
	= ((0x10U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
	    ? ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
	        ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[0U]
		    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[1U])
	        : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[2U]
		    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[3U]))
	    : ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
	        ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[4U]
		    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[5U])
	        : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[6U]
		    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[7U])));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/core_top.v:231
    vlSymsp->TOP__aquila_testharness.__Vtableidx1 = 
	(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_i_ready) 
	  << 4U) | (((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dS_nxt)) 
		     << 3U) | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Pipeline_Control__DOT__is_load_use) 
				<< 2U) | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt 
	= vlSymsp->TOP__aquila_testharness.__Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt
	[vlSymsp->TOP__aquila_testharness.__Vtableidx1];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline 
	= (1U & (((~ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_i_ready)) 
		  | (1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dS_nxt))) 
		 | ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__alu_muldiv_sel2exe) 
		    & (~ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_ready)))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__is_b_neg 
	= ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB 
	    >> 0x1fU) & (((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)) 
			  | (4U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))) 
			 | (6U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/csr_file.v:443
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__updated_csr_data 
	= ((1U == (3U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)))
	    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__csr_inputB
	    : ((2U == (3U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)))
	        ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__csr_data 
		   | vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__csr_inputB)
	        : ((3U == (3U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)))
		    ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__csr_data 
		       & (~ vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__csr_inputB))
		    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__csr_data)));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_result 
	= ((((((((VL_NEGATE_I((IData)((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation)))) 
		  & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
		     + vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB)) 
		 | (VL_NEGATE_I((IData)((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation)))) 
		    & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
		       << (0x1fU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB)))) 
		| (VL_NEGATE_I((IData)((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation)))) 
		   & (VL_LTS_III(1,32,32, vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA, vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB)
		       ? 1U : 0U))) | (VL_NEGATE_I((IData)(
							   (3U 
							    == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation)))) 
				       & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
					   < vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB)
					   ? 1U : 0U))) 
	      | (VL_NEGATE_I((IData)((4U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation)))) 
		 & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
		    ^ vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB))) 
	     | (VL_NEGATE_I((IData)((5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation)))) 
		& ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__shift_sel2exe)
		    ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
		       >> (0x1fU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB))
		    : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
		       >> (0x1fU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB))))) 
	    | (VL_NEGATE_I((IData)((6U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation)))) 
	       & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
		  | vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB))) 
	   | (VL_NEGATE_I((IData)((7U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation)))) 
	      & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
		 & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB)));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/muldiv.v:179
    vlSymsp->TOP__aquila_testharness.__Vtableidx2 = 
	(((0U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB) 
	  << 5U) | (((0U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA) 
		     << 4U) | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_req) 
				<< 3U) | ((4U & ((~ (IData)(
							    (0U 
							     != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__cnt)))) 
						 << 2U)) 
					  | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S)))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt 
	= vlSymsp->TOP__aquila_testharness.__Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt
	[vlSymsp->TOP__aquila_testharness.__Vtableidx2];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__is_a_neg 
	= ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
	    >> 0x1fU) & ((((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)) 
			   | (2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))) 
			  | (4U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))) 
			 | (6U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_misprediction 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_EXE) 
	   & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_result_EXE) 
	      ^ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_branch_taken)));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/dcache.v:308
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__update_data 
	= ((8U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__byte_enable_from_p))
	    ? ((4U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__byte_enable_from_p))
	        ? ((2U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__byte_enable_from_p))
		    ? ((1U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__byte_enable_from_p))
		        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__datain_from_p
		        : 0U) : ((1U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__byte_enable_from_p))
				  ? 0U : ((5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
					   ? ((0xffff0000U 
					       & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__datain_from_p) 
					      | (0xffffU 
						 & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromMem))
					   : ((0xffff0000U 
					       & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__datain_from_p) 
					      | (0xffffU 
						 & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromCache)))))
	        : ((2U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__byte_enable_from_p))
		    ? 0U : ((1U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__byte_enable_from_p))
			     ? 0U : ((5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
				      ? ((0xff000000U 
					  & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__datain_from_p) 
					 | (0xffffffU 
					    & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromMem))
				      : ((0xff000000U 
					  & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__datain_from_p) 
					 | (0xffffffU 
					    & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromCache))))))
	    : ((4U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__byte_enable_from_p))
	        ? ((2U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__byte_enable_from_p))
		    ? 0U : ((1U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__byte_enable_from_p))
			     ? 0U : ((5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
				      ? ((0xff000000U 
					  & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromMem) 
					 | ((0xff0000U 
					     & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__datain_from_p) 
					    | (0xffffU 
					       & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromMem)))
				      : ((0xff000000U 
					  & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromCache) 
					 | ((0xff0000U 
					     & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__datain_from_p) 
					    | (0xffffU 
					       & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromCache))))))
	        : ((2U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__byte_enable_from_p))
		    ? ((1U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__byte_enable_from_p))
		        ? ((5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
			    ? ((0xffff0000U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromMem) 
			       | (0xffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__datain_from_p))
			    : ((0xffff0000U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromCache) 
			       | (0xffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__datain_from_p)))
		        : ((5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
			    ? ((0xffff0000U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromMem) 
			       | ((0xff00U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__datain_from_p) 
				  | (0xffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromMem)))
			    : ((0xffff0000U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromCache) 
			       | ((0xff00U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__datain_from_p) 
				  | (0xffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromCache)))))
		    : ((1U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__byte_enable_from_p))
		        ? ((5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
			    ? ((0xffffff00U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromMem) 
			       | (0xffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__datain_from_p))
			    : ((0xffffff00U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromCache) 
			       | (0xffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__datain_from_p)))
		        : 0U))));
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Fetch__stall 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline) 
	   | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Pipeline_Control__DOT__is_load_use));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/muldiv.v:147
    vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__abs__2__num 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB;
    vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__3__num 
	= vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__abs__2__num;
    vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__3__Vfuncout 
	= ((IData)(1U) + (~ vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__3__num));
    vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__abs__2__Vfuncout 
	= ((0x80000000U & vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__abs__2__num)
	    ? vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__3__Vfuncout
	    : vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__abs__2__num);
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__op_b 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__is_b_neg)
	    ? vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__abs__2__Vfuncout
	    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB);
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__signed_adjust 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__is_a_neg) 
	   ^ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__is_b_neg));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/muldiv.v:146
    vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__abs__0__num 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA;
    vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__1__num 
	= vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__abs__0__num;
    vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__1__Vfuncout 
	= ((IData)(1U) + (~ vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__1__num));
    vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__abs__0__Vfuncout 
	= ((0x80000000U & vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__abs__0__num)
	    ? vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__1__Vfuncout
	    : vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__abs__0__num);
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__op_a 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__is_a_neg)
	    ? vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__abs__0__Vfuncout
	    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA);
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Pipeline_Control__DOT__branch_flush 
	= ((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_branch_taken) 
	     & (~ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__uncond_branch_hit_EXE))) 
	    & (~ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_EXE))) 
	   | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_misprediction));
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Fetch__flush 
	= (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Pipeline_Control__DOT__branch_flush) 
	    | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__sys_jump)) 
	   | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__irq_taken));
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Decode__flush 
	= ((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Pipeline_Control__DOT__branch_flush) 
	     | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Pipeline_Control__DOT__is_load_use)) 
	    | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_miscmem) 
		& ((0U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
				 >> 0xcU))) | (1U == 
					       (7U 
						& (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						   >> 0xcU))))) 
	       | ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_sys_op) 
		  & (1U == (0xfffU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
				      >> 0x14U)))))) 
	   | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__irq_taken));
}

VL_INLINE_OPT void Vaquila_testharness_aquila_testharness::_sequent__TOP__aquila_testharness__2(Vaquila_testharness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vaquila_testharness_aquila_testharness::_sequent__TOP__aquila_testharness__2\n"); );
    Vaquila_testharness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG8(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__write_addr,4,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v0,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v24,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v25,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v26,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v27,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v28,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v29,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v30,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v31,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v32,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v33,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v34,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v35,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v36,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v37,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v38,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v39,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v40,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v41,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v42,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v43,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v44,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v45,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v46,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v47,0,0);
    VL_SIG8(__Vdlyvdim0__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v48,4,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v48,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v0,0,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v24,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v24,0,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v25,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v25,0,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v26,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v26,0,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v27,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v27,0,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v28,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v28,0,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v29,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v29,0,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v30,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v30,0,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v31,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v31,0,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v32,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v32,0,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v33,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v33,0,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v34,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v34,0,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v35,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v35,0,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v36,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v36,0,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v37,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v37,0,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v38,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v38,0,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v39,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v39,0,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v40,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v40,0,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v41,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v41,0,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v42,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v42,0,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v43,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v43,0,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v44,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v44,0,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v45,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v45,0,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v46,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v46,0,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v47,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v47,0,0);
    VL_SIG8(__Vdlyvdim0__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v48,4,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v48,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v48,0,0);
    VL_SIG8(__Vdlyvdim0__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v49,4,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v49,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v49,0,0);
    VL_SIG8(__Vdlyvdim0__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v50,4,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v50,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v50,0,0);
    VL_SIG8(__Vdlyvdim0__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v51,4,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v51,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v51,0,0);
    VL_SIG8(__Vdlyvdim0__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v52,4,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v52,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v52,0,0);
    VL_SIG8(__Vdlyvdim0__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table__v0,4,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table__v0,0,0);
    VL_SIG8(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__write_addr,4,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v0,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v20,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v21,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v22,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v23,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v24,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v25,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v26,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v27,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v28,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v29,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v30,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v31,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v32,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v33,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v34,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v35,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v36,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v37,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v38,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v39,0,0);
    VL_SIG8(__Vdlyvdim0__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v40,4,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v40,0,0);
    VL_SIG8(__Vdlyvdim0__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table__v0,4,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table__v0,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf__v0,0,0);
    VL_SIG8(__Vdlyvdim0__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf__v32,4,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf__v32,0,0);
    VL_SIG8(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__fet_valid2dec,0,0);
    VL_SIG8(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_ID,0,0);
    VL_SIG8(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_result_ID,0,0);
    VL_SIG8(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__uncond_branch_hit_ID,0,0);
    VL_SIG8(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_regfile_sel2exe,2,0);
    VL_SIG8(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__uncond_branch_hit_EXE,0,0);
    VL_SIG8(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_regfile_we2exe,0,0);
    VL_SIG8(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_result_EXE,0,0);
    VL_SIG8(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_EXE,0,0);
    VL_SIG8(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__alu_muldiv_sel2exe,0,0);
    VL_SIG8(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__is_csr_instr2csr,0,0);
    VL_SIG8(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_input_sel2exe,1,0);
    VL_SIG8(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_rd_addr2exe,4,0);
    VL_SIG8(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_we2exe,0,0);
    VL_SIG8(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_re2exe,0,0);
    VL_SIG8(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_load_ext_sel2mem_wb,0,0);
    VL_SIG8(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem,1,0);
    VL_SIG8(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_we,0,0);
    VL_SIG8(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_re,0,0);
    VL_SIG8(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_regfile_input_sel2mem_wb,2,0);
    VL_SIG8(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_regfile_we2mem_wb,0,0);
    VL_SIG8(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_rd_addr2mem_wb,4,0);
    VL_SIG8(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__cnt,5,0);
    VL_SIG8(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r,4,0);
    VL_SIG8(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus_mie_r,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__CLINT__DOT__clint_mem__v0,0,0);
    VL_SIG8(__Vdlyvdim0__aquila_core__DOT__CLINT__DOT__clint_mem__v5,2,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__CLINT__DOT__clint_mem__v5,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__CLINT__DOT__clint_mem__v6,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__I_Cache__DOT__VALID___v0,0,0);
    VL_SIG8(__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__VALID___v128,4,0);
    VL_SIG8(__Vdlyvdim1__aquila_core__DOT__I_Cache__DOT__VALID___v128,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__I_Cache__DOT__VALID___v128,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__I_Cache__DOT__TAG___v0,0,0);
    VL_SIG8(__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__TAG___v128,4,0);
    VL_SIG8(__Vdlyvdim1__aquila_core__DOT__I_Cache__DOT__TAG___v128,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__I_Cache__DOT__TAG___v128,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__I_Cache__DOT__FIFO_cnt__v0,0,0);
    VL_SIG8(__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__FIFO_cnt__v32,4,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__I_Cache__DOT__FIFO_cnt__v32,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__I_Cache__DOT__FIFO_cnt__v32,0,0);
    VL_SIG8(__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0,4,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0,0,0);
    VL_SIG8(__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0,4,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0,0,0);
    VL_SIG8(__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0,4,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0,0,0);
    VL_SIG8(__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0,4,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0,0,0);
    VL_SIG8(__Vdly__aquila_core__DOT__D_Cache__DOT__rw,0,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__D_Cache__DOT__cache_write__v0,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__D_Cache__DOT__cache_write__v0,0,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__D_Cache__DOT__cache_write__v1,0,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__D_Cache__DOT__cache_write__v2,0,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__D_Cache__DOT__cache_write__v3,0,0);
    VL_SIG8(__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__cache_write__v4,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__D_Cache__DOT__cache_write__v4,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__D_Cache__DOT__cache_write__v5,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__D_Cache__DOT__FIFO_cnt__v0,0,0);
    VL_SIG8(__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__FIFO_cnt__v32,4,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__D_Cache__DOT__FIFO_cnt__v32,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__D_Cache__DOT__FIFO_cnt__v32,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__D_Cache__DOT__VALID___v0,0,0);
    VL_SIG8(__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__VALID___v128,4,0);
    VL_SIG8(__Vdlyvdim1__aquila_core__DOT__D_Cache__DOT__VALID___v128,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__D_Cache__DOT__VALID___v128,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__D_Cache__DOT__DIRTY___v0,0,0);
    VL_SIG8(__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__DIRTY___v128,4,0);
    VL_SIG8(__Vdlyvdim1__aquila_core__DOT__D_Cache__DOT__DIRTY___v128,1,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__D_Cache__DOT__DIRTY___v128,0,0);
    VL_SIG8(__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__DIRTY___v129,4,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__D_Cache__DOT__DIRTY___v129,0,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__D_Cache__DOT__DIRTY___v129,0,0);
    VL_SIG8(__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__DIRTY___v130,4,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__D_Cache__DOT__DIRTY___v130,0,0);
    VL_SIG8(__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__DIRTY___v131,4,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__D_Cache__DOT__DIRTY___v131,0,0);
    VL_SIG8(__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__DIRTY___v132,4,0);
    VL_SIG8(__Vdlyvval__aquila_core__DOT__D_Cache__DOT__DIRTY___v132,0,0);
    VL_SIG8(__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM__v0,4,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM__v0,0,0);
    VL_SIG8(__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0,4,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0,0,0);
    VL_SIG8(__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM__v0,4,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM__v0,0,0);
    VL_SIG8(__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0,4,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0,0,0);
    VL_SIG8(__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM__v0,4,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM__v0,0,0);
    VL_SIG8(__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0,4,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0,0,0);
    VL_SIG8(__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM__v0,4,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM__v0,0,0);
    VL_SIG8(__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0,4,0);
    VL_SIG8(__Vdlyvset__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0,0,0);
    VL_SIG8(__Vdly__mock_uart_0__DOT__transmit_counter,7,0);
    VL_SIG8(__Vdly__mock_uart_0__DOT__uart_tx_fifo_full,0,0);
    VL_SIG8(__Vdly__mock_uart_0__DOT__uart_tx_fifo_empty,0,0);
    VL_SIG16(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr,11,0);
    VL_SIG(__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__5__Vfuncout,31,0);
    VL_SIG(__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__5__num,31,0);
    VL_SIG(__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__6__Vfuncout,31,0);
    VL_SIG(__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__6__num,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v24,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v25,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v26,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v27,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v28,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v29,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v30,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v31,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v32,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v33,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v34,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v35,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v36,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v37,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v38,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v39,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v40,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v41,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v42,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v43,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v44,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v45,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v46,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v47,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v48,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table__v0,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v20,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v21,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v22,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v23,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v24,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v25,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v26,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v27,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v28,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v29,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v30,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v31,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v32,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v33,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v34,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v35,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v36,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v37,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v38,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v39,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v40,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table__v0,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf__v32,31,0);
    VL_SIG(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__fet_pc2dec,31,0);
    VL_SIG(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe,31,0);
    VL_SIG(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_imm2exe,31,0);
    VL_SIG(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem,31,0);
    VL_SIG(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_p_data,31,0);
    VL_SIGW(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result,64,0,3);
    VL_SIG(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_result,31,0);
    VL_SIG(__Vdly__aquila_core__DOT__CLINT__DOT__counter,16,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__CLINT__DOT__clint_mem__v5,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__CLINT__DOT__clint_mem__v6,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__CLINT__DOT__clint_mem__v7,31,0);
    VL_SIG(__Vdlyvval__aquila_core__DOT__I_Cache__DOT__TAG___v128,21,0);
    VL_SIGW(__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0,255,0,8);
    VL_SIGW(__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0,255,0,8);
    VL_SIGW(__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0,255,0,8);
    VL_SIGW(__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0,255,0,8);
    VL_SIGW(__Vdly__aquila_core__DOT__D_Cache__DOT__m_data,255,0,8);
    VL_SIG(__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM__v0,21,0);
    VL_SIGW(__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0,255,0,8);
    VL_SIG(__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM__v0,21,0);
    VL_SIGW(__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0,255,0,8);
    VL_SIG(__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM__v0,21,0);
    VL_SIGW(__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0,255,0,8);
    VL_SIG(__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM__v0,21,0);
    VL_SIGW(__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0,255,0,8);
    VL_SIG(__Vdly__M_DEVICE_dev2core_data,31,0);
    VL_SIGW(__Vtemp77,95,0,3);
    VL_SIGW(__Vtemp79,95,0,3);
    VL_SIGW(__Vtemp84,95,0,3);
    VL_SIGW(__Vtemp85,95,0,3);
    VL_SIGW(__Vtemp86,95,0,3);
    VL_SIGW(__Vtemp91,95,0,3);
    VL_SIGW(__Vtemp93,95,0,3);
    VL_SIGW(__Vtemp126,255,0,8);
    VL_SIGW(__Vtemp127,255,0,8);
    VL_SIGW(__Vtemp128,255,0,8);
    VL_SIGW(__Vtemp129,255,0,8);
    VL_SIG(__Vtemp132,31,0);
    VL_SIGW(__Vtemp133,255,0,8);
    VL_SIGW(__Vtemp134,255,0,8);
    VL_SIGW(__Vtemp135,255,0,8);
    VL_SIGW(__Vtemp136,255,0,8);
    VL_SIGW(__Vtemp137,255,0,8);
    VL_SIGW(__Vtemp138,255,0,8);
    VL_SIGW(__Vtemp139,255,0,8);
    VL_SIGW(__Vtemp179,255,0,8);
    VL_SIGW(__Vtemp216,255,0,8);
    VL_SIG64(__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mcycle_r,63,0);
    // Body
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table__v0 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table__v0 = 0U;
    __Vdly__mock_uart_0__DOT__uart_tx_fifo_full = vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_tx_fifo_full;
    __Vdly__aquila_core__DOT__CLINT__DOT__counter = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__counter;
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__fet_valid2dec 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_valid2dec;
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__uncond_branch_hit_ID 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__uncond_branch_hit_ID;
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_result_ID 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_result_ID;
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_ID 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_ID;
    __Vdly__mock_uart_0__DOT__uart_tx_fifo_empty = vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_tx_fifo_empty;
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_load_ext_sel2mem_wb 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_load_ext_sel2mem_wb;
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_regfile_input_sel2mem_wb 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_regfile_input_sel2mem_wb;
    __Vdly__mock_uart_0__DOT__transmit_counter = vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__transmit_counter;
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__write_addr 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__write_addr;
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__write_addr 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__write_addr;
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_we2exe 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_we2exe;
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__is_csr_instr2csr 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_csr_instr2csr;
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem;
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mcycle_r 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mcycle_r;
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_regfile_we2exe 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_regfile_we2exe;
    __Vdly__M_DEVICE_dev2core_data = vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_dev2core_data;
    __Vdly__aquila_core__DOT__D_Cache__DOT__m_data[0U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[0U];
    __Vdly__aquila_core__DOT__D_Cache__DOT__m_data[1U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[1U];
    __Vdly__aquila_core__DOT__D_Cache__DOT__m_data[2U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[2U];
    __Vdly__aquila_core__DOT__D_Cache__DOT__m_data[3U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[3U];
    __Vdly__aquila_core__DOT__D_Cache__DOT__m_data[4U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[4U];
    __Vdly__aquila_core__DOT__D_Cache__DOT__m_data[5U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[5U];
    __Vdly__aquila_core__DOT__D_Cache__DOT__m_data[6U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[6U];
    __Vdly__aquila_core__DOT__D_Cache__DOT__m_data[7U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[7U];
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__uncond_branch_hit_EXE 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__uncond_branch_hit_EXE;
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_re2exe 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_re2exe;
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_re 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_re;
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_result_EXE 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_result_EXE;
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_result 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_result;
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_we 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_we;
    __Vdly__aquila_core__DOT__D_Cache__DOT__rw = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__rw;
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_EXE 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_EXE;
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__cnt 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__cnt;
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus_mie_r 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus_mie_r;
    __Vdlyvset__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM__v0 = 0U;
    __Vdlyvset__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM__v0 = 0U;
    __Vdlyvset__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM__v0 = 0U;
    __Vdlyvset__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM__v0 = 0U;
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_input_sel2exe 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_input_sel2exe;
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_regfile_sel2exe 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_regfile_sel2exe;
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[0U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[0U];
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U];
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[2U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[2U];
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr;
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__alu_muldiv_sel2exe 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__alu_muldiv_sel2exe;
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_rd_addr2exe 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rd_addr2exe;
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_imm2exe 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_imm2exe;
    __Vdlyvset__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0 = 0U;
    __Vdlyvset__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0 = 0U;
    __Vdlyvset__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0 = 0U;
    __Vdlyvset__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0 = 0U;
    __Vdlyvset__aquila_core__DOT__D_Cache__DOT__FIFO_cnt__v0 = 0U;
    __Vdlyvset__aquila_core__DOT__D_Cache__DOT__FIFO_cnt__v32 = 0U;
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__fet_pc2dec 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_pc2dec;
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem;
    __Vdlyvset__aquila_core__DOT__D_Cache__DOT__cache_write__v0 = 0U;
    __Vdlyvset__aquila_core__DOT__D_Cache__DOT__cache_write__v4 = 0U;
    __Vdlyvset__aquila_core__DOT__D_Cache__DOT__cache_write__v5 = 0U;
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_regfile_we2mem_wb 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_regfile_we2mem_wb;
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_rd_addr2mem_wb 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rd_addr2mem_wb;
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r;
    __Vdlyvset__aquila_core__DOT__CLINT__DOT__clint_mem__v0 = 0U;
    __Vdlyvset__aquila_core__DOT__CLINT__DOT__clint_mem__v5 = 0U;
    __Vdlyvset__aquila_core__DOT__CLINT__DOT__clint_mem__v6 = 0U;
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_p_data 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_p_data;
    __Vdlyvset__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0 = 0U;
    __Vdlyvset__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0 = 0U;
    __Vdlyvset__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0 = 0U;
    __Vdlyvset__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0 = 0U;
    __Vdlyvset__aquila_core__DOT__I_Cache__DOT__FIFO_cnt__v0 = 0U;
    __Vdlyvset__aquila_core__DOT__I_Cache__DOT__FIFO_cnt__v32 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf__v0 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf__v32 = 0U;
    __Vdlyvset__aquila_core__DOT__D_Cache__DOT__DIRTY___v0 = 0U;
    __Vdlyvset__aquila_core__DOT__D_Cache__DOT__DIRTY___v128 = 0U;
    __Vdlyvset__aquila_core__DOT__D_Cache__DOT__DIRTY___v129 = 0U;
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe;
    __Vdlyvset__aquila_core__DOT__D_Cache__DOT__VALID___v0 = 0U;
    __Vdlyvset__aquila_core__DOT__D_Cache__DOT__VALID___v128 = 0U;
    vlSymsp->TOP__aquila_testharness.__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r;
    __Vdlyvset__aquila_core__DOT__I_Cache__DOT__VALID___v0 = 0U;
    __Vdlyvset__aquila_core__DOT__I_Cache__DOT__VALID___v128 = 0U;
    __Vdlyvset__aquila_core__DOT__I_Cache__DOT__TAG___v0 = 0U;
    __Vdlyvset__aquila_core__DOT__I_Cache__DOT__TAG___v128 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v0 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v24 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v25 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v26 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v27 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v28 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v29 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v30 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v31 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v32 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v33 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v34 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v35 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v36 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v37 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v38 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v39 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v40 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v41 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v42 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v43 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v44 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v45 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v46 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v47 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v48 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v49 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v50 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v51 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v52 = 0U;
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/icache.v:200
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__jdx = 0x20U;
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/icache.v:211
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__jdx = 0x20U;
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/dcache.v:441
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__jdx = 0x20U;
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/dcache.v:452
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__jdx = 0x20U;
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/dcache.v:261
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__idx = 0x20U;
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/dcache.v:441
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__idx = 4U;
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/dcache.v:452
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__idx = 4U;
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/icache.v:200
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__idx = 4U;
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/icache.v:211
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__idx = 4U;
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/icache.v:227
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__idx = 0x20U;
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/uncond_BHT.v:170
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__idx = 0x14U;
    } else {
	if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline) {
	    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__idx = 0x14U;
	}
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/bpu.v:210
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__idx = 0x18U;
    } else {
	if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline) {
	    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__idx = 0x18U;
	}
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/bpu.v:228
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__idx = 0x18U;
    } else {
	if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline) {
	    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__idx = 0x18U;
	}
    }
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v0 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v20 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v21 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v22 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v23 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v24 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v25 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v26 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v27 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v28 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v29 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v30 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v31 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v32 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v33 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v34 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v35 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v36 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v37 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v38 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v39 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v40 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v0 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v24 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v25 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v26 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v27 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v28 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v29 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v30 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v31 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v32 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v33 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v34 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v35 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v36 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v37 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v38 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v39 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v40 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v41 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v42 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v43 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v44 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v45 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v46 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v47 = 0U;
    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v48 = 0U;
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/distri_ram.v:77
    if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__we) {
	vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT____Vlvbound2 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_result;
	if (VL_LIKELY((0x13U >= (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__write_addr)))) {
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table__v0 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table__v0 = 1U;
	    __Vdlyvdim0__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table__v0 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__write_addr;
	}
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/distri_ram.v:77
    if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__we) {
	vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT____Vlvbound2 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_result;
	if (VL_LIKELY((0x17U >= (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__write_addr)))) {
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table__v0 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table__v0 = 1U;
	    __Vdlyvdim0__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table__v0 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__write_addr;
	}
    }
    // ALWAYS at core-ver-src/mock_uart.sv:102
    __Vdly__mock_uart_0__DOT__uart_tx_fifo_full = ((IData)(vlTOPp->rst_n) 
						   & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_tx_push) 
						      | ((1U 
							  > (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__transmit_counter)) 
							 & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_tx_fifo_full))));
    // ALWAYS at core-ver-src/mock_uart.sv:125
    __Vdly__mock_uart_0__DOT__uart_tx_fifo_full = ((IData)(vlTOPp->rst_n) 
						   & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_tx_push) 
						      | ((1U 
							  > (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__transmit_counter)) 
							 & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_tx_fifo_full))));
    // ALWAYS at core-ver-src/mock_uart.sv:155
    vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_rx_fifo_valid 
	= ((IData)(vlTOPp->rst_n) & ((~ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_rx_pop)) 
				     & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_rx_fifo_valid)));
    // ALWAYS at core-ver-src/mock_uart.sv:145
    vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_rx_fifo_full 
	= ((IData)(vlTOPp->rst_n) & ((~ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_rx_pop)) 
				     & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_rx_fifo_full)));
    // ALWAYS at core-ver-src/mock_uart.sv:86
    vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__write_counter 
	= (0xffU & ((IData)(vlTOPp->rst_n) ? ((((0U 
						 == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__cur_state)) 
						| (3U 
						   == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__cur_state))) 
					       | (1U 
						  == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__cur_state)))
					       ? 0U
					       : ((IData)(1U) 
						  + (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__write_counter)))
		     : 0U));
    // ALWAYS at core-ver-src/mock_uart.sv:78
    vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__read_counter 
	= (0xffU & ((IData)(vlTOPp->rst_n) ? ((((0U 
						 == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__cur_state)) 
						| (3U 
						   == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__cur_state))) 
					       | (2U 
						  == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__cur_state)))
					       ? 0U
					       : ((IData)(1U) 
						  + (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__read_counter)))
		     : 0U));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/clint.v:81
    __Vdly__aquila_core__DOT__CLINT__DOT__counter = 
	(0x1ffffU & ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
		      ? 0U : ((0x186a0U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__counter)
			       ? 0U : ((IData)(1U) 
				       + vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__counter))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/fetch.v:115
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__fet_valid2dec 
	= (1U & ((~ (IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)) 
		 & ((IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Fetch__stall)
		     ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_valid2dec)
		     : (~ (IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Fetch__flush)))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/fetch.v:115
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__uncond_branch_hit_ID 
	= ((~ (IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)) 
	   & ((IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Fetch__stall)
	       ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__uncond_branch_hit_ID)
	       : ((~ (IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Fetch__flush)) 
		  & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__uncond_branch_hit_IF))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/fetch.v:115
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_result_ID 
	= ((~ (IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)) 
	   & ((IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Fetch__stall)
	       ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_result_ID)
	       : ((~ (IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Fetch__flush)) 
		  & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_result_IF))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/fetch.v:115
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_ID 
	= ((~ (IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)) 
	   & ((IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Fetch__stall)
	       ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_ID)
	       : ((~ (IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Fetch__flush)) 
		  & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_IF))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/csr_file.v:344
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mip_meip_r = 0U;
    // ALWAYS at core-ver-src/mock_uart.sv:112
    __Vdly__mock_uart_0__DOT__uart_tx_fifo_empty = 
	((IData)(vlTOPp->rst_n) & ((~ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_tx_push)) 
				   & ((1U <= (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__transmit_counter)) 
				      | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_tx_fifo_empty))));
    // ALWAYS at core-ver-src/mock_uart.sv:135
    __Vdly__mock_uart_0__DOT__uart_tx_fifo_empty = 
	((IData)(vlTOPp->rst_n) & ((~ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_tx_push)) 
				   & ((1U <= (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__transmit_counter)) 
				      | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_tx_fifo_empty))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/core_top.v:223
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
	    ? 0U : (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/execute.v:216
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_load_ext_sel2mem_wb 
	= ((~ (IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)) 
	   & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
	       ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_load_ext_sel2mem_wb)
	       : (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_load_ext_sel2exe)));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/execute.v:216
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_regfile_input_sel2mem_wb 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
	    ? 0U : ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
		     ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_regfile_input_sel2mem_wb)
		     : (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_regfile_sel2exe)));
    // ALWAYS at core-ver-src/mock_uart.sv:64
    if (vlTOPp->rst_n) {
	if (vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_tx_fifo_empty) {
	    __Vdly__mock_uart_0__DOT__transmit_counter = 0U;
	} else {
	    if (vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_tx_fifo_full) {
		__Vdly__mock_uart_0__DOT__transmit_counter 
		    = (0xffU & ((IData)(1U) + (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__transmit_counter)));
		if (VL_UNLIKELY((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__transmit_counter)))) {
		    VL_WRITEF("%c",8,vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_tx_fifo);
		}
	    } else {
		__Vdly__mock_uart_0__DOT__transmit_counter 
		    = vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__transmit_counter;
	    }
	}
    } else {
	__Vdly__mock_uart_0__DOT__transmit_counter = 0U;
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/uncond_BHT.v:153
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__write_addr = 0U;
    } else {
	if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline) {
	    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__write_addr 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__write_addr;
	} else {
	    if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__we) {
		__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__write_addr 
		    = (0x1fU & ((0x13U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__write_addr))
				 ? 0U : ((IData)(1U) 
					 + (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__write_addr))));
	    }
	}
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/bpu.v:105
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__write_addr = 0U;
    } else {
	if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline) {
	    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__write_addr 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__write_addr;
	} else {
	    if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__we) {
		__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__write_addr 
		    = (0x1fU & ((0x17U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__write_addr))
				 ? 0U : ((IData)(1U) 
					 + (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__write_addr))));
	    }
	}
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/decode.v:450
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_instr_valid2csr 
	= ((~ (IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)) 
	   & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
	       ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_instr_valid2csr)
	       : ((~ (IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Decode__flush)) 
		  & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_valid2dec))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/decode.v:450
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_we2exe 
	= ((~ (IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)) 
	   & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
	       ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_we2exe)
	       : ((~ (IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Decode__flush)) 
		  & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_store))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/decode.v:450
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__is_csr_instr2csr 
	= ((~ (IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)) 
	   & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
	       ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_csr_instr2csr)
	       : ((~ (IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Decode__flush)) 
		  & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_csr))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/csr_file.v:291
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mscratch_r = 0U;
    } else {
	if (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_csr_instr2csr) 
	     & (0x340U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr)))) {
	    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mscratch_r 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__updated_csr_data;
	}
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/execute.v:216
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
	    ? 0U : ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
		     ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem)
		     : (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_input_sel2exe)));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/dcache.v:136
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__datain_from_p 
	= ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
	    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__data_o
	    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__datain_from_p);
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/csr_file.v:361
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mcycle_r = VL_ULL(0);
    } else {
	if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_csr_instr2csr) {
	    if ((0xb00U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))) {
		__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mcycle_r 
		    = ((VL_ULL(0xffffffff00000000) 
			& __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mcycle_r) 
		       | (IData)((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__updated_csr_data)));
	    } else {
		if ((0xb80U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))) {
		    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mcycle_r 
			= ((VL_ULL(0xffffffff) & __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mcycle_r) 
			   | ((QData)((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__updated_csr_data)) 
			      << 0x20U));
		} else {
		    if ((0xc00U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))) {
			__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mcycle_r 
			    = ((VL_ULL(0xffffffff00000000) 
				& __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mcycle_r) 
			       | (IData)((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__updated_csr_data)));
		    } else {
			if ((0xc00U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))) {
			    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mcycle_r 
				= ((VL_ULL(0xffffffff) 
				    & __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mcycle_r) 
				   | ((QData)((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__updated_csr_data)) 
				      << 0x20U));
			}
		    }
		}
	    }
	} else {
	    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mcycle_r 
		= (VL_ULL(1) + vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mcycle_r);
	}
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/decode.v:450
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_regfile_we2exe 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) 
	   | ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
	       ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_regfile_we2exe)
	       : ((IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Decode__flush) 
		  | (((((((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_lui) 
			    | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_auipc)) 
			   | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_load)) 
			  | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_op_imm)) 
			 | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_op)) 
			| (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_csr)) 
		       | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_amo)) 
		      | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_jal)) 
		     | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_jalr)))));
    // ALWAYS at core-ver-src/mock_uart.sv:202
    __Vdly__M_DEVICE_dev2core_data = ((IData)(vlTOPp->rst_n)
				       ? ((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__cur_state))
					   ? ((0xc0000004U 
					       == vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_addr)
					       ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_tx_fifo)
					       : ((0xc0000000U 
						   == vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_addr)
						   ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_rx_fifo)
						   : 
						  ((0xc0000008U 
						    == vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_addr)
						    ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_status)
						    : 0xdeadbeefU)))
					   : vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_dev2core_data)
				       : 0U);
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/dcache.v:155
    __Vdly__aquila_core__DOT__D_Cache__DOT__m_data[0U] 
	= ((4U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
	    ? vlSymsp->TOP__aquila_testharness.__PVT__M_DCACHE_datain[0U]
	    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[0U]);
    __Vdly__aquila_core__DOT__D_Cache__DOT__m_data[1U] 
	= ((4U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
	    ? vlSymsp->TOP__aquila_testharness.__PVT__M_DCACHE_datain[1U]
	    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[1U]);
    __Vdly__aquila_core__DOT__D_Cache__DOT__m_data[2U] 
	= ((4U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
	    ? vlSymsp->TOP__aquila_testharness.__PVT__M_DCACHE_datain[2U]
	    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[2U]);
    __Vdly__aquila_core__DOT__D_Cache__DOT__m_data[3U] 
	= ((4U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
	    ? vlSymsp->TOP__aquila_testharness.__PVT__M_DCACHE_datain[3U]
	    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[3U]);
    __Vdly__aquila_core__DOT__D_Cache__DOT__m_data[4U] 
	= ((4U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
	    ? vlSymsp->TOP__aquila_testharness.__PVT__M_DCACHE_datain[4U]
	    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[4U]);
    __Vdly__aquila_core__DOT__D_Cache__DOT__m_data[5U] 
	= ((4U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
	    ? vlSymsp->TOP__aquila_testharness.__PVT__M_DCACHE_datain[5U]
	    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[5U]);
    __Vdly__aquila_core__DOT__D_Cache__DOT__m_data[6U] 
	= ((4U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
	    ? vlSymsp->TOP__aquila_testharness.__PVT__M_DCACHE_datain[6U]
	    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[6U]);
    __Vdly__aquila_core__DOT__D_Cache__DOT__m_data[7U] 
	= ((4U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
	    ? vlSymsp->TOP__aquila_testharness.__PVT__M_DCACHE_datain[7U]
	    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[7U]);
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/csr_file.v:325
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mcause_r = 0U;
    } else {
	if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__irq_taken) {
	    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mcause_r 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__irq_cause;
	} else {
	    if (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_csr_instr2csr) 
		 & (0x342U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr)))) {
		vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mcause_r 
		    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__updated_csr_data;
	    }
	}
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/muldiv.v:274
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_ready 
	= (3U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/csr_file.v:261
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_meie_r = 0U;
    } else {
	if (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_csr_instr2csr) 
	     & (0x304U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr)))) {
	    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_meie_r 
		= (1U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__updated_csr_data 
			 >> 0xbU));
	}
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/dcache.v:429
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_rw 
	= ((~ (IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)) 
	   & (2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S)));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/csr_file.v:344
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mip_mtip_r 
	= ((~ (IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)) 
	   & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__tmr_irq));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/decode.v:450
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__uncond_branch_hit_EXE 
	= ((~ (IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)) 
	   & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
	       ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__uncond_branch_hit_EXE)
	       : ((~ (IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Decode__flush)) 
		  & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__uncond_branch_hit_ID))));
    // ALWAYS at core-ver-src/mock_uart.sv:195
    vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_rx_fifo 
	= (0xffU & ((IData)(vlTOPp->rst_n) ? (((2U 
						== (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__cur_state)) 
					       & (0xc0000000U 
						  == vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_addr))
					       ? vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_core2dev_data
					       : (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_rx_fifo))
		     : 0U));
    // ALWAYS at core-ver-src/mock_uart.sv:186
    if (vlTOPp->rst_n) {
	if ((1U & (~ ((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__cur_state)) 
		      & (0xc0000004U == vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_addr))))) {
	    vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_rx_fifo 
		= vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_tx_fifo;
	}
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/csr_file.v:344
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mip_msip_r 
	= ((~ (IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)) 
	   & (0U != vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem
	      [4U]));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/decode.v:450
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_re2exe 
	= ((~ (IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)) 
	   & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
	       ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_re2exe)
	       : ((~ (IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Decode__flush)) 
		  & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_load) 
		     | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_amo)))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/dcache.v:397
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_strobe 
	= ((~ (IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)) 
	   & (((4U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S)) 
	       | (2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))) 
	      & (~ (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_dcache_o))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/csr_file.v:261
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_msie_r = 0U;
    } else {
	if (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_csr_instr2csr) 
	     & (0x304U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr)))) {
	    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_msie_r 
		= (1U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__updated_csr_data 
			 >> 3U));
	}
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/csr_file.v:261
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_mtie_r = 0U;
    } else {
	if (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_csr_instr2csr) 
	     & (0x304U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr)))) {
	    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_mtie_r 
		= (1U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__updated_csr_data 
			 >> 7U));
	}
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/execute.v:216
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_re 
	= ((~ (IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)) 
	   & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
	       ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_re)
	       : (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_re2exe)));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/dcache.v:387
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_d_ready 
	= ((~ (IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)) 
	   & (((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S)) 
	       & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_hit)) 
	      | (5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/decode.v:450
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_result_EXE 
	= ((~ (IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)) 
	   & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
	       ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_result_EXE)
	       : ((~ (IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Decode__flush)) 
		  & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_result_ID))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/muldiv.v:282
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_result 
	= ((3U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S))
	    ? ((((VL_NEGATE_I((IData)((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)))) 
		  & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[0U]) 
		 | (VL_NEGATE_I((IData)((((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)) 
					  | (2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))) 
					 | (3U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))))) 
		    & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U])) 
		| (VL_NEGATE_I((IData)(((4U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)) 
					| (5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))))) 
		   & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[0U])) 
	       | (VL_NEGATE_I((IData)(((6U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)) 
				       | (7U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))))) 
		  & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[2U] 
		      << 0x1fU) | (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U] 
				   >> 1U)))) : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_result);
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/execute.v:216
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_we 
	= ((~ (IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)) 
	   & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
	       ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_we)
	       : (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_we2exe)));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/dcache.v:136
    __Vdly__aquila_core__DOT__D_Cache__DOT__rw = ((0U 
						   == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
						   ? 
						  ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_we) 
						   & (0U 
						      == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel)))
						   : (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__rw));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/decode.v:450
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_EXE 
	= ((~ (IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)) 
	   & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
	       ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_EXE)
	       : ((~ (IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Decode__flush)) 
		  & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_ID))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/core_top.v:285
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_d_strobe 
	= ((~ (IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)) 
	   & ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dS)) 
	      & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_re) 
		 | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_we))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/icache.v:281
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__i_m_strobe 
	= ((~ (IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)) 
	   & ((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__S)) 
	      & (~ (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_icache_o))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/decode.v:450
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_inA_sel2exe 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
	    ? 2U : ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
		     ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_inA_sel2exe)
		     : ((IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Decode__flush)
			 ? 2U : ((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_auipc) 
				   | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_jal)) 
				  | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_branch))
				  ? 1U : (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_lui) 
					   | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_store))
					   ? 0U : 2U)))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/muldiv.v:210
    if (((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S)) 
	 & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_req))) {
	if ((4U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))) {
	    if ((0U != vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB)) {
		__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__cnt = 0x20U;
	    }
	} else {
	    if ((1U & (~ ((0U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA) 
			  | (0U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB))))) {
		__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__cnt = 0x1fU;
	    }
	}
    } else {
	if ((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S))) {
	    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__cnt 
		= (0x3fU & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__cnt) 
			    - (IData)(1U)));
	}
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/csr_file.v:236
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus_mie_r = 1U;
    } else {
	if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__irq_taken) {
	    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus_mie_r = 0U;
	} else {
	    if (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__sys_jump) 
		 & (0x341U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__sys_jump_csr_addr)))) {
		__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus_mie_r 
		    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus_mpie_r;
	    } else {
		if (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_csr_instr2csr) 
		     & (0x300U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr)))) {
		    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus_mie_r 
			= (1U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__updated_csr_data 
				 >> 3U));
		}
	    }
	}
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/muldiv.v:210
    if (((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S)) 
	 & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_req))) {
	if ((4U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))) {
	    if ((0U != vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB)) {
		vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__reg32 
		    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__op_b;
	    }
	} else {
	    if ((1U & (~ ((0U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA) 
			  | (0U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB))))) {
		vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__reg32 
		    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__op_a;
	    }
	}
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/execute.v:216
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rs2_data2mem 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
	    ? 0U : ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
		     ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rs2_data2mem
		     : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/sram.v:83
    if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_write
	[3U]) {
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM__v0 
	    = (0x3fffffU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
			    >> 0xaU));
	__Vdlyvset__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM__v0 = 1U;
	__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM__v0 
	    = (0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
			>> 5U));
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/sram.v:83
    if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_write
	[2U]) {
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM__v0 
	    = (0x3fffffU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
			    >> 0xaU));
	__Vdlyvset__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM__v0 = 1U;
	__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM__v0 
	    = (0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
			>> 5U));
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/sram.v:83
    if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_write
	[1U]) {
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM__v0 
	    = (0x3fffffU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
			    >> 0xaU));
	__Vdlyvset__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM__v0 = 1U;
	__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM__v0 
	    = (0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
			>> 5U));
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/sram.v:83
    if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_write
	[0U]) {
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM__v0 
	    = (0x3fffffU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
			    >> 0xaU));
	__Vdlyvset__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM__v0 = 1U;
	__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM__v0 
	    = (0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
			>> 5U));
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/decode.v:450
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_load_ext_sel2exe 
	= (1U & ((~ (IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)) 
		 & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
		     ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_load_ext_sel2exe)
		     : ((~ (IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Decode__flush)) 
			& (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
			   >> 0xeU)))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/decode.v:450
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_input_sel2exe = 0U;
	__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_input_sel2exe = 0U;
    } else {
	if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline) {
	    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_input_sel2exe 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_input_sel2exe;
	    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_input_sel2exe 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_input_sel2exe;
	} else {
	    if (vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Decode__flush) {
		__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_input_sel2exe = 0U;
		__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_input_sel2exe = 0U;
	    } else {
		__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_input_sel2exe 
		    = (3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
			     >> 0xcU));
		__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_input_sel2exe 
		    = (3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
			     >> 0xcU));
	    }
	}
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/decode.v:450
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__shift_sel2exe 
	= ((~ (IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)) 
	   & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
	       ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__shift_sel2exe)
	       : ((~ (IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Decode__flush)) 
		  & (0x20U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					>> 0x19U))))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/decode.v:450
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_regfile_sel2exe 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
	    ? 4U : ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
		     ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_regfile_sel2exe)
		     : ((IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Decode__flush)
			 ? 4U : (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_load) 
				  & ((0U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						   >> 0xcU))) 
				     | (4U == (7U & 
					       (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						>> 0xcU)))))
				  ? 0U : (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_load) 
					   & ((1U == 
					       (7U 
						& (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						   >> 0xcU))) 
					      | (5U 
						 == 
						 (7U 
						  & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						     >> 0xcU)))))
					   ? 1U : (
						   ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_load) 
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
						      : 4U))))))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/muldiv.v:210
    if (((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S)) 
	 & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_req))) {
	if ((4U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))) {
	    if ((0U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB)) {
		__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U] 
		    = ((1U & __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U]) 
		       | (0xfffffffeU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
					 << 1U)));
		__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[2U] 
		    = (1U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
			     >> 0x1fU));
		__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U] 
		    = (0xfffffffeU & __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U]);
		__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[0U] = 0xffffffffU;
	    } else {
		VL_EXTEND_WI(65,32, __Vtemp77, vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__op_a);
		__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[0U] 
		    = __Vtemp77[0U];
		__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U] 
		    = __Vtemp77[1U];
		__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[2U] 
		    = __Vtemp77[2U];
	    }
	} else {
	    VL_EXTEND_WI(65,32, __Vtemp79, vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__op_b);
	    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[0U] 
		= (((0U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA) 
		    | (0U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB))
		    ? 0U : __Vtemp79[0U]);
	    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U] 
		= (((0U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA) 
		    | (0U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB))
		    ? 0U : __Vtemp79[1U]);
	    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[2U] 
		= (((0U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA) 
		    | (0U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB))
		    ? 0U : __Vtemp79[2U]);
	}
    } else {
	if ((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S))) {
	    __Vtemp84[1U] = ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__div_sub)
			      ? ((1U & ((IData)((((QData)((IData)(
								  vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result_tmp[1U])) 
						  << 0x20U) 
						 | (QData)((IData)(
								   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result_tmp[0U])))) 
					>> 0x1fU)) 
				 | (0xfffffffeU & ((IData)(
							   ((((QData)((IData)(
									      vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result_tmp[1U])) 
							      << 0x20U) 
							     | (QData)((IData)(
									       vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result_tmp[0U]))) 
							    >> 0x20U)) 
						   << 1U)))
			      : ((1U & ((IData)((((QData)((IData)(
								  vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U])) 
						  << 0x20U) 
						 | (QData)((IData)(
								   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[0U])))) 
					>> 0x1fU)) 
				 | (0xfffffffeU & ((IData)(
							   ((((QData)((IData)(
									      vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U])) 
							      << 0x20U) 
							     | (QData)((IData)(
									       vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[0U]))) 
							    >> 0x20U)) 
						   << 1U))));
	    VL_EXTEND_WQ(65,64, __Vtemp85, (((QData)((IData)(
							     vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result_tmp[2U])) 
					     << 0x3fU) 
					    | (((QData)((IData)(
								vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result_tmp[1U])) 
						<< 0x1fU) 
					       | ((QData)((IData)(
								  vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result_tmp[0U])) 
						  >> 1U))));
	    VL_EXTEND_WQ(65,64, __Vtemp86, (((QData)((IData)(
							     vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[2U])) 
					     << 0x3fU) 
					    | (((QData)((IData)(
								vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U])) 
						<< 0x1fU) 
					       | ((QData)((IData)(
								  vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[0U])) 
						  >> 1U))));
	    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[0U] 
		= ((4U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))
		    ? ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__div_sub)
		        ? (1U | (0xfffffffeU & ((IData)(
							(((QData)((IData)(
									  vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result_tmp[1U])) 
							  << 0x20U) 
							 | (QData)((IData)(
									   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result_tmp[0U])))) 
						<< 1U)))
		        : (0xfffffffeU & ((IData)((
						   ((QData)((IData)(
								    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U])) 
						    << 0x20U) 
						   | (QData)((IData)(
								     vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[0U])))) 
					  << 1U))) : 
		   ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__mul_add)
		     ? __Vtemp85[0U] : __Vtemp86[0U]));
	    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U] 
		= ((4U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))
		    ? __Vtemp84[1U] : ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__mul_add)
				        ? __Vtemp85[1U]
				        : __Vtemp86[1U]));
	    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[2U] 
		= ((4U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))
		    ? ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__div_sub)
		        ? (1U & ((IData)(((((QData)((IData)(
							    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result_tmp[1U])) 
					    << 0x20U) 
					   | (QData)((IData)(
							     vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result_tmp[0U]))) 
					  >> 0x20U)) 
				 >> 0x1fU)) : (1U & 
					       ((IData)(
							((((QData)((IData)(
									   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U])) 
							   << 0x20U) 
							  | (QData)((IData)(
									    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[0U]))) 
							 >> 0x20U)) 
						>> 0x1fU)))
		    : ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__mul_add)
		        ? __Vtemp85[2U] : __Vtemp86[2U]));
	} else {
	    if ((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S))) {
		if ((4U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))) {
		    __Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__5__num 
			= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__remainder;
		    __Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__5__Vfuncout 
			= ((IData)(1U) + (~ __Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__5__num));
		    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U] 
			= ((1U & __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U]) 
			   | (0xfffffffeU & (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__is_a_neg)
					       ? __Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__5__Vfuncout
					       : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__remainder) 
					     << 1U)));
		    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[2U] 
			= (1U & (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__is_a_neg)
				   ? __Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__5__Vfuncout
				   : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__remainder) 
				 >> 0x1fU));
		    __Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__6__num 
			= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__quotient;
		    __Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__6__Vfuncout 
			= ((IData)(1U) + (~ __Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__6__num));
		    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[0U] 
			= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__signed_adjust)
			    ? __Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__6__Vfuncout
			    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__quotient);
		} else {
		    VL_NEGATE_W(3, __Vtemp91, vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result);
		    VL_NEGATE_W(3, __Vtemp93, vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result);
		    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[0U] 
			= (((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)) 
			    | (3U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)))
			    ? ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__signed_adjust)
			        ? __Vtemp91[0U] : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[0U])
			    : ((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))
			        ? ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__is_a_neg)
				    ? __Vtemp93[0U]
				    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[0U])
			        : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[0U]));
		    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U] 
			= (((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)) 
			    | (3U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)))
			    ? ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__signed_adjust)
			        ? __Vtemp91[1U] : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U])
			    : ((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))
			        ? ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__is_a_neg)
				    ? __Vtemp93[1U]
				    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U])
			        : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U]));
		    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[2U] 
			= (1U & (((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)) 
				  | (3U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)))
				  ? ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__signed_adjust)
				      ? __Vtemp91[2U]
				      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[2U])
				  : ((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))
				      ? ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__is_a_neg)
					  ? __Vtemp93[2U]
					  : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[2U])
				      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[2U])));
		}
	    }
	}
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/decode.v:450
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_imm2csr 
	= (0x1fU & ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
		     ? 0U : ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
			      ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_imm2csr)
			      : ((IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Decode__flush)
				  ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					  >> 0xfU)))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/decode.v:450
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr 
	= (0xfffU & ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
		      ? 0U : ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
			       ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr)
			       : ((IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Decode__flush)
				   ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					   >> 0x14U)))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/decode.v:450
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_jalr2exe 
	= ((~ (IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)) 
	   & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
	       ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_jalr2exe)
	       : ((~ (IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Decode__flush)) 
		  & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_jalr))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/decode.v:450
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_branch2exe 
	= ((~ (IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)) 
	   & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
	       ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_branch2exe)
	       : ((~ (IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Decode__flush)) 
		  & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_branch))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/decode.v:450
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_jal2exe 
	= ((~ (IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)) 
	   & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
	       ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_jal2exe)
	       : ((~ (IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Decode__flush)) 
		  & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_jal))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/decode.v:450
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__alu_muldiv_sel2exe 
	= ((~ (IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)) 
	   & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
	       ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__alu_muldiv_sel2exe)
	       : ((~ (IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Decode__flush)) 
		  & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_op) 
		     & (1U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					>> 0x19U)))))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/dcache.v:136
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__byte_enable_from_p 
	= ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
	    ? ((2U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
	        ? ((1U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		    ? ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
		        ? 8U : 0U) : ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
				       ? 4U : ((1U 
						== (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
					        ? 0xcU
					        : 0U)))
	        : ((1U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		    ? ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
		        ? 2U : 0U) : ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
				       ? 1U : ((1U 
						== (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
					        ? 3U
					        : (
						   (2U 
						    == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
						    ? 0xfU
						    : 0U)))))
	    : (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__byte_enable_from_p));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/decode.v:450
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_rd_addr2exe 
	= (0x1fU & ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
		     ? 0U : ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
			      ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rd_addr2exe)
			      : ((IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Decode__flush)
				  ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					  >> 7U)))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/sram.v:72
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[0U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))][0U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[1U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))][1U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[2U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))][2U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[3U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))][3U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[4U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))][4U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[5U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))][5U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[6U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))][6U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[7U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))][7U];
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/sram.v:72
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[0U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))][0U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[1U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))][1U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[2U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))][2U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[3U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))][3U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[4U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))][4U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[5U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))][5U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[6U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))][6U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[7U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))][7U];
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/sram.v:72
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[0U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))][0U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[1U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))][1U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[2U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))][2U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[3U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))][3U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[4U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))][4U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[5U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))][5U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[6U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))][6U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[7U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))][7U];
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/sram.v:72
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[0U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))][0U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[1U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))][1U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[2U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))][2U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[3U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))][3U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[4U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))][4U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[5U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))][5U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[6U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))][6U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[7U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))][7U];
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/decode.v:450
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_inB_sel2exe 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
	    ? 0U : ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
		     ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_inB_sel2exe)
		     : ((IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Decode__flush)
			 ? 0U : ((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_op) 
				   & (0U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						   >> 0xcU)))) 
				  & (0x20U == (0x7fU 
					       & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						  >> 0x19U))))
				  ? 2U : ((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_store) 
					    | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_op)) 
					   | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_amo))
					   ? 1U : 0U)))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/dcache.v:419
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_din[0U] 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
	    ? 0U : ((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
		     ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
		    [vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__victim_sel][0U]
		     : 0U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_din[1U] 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
	    ? 0U : ((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
		     ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
		    [vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__victim_sel][1U]
		     : 0U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_din[2U] 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
	    ? 0U : ((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
		     ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
		    [vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__victim_sel][2U]
		     : 0U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_din[3U] 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
	    ? 0U : ((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
		     ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
		    [vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__victim_sel][3U]
		     : 0U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_din[4U] 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
	    ? 0U : ((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
		     ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
		    [vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__victim_sel][4U]
		     : 0U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_din[5U] 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
	    ? 0U : ((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
		     ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
		    [vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__victim_sel][5U]
		     : 0U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_din[6U] 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
	    ? 0U : ((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
		     ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
		    [vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__victim_sel][6U]
		     : 0U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_din[7U] 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
	    ? 0U : ((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
		     ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
		    [vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__victim_sel][7U]
		     : 0U));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/decode.v:450
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_imm2exe 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
	    ? 0U : ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
		     ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_imm2exe
		     : ((IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Decode__flush)
			 ? 0U : (((((VL_NEGATE_I((IData)(
							 (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_op_imm) 
							   | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_jalr)) 
							  | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_load)))) 
				     & ((0xfffff800U 
					 & (VL_NEGATE_I((IData)(
								(1U 
								 & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
								    >> 0x1fU)))) 
					    << 0xbU)) 
					| (0x7ffU & 
					   (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					    >> 0x14U)))) 
				    | (VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_store))) 
				       & ((0xfffff800U 
					   & (VL_NEGATE_I((IData)(
								  (1U 
								   & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
								      >> 0x1fU)))) 
					      << 0xbU)) 
					  | ((0x7e0U 
					      & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
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
					 | ((0x800U 
					     & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						<< 4U)) 
					    | ((0x7e0U 
						& (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						   >> 0x14U)) 
					       | (0x1eU 
						  & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						     >> 7U))))))) 
				  | (0xfffff000U & 
				     (VL_NEGATE_I((IData)(
							  ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_lui) 
							   | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_auipc)))) 
				      & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec))) 
				 | (VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_jal))) 
				    & ((0xfff00000U 
					& (VL_NEGATE_I((IData)(
							       (1U 
								& (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
								   >> 0x1fU)))) 
					   << 0x14U)) 
				       | ((0xff000U 
					   & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec) 
					  | ((0x800U 
					      & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						 >> 9U)) 
					     | ((0x7e0U 
						 & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						    >> 0x14U)) 
						| (0x1eU 
						   & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						      >> 0x14U)))))))))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/sram.v:83
    if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_write
	[3U]) {
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0[0U] 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[0U];
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0[1U] 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[1U];
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0[2U] 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[2U];
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0[3U] 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[3U];
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0[4U] 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[4U];
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0[5U] 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[5U];
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0[6U] 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[6U];
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0[7U] 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[7U];
	__Vdlyvset__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0 = 1U;
	__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0 
	    = (0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
			>> 5U));
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/sram.v:83
    if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_write
	[2U]) {
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0[0U] 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[0U];
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0[1U] 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[1U];
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0[2U] 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[2U];
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0[3U] 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[3U];
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0[4U] 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[4U];
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0[5U] 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[5U];
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0[6U] 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[6U];
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0[7U] 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[7U];
	__Vdlyvset__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0 = 1U;
	__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0 
	    = (0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
			>> 5U));
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/sram.v:83
    if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_write
	[1U]) {
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0[0U] 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[0U];
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0[1U] 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[1U];
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0[2U] 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[2U];
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0[3U] 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[3U];
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0[4U] 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[4U];
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0[5U] 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[5U];
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0[6U] 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[6U];
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0[7U] 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[7U];
	__Vdlyvset__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0 = 1U;
	__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0 
	    = (0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
			>> 5U));
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/sram.v:83
    if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_write
	[0U]) {
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0[0U] 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[0U];
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0[1U] 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[1U];
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0[2U] 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[2U];
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0[3U] 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[3U];
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0[4U] 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[4U];
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0[5U] 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[5U];
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0[6U] 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[6U];
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0[7U] 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[7U];
	__Vdlyvset__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0 = 1U;
	__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0 
	    = (0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
			>> 5U));
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/decode.v:450
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe 
	= (7U & ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
		  ? 0U : ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
			   ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)
			   : ((IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Decode__flush)
			       ? 0U : (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_lui) 
					| (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_auipc))
				        ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						>> 0xcU))))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/dcache.v:261
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	__Vdlyvset__aquila_core__DOT__D_Cache__DOT__FIFO_cnt__v0 = 1U;
    } else {
	if ((5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))) {
	    __Vdlyvval__aquila_core__DOT__D_Cache__DOT__FIFO_cnt__v32 
		= (3U & ((IData)(1U) + vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt
			 [(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
				    >> 5U))]));
	    __Vdlyvset__aquila_core__DOT__D_Cache__DOT__FIFO_cnt__v32 = 1U;
	    __Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__FIFO_cnt__v32 
		= (0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
			    >> 5U));
	}
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/decode.v:450
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs2_addr2fwd 
	= (0x1fU & ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
		     ? 0U : ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
			      ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs2_addr2fwd)
			      : ((IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Decode__flush)
				  ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					  >> 0x14U)))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/decode.v:450
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs1_addr2fwd 
	= (0x1fU & ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
		     ? 0U : ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
			      ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs1_addr2fwd)
			      : ((IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Decode__flush)
				  ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					  >> 0xfU)))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/sram.v:72
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[0U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
		   >> 5U))][0U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[1U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
		   >> 5U))][1U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[2U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
		   >> 5U))][2U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[3U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
		   >> 5U))][3U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[4U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
		   >> 5U))][4U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[5U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
		   >> 5U))][5U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[6U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
		   >> 5U))][6U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[7U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
		   >> 5U))][7U];
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/sram.v:72
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[0U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
		   >> 5U))][0U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[1U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
		   >> 5U))][1U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[2U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
		   >> 5U))][2U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[3U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
		   >> 5U))][3U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[4U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
		   >> 5U))][4U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[5U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
		   >> 5U))][5U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[6U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
		   >> 5U))][6U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[7U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
		   >> 5U))][7U];
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/sram.v:72
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[0U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
		   >> 5U))][0U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[1U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
		   >> 5U))][1U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[2U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
		   >> 5U))][2U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[3U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
		   >> 5U))][3U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[4U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
		   >> 5U))][4U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[5U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
		   >> 5U))][5U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[6U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
		   >> 5U))][6U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[7U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
		   >> 5U))][7U];
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/sram.v:72
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[0U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
		   >> 5U))][0U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[1U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
		   >> 5U))][1U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[2U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
		   >> 5U))][2U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[3U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
		   >> 5U))][3U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[4U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
		   >> 5U))][4U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[5U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
		   >> 5U))][5U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[6U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
		   >> 5U))][6U];
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[7U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
		   >> 5U))][7U];
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/fetch.v:115
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__fet_pc2dec 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
	    ? 0U : ((IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Fetch__stall)
		     ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_pc2dec
		     : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/sram.v:72
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__TAG_BRAM__data_o 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))];
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/sram.v:72
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__TAG_BRAM__data_o 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))];
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/sram.v:72
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__TAG_BRAM__data_o 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))];
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/sram.v:72
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__TAG_BRAM__data_o 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))];
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/execute.v:216
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
	    ? 0U : ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
		     ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem
		     : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data 
			+ vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_imm2exe)));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/dcache.v:232
    if ((((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S)) 
	  & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_hit)) 
	 & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__rw))) {
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__cache_write__v0 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	    [0U];
	__Vdlyvset__aquila_core__DOT__D_Cache__DOT__cache_write__v0 = 1U;
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__cache_write__v1 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	    [1U];
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__cache_write__v2 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	    [2U];
	__Vdlyvval__aquila_core__DOT__D_Cache__DOT__cache_write__v3 
	    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	    [3U];
    } else {
	if ((5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))) {
	    __Vdlyvset__aquila_core__DOT__D_Cache__DOT__cache_write__v4 = 1U;
	    __Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__cache_write__v4 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__victim_sel;
	} else {
	    __Vdlyvset__aquila_core__DOT__D_Cache__DOT__cache_write__v5 = 1U;
	}
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/execute.v:216
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_regfile_we2mem_wb 
	= ((~ (IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)) 
	   & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
	       ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_regfile_we2mem_wb)
	       : (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_regfile_we2exe)));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/execute.v:216
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_rd_addr2mem_wb 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
	    ? 0U : ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
		     ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rd_addr2mem_wb)
		     : (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rd_addr2exe)));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/dcache.v:407
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_addr 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
	    ? 0U : ((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
		     ? ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_tag_o
			 [vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__victim_sel] 
			 << 0xaU) | (0x3e0U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem))
		     : ((4U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
			 ? (0xffffffe0U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			 : 0U)));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/writeback.v:89
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__regfile_we_r 
	= ((~ (IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)) 
	   & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
	       ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__regfile_we_r)
	       : (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_regfile_we2mem_wb)));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/writeback.v:89
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
	    ? 0U : ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
		     ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r)
		     : (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rd_addr2mem_wb)));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/clint.v:95
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	__Vdlyvset__aquila_core__DOT__CLINT__DOT__clint_mem__v0 = 1U;
    } else {
	if (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_we) 
	     & (2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel)))) {
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__CLINT__DOT____Vlvbound1 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__data_o;
	    if (VL_LIKELY((4U >= (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
					>> 2U))))) {
		__Vdlyvval__aquila_core__DOT__CLINT__DOT__clint_mem__v5 
		    = vlSymsp->TOP__aquila_testharness.aquila_core__DOT__CLINT__DOT____Vlvbound1;
		__Vdlyvset__aquila_core__DOT__CLINT__DOT__clint_mem__v5 = 1U;
		__Vdlyvdim0__aquila_core__DOT__CLINT__DOT__clint_mem__v5 
		    = (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
			     >> 2U));
	    }
	} else {
	    __Vdlyvval__aquila_core__DOT__CLINT__DOT__clint_mem__v6 
		= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem
		   [0U] + (0x186a0U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__counter));
	    __Vdlyvset__aquila_core__DOT__CLINT__DOT__clint_mem__v6 = 1U;
	    __Vdlyvval__aquila_core__DOT__CLINT__DOT__clint_mem__v7 
		= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem
		   [1U] + (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__carry));
	}
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/decode.v:450
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs2_data2fwd 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
	    ? 0U : ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
		     ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs2_data2fwd
		     : ((IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Decode__flush)
			 ? 0U : (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__we) 
				  & ((0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					       >> 0x14U)) 
				     == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r)))
				  ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_data
				  : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf
				 [(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					    >> 0x14U))]))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/decode.v:450
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs1_data2fwd 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
	    ? 0U : ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
		     ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs1_data2fwd
		     : ((IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Decode__flush)
			 ? 0U : (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__we) 
				  & ((0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					       >> 0xfU)) 
				     == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r)))
				  ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_data
				  : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf
				 [(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					    >> 0xfU))]))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/execute.v:257
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_p_data 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
	    ? 0U : ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
		     ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_p_data
		     : ((3U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_regfile_sel2exe))
			 ? ((IData)(4U) + vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe)
			 : ((4U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_regfile_sel2exe))
			     ? ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__alu_muldiv_sel2exe)
				 ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_result
				 : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_result)
			     : ((5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_regfile_sel2exe))
				 ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__csr_data
				 : 0U)))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/sram.v:83
    if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write
	[3U]) {
	VL_EXTEND_WI(256,32, __Vtemp126, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
	__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0[0U] 
	    = __Vtemp126[0U];
	__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0[1U] 
	    = __Vtemp126[1U];
	__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0[2U] 
	    = __Vtemp126[2U];
	__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0[3U] 
	    = __Vtemp126[3U];
	__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0[4U] 
	    = __Vtemp126[4U];
	__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0[5U] 
	    = __Vtemp126[5U];
	__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0[6U] 
	    = __Vtemp126[6U];
	__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0[7U] 
	    = __Vtemp126[7U];
	__Vdlyvset__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0 = 1U;
	__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0 
	    = (0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
			>> 5U));
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/sram.v:83
    if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write
	[2U]) {
	VL_EXTEND_WI(256,32, __Vtemp127, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
	__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0[0U] 
	    = __Vtemp127[0U];
	__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0[1U] 
	    = __Vtemp127[1U];
	__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0[2U] 
	    = __Vtemp127[2U];
	__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0[3U] 
	    = __Vtemp127[3U];
	__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0[4U] 
	    = __Vtemp127[4U];
	__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0[5U] 
	    = __Vtemp127[5U];
	__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0[6U] 
	    = __Vtemp127[6U];
	__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0[7U] 
	    = __Vtemp127[7U];
	__Vdlyvset__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0 = 1U;
	__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0 
	    = (0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
			>> 5U));
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/sram.v:83
    if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write
	[1U]) {
	VL_EXTEND_WI(256,32, __Vtemp128, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
	__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0[0U] 
	    = __Vtemp128[0U];
	__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0[1U] 
	    = __Vtemp128[1U];
	__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0[2U] 
	    = __Vtemp128[2U];
	__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0[3U] 
	    = __Vtemp128[3U];
	__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0[4U] 
	    = __Vtemp128[4U];
	__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0[5U] 
	    = __Vtemp128[5U];
	__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0[6U] 
	    = __Vtemp128[6U];
	__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0[7U] 
	    = __Vtemp128[7U];
	__Vdlyvset__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0 = 1U;
	__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0 
	    = (0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
			>> 5U));
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/sram.v:83
    if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write
	[0U]) {
	VL_EXTEND_WI(256,32, __Vtemp129, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
	__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0[0U] 
	    = __Vtemp129[0U];
	__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0[1U] 
	    = __Vtemp129[1U];
	__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0[2U] 
	    = __Vtemp129[2U];
	__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0[3U] 
	    = __Vtemp129[3U];
	__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0[4U] 
	    = __Vtemp129[4U];
	__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0[5U] 
	    = __Vtemp129[5U];
	__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0[6U] 
	    = __Vtemp129[6U];
	__Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0[7U] 
	    = __Vtemp129[7U];
	__Vdlyvset__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0 = 1U;
	__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0 
	    = (0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
			>> 5U));
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/icache.v:227
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	__Vdlyvset__aquila_core__DOT__I_Cache__DOT__FIFO_cnt__v0 = 1U;
    } else {
	if ((3U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__S))) {
	    __Vdlyvval__aquila_core__DOT__I_Cache__DOT__FIFO_cnt__v32 
		= (3U & ((IData)(1U) + vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt
			 [(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
				    >> 5U))]));
	    __Vdlyvset__aquila_core__DOT__I_Cache__DOT__FIFO_cnt__v32 = 1U;
	    __Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__FIFO_cnt__v32 
		= (0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
			    >> 5U));
	}
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/regfile.v:86
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf__v0 = 1U;
    } else {
	if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__we) {
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf__v32 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_data;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf__v32 = 1U;
	    __Vdlyvdim0__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf__v32 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r;
	}
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/dcache.v:452
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	__Vdlyvset__aquila_core__DOT__D_Cache__DOT__DIRTY___v0 = 1U;
    } else {
	if ((((4U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S)) 
	      & (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_dcache_o)) 
	     & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__rw))) {
	    __Vdlyvset__aquila_core__DOT__D_Cache__DOT__DIRTY___v128 = 1U;
	    __Vdlyvdim1__aquila_core__DOT__D_Cache__DOT__DIRTY___v128 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__victim_sel;
	    __Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__DIRTY___v128 
		= (0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
			    >> 5U));
	} else {
	    if ((((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S)) 
		  & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_hit)) 
		 & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__rw))) {
		__Vdlyvval__aquila_core__DOT__D_Cache__DOT__DIRTY___v129 
		    = (1U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
			     [0U] ? 1U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_
			     [(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
					>> 5U))][0U]));
		__Vdlyvset__aquila_core__DOT__D_Cache__DOT__DIRTY___v129 = 1U;
		__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__DIRTY___v129 
		    = (0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
				>> 5U));
		__Vdlyvval__aquila_core__DOT__D_Cache__DOT__DIRTY___v130 
		    = (1U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
			     [1U] ? 1U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_
			     [(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
					>> 5U))][1U]));
		__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__DIRTY___v130 
		    = (0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
				>> 5U));
		__Vdlyvval__aquila_core__DOT__D_Cache__DOT__DIRTY___v131 
		    = (1U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
			     [2U] ? 1U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_
			     [(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
					>> 5U))][2U]));
		__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__DIRTY___v131 
		    = (0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
				>> 5U));
		__Vdlyvval__aquila_core__DOT__D_Cache__DOT__DIRTY___v132 
		    = (1U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
			     [3U] ? 1U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_
			     [(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
					>> 5U))][3U]));
		__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__DIRTY___v132 
		    = (0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
				>> 5U));
	    }
	}
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/decode.v:450
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
	    ? 0U : ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
		     ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe
		     : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_pc2dec));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/dcache.v:441
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	__Vdlyvset__aquila_core__DOT__D_Cache__DOT__VALID___v0 = 1U;
    } else {
	if (((4U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S)) 
	     & (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_dcache_o))) {
	    __Vdlyvset__aquila_core__DOT__D_Cache__DOT__VALID___v128 = 1U;
	    __Vdlyvdim1__aquila_core__DOT__D_Cache__DOT__VALID___v128 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__victim_sel;
	    __Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__VALID___v128 
		= (0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
			    >> 5U));
	}
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/writeback.v:89
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_load_ext_sel_r 
	= ((~ (IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)) 
	   & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
	       ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_load_ext_sel_r)
	       : (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_load_ext_sel2mem_wb)));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/writeback.v:89
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__regfile_input_sel_r 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
	    ? 4U : ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
		     ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__regfile_input_sel_r)
		     : (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_regfile_input_sel2mem_wb)));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/fetch.v:103
    VL_EXTEND_WI(256,32, __Vtemp133, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
    VL_EXTEND_WI(256,32, __Vtemp134, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
    VL_EXTEND_WI(256,32, __Vtemp135, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
    VL_EXTEND_WI(256,32, __Vtemp136, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
    VL_EXTEND_WI(256,32, __Vtemp137, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
    VL_EXTEND_WI(256,32, __Vtemp138, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
    VL_EXTEND_WI(256,32, __Vtemp139, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
    __Vtemp132 = ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
		   ? 0x13U : ((IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Fetch__stall)
			       ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec
			       : ((IData)(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Fetch__flush)
				   ? 0x13U : (((1U 
						== (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__S)) 
					       & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_hit))
					       ? ((0x10U 
						   & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
						   ? 
						  ((8U 
						    & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
						    ? 
						   ((4U 
						     & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
						     ? 
						    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[0U]
						     : 
						    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[1U])
						    : 
						   ((4U 
						     & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
						     ? 
						    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[2U]
						     : 
						    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[3U]))
						   : 
						  ((8U 
						    & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
						    ? 
						   ((4U 
						     & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
						     ? 
						    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[4U]
						     : 
						    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[5U])
						    : 
						   ((4U 
						     & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
						     ? 
						    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[6U]
						     : 
						    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[7U])))
					       : ((IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_icache_o)
						   ? 
						  ((0x10U 
						    & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
						    ? 
						   ((8U 
						     & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
						     ? 
						    ((4U 
						      & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
						      ? vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o
						      : 
						     __Vtemp133[1U])
						     : 
						    ((4U 
						      & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
						      ? 
						     __Vtemp134[2U]
						      : 
						     __Vtemp135[3U]))
						    : 
						   ((8U 
						     & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
						     ? 
						    ((4U 
						      & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
						      ? 
						     __Vtemp136[4U]
						      : 
						     __Vtemp137[5U])
						     : 
						    ((4U 
						      & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
						      ? 
						     __Vtemp138[6U]
						      : 
						     __Vtemp139[7U])))
						   : 0U)))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
	= __Vtemp132;
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/writeback.v:89
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__p_data_r 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
	    ? 0U : ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
		     ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__p_data_r
		     : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_p_data));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/writeback.v:89
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_addr_alignment_r 
	= (3U & ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
		  ? 0U : ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
			   ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_addr_alignment_r)
			   : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/program_counter.v:114
    vlSymsp->TOP__aquila_testharness.__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
	    ? vlTOPp->main_memory_addr : ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__irq_taken)
					   ? ((0U == 
					       (3U 
						& vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mtvec_r))
					       ? (0xfffffffcU 
						  & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mtvec_r)
					       : ((0xfffffffcU 
						   & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mtvec_r) 
						  + 
						  (0xfffffffcU 
						   & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__irq_cause 
						      << 2U))))
					   : (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline) 
					       | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Pipeline_Control__DOT__is_load_use))
					       ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r
					       : ((
						   ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_branch_taken) 
						    & (~ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__uncond_branch_hit_EXE))) 
						   & (~ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_EXE)))
						   ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_result
						   : 
						  ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_misprediction)
						    ? 
						   ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_result_EXE)
						     ? 
						    ((IData)(4U) 
						     + vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe)
						     : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_result)
						    : 
						   ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__sys_jump)
						     ? 
						    ((0x341U 
						      == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__sys_jump_csr_addr))
						      ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mepc_r
						      : 
						     ((0x305U 
						       == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__sys_jump_csr_addr))
						       ? 
						      (0xfffffffcU 
						       & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mtvec_r)
						       : 0U))
						     : 
						    ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__uncond_branch_hit_IF)
						      ? 
						     (VL_NEGATE_I((IData)(
									  (0U 
									   != vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF))) 
						      & ((0x13U 
							  >= (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__read_addr))
							  ? 
							 vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table
							 [vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__read_addr]
							  : 0U))
						      : 
						     (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_IF) 
						       & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_result_IF))
						       ? 
						      (VL_NEGATE_I((IData)(
									   (0U 
									    != vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF))) 
						       & ((0x17U 
							   >= (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__read_addr))
							   ? 
							  vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table
							  [vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__read_addr]
							   : 0U))
						       : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_increment))))))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/writeback.v:121
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_data_r 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
	    ? 0U : ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline)
		     ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_data_r
		     : ((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel))
			 ? vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_dev2core_data
			 : ((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel))
			     ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__clint_mem_data
			     : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_d_dout))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/icache.v:200
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	__Vdlyvset__aquila_core__DOT__I_Cache__DOT__VALID___v0 = 1U;
    } else {
	if (((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__S)) 
	     & (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_icache_o))) {
	    __Vdlyvset__aquila_core__DOT__I_Cache__DOT__VALID___v128 = 1U;
	    __Vdlyvdim1__aquila_core__DOT__I_Cache__DOT__VALID___v128 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__victim_sel;
	    __Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__VALID___v128 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__index_prev;
	}
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/icache.v:211
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	__Vdlyvset__aquila_core__DOT__I_Cache__DOT__TAG___v0 = 1U;
    } else {
	if (((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__S)) 
	     & (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_icache_o))) {
	    __Vdlyvval__aquila_core__DOT__I_Cache__DOT__TAG___v128 
		= (0x3fffffU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
				>> 0xaU));
	    __Vdlyvset__aquila_core__DOT__I_Cache__DOT__TAG___v128 = 1U;
	    __Vdlyvdim1__aquila_core__DOT__I_Cache__DOT__TAG___v128 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__victim_sel;
	    __Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__TAG___v128 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__index_prev;
	}
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/bpu.v:228
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v0 = 1U;
    } else {
	if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline) {
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table
		[0U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v24 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v24 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table
		[1U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v25 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v25 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table
		[2U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v26 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v26 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table
		[3U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v27 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v27 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table
		[4U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v28 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v28 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table
		[5U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v29 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v29 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table
		[6U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v30 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v30 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table
		[7U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v31 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v31 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table
		[8U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v32 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v32 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table
		[9U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v33 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v33 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table
		[0xaU];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v34 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v34 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table
		[0xbU];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v35 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v35 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table
		[0xcU];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v36 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v36 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table
		[0xdU];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v37 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v37 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table
		[0xeU];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v38 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v38 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table
		[0xfU];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v39 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v39 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table
		[0x10U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v40 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v40 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table
		[0x11U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v41 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v41 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table
		[0x12U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v42 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v42 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table
		[0x13U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v43 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v43 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table
		[0x14U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v44 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v44 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table
		[0x15U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v45 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v45 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table
		[0x16U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v46 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v46 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table
		[0x17U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v47 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v47 = 1U;
	} else {
	    if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__we) {
		vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound6 
		    = (3U & VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_branch_taken))));
		if ((0x17U >= (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__write_addr))) {
		    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v48 
			= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound6;
		    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v48 = 1U;
		    __Vdlyvdim0__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v48 
			= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__write_addr;
		}
	    } else {
		if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_misprediction) {
		    if ((2U & ((0x17U >= (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__update_addr))
			        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table
			       [vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__update_addr]
			        : 0U))) {
			if ((1U & ((0x17U >= (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__update_addr))
				    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table
				   [vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__update_addr]
				    : 0U))) {
			    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound10 
				= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_branch_taken)
				    ? 3U : 2U);
			    if ((0x17U >= (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__update_addr))) {
				__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v49 
				    = vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound10;
				__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v49 = 1U;
				__Vdlyvdim0__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v49 
				    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__update_addr;
			    }
			} else {
			    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound9 
				= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_branch_taken)
				    ? 3U : 0U);
			    if ((0x17U >= (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__update_addr))) {
				__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v50 
				    = vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound9;
				__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v50 = 1U;
				__Vdlyvdim0__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v50 
				    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__update_addr;
			    }
			}
		    } else {
			if ((1U & ((0x17U >= (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__update_addr))
				    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table
				   [vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__update_addr]
				    : 0U))) {
			    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound8 
				= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_branch_taken)
				    ? 3U : 0U);
			    if ((0x17U >= (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__update_addr))) {
				__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v51 
				    = vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound8;
				__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v51 = 1U;
				__Vdlyvdim0__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v51 
				    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__update_addr;
			    }
			} else {
			    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound7 
				= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_branch_taken)
				    ? 1U : 0U);
			    if ((0x17U >= (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__update_addr))) {
				__Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v52 
				    = vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound7;
				__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v52 = 1U;
				__Vdlyvdim0__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v52 
				    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__update_addr;
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/uncond_BHT.v:170
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v0 = 1U;
    } else {
	if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline) {
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
		[0U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v20 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v20 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
		[1U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v21 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v21 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
		[2U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v22 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v22 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
		[3U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v23 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v23 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
		[4U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v24 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v24 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
		[5U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v25 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v25 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
		[6U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v26 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v26 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
		[7U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v27 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v27 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
		[8U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v28 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v28 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
		[9U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v29 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v29 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
		[0xaU];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v30 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v30 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
		[0xbU];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v31 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v31 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
		[0xcU];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v32 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v32 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
		[0xdU];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v33 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v33 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
		[0xeU];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v34 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v34 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
		[0xfU];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v35 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v35 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
		[0x10U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v36 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v36 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
		[0x11U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v37 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v37 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
		[0x12U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v38 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v38 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
		[0x13U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v39 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v39 = 1U;
	} else {
	    if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__we) {
		vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound3 
		    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe;
		if ((0x13U >= (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__write_addr))) {
		    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v40 
			= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound3;
		    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v40 = 1U;
		    __Vdlyvdim0__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v40 
			= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__write_addr;
		}
	    }
	}
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/bpu.v:210
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v0 = 1U;
    } else {
	if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline) {
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
		[0U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v24 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v24 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
		[1U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v25 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v25 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
		[2U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v26 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v26 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
		[3U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v27 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v27 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
		[4U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v28 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v28 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
		[5U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v29 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v29 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
		[6U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v30 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v30 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
		[7U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v31 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v31 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
		[8U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v32 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v32 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
		[9U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v33 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v33 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
		[0xaU];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v34 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v34 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
		[0xbU];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v35 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v35 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
		[0xcU];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v36 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v36 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
		[0xdU];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v37 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v37 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
		[0xeU];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v38 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v38 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
		[0xfU];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v39 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v39 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
		[0x10U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v40 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v40 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
		[0x11U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v41 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v41 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
		[0x12U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v42 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v42 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
		[0x13U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v43 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v43 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
		[0x14U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v44 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v44 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
		[0x15U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v45 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v45 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
		[0x16U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v46 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v46 = 1U;
	    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
		[0x17U];
	    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v47 
		= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2;
	    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v47 = 1U;
	} else {
	    if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__we) {
		vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound3 
		    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe;
		if ((0x17U >= (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__write_addr))) {
		    __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v48 
			= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound3;
		    __Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v48 = 1U;
		    __Vdlyvdim0__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v48 
			= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__write_addr;
		}
	    }
	}
    }
    vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_tx_fifo_full 
	= __Vdly__mock_uart_0__DOT__uart_tx_fifo_full;
    vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__transmit_counter 
	= __Vdly__mock_uart_0__DOT__transmit_counter;
    vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_tx_fifo_empty 
	= __Vdly__mock_uart_0__DOT__uart_tx_fifo_empty;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_valid2dec 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__fet_valid2dec;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mcycle_r 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mcycle_r;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__uncond_branch_hit_ID 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__uncond_branch_hit_ID;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_re2exe 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_re2exe;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_result_ID 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_result_ID;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_we2exe 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_we2exe;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_ID 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_ID;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_re 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_re;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__cnt 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__cnt;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_input_sel2exe 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_input_sel2exe;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[0U] 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[0U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U] 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[2U] 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[2U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem;
    // ALWAYSPOST at ../ip_repo/aquila/hdl/core_rtl/sram.v:87
    if (__Vdlyvset__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0][0U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0[0U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0][1U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0[1U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0][2U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0[2U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0][3U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0[3U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0][4U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0[4U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0][5U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0[5U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0][6U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0[6U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0][7U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0[7U];
    }
    // ALWAYSPOST at ../ip_repo/aquila/hdl/core_rtl/sram.v:87
    if (__Vdlyvset__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0][0U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0[0U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0][1U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0[1U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0][2U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0[2U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0][3U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0[3U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0][4U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0[4U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0][5U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0[5U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0][6U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0[6U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0][7U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0[7U];
    }
    // ALWAYSPOST at ../ip_repo/aquila/hdl/core_rtl/sram.v:87
    if (__Vdlyvset__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0][0U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0[0U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0][1U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0[1U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0][2U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0[2U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0][3U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0[3U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0][4U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0[4U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0][5U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0[5U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0][6U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0[6U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0][7U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0[7U];
    }
    // ALWAYSPOST at ../ip_repo/aquila/hdl/core_rtl/sram.v:87
    if (__Vdlyvset__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0][0U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0[0U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0][1U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0[1U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0][2U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0[2U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0][3U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0[3U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0][4U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0[4U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0][5U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0[5U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0][6U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0[6U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0][7U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0[7U];
    }
    // ALWAYSPOST at ../ip_repo/aquila/hdl/core_rtl/sram.v:87
    if (__Vdlyvset__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM__v0) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM__v0] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM__v0;
    }
    // ALWAYSPOST at ../ip_repo/aquila/hdl/core_rtl/sram.v:87
    if (__Vdlyvset__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM__v0) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM__v0] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM__v0;
    }
    // ALWAYSPOST at ../ip_repo/aquila/hdl/core_rtl/sram.v:87
    if (__Vdlyvset__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM__v0) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM__v0] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM__v0;
    }
    // ALWAYSPOST at ../ip_repo/aquila/hdl/core_rtl/sram.v:87
    if (__Vdlyvset__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM__v0) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM__v0] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM__v0;
    }
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_imm2exe 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_imm2exe;
    // ALWAYSPOST at ../ip_repo/aquila/hdl/core_rtl/dcache.v:236
    if (__Vdlyvset__aquila_core__DOT__D_Cache__DOT__cache_write__v0) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_write[0U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__cache_write__v0;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_write[1U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__cache_write__v1;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_write[2U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__cache_write__v2;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_write[3U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__cache_write__v3;
    }
    if (__Vdlyvset__aquila_core__DOT__D_Cache__DOT__cache_write__v4) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_write[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__cache_write__v4] = 1U;
    }
    if (__Vdlyvset__aquila_core__DOT__D_Cache__DOT__cache_write__v5) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_write[0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_write[1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_write[2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_write[3U] = 0U;
    }
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_regfile_we2exe 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_regfile_we2exe;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rd_addr2exe 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_rd_addr2exe;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_regfile_we2mem_wb 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_regfile_we2mem_wb;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rd_addr2mem_wb 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_rd_addr2mem_wb;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__counter 
	= __Vdly__aquila_core__DOT__CLINT__DOT__counter;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_we 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_we;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_result 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_result;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_regfile_sel2exe 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_regfile_sel2exe;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__alu_muldiv_sel2exe 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__alu_muldiv_sel2exe;
    // ALWAYSPOST at ../ip_repo/aquila/hdl/core_rtl/sram.v:87
    if (__Vdlyvset__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0][0U] 
	    = __Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0[0U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0][1U] 
	    = __Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0[1U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0][2U] 
	    = __Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0[2U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0][3U] 
	    = __Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0[3U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0][4U] 
	    = __Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0[4U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0][5U] 
	    = __Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0[5U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0][6U] 
	    = __Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0[6U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0][7U] 
	    = __Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM__v0[7U];
    }
    // ALWAYSPOST at ../ip_repo/aquila/hdl/core_rtl/sram.v:87
    if (__Vdlyvset__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0][0U] 
	    = __Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0[0U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0][1U] 
	    = __Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0[1U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0][2U] 
	    = __Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0[2U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0][3U] 
	    = __Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0[3U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0][4U] 
	    = __Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0[4U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0][5U] 
	    = __Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0[5U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0][6U] 
	    = __Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0[6U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0][7U] 
	    = __Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM__v0[7U];
    }
    // ALWAYSPOST at ../ip_repo/aquila/hdl/core_rtl/sram.v:87
    if (__Vdlyvset__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0][0U] 
	    = __Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0[0U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0][1U] 
	    = __Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0[1U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0][2U] 
	    = __Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0[2U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0][3U] 
	    = __Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0[3U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0][4U] 
	    = __Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0[4U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0][5U] 
	    = __Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0[5U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0][6U] 
	    = __Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0[6U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0][7U] 
	    = __Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM__v0[7U];
    }
    // ALWAYSPOST at ../ip_repo/aquila/hdl/core_rtl/sram.v:87
    if (__Vdlyvset__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0][0U] 
	    = __Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0[0U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0][1U] 
	    = __Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0[1U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0][2U] 
	    = __Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0[2U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0][3U] 
	    = __Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0[3U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0][4U] 
	    = __Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0[4U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0][5U] 
	    = __Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0[5U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0][6U] 
	    = __Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0[6U];
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0][7U] 
	    = __Vdlyvval__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM__v0[7U];
    }
    // ALWAYSPOST at ../ip_repo/aquila/hdl/core_rtl/regfile.v:90
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf__v0) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[1U] = 0x4000U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[2U] = 0x4000U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[4U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[5U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[6U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[7U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[8U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[9U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[0xaU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[0xbU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[0xcU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[0xdU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[0xeU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[0xfU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[0x10U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[0x11U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[0x12U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[0x13U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[0x14U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[0x15U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[0x16U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[0x17U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[0x18U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[0x19U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[0x1aU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[0x1bU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[0x1cU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[0x1dU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[0x1eU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[0x1fU] = 0U;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf__v32) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[__Vdlyvdim0__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf__v32] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf__v32;
    }
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r;
    // ALWAYSPOST at ../ip_repo/aquila/hdl/core_rtl/dcache.v:457
    if (__Vdlyvset__aquila_core__DOT__D_Cache__DOT__DIRTY___v0) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[1U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[2U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[3U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[4U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[5U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[6U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[7U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[8U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[9U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0xaU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0xbU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0xcU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0xdU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0xeU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0xfU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x10U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x11U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x12U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x13U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x14U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x15U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x16U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x17U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x18U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x19U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x1aU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x1bU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x1cU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x1dU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x1eU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x1fU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[1U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[2U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[3U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[4U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[5U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[6U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[7U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[8U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[9U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0xaU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0xbU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0xcU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0xdU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0xeU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0xfU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x10U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x11U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x12U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x13U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x14U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x15U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x16U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x17U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x18U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x19U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x1aU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x1bU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x1cU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x1dU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x1eU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x1fU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[1U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[2U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[3U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[4U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[5U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[6U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[7U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[8U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[9U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0xaU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0xbU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0xcU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0xdU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0xeU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0xfU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x10U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x11U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x12U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x13U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x14U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x15U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x16U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x17U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x18U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x19U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x1aU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x1bU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x1cU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x1dU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x1eU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x1fU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[1U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[2U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[3U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[4U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[5U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[6U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[7U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[8U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[9U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0xaU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0xbU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0xcU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0xdU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0xeU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0xfU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x10U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x11U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x12U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x13U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x14U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x15U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x16U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x17U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x18U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x19U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x1aU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x1bU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x1cU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x1dU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x1eU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[0x1fU][3U] = 0U;
    }
    if (__Vdlyvset__aquila_core__DOT__D_Cache__DOT__DIRTY___v128) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__DIRTY___v128][__Vdlyvdim1__aquila_core__DOT__D_Cache__DOT__DIRTY___v128] = 1U;
    }
    if (__Vdlyvset__aquila_core__DOT__D_Cache__DOT__DIRTY___v129) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__DIRTY___v129][0U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__DIRTY___v129;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__DIRTY___v130][1U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__DIRTY___v130;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__DIRTY___v131][2U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__DIRTY___v131;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__DIRTY___v132][3U] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__DIRTY___v132;
    }
    // ALWAYSPOST at ../ip_repo/aquila/hdl/core_rtl/dcache.v:446
    if (__Vdlyvset__aquila_core__DOT__D_Cache__DOT__VALID___v0) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[1U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[2U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[3U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[4U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[5U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[6U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[7U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[8U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[9U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0xaU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0xbU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0xcU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0xdU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0xeU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0xfU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x10U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x11U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x12U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x13U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x14U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x15U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x16U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x17U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x18U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x19U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x1aU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x1bU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x1cU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x1dU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x1eU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x1fU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[1U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[2U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[3U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[4U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[5U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[6U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[7U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[8U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[9U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0xaU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0xbU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0xcU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0xdU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0xeU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0xfU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x10U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x11U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x12U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x13U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x14U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x15U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x16U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x17U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x18U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x19U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x1aU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x1bU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x1cU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x1dU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x1eU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x1fU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[1U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[2U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[3U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[4U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[5U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[6U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[7U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[8U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[9U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0xaU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0xbU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0xcU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0xdU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0xeU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0xfU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x10U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x11U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x12U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x13U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x14U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x15U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x16U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x17U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x18U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x19U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x1aU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x1bU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x1cU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x1dU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x1eU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x1fU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[1U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[2U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[3U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[4U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[5U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[6U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[7U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[8U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[9U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0xaU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0xbU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0xcU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0xdU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0xeU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0xfU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x10U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x11U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x12U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x13U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x14U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x15U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x16U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x17U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x18U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x19U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x1aU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x1bU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x1cU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x1dU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x1eU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[0x1fU][3U] = 0U;
    }
    if (__Vdlyvset__aquila_core__DOT__D_Cache__DOT__VALID___v128) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__VALID___v128][__Vdlyvdim1__aquila_core__DOT__D_Cache__DOT__VALID___v128] = 1U;
    }
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_load_ext_sel2mem_wb 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_load_ext_sel2mem_wb;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_regfile_input_sel2mem_wb 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_regfile_input_sel2mem_wb;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_p_data 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_p_data;
    // ALWAYSPOST at ../ip_repo/aquila/hdl/core_rtl/distri_ram.v:81
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table__v0) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[__Vdlyvdim0__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table__v0] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table__v0;
    }
    // ALWAYSPOST at ../ip_repo/aquila/hdl/core_rtl/distri_ram.v:81
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table__v0) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[__Vdlyvdim0__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table__v0] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table__v0;
    }
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__uncond_branch_hit_EXE 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__uncond_branch_hit_EXE;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_result_EXE 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_result_EXE;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_EXE 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_EXE;
    vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_dev2core_data 
	= __Vdly__M_DEVICE_dev2core_data;
    // ALWAYSPOST at ../ip_repo/aquila/hdl/core_rtl/icache.v:205
    if (__Vdlyvset__aquila_core__DOT__I_Cache__DOT__VALID___v0) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[1U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[2U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[3U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[4U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[5U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[6U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[7U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[8U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[9U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0xaU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0xbU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0xcU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0xdU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0xeU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0xfU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x10U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x11U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x12U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x13U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x14U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x15U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x16U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x17U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x18U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x19U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x1aU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x1bU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x1cU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x1dU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x1eU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x1fU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[1U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[2U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[3U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[4U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[5U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[6U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[7U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[8U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[9U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0xaU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0xbU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0xcU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0xdU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0xeU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0xfU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x10U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x11U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x12U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x13U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x14U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x15U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x16U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x17U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x18U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x19U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x1aU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x1bU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x1cU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x1dU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x1eU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x1fU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[1U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[2U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[3U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[4U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[5U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[6U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[7U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[8U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[9U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0xaU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0xbU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0xcU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0xdU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0xeU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0xfU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x10U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x11U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x12U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x13U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x14U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x15U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x16U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x17U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x18U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x19U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x1aU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x1bU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x1cU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x1dU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x1eU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x1fU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[1U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[2U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[3U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[4U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[5U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[6U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[7U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[8U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[9U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0xaU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0xbU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0xcU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0xdU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0xeU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0xfU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x10U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x11U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x12U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x13U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x14U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x15U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x16U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x17U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x18U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x19U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x1aU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x1bU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x1cU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x1dU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x1eU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[0x1fU][3U] = 0U;
    }
    if (__Vdlyvset__aquila_core__DOT__I_Cache__DOT__VALID___v128) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_[__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__VALID___v128][__Vdlyvdim1__aquila_core__DOT__I_Cache__DOT__VALID___v128] = 1U;
    }
    // ALWAYSPOST at ../ip_repo/aquila/hdl/core_rtl/icache.v:216
    if (__Vdlyvset__aquila_core__DOT__I_Cache__DOT__TAG___v0) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[1U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[2U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[3U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[4U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[5U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[6U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[7U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[8U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[9U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0xaU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0xbU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0xcU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0xdU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0xeU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0xfU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x10U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x11U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x12U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x13U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x14U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x15U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x16U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x17U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x18U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x19U][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x1aU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x1bU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x1cU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x1dU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x1eU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x1fU][0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[1U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[2U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[3U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[4U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[5U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[6U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[7U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[8U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[9U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0xaU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0xbU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0xcU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0xdU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0xeU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0xfU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x10U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x11U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x12U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x13U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x14U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x15U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x16U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x17U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x18U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x19U][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x1aU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x1bU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x1cU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x1dU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x1eU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x1fU][1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[1U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[2U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[3U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[4U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[5U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[6U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[7U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[8U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[9U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0xaU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0xbU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0xcU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0xdU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0xeU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0xfU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x10U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x11U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x12U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x13U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x14U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x15U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x16U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x17U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x18U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x19U][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x1aU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x1bU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x1cU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x1dU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x1eU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x1fU][2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[1U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[2U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[3U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[4U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[5U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[6U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[7U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[8U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[9U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0xaU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0xbU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0xcU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0xdU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0xeU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0xfU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x10U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x11U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x12U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x13U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x14U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x15U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x16U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x17U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x18U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x19U][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x1aU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x1bU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x1cU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x1dU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x1eU][3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[0x1fU][3U] = 0U;
    }
    if (__Vdlyvset__aquila_core__DOT__I_Cache__DOT__TAG___v128) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_[__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__TAG___v128][__Vdlyvdim1__aquila_core__DOT__I_Cache__DOT__TAG___v128] 
	    = __Vdlyvval__aquila_core__DOT__I_Cache__DOT__TAG___v128;
    }
    // ALWAYSPOST at ../ip_repo/aquila/hdl/core_rtl/bpu.v:233
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v0) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[4U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[5U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[6U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[7U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[8U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[9U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[0xaU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[0xbU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[0xcU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[0xdU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[0xeU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[0xfU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[0x10U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[0x11U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[0x12U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[0x13U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[0x14U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[0x15U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[0x16U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[0x17U] = 0U;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v24) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[0U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v24;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v25) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[1U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v25;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v26) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[2U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v26;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v27) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[3U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v27;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v28) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[4U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v28;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v29) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[5U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v29;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v30) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[6U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v30;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v31) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[7U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v31;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v32) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[8U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v32;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v33) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[9U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v33;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v34) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[0xaU] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v34;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v35) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[0xbU] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v35;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v36) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[0xcU] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v36;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v37) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[0xdU] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v37;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v38) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[0xeU] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v38;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v39) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[0xfU] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v39;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v40) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[0x10U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v40;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v41) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[0x11U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v41;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v42) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[0x12U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v42;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v43) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[0x13U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v43;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v44) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[0x14U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v44;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v45) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[0x15U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v45;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v46) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[0x16U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v46;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v47) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[0x17U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v47;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v48) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[__Vdlyvdim0__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v48] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v48;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v49) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[__Vdlyvdim0__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v49] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v49;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v50) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[__Vdlyvdim0__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v50] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v50;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v51) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[__Vdlyvdim0__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v51] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v51;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v52) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[__Vdlyvdim0__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v52] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table__v52;
    }
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__write_addr 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__write_addr;
    // ALWAYSPOST at ../ip_repo/aquila/hdl/core_rtl/uncond_BHT.v:175
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v0) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[4U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[5U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[6U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[7U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[8U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[9U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[0xaU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[0xbU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[0xcU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[0xdU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[0xeU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[0xfU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[0x10U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[0x11U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[0x12U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[0x13U] = 0U;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v20) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[0U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v20;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v21) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[1U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v21;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v22) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[2U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v22;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v23) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[3U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v23;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v24) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[4U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v24;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v25) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[5U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v25;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v26) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[6U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v26;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v27) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[7U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v27;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v28) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[8U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v28;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v29) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[9U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v29;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v30) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[0xaU] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v30;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v31) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[0xbU] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v31;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v32) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[0xcU] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v32;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v33) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[0xdU] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v33;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v34) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[0xeU] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v34;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v35) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[0xfU] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v35;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v36) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[0x10U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v36;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v37) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[0x11U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v37;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v38) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[0x12U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v38;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v39) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[0x13U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v39;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v40) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[__Vdlyvdim0__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v40] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table__v40;
    }
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__write_addr 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__write_addr;
    // ALWAYSPOST at ../ip_repo/aquila/hdl/core_rtl/bpu.v:215
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v0) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[4U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[5U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[6U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[7U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[8U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[9U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[0xaU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[0xbU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[0xcU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[0xdU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[0xeU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[0xfU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[0x10U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[0x11U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[0x12U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[0x13U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[0x14U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[0x15U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[0x16U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[0x17U] = 0U;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v24) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[0U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v24;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v25) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[1U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v25;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v26) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[2U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v26;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v27) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[3U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v27;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v28) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[4U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v28;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v29) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[5U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v29;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v30) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[6U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v30;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v31) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[7U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v31;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v32) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[8U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v32;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v33) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[9U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v33;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v34) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[0xaU] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v34;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v35) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[0xbU] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v35;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v36) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[0xcU] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v36;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v37) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[0xdU] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v37;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v38) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[0xeU] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v38;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v39) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[0xfU] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v39;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v40) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[0x10U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v40;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v41) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[0x11U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v41;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v42) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[0x12U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v42;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v43) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[0x13U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v43;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v44) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[0x14U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v44;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v45) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[0x15U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v45;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v46) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[0x16U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v46;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v47) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[0x17U] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v47;
    }
    if (__Vdlyvset__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v48) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[__Vdlyvdim0__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v48] 
	    = __Vdlyvval__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table__v48;
    }
    // ALWAYS at core-ver-src/mock_uart.sv:99
    // ALWAYS at core-ver-src/mock_uart.sv:122
    vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_status 
	= (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_rx_fifo_full) 
	    << 3U) | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_tx_fifo_empty) 
		       << 2U) | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_rx_fifo_full) 
				  << 1U) | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_rx_fifo_valid))));
    // ALWAYS at core-ver-src/mock_uart.sv:186
    if (vlTOPp->rst_n) {
	if (((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__cur_state)) 
	     & (0xc0000004U == vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_addr))) {
	    vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_tx_fifo 
		= (0xffU & vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_core2dev_data);
	}
    } else {
	vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_tx_fifo = 0U;
    }
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mip 
	= (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mip_meip_r) 
	    << 0xbU) | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mip_mtip_r) 
			 << 7U) | ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mip_msip_r) 
				   << 3U)));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie 
	= (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_meie_r) 
	    << 0xbU) | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_mtie_r) 
			 << 7U) | ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_msie_r) 
				   << 3U)));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/core_top.v:253
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dS 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
	    ? 0U : (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dS_nxt));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/csr_file.v:236
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus_mpie_r = 0U;
    } else {
	if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__irq_taken) {
	    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus_mpie_r 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus_mie_r;
	} else {
	    if (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__sys_jump) 
		 & (0x341U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__sys_jump_csr_addr)))) {
		vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus_mpie_r = 1U;
	    } else {
		if (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_csr_instr2csr) 
		     & (0x300U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr)))) {
		    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus_mpie_r 
			= (1U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__updated_csr_data 
				 >> 7U));
		}
	    }
	}
    }
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__quotient 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[0U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__remainder 
	= ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[2U] 
	    << 0x1fU) | (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U] 
			 >> 1U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__mul_add 
	= (1U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[0U]);
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__div_sub 
	= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U] 
	   >= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__reg32);
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/muldiv.v:172
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
	    ? 0U : (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[3U][0U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[0U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[3U][1U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[1U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[3U][2U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[2U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[3U][3U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[3U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[3U][4U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[4U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[3U][5U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[5U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[3U][6U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[6U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[3U][7U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[7U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[2U][0U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[0U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[2U][1U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[1U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[2U][2U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[2U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[2U][3U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[3U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[2U][4U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[4U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[2U][5U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[5U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[2U][6U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[6U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[2U][7U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[7U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[1U][0U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[0U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[1U][1U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[1U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[1U][2U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[2U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[1U][3U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[3U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[1U][4U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[4U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[1U][5U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[5U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[1U][6U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[6U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[1U][7U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[7U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[0U][0U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[0U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[0U][1U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[1U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[0U][2U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[2U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[0U][3U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[3U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[0U][4U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[4U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[0U][5U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[5U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[0U][6U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[6U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[0U][7U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[7U];
    vlSymsp->TOP__aquila_testharness.__PVT__M_DCACHE_dataout[0U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_din[0U];
    vlSymsp->TOP__aquila_testharness.__PVT__M_DCACHE_dataout[1U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_din[1U];
    vlSymsp->TOP__aquila_testharness.__PVT__M_DCACHE_dataout[2U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_din[2U];
    vlSymsp->TOP__aquila_testharness.__PVT__M_DCACHE_dataout[3U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_din[3U];
    vlSymsp->TOP__aquila_testharness.__PVT__M_DCACHE_dataout[4U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_din[4U];
    vlSymsp->TOP__aquila_testharness.__PVT__M_DCACHE_dataout[5U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_din[5U];
    vlSymsp->TOP__aquila_testharness.__PVT__M_DCACHE_dataout[6U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_din[6U];
    vlSymsp->TOP__aquila_testharness.__PVT__M_DCACHE_dataout[7U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_din[7U];
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/dcache.v:345
    if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__rw) {
	if (((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S)) 
	     & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_hit))) {
	    __Vtemp179[6U] = ((0x10U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			       ? ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
				   ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
				       ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[6U]
				       : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[6U])
				   : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
				       ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[6U]
				       : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[6U]))
			       : ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
				   ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
				       ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[6U]
				       : (IData)((((QData)((IData)(
								   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[7U])) 
						   << 0x20U) 
						  | (QData)((IData)(
								    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[6U])))))
				   : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
				       ? (IData)((((QData)((IData)(
								   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[7U])) 
						   << 0x20U) 
						  | (QData)((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__update_data))))
				       : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[6U])));
	    __Vtemp179[7U] = ((0x10U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			       ? ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
				   ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
				       ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[7U]
				       : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[7U])
				   : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
				       ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[7U]
				       : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[7U]))
			       : ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
				   ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
				       ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[7U]
				       : (IData)(((
						   ((QData)((IData)(
								    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[7U])) 
						    << 0x20U) 
						   | (QData)((IData)(
								     vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[6U]))) 
						  >> 0x20U)))
				   : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
				       ? (IData)(((
						   ((QData)((IData)(
								    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[7U])) 
						    << 0x20U) 
						   | (QData)((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__update_data))) 
						  >> 0x20U))
				       : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__update_data)));
	    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[0U] 
		= ((0x10U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		    ? ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		        ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__update_data
			    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[0U])
		        : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? (IData)((((QData)((IData)(
							vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[1U])) 
					<< 0x20U) | (QData)((IData)(
								    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[0U]))))
			    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[0U]))
		    : ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		        ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[0U]
			    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[0U])
		        : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[0U]
			    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[0U])));
	    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[1U] 
		= ((0x10U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		    ? ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		        ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[1U]
			    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__update_data)
		        : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? (IData)(((((QData)((IData)(
							 vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[1U])) 
					 << 0x20U) 
					| (QData)((IData)(
							  vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[0U]))) 
				       >> 0x20U)) : 
			   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[1U]))
		    : ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		        ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[1U]
			    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[1U])
		        : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[1U]
			    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[1U])));
	    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[2U] 
		= ((0x10U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		    ? ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		        ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[2U]
			    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[2U])
		        : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__update_data
			    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[2U]))
		    : ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		        ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[2U]
			    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[2U])
		        : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[2U]
			    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[2U])));
	    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[3U] 
		= ((0x10U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		    ? ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		        ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[3U]
			    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[3U])
		        : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[3U]
			    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__update_data))
		    : ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		        ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[3U]
			    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[3U])
		        : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[3U]
			    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[3U])));
	    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[4U] 
		= ((0x10U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		    ? ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		        ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[4U]
			    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[4U])
		        : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[4U]
			    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[4U]))
		    : ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		        ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__update_data
			    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[4U])
		        : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[4U]
			    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[4U])));
	    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[5U] 
		= ((0x10U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		    ? ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		        ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[5U]
			    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[5U])
		        : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[5U]
			    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[5U]))
		    : ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		        ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[5U]
			    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__update_data)
		        : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[5U]
			    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[5U])));
	    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[6U] 
		= __Vtemp179[6U];
	    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[7U] 
		= __Vtemp179[7U];
	} else {
	    if ((5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))) {
		__Vtemp216[6U] = ((0x10U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
				   ? ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
				       ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
					   ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[6U]
					   : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[6U])
				       : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
					   ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[6U]
					   : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[6U]))
				   : ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
				       ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
					   ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[6U]
					   : (IData)(
						     (((QData)((IData)(
								       vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[7U])) 
						       << 0x20U) 
						      | (QData)((IData)(
									vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[6U])))))
				       : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
					   ? (IData)(
						     (((QData)((IData)(
								       vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[7U])) 
						       << 0x20U) 
						      | (QData)((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__update_data))))
					   : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[6U])));
		__Vtemp216[7U] = ((0x10U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
				   ? ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
				       ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
					   ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[7U]
					   : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[7U])
				       : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
					   ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[7U]
					   : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[7U]))
				   : ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
				       ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
					   ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[7U]
					   : (IData)(
						     ((((QData)((IData)(
									vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[7U])) 
							<< 0x20U) 
						       | (QData)((IData)(
									 vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[6U]))) 
						      >> 0x20U)))
				       : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
					   ? (IData)(
						     ((((QData)((IData)(
									vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[7U])) 
							<< 0x20U) 
						       | (QData)((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__update_data))) 
						      >> 0x20U))
					   : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__update_data)));
		vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[0U] 
		    = ((0x10U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		        ? ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__update_data
			        : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[0U])
			    : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			        ? (IData)((((QData)((IData)(
							    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[1U])) 
					    << 0x20U) 
					   | (QData)((IData)(
							     vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[0U]))))
			        : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[0U]))
		        : ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[0U]
			        : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[0U])
			    : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[0U]
			        : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[0U])));
		vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[1U] 
		    = ((0x10U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		        ? ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[1U]
			        : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__update_data)
			    : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			        ? (IData)(((((QData)((IData)(
							     vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[1U])) 
					     << 0x20U) 
					    | (QData)((IData)(
							      vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[0U]))) 
					   >> 0x20U))
			        : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[1U]))
		        : ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[1U]
			        : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[1U])
			    : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[1U]
			        : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[1U])));
		vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[2U] 
		    = ((0x10U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		        ? ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[2U]
			        : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[2U])
			    : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__update_data
			        : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[2U]))
		        : ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[2U]
			        : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[2U])
			    : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[2U]
			        : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[2U])));
		vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[3U] 
		    = ((0x10U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		        ? ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[3U]
			        : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[3U])
			    : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[3U]
			        : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__update_data))
		        : ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[3U]
			        : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[3U])
			    : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[3U]
			        : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[3U])));
		vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[4U] 
		    = ((0x10U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		        ? ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[4U]
			        : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[4U])
			    : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[4U]
			        : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[4U]))
		        : ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__update_data
			        : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[4U])
			    : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[4U]
			        : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[4U])));
		vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[5U] 
		    = ((0x10U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		        ? ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[5U]
			        : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[5U])
			    : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[5U]
			        : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[5U]))
		        : ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			    ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[5U]
			        : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__update_data)
			    : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[5U]
			        : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[5U])));
		vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[6U] 
		    = __Vtemp216[6U];
		vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[7U] 
		    = __Vtemp216[7U];
	    }
	}
    } else {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[0U] 
	    = ((5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
	        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[0U]
	        : 0U);
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[1U] 
	    = ((5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
	        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[1U]
	        : 0U);
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[2U] 
	    = ((5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
	        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[2U]
	        : 0U);
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[3U] 
	    = ((5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
	        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[3U]
	        : 0U);
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[4U] 
	    = ((5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
	        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[4U]
	        : 0U);
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[5U] 
	    = ((5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
	        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[5U]
	        : 0U);
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[6U] 
	    = ((5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
	        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[6U]
	        : 0U);
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i[7U] 
	    = ((5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
	        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[7U]
	        : 0U);
    }
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation 
	= ((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_branch2exe) 
	     | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_jal2exe)) 
	    | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_jalr2exe))
	    ? 0U : (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/muldiv.v:204
    vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__4__num 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__reg32;
    vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__4__Vfuncout 
	= ((IData)(1U) + (~ vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__4__num));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__adder_opa 
	= ((4U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))
	    ? (QData)((IData)(vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__4__Vfuncout))
	    : (QData)((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__reg32)));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[3U][0U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[0U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[3U][1U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[1U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[3U][2U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[2U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[3U][3U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[3U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[3U][4U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[4U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[3U][5U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[5U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[3U][6U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[6U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[3U][7U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[7U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[2U][0U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[0U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[2U][1U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[1U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[2U][2U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[2U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[2U][3U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[3U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[2U][4U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[4U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[2U][5U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[5U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[2U][6U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[6U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[2U][7U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[7U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[1U][0U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[0U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[1U][1U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[1U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[1U][2U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[2U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[1U][3U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[3U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[1U][4U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[4U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[1U][5U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[5U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[1U][6U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[6U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[1U][7U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[7U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[0U][0U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[0U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[0U][1U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[1U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[0U][2U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[2U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[0U][3U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[3U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[0U][4U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[4U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[0U][5U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[5U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[0U][6U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[6U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[0U][7U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[7U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_tag_o[3U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__TAG_BRAM__data_o;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_tag_o[2U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__TAG_BRAM__data_o;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_tag_o[1U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__TAG_BRAM__data_o;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_tag_o[0U] 
	= vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__TAG_BRAM__data_o;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_req 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__alu_muldiv_sel2exe) 
	   & (~ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_ready)));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__we 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__regfile_we_r) 
	   & (0U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r)));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/dcache.v:254
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__victim_sel 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		   >> 5U))];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_op 
	= ((1U == (3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
			 >> 5U))) & (4U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						  >> 2U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_op_imm 
	= ((0U == (3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
			 >> 5U))) & (4U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						  >> 2U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_jal 
	= ((3U == (3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
			 >> 5U))) & (3U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						  >> 2U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_jalr 
	= ((3U == (3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
			 >> 5U))) & (1U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						  >> 2U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_load 
	= ((0U == (3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
			 >> 5U))) & (0U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						  >> 2U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_store 
	= ((1U == (3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
			 >> 5U))) & (0U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						  >> 2U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_branch 
	= ((3U == (3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
			 >> 5U))) & (0U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						  >> 2U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_lui 
	= ((1U == (3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
			 >> 5U))) & (5U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						  >> 2U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_auipc 
	= ((0U == (3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
			 >> 5U))) & (5U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						  >> 2U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_amo 
	= ((1U == (3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
			 >> 5U))) & (3U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						  >> 2U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_miscmem 
	= ((0U == (3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
			 >> 5U))) & (3U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						  >> 2U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Pipeline_Control__DOT__is_load_use 
	= ((((0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
		       >> 0xfU)) == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rd_addr2exe)) 
	    | ((0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
			 >> 0x14U)) == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rd_addr2exe))) 
	   & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_re2exe));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_system 
	= ((3U == (3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
			 >> 5U))) & (4U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						  >> 2U))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/csr_file.v:278
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mtvec_r = 0U;
    } else {
	if (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_csr_instr2csr) 
	     & (0x305U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr)))) {
	    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mtvec_r 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__updated_csr_data;
	}
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/csr_file.v:304
    if (vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mepc_r = 0U;
    } else {
	if (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__irq_taken) {
	    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mepc_r 
		= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_pc2dec;
	} else {
	    if (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__sys_jump) 
		 & (0x305U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__sys_jump_csr_addr)))) {
		vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mepc_r 
		    = vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe;
	    } else {
		if (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_csr_instr2csr) 
		     & (0x341U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr)))) {
		    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mepc_r 
			= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__updated_csr_data;
		}
	    }
	}
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/dcache.v:375
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_d_dout 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
	    ? 0U : ((((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S)) 
		      & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_hit)) 
		     & (~ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__rw)))
		     ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromCache
		     : (((5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S)) 
			 & (~ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__rw)))
			 ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromMem
			 : 0U)));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/clint.v:116
    if ((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel))) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__clint_mem_data 
	    = ((4U >= (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
			     >> 2U))) ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem
	       [(7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
		       >> 2U))] : 0U);
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/writeback.v:132
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__aligned_data_o 
	= ((2U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_addr_alignment_r))
	    ? ((1U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_addr_alignment_r))
	        ? ((0xffffff00U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_data_r 
				   << 8U)) | (0xffU 
					      & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_data_r 
						 >> 0x18U)))
	        : ((0xffff0000U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_data_r 
				   << 0x10U)) | (0xffffU 
						 & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_data_r 
						    >> 0x10U))))
	    : ((1U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_addr_alignment_r))
	        ? ((0xff000000U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_data_r 
				   << 0x18U)) | (0xffffffU 
						 & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_data_r 
						    >> 8U)))
	        : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_data_r));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/icache.v:222
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__victim_sel 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt
	[(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
		   >> 5U))];
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/icache.v:239
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__index_prev 
	= (0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
		    >> 5U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus_mie_r 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus_mie_r;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[0U] 
	= __Vdly__aquila_core__DOT__D_Cache__DOT__m_data[0U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[1U] 
	= __Vdly__aquila_core__DOT__D_Cache__DOT__m_data[1U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[2U] 
	= __Vdly__aquila_core__DOT__D_Cache__DOT__m_data[2U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[3U] 
	= __Vdly__aquila_core__DOT__D_Cache__DOT__m_data[3U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[4U] 
	= __Vdly__aquila_core__DOT__D_Cache__DOT__m_data[4U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[5U] 
	= __Vdly__aquila_core__DOT__D_Cache__DOT__m_data[5U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[6U] 
	= __Vdly__aquila_core__DOT__D_Cache__DOT__m_data[6U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[7U] 
	= __Vdly__aquila_core__DOT__D_Cache__DOT__m_data[7U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result_tmp[0U] 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[0U];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result_tmp[1U] 
	= (IData)((VL_ULL(0x1ffffffff) & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__adder_opa 
					  + (QData)((IData)(
							    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U])))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result_tmp[2U] 
	= (IData)(((VL_ULL(0x1ffffffff) & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__adder_opa 
					   + (QData)((IData)(
							     vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U])))) 
		   >> 0x20U));
    // ALWAYSPOST at ../ip_repo/aquila/hdl/core_rtl/dcache.v:265
    if (__Vdlyvset__aquila_core__DOT__D_Cache__DOT__FIFO_cnt__v0) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[4U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[5U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[6U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[7U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[8U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[9U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[0xaU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[0xbU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[0xcU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[0xdU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[0xeU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[0xfU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[0x10U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[0x11U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[0x12U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[0x13U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[0x14U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[0x15U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[0x16U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[0x17U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[0x18U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[0x19U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[0x1aU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[0x1bU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[0x1cU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[0x1dU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[0x1eU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[0x1fU] = 0U;
    }
    if (__Vdlyvset__aquila_core__DOT__D_Cache__DOT__FIFO_cnt__v32) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[__Vdlyvdim0__aquila_core__DOT__D_Cache__DOT__FIFO_cnt__v32] 
	    = __Vdlyvval__aquila_core__DOT__D_Cache__DOT__FIFO_cnt__v32;
    }
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_csr 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_system) 
	   & (0U != (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
			   >> 0xcU))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_sys_op 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_system) 
	   & (0U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
			   >> 0xcU))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_pc2dec 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__fet_pc2dec;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_csr_instr2csr 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__is_csr_instr2csr;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__rw 
	= __Vdly__aquila_core__DOT__D_Cache__DOT__rw;
    // ALWAYSPOST at ../ip_repo/aquila/hdl/core_rtl/clint.v:99
    if (__Vdlyvset__aquila_core__DOT__CLINT__DOT__clint_mem__v0) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem[0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem[1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem[2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem[3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem[4U] = 0U;
    }
    if (__Vdlyvset__aquila_core__DOT__CLINT__DOT__clint_mem__v5) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem[__Vdlyvdim0__aquila_core__DOT__CLINT__DOT__clint_mem__v5] 
	    = __Vdlyvval__aquila_core__DOT__CLINT__DOT__clint_mem__v5;
    }
    if (__Vdlyvset__aquila_core__DOT__CLINT__DOT__clint_mem__v6) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem[0U] 
	    = __Vdlyvval__aquila_core__DOT__CLINT__DOT__clint_mem__v6;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem[1U] 
	    = __Vdlyvval__aquila_core__DOT__CLINT__DOT__clint_mem__v7;
    }
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
	= __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem;
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/writeback.v:143
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_data 
	= ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__regfile_input_sel_r))
	    ? ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_load_ext_sel_r)
	        ? (0xffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__aligned_data_o)
	        : ((0xffffff00U & (VL_NEGATE_I((IData)(
						       (1U 
							& (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__aligned_data_o 
							   >> 7U)))) 
				   << 8U)) | (0xffU 
					      & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__aligned_data_o)))
	    : ((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__regfile_input_sel_r))
	        ? ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_load_ext_sel_r)
		    ? (0xffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__aligned_data_o)
		    : ((0xffff0000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__aligned_data_o 
							       >> 0xfU)))) 
				       << 0x10U)) | 
		       (0xffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__aligned_data_o)))
	        : ((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__regfile_input_sel_r))
		    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__aligned_data_o
		    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__p_data_r)));
    // ALWAYSPOST at ../ip_repo/aquila/hdl/core_rtl/icache.v:231
    if (__Vdlyvset__aquila_core__DOT__I_Cache__DOT__FIFO_cnt__v0) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[3U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[4U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[5U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[6U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[7U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[8U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[9U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[0xaU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[0xbU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[0xcU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[0xdU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[0xeU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[0xfU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[0x10U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[0x11U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[0x12U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[0x13U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[0x14U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[0x15U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[0x16U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[0x17U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[0x18U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[0x19U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[0x1aU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[0x1bU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[0x1cU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[0x1dU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[0x1eU] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[0x1fU] = 0U;
    }
    if (__Vdlyvset__aquila_core__DOT__I_Cache__DOT__FIFO_cnt__v32) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[__Vdlyvdim0__aquila_core__DOT__I_Cache__DOT__FIFO_cnt__v32] 
	    = __Vdlyvval__aquila_core__DOT__I_Cache__DOT__FIFO_cnt__v32;
    }
    // ALWAYS at core-ver-src/mock_uart.sv:166
    vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__cur_state 
	= ((IData)(vlTOPp->rst_n) ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__next_state)
	    : 0U);
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus 
	= (0x1800U | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus_mpie_r) 
		       << 7U) | ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus_mie_r) 
				 << 3U)));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_ecall 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_sys_op) 
	   & (0U == (0xfffU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
			       >> 0x14U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_mret 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_sys_op) 
	   & (0x302U == (0xfffU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
				   >> 0x14U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xffffeU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	      [0U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xffffdU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [1U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 1U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xffffbU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [2U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 2U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xffff7U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [3U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 3U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xfffefU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [4U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 4U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xfffdfU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [5U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 5U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xfffbfU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [6U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 6U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xfff7fU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [7U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 7U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xffeffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [8U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 8U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xffdffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [9U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 9U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xffbffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0xaU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0xaU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xff7ffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0xbU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0xbU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xfefffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0xcU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0xcU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xfdfffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0xdU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0xdU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xfbfffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0xeU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0xeU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xf7fffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0xfU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0xfU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xeffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0x10U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0x10U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xdffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0x11U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0x11U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0xbffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0x12U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0x12U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE 
	= ((0x7ffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0x13U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0x13U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xfffffeU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	      [0U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xfffffdU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [1U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 1U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xfffffbU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [2U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 2U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xfffff7U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [3U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 3U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xffffefU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [4U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 4U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xffffdfU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [5U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 5U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xffffbfU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [6U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 6U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xffff7fU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [7U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 7U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xfffeffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [8U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 8U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xfffdffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [9U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 9U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xfffbffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0xaU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0xaU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xfff7ffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0xbU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0xbU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xffefffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0xcU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0xcU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xffdfffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0xdU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0xdU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xffbfffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0xeU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0xeU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xff7fffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0xfU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0xfU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xfeffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0x10U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0x10U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xfdffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0x11U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0x11U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xfbffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0x12U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0x12U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xf7ffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0x13U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0x13U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xefffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0x14U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0x14U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xdfffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0x15U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0x15U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0xbfffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0x16U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0x16U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE 
	= ((0x7fffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0x17U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe) 
	      << 0x17U));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/dcache.v:175
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
	    ? 0U : (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S_nxt));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__carry 
	= (0xffffffffU == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem
	   [1U]);
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__tmr_irq 
	= ((((QData)((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem
			     [1U])) << 0x20U) | (QData)((IData)(
								vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem
								[0U]))) 
	   >= (((QData)((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem
				[3U])) << 0x20U) | (QData)((IData)(
								   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem
								   [2U]))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/memory_access.v:73
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__data_o 
	= ((2U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
	    ? ((1U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
	        ? ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
		    ? (0xff000000U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rs2_data2mem 
				      << 0x18U)) : 0U)
	        : ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
		    ? (0xff0000U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rs2_data2mem 
				    << 0x10U)) : ((1U 
						   == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
						   ? 
						  (0xffff0000U 
						   & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rs2_data2mem 
						      << 0x10U))
						   : 0U)))
	    : ((1U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
	        ? ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
		    ? (0xff00U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rs2_data2mem 
				  << 8U)) : 0U) : (
						   (0U 
						    == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
						    ? 
						   (0xffU 
						    & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rs2_data2mem)
						    : 
						   ((1U 
						     == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
						     ? 
						    (0xffffU 
						     & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rs2_data2mem)
						     : 
						    ((2U 
						      == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
						      ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rs2_data2mem
						      : 0U)))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/dcache.v:289
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromMem 
	= ((0x10U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
	    ? ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
	        ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[0U]
		    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[1U])
	        : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[2U]
		    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[3U]))
	    : ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
	        ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[4U]
		    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[5U])
	        : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[6U]
		    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data[7U])));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit[0U] 
	= (1U & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_
		  [(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
			     >> 5U))][0U] & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_tag_o
					     [0U] == 
					     (0x3fffffU 
					      & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
						 >> 0xaU))))
		  ? 1U : 0U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit[1U] 
	= (1U & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_
		  [(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
			     >> 5U))][1U] & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_tag_o
					     [1U] == 
					     (0x3fffffU 
					      & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
						 >> 0xaU))))
		  ? 1U : 0U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit[2U] 
	= (1U & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_
		  [(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
			     >> 5U))][2U] & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_tag_o
					     [2U] == 
					     (0x3fffffU 
					      & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
						 >> 0xaU))))
		  ? 1U : 0U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit[3U] 
	= (1U & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__VALID_
		  [(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
			     >> 5U))][3U] & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_tag_o
					     [3U] == 
					     (0x3fffffU 
					      & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
						 >> 0xaU))))
		  ? 1U : 0U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel 
	= (3U & ((0xcU == (0xfU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
				   >> 0x1cU))) ? 1U
		  : ((0xfU == (0xfU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
				       >> 0x1cU))) ? 2U
		      : 0U)));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data 
	= ((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_regfile_we2mem_wb) 
	     & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs2_addr2fwd) 
		== (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rd_addr2mem_wb))) 
	    & (0U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rd_addr2mem_wb)))
	    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_p_data
	    : ((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__regfile_we_r) 
		 & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs2_addr2fwd) 
		    == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r))) 
		& (0U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r)))
	        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_data
	        : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs2_data2fwd));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data 
	= ((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_regfile_we2mem_wb) 
	     & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs1_addr2fwd) 
		== (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rd_addr2mem_wb))) 
	    & (0U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rd_addr2mem_wb)))
	    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_p_data
	    : ((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__regfile_we_r) 
		 & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs1_addr2fwd) 
		    == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r))) 
		& (0U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r)))
	        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_data
	        : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs1_data2fwd));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/csr_file.v:392
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__csr_data 
	= ((0x800U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
	    ? ((0x400U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
	        ? ((0x200U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
		    ? ((0x100U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
		        ? ((0x80U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
			    ? 0U : ((0x40U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
				     ? 0U : ((0x20U 
					      & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
					      ? 0U : 
					     ((0x10U 
					       & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
					       ? ((8U 
						   & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						   ? 0U
						   : 
						  ((4U 
						    & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						    ? 
						   ((2U 
						     & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						     ? 0U
						     : 
						    ((1U 
						      & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						      ? 0U
						      : 0U))
						    : 
						   ((2U 
						     & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						     ? 0U
						     : 
						    ((1U 
						      & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						      ? 0U
						      : 0U))))
					       : 0U))))
		        : 0U) : ((0x100U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
				  ? 0U : ((0x80U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
					   ? 0U : (
						   (0x40U 
						    & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						    ? 0U
						    : 
						   ((0x20U 
						     & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						     ? 0U
						     : 
						    ((0x10U 
						      & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						      ? 0U
						      : 
						     ((8U 
						       & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						       ? 0U
						       : 
						      ((4U 
							& (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						        ? 0U
						        : 
						       ((2U 
							 & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
							 ? 0U
							 : 
							((1U 
							  & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
							  ? 0U
							  : (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mcycle_r)))))))))))
	        : ((0x200U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
		    ? ((0x100U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
		        ? ((0x80U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
			    ? ((0x40U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
			        ? 0U : ((0x20U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
					 ? 0U : ((0x10U 
						  & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						  ? 0U
						  : 
						 ((8U 
						   & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						   ? 0U
						   : 
						  ((4U 
						    & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						    ? 0U
						    : 
						   ((2U 
						     & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						     ? 0U
						     : 
						    ((1U 
						      & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						      ? 0U
						      : (IData)(
								(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mcycle_r 
								 >> 0x20U)))))))))
			    : ((0x40U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
			        ? 0U : ((0x20U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
					 ? 0U : ((0x10U 
						  & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						  ? 0U
						  : 
						 ((8U 
						   & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						   ? 0U
						   : 
						  ((4U 
						    & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						    ? 0U
						    : 
						   ((2U 
						     & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						     ? 0U
						     : 
						    ((1U 
						      & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						      ? 0U
						      : (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mcycle_r)))))))))
		        : 0U) : 0U)) : ((0x400U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
					 ? 0U : ((0x200U 
						  & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						  ? 
						 ((0x100U 
						   & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						   ? 
						  ((0x80U 
						    & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						    ? 0U
						    : 
						   ((0x40U 
						     & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						     ? 
						    ((0x20U 
						      & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						      ? 0U
						      : 
						     ((0x10U 
						       & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						       ? 0U
						       : 
						      ((8U 
							& (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						        ? 0U
						        : 
						       ((4U 
							 & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
							 ? 
							((2U 
							  & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
							  ? 0U
							  : 
							 ((1U 
							   & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
							   ? 0U
							   : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mip))
							 : 
							((2U 
							  & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
							  ? 
							 ((1U 
							   & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
							   ? 0U
							   : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mcause_r)
							  : 
							 ((1U 
							   & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
							   ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mepc_r
							   : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mscratch_r))))))
						     : 
						    ((0x20U 
						      & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						      ? 0U
						      : 
						     ((0x10U 
						       & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						       ? 0U
						       : 
						      ((8U 
							& (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
						        ? 0U
						        : 
						       ((4U 
							 & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
							 ? 
							((2U 
							  & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
							  ? 0U
							  : 
							 ((1U 
							   & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
							   ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mtvec_r
							   : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie))
							 : 
							((2U 
							  & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
							  ? 0U
							  : 
							 ((1U 
							   & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr))
							   ? 0U
							   : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus))))))))
						   : 0U)
						  : 0U)));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__sys_jump_csr_addr 
	= ((0x341U & VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_mret)))) 
	   | (0x305U & VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_ecall)))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__sys_jump 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_mret) 
	   | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_ecall));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__we 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_jal2exe) 
	   & (~ (IData)((0U != vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/bpu.v:171
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__update_addr 
	= (((((((((2U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
		  | (4U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)) 
		 | (8U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)) 
		| (0x10U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)) 
	       | (0x20U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)) 
	      | (0x40U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)) 
	     | (0x80U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)) 
	    | (0x100U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE))
	    ? ((2U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
	        ? 1U : ((4U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
			 ? 2U : ((8U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
				  ? 3U : ((0x10U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
					   ? 4U : (
						   (0x20U 
						    == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
						    ? 5U
						    : 
						   ((0x40U 
						     == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
						     ? 6U
						     : 
						    ((0x80U 
						      == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
						      ? 7U
						      : 8U)))))))
	    : (((((((((0x200U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
		      | (0x400U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)) 
		     | (0x800U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)) 
		    | (0x1000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)) 
		   | (0x2000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)) 
		  | (0x4000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)) 
		 | (0x8000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)) 
		| (0x10000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE))
	        ? ((0x200U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
		    ? 9U : ((0x400U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
			     ? 0xaU : ((0x800U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
				        ? 0xbU : ((0x1000U 
						   == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
						   ? 0xcU
						   : 
						  ((0x2000U 
						    == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
						    ? 0xdU
						    : 
						   ((0x4000U 
						     == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
						     ? 0xeU
						     : 
						    ((0x8000U 
						      == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
						      ? 0xfU
						      : 0x10U)))))))
	        : ((((((((0x20000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE) 
			 | (0x40000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)) 
			| (0x80000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)) 
		       | (0x100000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)) 
		      | (0x200000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)) 
		     | (0x400000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)) 
		    | (0x800000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE))
		    ? ((0x20000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
		        ? 0x11U : ((0x40000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
				    ? 0x12U : ((0x80000U 
						== vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
					        ? 0x13U
					        : (
						   (0x100000U 
						    == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
						    ? 0x14U
						    : 
						   ((0x200000U 
						     == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
						     ? 0x15U
						     : 
						    ((0x400000U 
						      == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
						      ? 0x16U
						      : 
						     ((0x800000U 
						       == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE)
						       ? 0x17U
						       : 0x18U)))))))
		    : 0U)));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__we 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_branch2exe) 
	   & (~ (IData)((0U != vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__irq_cause 
	= (0x80000000U | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__tmr_irq) 
			   & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_mtie_r))
			   ? 7U : (((0U != vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem
				     [4U]) & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_msie_r))
				    ? 3U : 0U)));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__irq_taken 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus_mie_r) 
	   & (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__tmr_irq) 
	       & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_mtie_r)) 
	      | ((0U != vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem
		  [4U]) & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_msie_r))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_hit 
	= (((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	     [0U] | vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	     [1U]) | vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	    [2U]) | vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	   [3U]);
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/dcache.v:221
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[0U] 
	= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	   [0U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
		   [1U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
				[2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
					     [3U] ? 0U
					      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
					     [0U][0U])))
	    : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	       [1U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
		       [2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
				    [3U] ? 0U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
				    [1U][0U])) : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						  [2U]
						   ? 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						   [3U]
						    ? 0U
						    : 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
						   [2U][0U])
						   : 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						   [3U]
						    ? 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
						   [3U][0U]
						    : 0U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[1U] 
	= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	   [0U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
		   [1U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
				[2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
					     [3U] ? 0U
					      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
					     [0U][1U])))
	    : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	       [1U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
		       [2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
				    [3U] ? 0U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
				    [1U][1U])) : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						  [2U]
						   ? 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						   [3U]
						    ? 0U
						    : 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
						   [2U][1U])
						   : 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						   [3U]
						    ? 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
						   [3U][1U]
						    : 0U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[2U] 
	= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	   [0U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
		   [1U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
				[2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
					     [3U] ? 0U
					      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
					     [0U][2U])))
	    : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	       [1U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
		       [2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
				    [3U] ? 0U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
				    [1U][2U])) : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						  [2U]
						   ? 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						   [3U]
						    ? 0U
						    : 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
						   [2U][2U])
						   : 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						   [3U]
						    ? 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
						   [3U][2U]
						    : 0U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[3U] 
	= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	   [0U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
		   [1U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
				[2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
					     [3U] ? 0U
					      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
					     [0U][3U])))
	    : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	       [1U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
		       [2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
				    [3U] ? 0U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
				    [1U][3U])) : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						  [2U]
						   ? 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						   [3U]
						    ? 0U
						    : 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
						   [2U][3U])
						   : 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						   [3U]
						    ? 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
						   [3U][3U]
						    : 0U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[4U] 
	= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	   [0U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
		   [1U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
				[2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
					     [3U] ? 0U
					      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
					     [0U][4U])))
	    : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	       [1U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
		       [2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
				    [3U] ? 0U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
				    [1U][4U])) : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						  [2U]
						   ? 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						   [3U]
						    ? 0U
						    : 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
						   [2U][4U])
						   : 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						   [3U]
						    ? 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
						   [3U][4U]
						    : 0U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[5U] 
	= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	   [0U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
		   [1U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
				[2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
					     [3U] ? 0U
					      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
					     [0U][5U])))
	    : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	       [1U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
		       [2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
				    [3U] ? 0U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
				    [1U][5U])) : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						  [2U]
						   ? 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						   [3U]
						    ? 0U
						    : 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
						   [2U][5U])
						   : 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						   [3U]
						    ? 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
						   [3U][5U]
						    : 0U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[6U] 
	= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	   [0U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
		   [1U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
				[2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
					     [3U] ? 0U
					      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
					     [0U][6U])))
	    : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	       [1U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
		       [2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
				    [3U] ? 0U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
				    [1U][6U])) : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						  [2U]
						   ? 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						   [3U]
						    ? 0U
						    : 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
						   [2U][6U])
						   : 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						   [3U]
						    ? 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
						   [3U][6U]
						    : 0U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[7U] 
	= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	   [0U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
		   [1U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
				[2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
					     [3U] ? 0U
					      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
					     [0U][7U])))
	    : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
	       [1U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
		       [2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
				    [3U] ? 0U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
				    [1U][7U])) : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						  [2U]
						   ? 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						   [3U]
						    ? 0U
						    : 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
						   [2U][7U])
						   : 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit
						   [3U]
						    ? 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o
						   [3U][7U]
						    : 0U))));
    vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_core2dev_data 
	= ((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel))
	    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__data_o
	    : 0U);
    vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_addr 
	= ((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel))
	    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem
	    : 0U);
    vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_rw 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_we) 
	   & (1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel)));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/core_top.v:261
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dS_nxt 
	= ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dS))
	    ? (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_re) 
		| (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_we))
	        ? 1U : 0U) : ((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dS))
			       ? ((1U & ((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel))
					  ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_data_ready)
					  : ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel))
					      ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_d_ready)
					      : 1U)))
				   ? 0U : 1U) : 0U));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/execute.v:148
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB 
	= ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_inB_sel2exe))
	    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_imm2exe
	    : ((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_inB_sel2exe))
	        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data
	        : ((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_inB_sel2exe))
		    ? ((IData)(1U) + (~ vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data))
		    : 0U)));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__csr_inputB 
	= ((4U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))
	    ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_imm2csr)
	    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data);
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/execute.v:138
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
	= ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_inA_sel2exe))
	    ? 0U : ((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_inA_sel2exe))
		     ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe
		     : ((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_inA_sel2exe))
			 ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data
			 : 0U)));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_branch_taken 
	= ((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_branch2exe) 
	     & (((((((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)) 
		     & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data 
			 == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data)
			 ? 1U : 0U)) | ((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)) 
					& ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data 
					    != vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data)
					    ? 1U : 0U))) 
		   | ((4U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)) 
		      & (VL_LTS_III(1,32,32, vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data, vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data)
			  ? 1U : 0U))) | ((5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)) 
					  & (VL_GTES_III(1,32,32, vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data, vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data)
					      ? 1U : 0U))) 
		 | ((6U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)) 
		    & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data 
			< vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data)
		        ? 1U : 0U))) | ((7U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)) 
					& ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data 
					    >= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data)
					    ? 1U : 0U)))) 
	    | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_jal2exe)) 
	   | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_jalr2exe));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/dcache.v:275
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromCache 
	= ((0x10U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
	    ? ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
	        ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[0U]
		    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[1U])
	        : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[2U]
		    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[3U]))
	    : ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
	        ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[4U]
		    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[5U])
	        : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
		    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[6U]
		    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data[7U])));
    // ALWAYS at core-ver-src/mock_uart.sv:55
    vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_tx_push 
	= ((0xc0000004U == vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_addr) 
	   & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_rw));
    // ALWAYS at core-ver-src/mock_uart.sv:61
    vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_rx_pop 
	= ((0xc0000000U == vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_addr) 
	   & (~ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_rw)));
    // ALWAYS at core-ver-src/mock_uart.sv:173
    vlSymsp->TOP__aquila_testharness.__Vtableidx4 = 
	(0xcU | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_rw) 
		  << 5U) | ((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_d_strobe) 
			      & (1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel))) 
			     << 4U) | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__cur_state))));
    vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__next_state 
	= vlSymsp->TOP__aquila_testharness.__Vtable4___PVT__mock_uart_0__DOT__next_state
	[vlSymsp->TOP__aquila_testharness.__Vtableidx4];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__is_b_neg 
	= ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB 
	    >> 0x1fU) & (((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)) 
			  | (4U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))) 
			 | (6U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/csr_file.v:443
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__updated_csr_data 
	= ((1U == (3U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)))
	    ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__csr_inputB
	    : ((2U == (3U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)))
	        ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__csr_data 
		   | vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__csr_inputB)
	        : ((3U == (3U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)))
		    ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__csr_data 
		       & (~ vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__csr_inputB))
		    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__csr_data)));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_result 
	= ((((((((VL_NEGATE_I((IData)((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation)))) 
		  & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
		     + vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB)) 
		 | (VL_NEGATE_I((IData)((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation)))) 
		    & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
		       << (0x1fU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB)))) 
		| (VL_NEGATE_I((IData)((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation)))) 
		   & (VL_LTS_III(1,32,32, vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA, vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB)
		       ? 1U : 0U))) | (VL_NEGATE_I((IData)(
							   (3U 
							    == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation)))) 
				       & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
					   < vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB)
					   ? 1U : 0U))) 
	      | (VL_NEGATE_I((IData)((4U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation)))) 
		 & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
		    ^ vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB))) 
	     | (VL_NEGATE_I((IData)((5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation)))) 
		& ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__shift_sel2exe)
		    ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
		       >> (0x1fU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB))
		    : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
		       >> (0x1fU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB))))) 
	    | (VL_NEGATE_I((IData)((6U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation)))) 
	       & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
		  | vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB))) 
	   | (VL_NEGATE_I((IData)((7U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation)))) 
	      & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
		 & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB)));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/muldiv.v:179
    vlSymsp->TOP__aquila_testharness.__Vtableidx2 = 
	(((0U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB) 
	  << 5U) | (((0U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA) 
		     << 4U) | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_req) 
				<< 3U) | ((4U & ((~ (IData)(
							    (0U 
							     != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__cnt)))) 
						 << 2U)) 
					  | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S)))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt 
	= vlSymsp->TOP__aquila_testharness.__Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt
	[vlSymsp->TOP__aquila_testharness.__Vtableidx2];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__is_a_neg 
	= ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
	    >> 0x1fU) & ((((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)) 
			   | (2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))) 
			  | (4U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))) 
			 | (6U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_misprediction 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_EXE) 
	   & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_result_EXE) 
	      ^ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_branch_taken)));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/dcache.v:308
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__update_data 
	= ((8U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__byte_enable_from_p))
	    ? ((4U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__byte_enable_from_p))
	        ? ((2U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__byte_enable_from_p))
		    ? ((1U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__byte_enable_from_p))
		        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__datain_from_p
		        : 0U) : ((1U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__byte_enable_from_p))
				  ? 0U : ((5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
					   ? ((0xffff0000U 
					       & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__datain_from_p) 
					      | (0xffffU 
						 & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromMem))
					   : ((0xffff0000U 
					       & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__datain_from_p) 
					      | (0xffffU 
						 & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromCache)))))
	        : ((2U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__byte_enable_from_p))
		    ? 0U : ((1U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__byte_enable_from_p))
			     ? 0U : ((5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
				      ? ((0xff000000U 
					  & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__datain_from_p) 
					 | (0xffffffU 
					    & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromMem))
				      : ((0xff000000U 
					  & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__datain_from_p) 
					 | (0xffffffU 
					    & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromCache))))))
	    : ((4U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__byte_enable_from_p))
	        ? ((2U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__byte_enable_from_p))
		    ? 0U : ((1U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__byte_enable_from_p))
			     ? 0U : ((5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
				      ? ((0xff000000U 
					  & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromMem) 
					 | ((0xff0000U 
					     & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__datain_from_p) 
					    | (0xffffU 
					       & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromMem)))
				      : ((0xff000000U 
					  & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromCache) 
					 | ((0xff0000U 
					     & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__datain_from_p) 
					    | (0xffffU 
					       & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromCache))))))
	        : ((2U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__byte_enable_from_p))
		    ? ((1U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__byte_enable_from_p))
		        ? ((5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
			    ? ((0xffff0000U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromMem) 
			       | (0xffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__datain_from_p))
			    : ((0xffff0000U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromCache) 
			       | (0xffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__datain_from_p)))
		        : ((5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
			    ? ((0xffff0000U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromMem) 
			       | ((0xff00U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__datain_from_p) 
				  | (0xffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromMem)))
			    : ((0xffff0000U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromCache) 
			       | ((0xff00U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__datain_from_p) 
				  | (0xffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromCache)))))
		    : ((1U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__byte_enable_from_p))
		        ? ((5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
			    ? ((0xffffff00U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromMem) 
			       | (0xffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__datain_from_p))
			    : ((0xffffff00U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromCache) 
			       | (0xffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__datain_from_p)))
		        : 0U))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/muldiv.v:147
    vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__abs__2__num 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB;
    vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__3__num 
	= vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__abs__2__num;
    vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__3__Vfuncout 
	= ((IData)(1U) + (~ vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__3__num));
    vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__abs__2__Vfuncout 
	= ((0x80000000U & vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__abs__2__num)
	    ? vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__3__Vfuncout
	    : vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__abs__2__num);
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__op_b 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__is_b_neg)
	    ? vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__abs__2__Vfuncout
	    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB);
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__signed_adjust 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__is_a_neg) 
	   ^ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__is_b_neg));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/muldiv.v:146
    vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__abs__0__num 
	= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA;
    vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__1__num 
	= vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__abs__0__num;
    vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__1__Vfuncout 
	= ((IData)(1U) + (~ vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__1__num));
    vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__abs__0__Vfuncout 
	= ((0x80000000U & vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__abs__0__num)
	    ? vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__1__Vfuncout
	    : vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__abs__0__num);
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__op_a 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__is_a_neg)
	    ? vlSymsp->TOP__aquila_testharness.__Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__abs__0__Vfuncout
	    : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA);
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Pipeline_Control__DOT__branch_flush 
	= ((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_branch_taken) 
	     & (~ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__uncond_branch_hit_EXE))) 
	    & (~ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_EXE))) 
	   | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_misprediction));
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Fetch__flush 
	= (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Pipeline_Control__DOT__branch_flush) 
	    | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__sys_jump)) 
	   | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__irq_taken));
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Decode__flush 
	= ((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Pipeline_Control__DOT__branch_flush) 
	     | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Pipeline_Control__DOT__is_load_use)) 
	    | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_miscmem) 
		& ((0U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
				 >> 0xcU))) | (1U == 
					       (7U 
						& (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						   >> 0xcU))))) 
	       | ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_sys_op) 
		  & (1U == (0xfffU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
				      >> 0x14U)))))) 
	   | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__irq_taken));
}

VL_INLINE_OPT void Vaquila_testharness_aquila_testharness::_sequent__TOP__aquila_testharness__3(Vaquila_testharness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vaquila_testharness_aquila_testharness::_sequent__TOP__aquila_testharness__3\n"); );
    Vaquila_testharness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/dcache.v:183
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S_nxt 
	= (7U & ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
		  ? (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_d_strobe) 
		      & (0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel)))
		      ? 1U : 0U) : ((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
				     ? ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_hit)
					 ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_
						 [(0x1fU 
						   & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
						      >> 5U))]
						 [vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__victim_sel]
						  ? 2U
						  : 4U))
				     : ((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
					 ? ((IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_dcache_o)
					     ? 3U : 2U)
					 : ((3U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
					     ? 4U : 
					    ((4U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
					      ? ((IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_dcache_o)
						  ? 5U
						  : 4U)
					      : 0U))))));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/icache.v:190
    if (vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_icache_o) {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write[0U] 
	    = (0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__victim_sel));
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write[1U] 
	    = (1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__victim_sel));
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write[2U] 
	    = (2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__victim_sel));
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write[3U] 
	    = (3U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__victim_sel));
    } else {
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write[0U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write[1U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write[2U] = 0U;
	vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write[3U] = 0U;
    }
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/icache.v:291
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__i_m_addr 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
	    ? 0U : ((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__S))
		     ? (0xffffffe0U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
		     : 0U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
	= vlSymsp->TOP__aquila_testharness.__Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r;
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/icache.v:135
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__S 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst)
	    ? 0U : (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__S_nxt));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_increment 
	= ((IData)(4U) + vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r);
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xffffeU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	      [0U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xffffdU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [1U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 1U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xffffbU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [2U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 2U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xffff7U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [3U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 3U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xfffefU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [4U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 4U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xfffdfU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [5U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 5U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xfffbfU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [6U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 6U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xfff7fU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [7U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 7U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xffeffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [8U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 8U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xffdffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [9U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 9U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xffbffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0xaU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0xaU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xff7ffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0xbU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0xbU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xfefffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0xcU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0xcU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xfdfffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0xdU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0xdU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xfbfffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0xeU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0xeU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xf7fffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0xfU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0xfU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xeffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0x10U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0x10U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xdffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0x11U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0x11U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0xbffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0x12U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0x12U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF 
	= ((0x7ffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table
	       [0x13U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0x13U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xfffffeU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	      [0U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xfffffdU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [1U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 1U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xfffffbU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [2U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 2U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xfffff7U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [3U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 3U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xffffefU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [4U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 4U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xffffdfU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [5U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 5U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xffffbfU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [6U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 6U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xffff7fU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [7U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 7U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xfffeffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [8U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 8U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xfffdffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [9U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 9U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xfffbffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0xaU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0xaU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xfff7ffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0xbU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0xbU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xffefffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0xcU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0xcU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xffdfffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0xdU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0xdU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xffbfffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0xeU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0xeU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xff7fffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0xfU] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0xfU));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xfeffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0x10U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0x10U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xfdffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0x11U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0x11U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xfbffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0x12U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0x12U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xf7ffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0x13U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0x13U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xefffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0x14U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0x14U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xdfffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0x15U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0x15U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0xbfffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0x16U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0x16U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF 
	= ((0x7fffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   | ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table
	       [0x17U] == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r) 
	      << 0x17U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit[0U] 
	= (1U & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_
		  [(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
			     >> 5U))][0U] & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_
					     [(0x1fU 
					       & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
						  >> 5U))]
					     [0U] == 
					     (0x3fffffU 
					      & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
						 >> 0xaU))))
		  ? 1U : 0U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit[1U] 
	= (1U & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_
		  [(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
			     >> 5U))][1U] & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_
					     [(0x1fU 
					       & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
						  >> 5U))]
					     [1U] == 
					     (0x3fffffU 
					      & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
						 >> 0xaU))))
		  ? 1U : 0U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit[2U] 
	= (1U & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_
		  [(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
			     >> 5U))][2U] & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_
					     [(0x1fU 
					       & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
						  >> 5U))]
					     [2U] == 
					     (0x3fffffU 
					      & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
						 >> 0xaU))))
		  ? 1U : 0U));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit[3U] 
	= (1U & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__VALID_
		  [(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
			     >> 5U))][3U] & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__TAG_
					     [(0x1fU 
					       & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
						  >> 5U))]
					     [3U] == 
					     (0x3fffffU 
					      & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
						 >> 0xaU))))
		  ? 1U : 0U));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/uncond_BHT.v:115
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__read_addr 
	= (((((((((2U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
		  | (4U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)) 
		 | (8U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)) 
		| (0x10U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)) 
	       | (0x20U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)) 
	      | (0x40U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)) 
	     | (0x80U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)) 
	    | (0x100U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF))
	    ? ((2U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)
	        ? 1U : ((4U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)
			 ? 2U : ((8U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)
				  ? 3U : ((0x10U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)
					   ? 4U : (
						   (0x20U 
						    == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)
						    ? 5U
						    : 
						   ((0x40U 
						     == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)
						     ? 6U
						     : 
						    ((0x80U 
						      == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)
						      ? 7U
						      : 8U)))))))
	    : (((((((((0x200U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
		      | (0x400U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)) 
		     | (0x800U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)) 
		    | (0x1000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)) 
		   | (0x2000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)) 
		  | (0x4000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)) 
		 | (0x8000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)) 
		| (0x10000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF))
	        ? ((0x200U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)
		    ? 9U : ((0x400U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)
			     ? 0xaU : ((0x800U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)
				        ? 0xbU : ((0x1000U 
						   == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)
						   ? 0xcU
						   : 
						  ((0x2000U 
						    == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)
						    ? 0xdU
						    : 
						   ((0x4000U 
						     == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)
						     ? 0xeU
						     : 
						    ((0x8000U 
						      == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)
						      ? 0xfU
						      : 0x10U)))))))
	        : ((((0x20000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
		     | (0x40000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)) 
		    | (0x80000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF))
		    ? ((0x20000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)
		        ? 0x11U : ((0x40000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)
				    ? 0x12U : ((0x80000U 
						== vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF)
					        ? 0x13U
					        : 0x18U)))
		    : 0U)));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__uncond_branch_hit_IF 
	= ((0U != vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF) 
	   & (0U != vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_IF 
	= ((0U != vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
	   & (0U != vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/bpu.v:134
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__read_addr 
	= (((((((((2U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
		  | (4U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)) 
		 | (8U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)) 
		| (0x10U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)) 
	       | (0x20U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)) 
	      | (0x40U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)) 
	     | (0x80U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)) 
	    | (0x100U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF))
	    ? ((2U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
	        ? 1U : ((4U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
			 ? 2U : ((8U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
				  ? 3U : ((0x10U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
					   ? 4U : (
						   (0x20U 
						    == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
						    ? 5U
						    : 
						   ((0x40U 
						     == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
						     ? 6U
						     : 
						    ((0x80U 
						      == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
						      ? 7U
						      : 8U)))))))
	    : (((((((((0x200U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
		      | (0x400U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)) 
		     | (0x800U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)) 
		    | (0x1000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)) 
		   | (0x2000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)) 
		  | (0x4000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)) 
		 | (0x8000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)) 
		| (0x10000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF))
	        ? ((0x200U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
		    ? 9U : ((0x400U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
			     ? 0xaU : ((0x800U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
				        ? 0xbU : ((0x1000U 
						   == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
						   ? 0xcU
						   : 
						  ((0x2000U 
						    == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
						    ? 0xdU
						    : 
						   ((0x4000U 
						     == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
						     ? 0xeU
						     : 
						    ((0x8000U 
						      == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
						      ? 0xfU
						      : 0x10U)))))))
	        : ((((((((0x20000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF) 
			 | (0x40000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)) 
			| (0x80000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)) 
		       | (0x100000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)) 
		      | (0x200000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)) 
		     | (0x400000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)) 
		    | (0x800000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF))
		    ? ((0x20000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
		        ? 0x11U : ((0x40000U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
				    ? 0x12U : ((0x80000U 
						== vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
					        ? 0x13U
					        : (
						   (0x100000U 
						    == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
						    ? 0x14U
						    : 
						   ((0x200000U 
						     == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
						     ? 0x15U
						     : 
						    ((0x400000U 
						      == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
						      ? 0x16U
						      : 
						     ((0x800000U 
						       == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF)
						       ? 0x17U
						       : 0x18U)))))))
		    : 0U)));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/icache.v:176
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[0U] 
	= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	   [0U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
		   [1U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
				[2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
					     [3U] ? 0U
					      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
					     [0U][0U])))
	    : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	       [1U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
		       [2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
				    [3U] ? 0U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
				    [1U][0U])) : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						  [2U]
						   ? 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						   [3U]
						    ? 0U
						    : 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
						   [2U][0U])
						   : 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						   [3U]
						    ? 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
						   [3U][0U]
						    : 0U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[1U] 
	= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	   [0U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
		   [1U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
				[2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
					     [3U] ? 0U
					      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
					     [0U][1U])))
	    : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	       [1U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
		       [2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
				    [3U] ? 0U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
				    [1U][1U])) : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						  [2U]
						   ? 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						   [3U]
						    ? 0U
						    : 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
						   [2U][1U])
						   : 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						   [3U]
						    ? 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
						   [3U][1U]
						    : 0U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[2U] 
	= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	   [0U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
		   [1U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
				[2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
					     [3U] ? 0U
					      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
					     [0U][2U])))
	    : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	       [1U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
		       [2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
				    [3U] ? 0U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
				    [1U][2U])) : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						  [2U]
						   ? 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						   [3U]
						    ? 0U
						    : 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
						   [2U][2U])
						   : 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						   [3U]
						    ? 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
						   [3U][2U]
						    : 0U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[3U] 
	= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	   [0U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
		   [1U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
				[2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
					     [3U] ? 0U
					      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
					     [0U][3U])))
	    : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	       [1U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
		       [2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
				    [3U] ? 0U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
				    [1U][3U])) : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						  [2U]
						   ? 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						   [3U]
						    ? 0U
						    : 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
						   [2U][3U])
						   : 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						   [3U]
						    ? 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
						   [3U][3U]
						    : 0U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[4U] 
	= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	   [0U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
		   [1U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
				[2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
					     [3U] ? 0U
					      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
					     [0U][4U])))
	    : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	       [1U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
		       [2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
				    [3U] ? 0U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
				    [1U][4U])) : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						  [2U]
						   ? 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						   [3U]
						    ? 0U
						    : 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
						   [2U][4U])
						   : 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						   [3U]
						    ? 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
						   [3U][4U]
						    : 0U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[5U] 
	= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	   [0U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
		   [1U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
				[2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
					     [3U] ? 0U
					      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
					     [0U][5U])))
	    : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	       [1U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
		       [2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
				    [3U] ? 0U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
				    [1U][5U])) : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						  [2U]
						   ? 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						   [3U]
						    ? 0U
						    : 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
						   [2U][5U])
						   : 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						   [3U]
						    ? 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
						   [3U][5U]
						    : 0U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[6U] 
	= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	   [0U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
		   [1U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
				[2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
					     [3U] ? 0U
					      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
					     [0U][6U])))
	    : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	       [1U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
		       [2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
				    [3U] ? 0U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
				    [1U][6U])) : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						  [2U]
						   ? 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						   [3U]
						    ? 0U
						    : 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
						   [2U][6U])
						   : 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						   [3U]
						    ? 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
						   [3U][6U]
						    : 0U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr[7U] 
	= (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	   [0U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
		   [1U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
				[2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
					     [3U] ? 0U
					      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
					     [0U][7U])))
	    : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	       [1U] ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
		       [2U] ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
				    [3U] ? 0U : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
				    [1U][7U])) : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						  [2U]
						   ? 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						   [3U]
						    ? 0U
						    : 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
						   [2U][7U])
						   : 
						  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
						   [3U]
						    ? 
						   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o
						   [3U][7U]
						    : 0U))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_hit 
	= (((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	     [0U] | vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	     [1U]) | vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	    [2U]) | vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit
	   [3U]);
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_result_IF 
	= (1U & (((0x17U >= (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__read_addr))
		   ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table
		  [vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__read_addr]
		   : 0U) >> 1U));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/icache.v:143
    vlSymsp->TOP__aquila_testharness.__Vtableidx3 = 
	(((IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_icache_o) 
	  << 4U) | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_hit) 
		     << 3U) | (((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS)) 
				<< 2U) | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__S))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__S_nxt 
	= vlSymsp->TOP__aquila_testharness.__Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt
	[vlSymsp->TOP__aquila_testharness.__Vtableidx3];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_i_ready 
	= (1U & (((((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__S)) 
		    & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_hit)) 
		   & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__index_prev) 
		      == (0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
				   >> 5U)))) | (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_icache_o))
		  ? 1U : 0U));
    // ALWAYS at ../ip_repo/aquila/hdl/core_rtl/core_top.v:231
    vlSymsp->TOP__aquila_testharness.__Vtableidx1 = 
	(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_i_ready) 
	  << 4U) | (((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dS_nxt)) 
		     << 3U) | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Pipeline_Control__DOT__is_load_use) 
				<< 2U) | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS))));
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt 
	= vlSymsp->TOP__aquila_testharness.__Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt
	[vlSymsp->TOP__aquila_testharness.__Vtableidx1];
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline 
	= (1U & (((~ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_i_ready)) 
		  | (1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dS_nxt))) 
		 | ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__alu_muldiv_sel2exe) 
		    & (~ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_ready)))));
    vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Fetch__stall 
	= ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline) 
	   | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Pipeline_Control__DOT__is_load_use));
}

void Vaquila_testharness_aquila_testharness::_initial__TOP__aquila_testharness__4(Vaquila_testharness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vaquila_testharness_aquila_testharness::_initial__TOP__aquila_testharness__4\n"); );
    Vaquila_testharness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at ../ip_repo/aquila/hdl/core_rtl/distri_ram.v:71
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[0U] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[1U] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[2U] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[3U] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[4U] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[5U] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[6U] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[7U] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[8U] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[9U] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[0xaU] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[0xbU] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[0xcU] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[0xdU] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[0xeU] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[0xfU] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[0x10U] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[0x11U] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[0x12U] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[0x13U] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[0x14U] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[0x15U] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[0x16U] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[0x17U] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__i = 0x18U;
    // INITIAL at ../ip_repo/aquila/hdl/core_rtl/distri_ram.v:71
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[0U] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[1U] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[2U] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[3U] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[4U] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[5U] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[6U] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[7U] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[8U] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[9U] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[0xaU] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[0xbU] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[0xcU] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[0xdU] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[0xeU] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[0xfU] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[0x10U] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[0x11U] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[0x12U] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[0x13U] = 0U;
    vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__i = 0x14U;
}

void Vaquila_testharness_aquila_testharness::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vaquila_testharness_aquila_testharness::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst_n = VL_RAND_RESET_I(1);
    main_memory_addr = VL_RAND_RESET_I(32);
    __PVT__RISCV_rst = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256,__PVT__M_DCACHE_datain);
    VL_RAND_RESET_W(256,__PVT__M_DCACHE_dataout);
    __PVT__M_DEVICE_addr = VL_RAND_RESET_I(32);
    __PVT__M_DEVICE_rw = VL_RAND_RESET_I(1);
    __PVT__M_DEVICE_core2dev_data = VL_RAND_RESET_I(32);
    __PVT__M_DEVICE_data_ready = VL_RAND_RESET_I(1);
    __PVT__M_DEVICE_dev2core_data = VL_RAND_RESET_I(32);
    __Vcellinp__aquila_core__rst = VL_RAND_RESET_I(1);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__N = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__mem_sel = VL_RAND_RESET_I(2);
    __PVT__aquila_core__DOT__p_i_ready = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__p_d_strobe = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__p_d_ready = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__p_d_dout = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__i_m_strobe = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__d_m_strobe = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__d_m_rw = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__i_m_addr = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__d_m_addr = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(256,__PVT__aquila_core__DOT__d_m_din);
    __PVT__aquila_core__DOT__tmr_irq = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__clint_mem_data = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__sys_jump = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__sys_jump_csr_addr = VL_RAND_RESET_I(12);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_pc2dec = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_valid2dec = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_imm2exe = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs1_data2fwd = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs2_data2fwd = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_regfile_we2exe = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_we2exe = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_re2exe = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_load_ext_sel2exe = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_instr_valid2csr = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rd_addr2exe = VL_RAND_RESET_I(5);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs1_addr2fwd = VL_RAND_RESET_I(5);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs2_addr2fwd = VL_RAND_RESET_I(5);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_imm2csr = VL_RAND_RESET_I(5);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_inA_sel2exe = VL_RAND_RESET_I(2);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_inB_sel2exe = VL_RAND_RESET_I(2);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_input_sel2exe = VL_RAND_RESET_I(2);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_regfile_sel2exe = VL_RAND_RESET_I(3);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe = VL_RAND_RESET_I(3);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr = VL_RAND_RESET_I(12);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__alu_muldiv_sel2exe = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__shift_sel2exe = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_branch2exe = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_jal2exe = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_jalr2exe = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_csr_instr2csr = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_branch_taken = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_we = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_re = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_regfile_we2mem_wb = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_load_ext_sel2mem_wb = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rs2_data2mem = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_p_data = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rd_addr2mem_wb = VL_RAND_RESET_I(5);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem = VL_RAND_RESET_I(2);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_regfile_input_sel2mem_wb = VL_RAND_RESET_I(3);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__data_o = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__data2mem_wb = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_IF = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_ID = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_EXE = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_result_IF = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_result_ID = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_result_EXE = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__uncond_branch_hit_IF = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__uncond_branch_hit_ID = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__uncond_branch_hit_EXE = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_misprediction = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__irq_taken = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS = VL_RAND_RESET_I(2);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt = VL_RAND_RESET_I(2);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__dS = VL_RAND_RESET_I(2);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__dS_nxt = VL_RAND_RESET_I(2);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline = VL_RAND_RESET_I(1);
    aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Fetch__flush = VL_RAND_RESET_I(1);
    aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Fetch__stall = VL_RAND_RESET_I(1);
    aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Decode__flush = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Pipeline_Control__DOT__is_load_use = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Pipeline_Control__DOT__branch_flush = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__we = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF = VL_RAND_RESET_I(24);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE = VL_RAND_RESET_I(24);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__read_addr = VL_RAND_RESET_I(5);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__update_addr = VL_RAND_RESET_I(5);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__write_addr = VL_RAND_RESET_I(5);
    { int __Vi0=0; for (; __Vi0<24; ++__Vi0) {
	    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<24; ++__Vi0) {
	    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[__Vi0] = VL_RAND_RESET_I(2);
    }}
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__idx = VL_RAND_RESET_I(32);
    aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound2 = VL_RAND_RESET_I(32);
    aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound3 = VL_RAND_RESET_I(32);
    aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound5 = VL_RAND_RESET_I(2);
    aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound6 = VL_RAND_RESET_I(2);
    aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound7 = VL_RAND_RESET_I(2);
    aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound8 = VL_RAND_RESET_I(2);
    aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound9 = VL_RAND_RESET_I(2);
    aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT____Vlvbound10 = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<24; ++__Vi0) {
	    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__i = VL_RAND_RESET_I(32);
    aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT____Vlvbound2 = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<20; ++__Vi0) {
	    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__we = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF = VL_RAND_RESET_I(20);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE = VL_RAND_RESET_I(20);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__read_addr = VL_RAND_RESET_I(5);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__write_addr = VL_RAND_RESET_I(5);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__idx = VL_RAND_RESET_I(32);
    aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound2 = VL_RAND_RESET_I(32);
    aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT____Vlvbound3 = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<20; ++__Vi0) {
	    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__i = VL_RAND_RESET_I(32);
    aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT____Vlvbound2 = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__we = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__i = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_increment = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_op = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_op_imm = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_jal = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_jalr = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_load = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_store = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_branch = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_lui = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_auipc = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_miscmem = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_system = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_amo = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_csr = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_sys_op = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_ecall = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_mret = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_result = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_result = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__stall_from_muldiv = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_ready = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation = VL_RAND_RESET_I(3);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_req = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__ALU__DOT__ones = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__is_a_neg = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__is_b_neg = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__signed_adjust = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__op_a = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__op_b = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__reg32 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65,__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__cnt = VL_RAND_RESET_I(6);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__quotient = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__remainder = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S = VL_RAND_RESET_I(2);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt = VL_RAND_RESET_I(2);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__mul_add = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__div_sub = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__adder_opa = VL_RAND_RESET_Q(33);
    VL_RAND_RESET_W(65,__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result_tmp);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__regfile_input_sel_r = VL_RAND_RESET_I(3);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__regfile_we_r = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r = VL_RAND_RESET_I(5);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_load_ext_sel_r = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_addr_alignment_r = VL_RAND_RESET_I(2);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__p_data_r = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_data_r = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__aligned_data_o = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_data = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus_mpie_r = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus_mie_r = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__misa_r = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_meie_r = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_mtie_r = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_msie_r = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mtvec_r = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mscratch_r = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mepc_r = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mcause_r = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__irq_cause = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mip = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mip_meip_r = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mip_mtip_r = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mip_msip_r = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mcycle_r = VL_RAND_RESET_Q(64);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__csr_data = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__csr_inputB = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__updated_csr_data = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
	    __PVT__aquila_core__DOT__CLINT__DOT__clint_mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__aquila_core__DOT__CLINT__DOT__counter = VL_RAND_RESET_I(17);
    __PVT__aquila_core__DOT__CLINT__DOT__carry = VL_RAND_RESET_I(1);
    aquila_core__DOT__CLINT__DOT____Vlvbound1 = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    __PVT__aquila_core__DOT__I_Cache__DOT__way_hit[__Vi0] = VL_RAND_RESET_I(1);
    }}
    __PVT__aquila_core__DOT__I_Cache__DOT__cache_hit = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    VL_RAND_RESET_W(256,__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[__Vi0]);
    }}
    VL_RAND_RESET_W(256,__PVT__aquila_core__DOT__I_Cache__DOT__c_instr);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    __PVT__aquila_core__DOT__I_Cache__DOT__cache_write[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    { int __Vi1=0; for (; __Vi1<4; ++__Vi1) {
		    __PVT__aquila_core__DOT__I_Cache__DOT__VALID_[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
	    }}
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    { int __Vi1=0; for (; __Vi1<4; ++__Vi1) {
		    __PVT__aquila_core__DOT__I_Cache__DOT__TAG_[__Vi0][__Vi1] = VL_RAND_RESET_I(22);
	    }}
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    __PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[__Vi0] = VL_RAND_RESET_I(2);
    }}
    __PVT__aquila_core__DOT__I_Cache__DOT__victim_sel = VL_RAND_RESET_I(2);
    __PVT__aquila_core__DOT__I_Cache__DOT__index_prev = VL_RAND_RESET_I(5);
    __PVT__aquila_core__DOT__I_Cache__DOT__S = VL_RAND_RESET_I(2);
    __PVT__aquila_core__DOT__I_Cache__DOT__S_nxt = VL_RAND_RESET_I(2);
    __PVT__aquila_core__DOT__I_Cache__DOT__idx = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__I_Cache__DOT__jdx = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(256,aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o);
    VL_RAND_RESET_W(256,aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o);
    VL_RAND_RESET_W(256,aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o);
    VL_RAND_RESET_W(256,aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    VL_RAND_RESET_W(256,__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[__Vi0]);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    VL_RAND_RESET_W(256,__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[__Vi0]);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    VL_RAND_RESET_W(256,__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[__Vi0]);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    VL_RAND_RESET_W(256,__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[__Vi0]);
    }}
    __PVT__aquila_core__DOT__D_Cache__DOT__S = VL_RAND_RESET_I(3);
    __PVT__aquila_core__DOT__D_Cache__DOT__S_nxt = VL_RAND_RESET_I(3);
    __PVT__aquila_core__DOT__D_Cache__DOT__datain_from_p = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__D_Cache__DOT__rw = VL_RAND_RESET_I(1);
    __PVT__aquila_core__DOT__D_Cache__DOT__byte_enable_from_p = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    __PVT__aquila_core__DOT__D_Cache__DOT__c_tag_o[__Vi0] = VL_RAND_RESET_I(22);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    __PVT__aquila_core__DOT__D_Cache__DOT__way_hit[__Vi0] = VL_RAND_RESET_I(1);
    }}
    __PVT__aquila_core__DOT__D_Cache__DOT__cache_hit = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256,__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    VL_RAND_RESET_W(256,__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[__Vi0]);
    }}
    VL_RAND_RESET_W(256,__PVT__aquila_core__DOT__D_Cache__DOT__c_data);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    __PVT__aquila_core__DOT__D_Cache__DOT__cache_write[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    __PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[__Vi0] = VL_RAND_RESET_I(2);
    }}
    __PVT__aquila_core__DOT__D_Cache__DOT__victim_sel = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    { int __Vi1=0; for (; __Vi1<4; ++__Vi1) {
		    __PVT__aquila_core__DOT__D_Cache__DOT__VALID_[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
	    }}
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    { int __Vi1=0; for (; __Vi1<4; ++__Vi1) {
		    __PVT__aquila_core__DOT__D_Cache__DOT__DIRTY_[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
	    }}
    }}
    VL_RAND_RESET_W(256,__PVT__aquila_core__DOT__D_Cache__DOT__m_data);
    __PVT__aquila_core__DOT__D_Cache__DOT__idx = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__D_Cache__DOT__jdx = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__D_Cache__DOT__fromCache = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__D_Cache__DOT__fromMem = VL_RAND_RESET_I(32);
    __PVT__aquila_core__DOT__D_Cache__DOT__update_data = VL_RAND_RESET_I(32);
    aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__TAG_BRAM__data_o = VL_RAND_RESET_I(22);
    VL_RAND_RESET_W(256,aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o);
    aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__TAG_BRAM__data_o = VL_RAND_RESET_I(22);
    VL_RAND_RESET_W(256,aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o);
    aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__TAG_BRAM__data_o = VL_RAND_RESET_I(22);
    VL_RAND_RESET_W(256,aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o);
    aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__TAG_BRAM__data_o = VL_RAND_RESET_I(22);
    VL_RAND_RESET_W(256,aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    __PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[__Vi0] = VL_RAND_RESET_I(22);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    VL_RAND_RESET_W(256,__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[__Vi0]);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    __PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[__Vi0] = VL_RAND_RESET_I(22);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    VL_RAND_RESET_W(256,__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[__Vi0]);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    __PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[__Vi0] = VL_RAND_RESET_I(22);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    VL_RAND_RESET_W(256,__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[__Vi0]);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    __PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[__Vi0] = VL_RAND_RESET_I(22);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    VL_RAND_RESET_W(256,__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[__Vi0]);
    }}
    __PVT__mock_uart_0__DOT__cur_state = VL_RAND_RESET_I(2);
    __PVT__mock_uart_0__DOT__next_state = VL_RAND_RESET_I(2);
    __PVT__mock_uart_0__DOT__uart_tx_fifo = VL_RAND_RESET_I(8);
    __PVT__mock_uart_0__DOT__uart_rx_fifo = VL_RAND_RESET_I(8);
    __PVT__mock_uart_0__DOT__uart_status = VL_RAND_RESET_I(8);
    __PVT__mock_uart_0__DOT__uart_tx_push = VL_RAND_RESET_I(1);
    __PVT__mock_uart_0__DOT__uart_rx_pop = VL_RAND_RESET_I(1);
    __PVT__mock_uart_0__DOT__uart_tx_fifo_full = VL_RAND_RESET_I(1);
    __PVT__mock_uart_0__DOT__uart_tx_fifo_empty = VL_RAND_RESET_I(1);
    __PVT__mock_uart_0__DOT__uart_rx_fifo_full = VL_RAND_RESET_I(1);
    __PVT__mock_uart_0__DOT__uart_rx_fifo_valid = VL_RAND_RESET_I(1);
    __PVT__mock_uart_0__DOT__transmit_counter = VL_RAND_RESET_I(8);
    __PVT__mock_uart_0__DOT__read_counter = VL_RAND_RESET_I(8);
    __PVT__mock_uart_0__DOT__write_counter = VL_RAND_RESET_I(8);
    __Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__abs__0__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__abs__0__num = VL_RAND_RESET_I(32);
    __Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__1__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__1__num = VL_RAND_RESET_I(32);
    __Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__abs__2__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__abs__2__num = VL_RAND_RESET_I(32);
    __Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__3__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__3__num = VL_RAND_RESET_I(32);
    __Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__4__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__twos__4__num = VL_RAND_RESET_I(32);
    __Vtableidx1 = VL_RAND_RESET_I(5);
    __Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt[0] = 1U;
    __Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt[1] = 2U;
    __Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt[2] = 2U;
    __Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt[3] = 3U;
    __Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt[4] = 1U;
    __Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt[5] = 1U;
    __Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt[6] = 2U;
    __Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt[7] = 3U;
    __Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt[8] = 1U;
    __Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt[9] = 1U;
    __Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt[10] = 2U;
    __Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt[11] = 3U;
    __Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt[12] = 1U;
    __Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt[13] = 1U;
    __Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt[14] = 2U;
    __Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt[15] = 3U;
    __Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt[16] = 1U;
    __Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt[17] = 1U;
    __Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt[18] = 1U;
    __Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt[19] = 3U;
    __Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt[20] = 1U;
    __Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt[21] = 1U;
    __Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt[22] = 1U;
    __Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt[23] = 3U;
    __Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt[24] = 1U;
    __Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt[25] = 1U;
    __Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt[26] = 1U;
    __Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt[27] = 3U;
    __Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt[28] = 1U;
    __Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt[29] = 1U;
    __Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt[30] = 1U;
    __Vtable1___PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt[31] = 3U;
    __Vtableidx2 = VL_RAND_RESET_I(6);
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[0] = 0U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[1] = 1U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[2] = 3U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[3] = 0U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[4] = 0U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[5] = 2U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[6] = 3U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[7] = 0U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[8] = 1U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[9] = 1U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[10] = 3U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[11] = 0U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[12] = 1U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[13] = 2U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[14] = 3U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[15] = 0U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[16] = 0U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[17] = 1U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[18] = 3U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[19] = 0U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[20] = 0U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[21] = 2U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[22] = 3U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[23] = 0U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[24] = 3U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[25] = 1U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[26] = 3U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[27] = 0U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[28] = 3U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[29] = 2U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[30] = 3U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[31] = 0U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[32] = 0U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[33] = 1U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[34] = 3U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[35] = 0U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[36] = 0U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[37] = 2U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[38] = 3U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[39] = 0U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[40] = 3U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[41] = 1U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[42] = 3U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[43] = 0U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[44] = 3U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[45] = 2U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[46] = 3U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[47] = 0U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[48] = 0U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[49] = 1U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[50] = 3U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[51] = 0U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[52] = 0U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[53] = 2U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[54] = 3U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[55] = 0U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[56] = 3U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[57] = 1U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[58] = 3U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[59] = 0U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[60] = 3U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[61] = 2U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[62] = 3U;
    __Vtable2___PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt[63] = 0U;
    __Vtableidx3 = VL_RAND_RESET_I(5);
    __Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt[0] = 0U;
    __Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt[1] = 2U;
    __Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt[2] = 2U;
    __Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt[3] = 1U;
    __Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt[4] = 1U;
    __Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt[5] = 2U;
    __Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt[6] = 2U;
    __Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt[7] = 1U;
    __Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt[8] = 0U;
    __Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt[9] = 1U;
    __Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt[10] = 2U;
    __Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt[11] = 1U;
    __Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt[12] = 1U;
    __Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt[13] = 1U;
    __Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt[14] = 2U;
    __Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt[15] = 1U;
    __Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt[16] = 0U;
    __Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt[17] = 2U;
    __Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt[18] = 3U;
    __Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt[19] = 1U;
    __Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt[20] = 1U;
    __Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt[21] = 2U;
    __Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt[22] = 3U;
    __Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt[23] = 1U;
    __Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt[24] = 0U;
    __Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt[25] = 1U;
    __Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt[26] = 3U;
    __Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt[27] = 1U;
    __Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt[28] = 1U;
    __Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt[29] = 1U;
    __Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt[30] = 3U;
    __Vtable3___PVT__aquila_core__DOT__I_Cache__DOT__S_nxt[31] = 1U;
    __Vtableidx4 = VL_RAND_RESET_I(6);
    __Vtable4___PVT__mock_uart_0__DOT__next_state[0] = 0U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[1] = 1U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[2] = 2U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[3] = 0U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[4] = 0U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[5] = 1U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[6] = 3U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[7] = 0U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[8] = 0U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[9] = 3U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[10] = 2U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[11] = 0U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[12] = 0U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[13] = 3U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[14] = 3U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[15] = 0U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[16] = 1U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[17] = 1U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[18] = 2U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[19] = 0U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[20] = 1U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[21] = 1U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[22] = 3U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[23] = 0U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[24] = 1U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[25] = 3U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[26] = 2U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[27] = 0U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[28] = 1U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[29] = 3U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[30] = 3U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[31] = 0U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[32] = 0U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[33] = 1U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[34] = 2U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[35] = 0U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[36] = 0U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[37] = 1U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[38] = 3U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[39] = 0U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[40] = 0U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[41] = 3U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[42] = 2U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[43] = 0U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[44] = 0U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[45] = 3U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[46] = 3U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[47] = 0U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[48] = 2U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[49] = 1U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[50] = 2U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[51] = 0U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[52] = 2U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[53] = 1U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[54] = 3U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[55] = 0U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[56] = 2U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[57] = 3U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[58] = 2U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[59] = 0U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[60] = 2U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[61] = 3U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[62] = 3U;
    __Vtable4___PVT__mock_uart_0__DOT__next_state[63] = 0U;
    __Vdly__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r = VL_RAND_RESET_I(32);
}
