// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vaquila_testharness__Syms.h"


//======================

void Vaquila_testharness::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vaquila_testharness* t=(Vaquila_testharness*)userthis;
    Vaquila_testharness__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vaquila_testharness::traceChgThis(Vaquila_testharness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vaquila_testharness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vaquila_testharness::traceChgThis__2(Vaquila_testharness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vaquila_testharness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1,(vlSymsp->TOP__aquila_testharness.__Vcellinp__aquila_core__rst));
	vcdp->chgBus(c+2,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__i),32);
	vcdp->chgBus(c+3,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__i),32);
    }
}

void Vaquila_testharness::traceChgThis__3(Vaquila_testharness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vaquila_testharness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp16,255,0,8);
    VL_SIGW(__Vtemp17,255,0,8);
    VL_SIGW(__Vtemp18,255,0,8);
    VL_SIGW(__Vtemp19,255,0,8);
    VL_SIGW(__Vtemp20,255,0,8);
    VL_SIGW(__Vtemp21,255,0,8);
    VL_SIGW(__Vtemp22,255,0,8);
    // Body
    {
	vcdp->chgArray(c+4,(vlSymsp->TOP__aquila_testharness.__PVT__M_DCACHE_dataout),256);
	vcdp->chgBit(c+12,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_d_strobe) 
			    & (1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel)))));
	vcdp->chgBus(c+13,(vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_addr),32);
	vcdp->chgBit(c+14,(vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_rw));
	vcdp->chgBus(c+15,(vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_core2dev_data),32);
	vcdp->chgBus(c+16,(((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel))
			     ? vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_dev2core_data
			     : ((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel))
				 ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__clint_mem_data
				 : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_d_dout))),32);
	vcdp->chgBus(c+17,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel),2);
	vcdp->chgBit(c+18,((1U & ((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel))
				   ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_data_ready)
				   : ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel))
				       ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_d_ready)
				       : 1U)))));
	vcdp->chgBit(c+19,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_i_ready));
	VL_EXTEND_WI(256,32, __Vtemp16, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
	VL_EXTEND_WI(256,32, __Vtemp17, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
	VL_EXTEND_WI(256,32, __Vtemp18, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
	VL_EXTEND_WI(256,32, __Vtemp19, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
	VL_EXTEND_WI(256,32, __Vtemp20, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
	VL_EXTEND_WI(256,32, __Vtemp21, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
	VL_EXTEND_WI(256,32, __Vtemp22, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
	vcdp->chgBus(c+20,((((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__S)) 
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
					     : __Vtemp16[1U])
					 : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
					     ? __Vtemp17[2U]
					     : __Vtemp18[3U]))
				     : ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
					 ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
					     ? __Vtemp19[4U]
					     : __Vtemp20[5U])
					 : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
					     ? __Vtemp21[6U]
					     : __Vtemp22[7U])))
				 : 0U))),32);
	vcdp->chgBus(c+21,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__data_o),32);
	vcdp->chgBit(c+22,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__tmr_irq));
	vcdp->chgBit(c+23,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__sys_jump));
	vcdp->chgBus(c+24,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__sys_jump_csr_addr),12);
	vcdp->chgBus(c+25,(((0x341U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__sys_jump_csr_addr))
			     ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mepc_r
			     : ((0x305U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__sys_jump_csr_addr))
				 ? (0xfffffffcU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mtvec_r)
				 : 0U))),32);
	vcdp->chgBit(c+26,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Pipeline_Control__DOT__branch_flush) 
			    | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__sys_jump))));
	vcdp->chgBit(c+27,((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Pipeline_Control__DOT__branch_flush) 
			     | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Pipeline_Control__DOT__is_load_use)) 
			    | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_miscmem) 
				& ((0U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						 >> 0xcU))) 
				   | (1U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						   >> 0xcU))))) 
			       | ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_sys_op) 
				  & (1U == (0xfffU 
					    & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					       >> 0x14U))))))));
	vcdp->chgBit(c+28,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Pipeline_Control__DOT__is_load_use));
	vcdp->chgBus(c+29,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data),32);
	vcdp->chgBus(c+30,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data),32);
	vcdp->chgBus(c+31,((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__we) 
			     & ((0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					  >> 0xfU)) 
				== (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r)))
			     ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_data
			     : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf
			    [(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
				       >> 0xfU))])),32);
	vcdp->chgBus(c+32,((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__we) 
			     & ((0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					  >> 0x14U)) 
				== (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r)))
			     ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_data
			     : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf
			    [(0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
				       >> 0x14U))])),32);
	vcdp->chgBit(c+33,((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_miscmem) 
			     & ((0U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					      >> 0xcU))) 
				| (1U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						>> 0xcU))))) 
			    | ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_sys_op) 
			       & (1U == (0xfffU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						   >> 0x14U)))))));
	vcdp->chgBit(c+34,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_branch_taken));
	vcdp->chgBus(c+35,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_result),32);
	vcdp->chgBus(c+36,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__csr_data),32);
	vcdp->chgBus(c+37,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_data),32);
	vcdp->chgBit(c+38,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_IF));
	vcdp->chgBit(c+39,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_result_IF));
	vcdp->chgBit(c+40,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__uncond_branch_hit_IF));
	vcdp->chgBit(c+41,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_misprediction));
	vcdp->chgBus(c+42,((VL_NEGATE_I((IData)((0U 
						 != vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF))) 
			    & ((0x17U >= (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__read_addr))
			        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table
			       [vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__read_addr]
			        : 0U))),32);
	vcdp->chgBus(c+43,((VL_NEGATE_I((IData)((0U 
						 != vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF))) 
			    & ((0x13U >= (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__read_addr))
			        ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table
			       [vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__read_addr]
			        : 0U))),32);
	vcdp->chgBit(c+44,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__irq_taken));
	vcdp->chgBus(c+45,(((0U == (3U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mtvec_r))
			     ? (0xfffffffcU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mtvec_r)
			     : ((0xfffffffcU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mtvec_r) 
				+ (0xfffffffcU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__irq_cause 
						  << 2U))))),32);
	vcdp->chgBus(c+46,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS_nxt),2);
	vcdp->chgBus(c+47,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dS_nxt),2);
	vcdp->chgBit(c+48,((1U & (~ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_i_ready)))));
	vcdp->chgBit(c+49,((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dS_nxt))));
	vcdp->chgBit(c+50,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline));
	vcdp->chgBit(c+51,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Pipeline_Control__DOT__branch_flush));
	vcdp->chgBit(c+52,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__we));
	vcdp->chgBus(c+53,(((0x17U >= (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__read_addr))
			     ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table
			    [vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__read_addr]
			     : 0U)),32);
	vcdp->chgBus(c+54,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_IF),24);
	vcdp->chgBus(c+55,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__addr_hit_EXE),24);
	vcdp->chgBus(c+56,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__read_addr),5);
	vcdp->chgBus(c+57,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__update_addr),5);
	vcdp->chgBus(c+58,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[0]),32);
	vcdp->chgBus(c+59,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[1]),32);
	vcdp->chgBus(c+60,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[2]),32);
	vcdp->chgBus(c+61,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[3]),32);
	vcdp->chgBus(c+62,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[4]),32);
	vcdp->chgBus(c+63,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[5]),32);
	vcdp->chgBus(c+64,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[6]),32);
	vcdp->chgBus(c+65,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[7]),32);
	vcdp->chgBus(c+66,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[8]),32);
	vcdp->chgBus(c+67,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[9]),32);
	vcdp->chgBus(c+68,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[10]),32);
	vcdp->chgBus(c+69,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[11]),32);
	vcdp->chgBus(c+70,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[12]),32);
	vcdp->chgBus(c+71,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[13]),32);
	vcdp->chgBus(c+72,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[14]),32);
	vcdp->chgBus(c+73,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[15]),32);
	vcdp->chgBus(c+74,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[16]),32);
	vcdp->chgBus(c+75,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[17]),32);
	vcdp->chgBus(c+76,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[18]),32);
	vcdp->chgBus(c+77,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[19]),32);
	vcdp->chgBus(c+78,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[20]),32);
	vcdp->chgBus(c+79,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[21]),32);
	vcdp->chgBus(c+80,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[22]),32);
	vcdp->chgBus(c+81,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__BPU_distri_ram_0__DOT__history_table[23]),32);
	vcdp->chgBit(c+82,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__we));
	vcdp->chgBus(c+83,(((0x13U >= (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__read_addr))
			     ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table
			    [vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__read_addr]
			     : 0U)),32);
	vcdp->chgBus(c+84,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_IF),20);
	vcdp->chgBus(c+85,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__addr_hit_EXE),20);
	vcdp->chgBus(c+86,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__read_addr),5);
	vcdp->chgBus(c+87,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[0]),32);
	vcdp->chgBus(c+88,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[1]),32);
	vcdp->chgBus(c+89,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[2]),32);
	vcdp->chgBus(c+90,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[3]),32);
	vcdp->chgBus(c+91,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[4]),32);
	vcdp->chgBus(c+92,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[5]),32);
	vcdp->chgBus(c+93,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[6]),32);
	vcdp->chgBus(c+94,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[7]),32);
	vcdp->chgBus(c+95,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[8]),32);
	vcdp->chgBus(c+96,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[9]),32);
	vcdp->chgBus(c+97,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[10]),32);
	vcdp->chgBus(c+98,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[11]),32);
	vcdp->chgBus(c+99,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[12]),32);
	vcdp->chgBus(c+100,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[13]),32);
	vcdp->chgBus(c+101,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[14]),32);
	vcdp->chgBus(c+102,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[15]),32);
	vcdp->chgBus(c+103,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[16]),32);
	vcdp->chgBus(c+104,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[17]),32);
	vcdp->chgBus(c+105,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[18]),32);
	vcdp->chgBus(c+106,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_BHT_distri_ram_0__DOT__history_table[19]),32);
	vcdp->chgBit(c+107,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__we));
	vcdp->chgBit(c+108,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__stall_pipeline) 
			     | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Pipeline_Control__DOT__is_load_use))));
	vcdp->chgBit(c+109,(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Fetch__stall));
	vcdp->chgBit(c+110,(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Fetch__flush));
	vcdp->chgBit(c+111,(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__RISCV_CORE0__DOT____Vcellinp__Decode__flush));
	vcdp->chgBus(c+112,((((((VL_NEGATE_I((IData)(
						     (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_op_imm) 
						       | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_jalr)) 
						      | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_load)))) 
				 & ((0xfffff800U & 
				     (VL_NEGATE_I((IData)(
							  (1U 
							   & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
							      >> 0x1fU)))) 
				      << 0xbU)) | (0x7ffU 
						   & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
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
					 | (0x1fU & 
					    (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					     >> 7U)))))) 
			       | (VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_branch))) 
				  & ((0xfffff000U & 
				      (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
							       >> 0x1fU)))) 
				       << 0xcU)) | 
				     ((0x800U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						 << 4U)) 
				      | ((0x7e0U & 
					  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					   >> 0x14U)) 
					 | (0x1eU & 
					    (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					     >> 7U))))))) 
			      | (0xfffff000U & (VL_NEGATE_I((IData)(
								    ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_lui) 
								     | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_auipc)))) 
						& vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec))) 
			     | (VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_jal))) 
				& ((0xfff00000U & (
						   VL_NEGATE_I((IData)(
								       (1U 
									& (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
									   >> 0x1fU)))) 
						   << 0x14U)) 
				   | ((0xff000U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec) 
				      | ((0x800U & 
					  (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					   >> 9U)) 
					 | ((0x7e0U 
					     & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						>> 0x14U)) 
					    | (0x1eU 
					       & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						  >> 0x14U))))))))),32);
	vcdp->chgBit(c+113,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_store));
	vcdp->chgBit(c+114,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_load) 
			     | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_amo))));
	vcdp->chgBit(c+115,((((((((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_lui) 
				    | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_auipc)) 
				   | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_load)) 
				  | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_op_imm)) 
				 | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_op)) 
				| (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_csr)) 
			       | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_amo)) 
			      | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_jal)) 
			     | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_jalr))));
	vcdp->chgBus(c+116,(((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_auipc) 
			       | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_jal)) 
			      | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_branch))
			      ? 1U : (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_lui) 
				       | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_store))
				       ? 0U : 2U))),2);
	vcdp->chgBus(c+117,(((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_op) 
			       & (0U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					       >> 0xcU)))) 
			      & (0x20U == (0x7fU & 
					   (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					    >> 0x19U))))
			      ? 2U : ((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_store) 
					| (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_op)) 
				       | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_amo))
				       ? 1U : 0U))),2);
	vcdp->chgBus(c+118,((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_load) 
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
					        : (
						   ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_jal) 
						    | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_jalr))
						    ? 3U
						    : 
						   ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_csr)
						     ? 5U
						     : 4U)))))),3);
	vcdp->chgBus(c+119,((7U & (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_lui) 
				    | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_auipc))
				    ? 0U : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					    >> 0xcU)))),3);
	vcdp->chgBit(c+120,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_op) 
			     & (1U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						>> 0x19U))))));
	vcdp->chgBit(c+121,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_branch));
	vcdp->chgBit(c+122,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_jal));
	vcdp->chgBit(c+123,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_jalr));
	vcdp->chgBit(c+124,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_csr));
	vcdp->chgBit(c+125,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_op));
	vcdp->chgBit(c+126,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_op_imm));
	vcdp->chgBit(c+127,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_load));
	vcdp->chgBit(c+128,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_lui));
	vcdp->chgBit(c+129,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_auipc));
	vcdp->chgBit(c+130,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_miscmem));
	vcdp->chgBit(c+131,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_system));
	vcdp->chgBit(c+132,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_amo));
	vcdp->chgBit(c+133,((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_op_imm) 
			      | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_jalr)) 
			     | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_load))));
	vcdp->chgBit(c+134,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_lui) 
			     | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_auipc))));
	vcdp->chgBit(c+135,((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_op) 
			      & (0U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					      >> 0xcU)))) 
			     & (0x20U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						   >> 0x19U))))));
	vcdp->chgBit(c+136,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_branch) 
			     & (0U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					     >> 0xcU))))));
	vcdp->chgBit(c+137,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_branch) 
			     & (1U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					     >> 0xcU))))));
	vcdp->chgBit(c+138,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_branch) 
			     & (4U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					     >> 0xcU))))));
	vcdp->chgBit(c+139,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_branch) 
			     & (5U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					     >> 0xcU))))));
	vcdp->chgBit(c+140,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_branch) 
			     & (6U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					     >> 0xcU))))));
	vcdp->chgBit(c+141,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_branch) 
			     & (7U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					     >> 0xcU))))));
	vcdp->chgBit(c+142,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_miscmem) 
			     & (0U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					     >> 0xcU))))));
	vcdp->chgBit(c+143,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_miscmem) 
			     & (1U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					     >> 0xcU))))));
	vcdp->chgBit(c+144,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_system) 
			     & (1U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					     >> 0xcU))))));
	vcdp->chgBit(c+145,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_system) 
			     & (2U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					     >> 0xcU))))));
	vcdp->chgBit(c+146,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_system) 
			     & (3U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					     >> 0xcU))))));
	vcdp->chgBit(c+147,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_system) 
			     & (5U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					     >> 0xcU))))));
	vcdp->chgBit(c+148,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_system) 
			     & (6U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					     >> 0xcU))))));
	vcdp->chgBit(c+149,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_system) 
			     & (7U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					     >> 0xcU))))));
	vcdp->chgBit(c+150,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_sys_op));
	vcdp->chgBit(c+151,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_ecall));
	vcdp->chgBit(c+152,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_sys_op) 
			     & (1U == (0xfffU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						 >> 0x14U))))));
	vcdp->chgBit(c+153,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_mret));
	vcdp->chgBit(c+154,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_load) 
			     & (0U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					     >> 0xcU))))));
	vcdp->chgBit(c+155,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_load) 
			     & (1U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					     >> 0xcU))))));
	vcdp->chgBit(c+156,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_load) 
			     & (2U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					     >> 0xcU))))));
	vcdp->chgBit(c+157,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_load) 
			     & (4U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					     >> 0xcU))))));
	vcdp->chgBit(c+158,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_load) 
			     & (5U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					     >> 0xcU))))));
	vcdp->chgBit(c+159,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_store) 
			     & (0U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					     >> 0xcU))))));
	vcdp->chgBit(c+160,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_store) 
			     & (1U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					     >> 0xcU))))));
	vcdp->chgBit(c+161,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Decode__DOT__rv32_store) 
			     & (2U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					     >> 0xcU))))));
	vcdp->chgBus(c+162,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA),32);
	vcdp->chgBus(c+163,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB),32);
	vcdp->chgBit(c+164,((((((((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)) 
				  & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data 
				      == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data)
				      ? 1U : 0U)) | 
				 ((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)) 
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
				     ? 1U : 0U))) | 
			     ((7U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe)) 
			      & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data 
				  >= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data)
				  ? 1U : 0U)))));
	vcdp->chgBus(c+165,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__alu_muldiv_sel2exe)
			      ? vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_result
			      : vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_result)),32);
	vcdp->chgBus(c+166,((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data 
			     + vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_imm2exe)),32);
	vcdp->chgBus(c+167,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation),3);
	vcdp->chgBit(c+168,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_req));
	vcdp->chgBus(c+169,((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
			     + vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB)),32);
	vcdp->chgBus(c+170,((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
			     << (0x1fU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB))),32);
	vcdp->chgBus(c+171,((VL_LTS_III(1,32,32, vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA, vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB)
			      ? 1U : 0U)),32);
	vcdp->chgBus(c+172,(((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
			      < vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB)
			      ? 1U : 0U)),32);
	vcdp->chgBus(c+173,((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
			     ^ vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB)),32);
	vcdp->chgBus(c+174,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__shift_sel2exe)
			      ? (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
				 >> (0x1fU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB))
			      : (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
				 >> (0x1fU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB)))),32);
	vcdp->chgBus(c+175,((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
			     | vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB)),32);
	vcdp->chgBus(c+176,((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA 
			     & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB)),32);
	vcdp->chgBit(c+177,((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation))));
	vcdp->chgBit(c+178,((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation))));
	vcdp->chgBit(c+179,((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation))));
	vcdp->chgBit(c+180,((3U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation))));
	vcdp->chgBit(c+181,((4U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation))));
	vcdp->chgBit(c+182,((5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation))));
	vcdp->chgBit(c+183,((6U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation))));
	vcdp->chgBit(c+184,((7U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__alu_operation))));
	vcdp->chgBit(c+185,((0U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA)));
	vcdp->chgBit(c+186,((0U == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputB)));
	vcdp->chgBit(c+187,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__is_a_neg));
	vcdp->chgBit(c+188,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__is_b_neg));
	vcdp->chgBit(c+189,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__signed_adjust));
	vcdp->chgBit(c+190,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__is_a_neg) 
			     & (0U == (0x7fffffffU 
				       & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__inputA)))));
	vcdp->chgBus(c+191,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__op_a),32);
	vcdp->chgBus(c+192,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__op_b),32);
	vcdp->chgBus(c+193,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S_nxt),2);
	vcdp->chgQuad(c+194,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__adder_opa),33);
	vcdp->chgQuad(c+196,((VL_ULL(0x1ffffffff) & 
			      (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__adder_opa 
			       + (QData)((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U]))))),33);
	vcdp->chgArray(c+198,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result_tmp),65);
	vcdp->chgBit(c+201,((1U & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data 
				    == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data)
				    ? 1U : 0U))));
	vcdp->chgBit(c+202,((1U & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data 
				    != vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data)
				    ? 1U : 0U))));
	vcdp->chgBit(c+203,((1U & (VL_LTS_III(1,32,32, vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data, vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data)
				    ? 1U : 0U))));
	vcdp->chgBit(c+204,((1U & (VL_GTES_III(1,32,32, vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data, vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data)
				    ? 1U : 0U))));
	vcdp->chgBit(c+205,((1U & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data 
				    < vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data)
				    ? 1U : 0U))));
	vcdp->chgBit(c+206,((1U & ((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs1_data 
				    >= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Forwarding_Unit__DOT__correct_rs2_data)
				    ? 1U : 0U))));
	vcdp->chgBus(c+207,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__aligned_data_o),32);
	vcdp->chgBus(c+208,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus),32);
	vcdp->chgBus(c+209,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie),32);
	vcdp->chgBus(c+210,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__irq_cause),32);
	vcdp->chgBus(c+211,((0x7fffffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__irq_cause)),31);
	vcdp->chgBus(c+212,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mip),32);
	vcdp->chgBit(c+213,((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__tmr_irq) 
			      & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_mtie_r)) 
			     | ((0U != vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem
				 [4U]) & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_msie_r)))));
	vcdp->chgBit(c+214,((0x341U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__sys_jump_csr_addr))));
	vcdp->chgBit(c+215,((0x305U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__sys_jump_csr_addr))));
	vcdp->chgBus(c+216,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__csr_inputB),32);
	vcdp->chgBus(c+217,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__updated_csr_data),32);
	vcdp->chgBit(c+218,((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel))));
	vcdp->chgBit(c+219,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_we) 
			     & (2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel)))));
	vcdp->chgBit(c+220,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit[0]));
	vcdp->chgBit(c+221,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit[1]));
	vcdp->chgBit(c+222,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit[2]));
	vcdp->chgBit(c+223,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__way_hit[3]));
	vcdp->chgBit(c+224,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_hit));
	vcdp->chgArray(c+225,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[0]),256);
	vcdp->chgArray(c+233,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[1]),256);
	vcdp->chgArray(c+241,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[2]),256);
	vcdp->chgArray(c+249,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr_o[3]),256);
	vcdp->chgArray(c+257,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__c_instr),256);
	vcdp->chgBit(c+265,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write[0]));
	vcdp->chgBit(c+266,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write[1]));
	vcdp->chgBit(c+267,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write[2]));
	vcdp->chgBit(c+268,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write[3]));
	vcdp->chgBus(c+269,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__S_nxt),2);
	vcdp->chgBus(c+270,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__idx),32);
	vcdp->chgBus(c+271,(((0x10U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
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
	vcdp->chgBit(c+272,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write
			    [0U]));
	vcdp->chgBit(c+273,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write
			    [1U]));
	vcdp->chgBit(c+274,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write
			    [2U]));
	vcdp->chgBit(c+275,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__cache_write
			    [3U]));
	vcdp->chgBit(c+276,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_d_strobe) 
			     & (0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel)))));
	vcdp->chgBit(c+277,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_we) 
			     & (0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel)))));
	vcdp->chgBus(c+278,((7U & ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
				    ? (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_d_strobe) 
					& (0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__mem_sel)))
				        ? 1U : 0U) : 
				   ((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S))
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
					      : 0U))))))),3);
	vcdp->chgBus(c+279,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_tag_o[0]),22);
	vcdp->chgBus(c+280,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_tag_o[1]),22);
	vcdp->chgBus(c+281,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_tag_o[2]),22);
	vcdp->chgBus(c+282,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_tag_o[3]),22);
	vcdp->chgBit(c+283,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit[0]));
	vcdp->chgBit(c+284,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit[1]));
	vcdp->chgBit(c+285,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit[2]));
	vcdp->chgBit(c+286,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__way_hit[3]));
	vcdp->chgBit(c+287,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_hit));
	vcdp->chgArray(c+288,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[0]),256);
	vcdp->chgArray(c+296,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[1]),256);
	vcdp->chgArray(c+304,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[2]),256);
	vcdp->chgArray(c+312,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_o[3]),256);
	vcdp->chgArray(c+320,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data),256);
	vcdp->chgBus(c+328,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromCache),32);
	vcdp->chgBus(c+329,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__fromMem),32);
	vcdp->chgBus(c+330,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__update_data),32);
	vcdp->chgBus(c+331,(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__next_state),2);
	vcdp->chgBus(c+332,(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_status),8);
	vcdp->chgBit(c+333,(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_tx_push));
	vcdp->chgBit(c+334,(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_rx_pop));
	vcdp->chgBus(c+335,(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__dcache_next_state),2);
    }
}

void Vaquila_testharness::traceChgThis__4(Vaquila_testharness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vaquila_testharness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp23,255,0,8);
    VL_SIGW(__Vtemp24,255,0,8);
    VL_SIGW(__Vtemp25,255,0,8);
    VL_SIGW(__Vtemp26,255,0,8);
    VL_SIGW(__Vtemp27,255,0,8);
    VL_SIGW(__Vtemp28,255,0,8);
    VL_SIGW(__Vtemp29,255,0,8);
    VL_SIGW(__Vtemp30,255,0,8);
    // Body
    {
	vcdp->chgBit(c+336,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__i_m_strobe));
	vcdp->chgBit(c+337,(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_icache_o));
	vcdp->chgBit(c+338,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_strobe));
	vcdp->chgBit(c+339,(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_dcache_o));
	vcdp->chgBit(c+340,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_rw));
	vcdp->chgBus(c+341,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__i_m_addr),32);
	vcdp->chgBus(c+342,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_addr),32);
	VL_EXTEND_WI(256,32, __Vtemp23, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
	vcdp->chgArray(c+343,(__Vtemp23),256);
	vcdp->chgBus(c+351,(((2U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			      ? ((1U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
				  ? ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
				      ? 8U : 0U) : 
				 ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
				   ? 4U : ((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
					    ? 0xcU : 0U)))
			      : ((1U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
				  ? ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
				      ? 2U : 0U) : 
				 ((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
				   ? 1U : ((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
					    ? 3U : 
					   ((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
					     ? 0xfU
					     : 0U)))))),4);
	vcdp->chgBus(c+352,(vlSymsp->TOP__aquila_testharness.__PVT__M_DEVICE_dev2core_data),32);
	vcdp->chgBit(c+353,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_we));
	vcdp->chgBus(c+354,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r),32);
	vcdp->chgBus(c+355,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem),32);
	vcdp->chgBit(c+356,((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS))));
	vcdp->chgBit(c+357,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_d_strobe));
	vcdp->chgBit(c+358,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_d_ready));
	vcdp->chgBus(c+359,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__p_d_dout),32);
	vcdp->chgArray(c+360,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_din),256);
	vcdp->chgBit(c+368,((0U != vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem
			     [4U])));
	vcdp->chgBus(c+369,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__clint_mem_data),32);
	vcdp->chgBus(c+370,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec),32);
	vcdp->chgBus(c+371,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_pc2dec),32);
	vcdp->chgBit(c+372,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_valid2dec));
	vcdp->chgBus(c+373,((0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
				      >> 0xfU))),5);
	vcdp->chgBus(c+374,((0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
				      >> 0x14U))),5);
	vcdp->chgBus(c+375,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe),32);
	vcdp->chgBus(c+376,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_imm2exe),32);
	vcdp->chgBus(c+377,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs1_data2fwd),32);
	vcdp->chgBus(c+378,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs2_data2fwd),32);
	vcdp->chgBit(c+379,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_regfile_we2exe));
	vcdp->chgBit(c+380,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_we2exe));
	vcdp->chgBit(c+381,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_re2exe));
	vcdp->chgBit(c+382,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_load_ext_sel2exe));
	vcdp->chgBit(c+383,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_instr_valid2csr));
	vcdp->chgBus(c+384,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rd_addr2exe),5);
	vcdp->chgBus(c+385,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs1_addr2fwd),5);
	vcdp->chgBus(c+386,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs2_addr2fwd),5);
	vcdp->chgBus(c+387,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_imm2csr),5);
	vcdp->chgBus(c+388,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_inA_sel2exe),2);
	vcdp->chgBus(c+389,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_inB_sel2exe),2);
	vcdp->chgBus(c+390,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_input_sel2exe),2);
	vcdp->chgBus(c+391,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_regfile_sel2exe),3);
	vcdp->chgBus(c+392,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe),3);
	vcdp->chgBus(c+393,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_csr_addr2csr),12);
	vcdp->chgBit(c+394,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__alu_muldiv_sel2exe));
	vcdp->chgBit(c+395,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__shift_sel2exe));
	vcdp->chgBit(c+396,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_branch2exe));
	vcdp->chgBit(c+397,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_jal2exe));
	vcdp->chgBit(c+398,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_jalr2exe));
	vcdp->chgBit(c+399,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__is_csr_instr2csr));
	vcdp->chgBit(c+400,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__alu_muldiv_sel2exe) 
			     & (~ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_ready)))));
	vcdp->chgBus(c+401,(((IData)(4U) + vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_pc2exe)),32);
	vcdp->chgBit(c+402,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_re));
	vcdp->chgBit(c+403,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_regfile_we2mem_wb));
	vcdp->chgBit(c+404,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_load_ext_sel2mem_wb));
	vcdp->chgBus(c+405,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rs2_data2mem),32);
	vcdp->chgBus(c+406,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_p_data),32);
	vcdp->chgBus(c+407,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rd_addr2mem_wb),5);
	vcdp->chgBus(c+408,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem),2);
	vcdp->chgBus(c+409,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_regfile_input_sel2mem_wb),3);
	vcdp->chgBit(c+410,(((2U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
			      ? ((1U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
				  ? (0U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
				  : ((0U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem)) 
				     & (1U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))))
			      : ((1U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)
				  ? (0U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))
				  : ((0U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem)) 
				     & ((1U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem)) 
					& (2U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_input_sel2mem))))))));
	vcdp->chgBit(c+411,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__regfile_we_r));
	vcdp->chgBus(c+412,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r),5);
	vcdp->chgBit(c+413,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_ID));
	vcdp->chgBit(c+414,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_hit_EXE));
	vcdp->chgBit(c+415,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_result_ID));
	vcdp->chgBit(c+416,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__cond_branch_result_EXE));
	vcdp->chgBit(c+417,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__uncond_branch_hit_ID));
	vcdp->chgBit(c+418,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__uncond_branch_hit_EXE));
	vcdp->chgBus(c+419,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__iS),2);
	vcdp->chgBus(c+420,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dS),2);
	vcdp->chgBit(c+421,(((0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
				       >> 0xfU)) == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rd_addr2exe))));
	vcdp->chgBit(c+422,(((0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
				       >> 0x14U)) == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rd_addr2exe))));
	vcdp->chgBit(c+423,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs1_addr2fwd) 
			     == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rd_addr2mem_wb))));
	vcdp->chgBit(c+424,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs2_addr2fwd) 
			     == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rd_addr2mem_wb))));
	vcdp->chgBit(c+425,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs1_addr2fwd) 
			     == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r))));
	vcdp->chgBit(c+426,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs2_addr2fwd) 
			     == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r))));
	vcdp->chgBit(c+427,((0U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rd_addr2mem_wb))));
	vcdp->chgBit(c+428,((0U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r))));
	vcdp->chgBit(c+429,((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_regfile_we2mem_wb) 
			      & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs1_addr2fwd) 
				 == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rd_addr2mem_wb))) 
			     & (0U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rd_addr2mem_wb)))));
	vcdp->chgBit(c+430,((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_regfile_we2mem_wb) 
			      & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs2_addr2fwd) 
				 == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rd_addr2mem_wb))) 
			     & (0U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_rd_addr2mem_wb)))));
	vcdp->chgBit(c+431,((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__regfile_we_r) 
			      & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs1_addr2fwd) 
				 == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r))) 
			     & (0U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r)))));
	vcdp->chgBit(c+432,((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__regfile_we_r) 
			      & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_rs2_addr2fwd) 
				 == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r))) 
			     & (0U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__rd_addr_r)))));
	vcdp->chgBus(c+433,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__write_addr),5);
	vcdp->chgBus(c+434,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[0]),32);
	vcdp->chgBus(c+435,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[1]),32);
	vcdp->chgBus(c+436,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[2]),32);
	vcdp->chgBus(c+437,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[3]),32);
	vcdp->chgBus(c+438,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[4]),32);
	vcdp->chgBus(c+439,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[5]),32);
	vcdp->chgBus(c+440,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[6]),32);
	vcdp->chgBus(c+441,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[7]),32);
	vcdp->chgBus(c+442,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[8]),32);
	vcdp->chgBus(c+443,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[9]),32);
	vcdp->chgBus(c+444,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[10]),32);
	vcdp->chgBus(c+445,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[11]),32);
	vcdp->chgBus(c+446,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[12]),32);
	vcdp->chgBus(c+447,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[13]),32);
	vcdp->chgBus(c+448,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[14]),32);
	vcdp->chgBus(c+449,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[15]),32);
	vcdp->chgBus(c+450,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[16]),32);
	vcdp->chgBus(c+451,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[17]),32);
	vcdp->chgBus(c+452,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[18]),32);
	vcdp->chgBus(c+453,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[19]),32);
	vcdp->chgBus(c+454,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[20]),32);
	vcdp->chgBus(c+455,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[21]),32);
	vcdp->chgBus(c+456,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[22]),32);
	vcdp->chgBus(c+457,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__cond_branch_pc_table[23]),32);
	vcdp->chgBus(c+458,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[0]),2);
	vcdp->chgBus(c+459,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[1]),2);
	vcdp->chgBus(c+460,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[2]),2);
	vcdp->chgBus(c+461,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[3]),2);
	vcdp->chgBus(c+462,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[4]),2);
	vcdp->chgBus(c+463,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[5]),2);
	vcdp->chgBus(c+464,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[6]),2);
	vcdp->chgBus(c+465,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[7]),2);
	vcdp->chgBus(c+466,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[8]),2);
	vcdp->chgBus(c+467,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[9]),2);
	vcdp->chgBus(c+468,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[10]),2);
	vcdp->chgBus(c+469,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[11]),2);
	vcdp->chgBus(c+470,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[12]),2);
	vcdp->chgBus(c+471,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[13]),2);
	vcdp->chgBus(c+472,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[14]),2);
	vcdp->chgBus(c+473,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[15]),2);
	vcdp->chgBus(c+474,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[16]),2);
	vcdp->chgBus(c+475,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[17]),2);
	vcdp->chgBus(c+476,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[18]),2);
	vcdp->chgBus(c+477,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[19]),2);
	vcdp->chgBus(c+478,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[20]),2);
	vcdp->chgBus(c+479,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[21]),2);
	vcdp->chgBus(c+480,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[22]),2);
	vcdp->chgBus(c+481,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__prediction_table[23]),2);
	vcdp->chgBus(c+482,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Branch_Prediction_Unit__DOT__idx),32);
	vcdp->chgBus(c+483,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[0]),32);
	vcdp->chgBus(c+484,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[1]),32);
	vcdp->chgBus(c+485,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[2]),32);
	vcdp->chgBus(c+486,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[3]),32);
	vcdp->chgBus(c+487,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[4]),32);
	vcdp->chgBus(c+488,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[5]),32);
	vcdp->chgBus(c+489,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[6]),32);
	vcdp->chgBus(c+490,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[7]),32);
	vcdp->chgBus(c+491,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[8]),32);
	vcdp->chgBus(c+492,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[9]),32);
	vcdp->chgBus(c+493,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[10]),32);
	vcdp->chgBus(c+494,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[11]),32);
	vcdp->chgBus(c+495,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[12]),32);
	vcdp->chgBus(c+496,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[13]),32);
	vcdp->chgBus(c+497,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[14]),32);
	vcdp->chgBus(c+498,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[15]),32);
	vcdp->chgBus(c+499,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[16]),32);
	vcdp->chgBus(c+500,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[17]),32);
	vcdp->chgBus(c+501,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[18]),32);
	vcdp->chgBus(c+502,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__uncond_branch_pc_table[19]),32);
	vcdp->chgBus(c+503,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__write_addr),5);
	vcdp->chgBus(c+504,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__JAL_BHT__DOT__idx),32);
	vcdp->chgBus(c+505,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[0]),32);
	vcdp->chgBus(c+506,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[1]),32);
	vcdp->chgBus(c+507,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[2]),32);
	vcdp->chgBus(c+508,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[3]),32);
	vcdp->chgBus(c+509,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[4]),32);
	vcdp->chgBus(c+510,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[5]),32);
	vcdp->chgBus(c+511,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[6]),32);
	vcdp->chgBus(c+512,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[7]),32);
	vcdp->chgBus(c+513,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[8]),32);
	vcdp->chgBus(c+514,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[9]),32);
	vcdp->chgBus(c+515,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[10]),32);
	vcdp->chgBus(c+516,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[11]),32);
	vcdp->chgBus(c+517,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[12]),32);
	vcdp->chgBus(c+518,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[13]),32);
	vcdp->chgBus(c+519,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[14]),32);
	vcdp->chgBus(c+520,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[15]),32);
	vcdp->chgBus(c+521,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[16]),32);
	vcdp->chgBus(c+522,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[17]),32);
	vcdp->chgBus(c+523,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[18]),32);
	vcdp->chgBus(c+524,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[19]),32);
	vcdp->chgBus(c+525,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[20]),32);
	vcdp->chgBus(c+526,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[21]),32);
	vcdp->chgBus(c+527,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[22]),32);
	vcdp->chgBus(c+528,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[23]),32);
	vcdp->chgBus(c+529,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[24]),32);
	vcdp->chgBus(c+530,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[25]),32);
	vcdp->chgBus(c+531,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[26]),32);
	vcdp->chgBus(c+532,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[27]),32);
	vcdp->chgBus(c+533,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[28]),32);
	vcdp->chgBus(c+534,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[29]),32);
	vcdp->chgBus(c+535,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[30]),32);
	vcdp->chgBus(c+536,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Register_File__DOT__rf[31]),32);
	vcdp->chgBus(c+537,(((IData)(4U) + vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)),32);
	vcdp->chgBus(c+538,((0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
				      >> 7U))),5);
	vcdp->chgBus(c+539,((3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
				   >> 0xcU))),2);
	vcdp->chgBit(c+540,((1U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
				   >> 0xeU))));
	vcdp->chgBit(c+541,((0x20U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						>> 0x19U)))));
	vcdp->chgBus(c+542,((0xfffU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
				       >> 0x14U))),12);
	vcdp->chgBus(c+543,((0x7fU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec)),7);
	vcdp->chgBus(c+544,((7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
				   >> 0xcU))),3);
	vcdp->chgBus(c+545,((0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
				      >> 0x19U))),7);
	vcdp->chgBus(c+546,(((0xfffff800U & (VL_NEGATE_I((IData)(
								 (1U 
								  & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
								     >> 0x1fU)))) 
					     << 0xbU)) 
			     | (0x7ffU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					  >> 0x14U)))),32);
	vcdp->chgBus(c+547,(((0xfffff800U & (VL_NEGATE_I((IData)(
								 (1U 
								  & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
								     >> 0x1fU)))) 
					     << 0xbU)) 
			     | ((0x7e0U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					   >> 0x14U)) 
				| (0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					    >> 7U))))),32);
	vcdp->chgBus(c+548,(((0xfffff000U & (VL_NEGATE_I((IData)(
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
	vcdp->chgBus(c+549,((0xfffff000U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec)),32);
	vcdp->chgBus(c+550,(((0xfff00000U & (VL_NEGATE_I((IData)(
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
	vcdp->chgBit(c+551,((0U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					  >> 2U)))));
	vcdp->chgBit(c+552,((1U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					  >> 2U)))));
	vcdp->chgBit(c+553,((2U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					  >> 2U)))));
	vcdp->chgBit(c+554,((3U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					  >> 2U)))));
	vcdp->chgBit(c+555,((4U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					  >> 2U)))));
	vcdp->chgBit(c+556,((5U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					  >> 2U)))));
	vcdp->chgBit(c+557,((6U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					  >> 2U)))));
	vcdp->chgBit(c+558,((7U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					  >> 2U)))));
	vcdp->chgBit(c+559,((0U == (3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					  >> 5U)))));
	vcdp->chgBit(c+560,((1U == (3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					  >> 5U)))));
	vcdp->chgBit(c+561,((2U == (3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					  >> 5U)))));
	vcdp->chgBit(c+562,((3U == (3U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					  >> 5U)))));
	vcdp->chgBit(c+563,((0U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					  >> 0xcU)))));
	vcdp->chgBit(c+564,((1U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					  >> 0xcU)))));
	vcdp->chgBit(c+565,((2U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					  >> 0xcU)))));
	vcdp->chgBit(c+566,((3U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					  >> 0xcU)))));
	vcdp->chgBit(c+567,((4U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					  >> 0xcU)))));
	vcdp->chgBit(c+568,((5U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					  >> 0xcU)))));
	vcdp->chgBit(c+569,((6U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					  >> 0xcU)))));
	vcdp->chgBit(c+570,((7U == (7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					  >> 0xcU)))));
	vcdp->chgBit(c+571,((0U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					     >> 0x19U)))));
	vcdp->chgBit(c+572,((1U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					     >> 0x19U)))));
	vcdp->chgBit(c+573,((5U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					     >> 0x19U)))));
	vcdp->chgBit(c+574,((9U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					     >> 0x19U)))));
	vcdp->chgBit(c+575,((0xdU == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					       >> 0x19U)))));
	vcdp->chgBit(c+576,((0x15U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						>> 0x19U)))));
	vcdp->chgBit(c+577,((0x21U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						>> 0x19U)))));
	vcdp->chgBit(c+578,((0x11U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						>> 0x19U)))));
	vcdp->chgBit(c+579,((0x2dU == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						>> 0x19U)))));
	vcdp->chgBit(c+580,((0x7fU == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						>> 0x19U)))));
	vcdp->chgBit(c+581,((4U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					     >> 0x19U)))));
	vcdp->chgBit(c+582,((8U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					     >> 0x19U)))));
	vcdp->chgBit(c+583,((0xcU == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
					       >> 0x19U)))));
	vcdp->chgBit(c+584,((0x2cU == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						>> 0x19U)))));
	vcdp->chgBit(c+585,((0x10U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						>> 0x19U)))));
	vcdp->chgBit(c+586,((0x14U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						>> 0x19U)))));
	vcdp->chgBit(c+587,((0x60U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						>> 0x19U)))));
	vcdp->chgBit(c+588,((0x70U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						>> 0x19U)))));
	vcdp->chgBit(c+589,((0x50U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						>> 0x19U)))));
	vcdp->chgBit(c+590,((0x68U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						>> 0x19U)))));
	vcdp->chgBit(c+591,((0x78U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						>> 0x19U)))));
	vcdp->chgBit(c+592,((0x51U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						>> 0x19U)))));
	vcdp->chgBit(c+593,((0x71U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						>> 0x19U)))));
	vcdp->chgBit(c+594,((0x61U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						>> 0x19U)))));
	vcdp->chgBit(c+595,((0x69U == (0x7fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__fet_instr2dec 
						>> 0x19U)))));
	vcdp->chgBus(c+596,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_result),32);
	vcdp->chgBit(c+597,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__muldiv_ready));
	vcdp->chgBit(c+598,((0U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))));
	vcdp->chgBit(c+599,((1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))));
	vcdp->chgBit(c+600,((2U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))));
	vcdp->chgBit(c+601,((3U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))));
	vcdp->chgBit(c+602,((4U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))));
	vcdp->chgBit(c+603,((5U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))));
	vcdp->chgBit(c+604,((6U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))));
	vcdp->chgBit(c+605,((7U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe))));
	vcdp->chgBit(c+606,((1U & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__dec_operation_sel2exe) 
				   >> 2U))));
	vcdp->chgBit(c+607,((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__cnt)))))));
	vcdp->chgBus(c+608,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__reg32),32);
	vcdp->chgArray(c+609,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result),65);
	vcdp->chgBus(c+612,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__cnt),6);
	vcdp->chgBus(c+613,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[0U]),32);
	vcdp->chgBus(c+614,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U]),32);
	vcdp->chgBus(c+615,(((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[2U] 
			      << 0x1fU) | (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U] 
					   >> 1U))),32);
	vcdp->chgBus(c+616,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__S),2);
	vcdp->chgBit(c+617,((1U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[0U])));
	vcdp->chgBit(c+618,((vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U] 
			     >= vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__reg32)));
	vcdp->chgQuad(c+619,((QData)((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Execute__DOT__MulDiv__DOT__result[1U]))),33);
	vcdp->chgBus(c+621,((3U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem)),2);
	vcdp->chgBus(c+622,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__regfile_input_sel_r),3);
	vcdp->chgBit(c+623,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_load_ext_sel_r));
	vcdp->chgBus(c+624,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_addr_alignment_r),2);
	vcdp->chgBus(c+625,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__p_data_r),32);
	vcdp->chgBus(c+626,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Writeback__DOT__mem_data_r),32);
	vcdp->chgBit(c+627,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus_mpie_r));
	vcdp->chgBit(c+628,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mstatus_mie_r));
	vcdp->chgBit(c+629,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_meie_r));
	vcdp->chgBit(c+630,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_mtie_r));
	vcdp->chgBit(c+631,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mie_msie_r));
	vcdp->chgBus(c+632,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mtvec_r),32);
	vcdp->chgBus(c+633,((0xfffffffcU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mtvec_r)),32);
	vcdp->chgBus(c+634,((3U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mtvec_r)),3);
	vcdp->chgBus(c+635,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mscratch_r),32);
	vcdp->chgBus(c+636,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mepc_r),32);
	vcdp->chgBus(c+637,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mcause_r),32);
	vcdp->chgBit(c+638,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mip_meip_r));
	vcdp->chgBit(c+639,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mip_mtip_r));
	vcdp->chgBit(c+640,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mip_msip_r));
	vcdp->chgQuad(c+641,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__CSR__DOT__mcycle_r),64);
	vcdp->chgBus(c+643,((0x3ffffffU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
					   >> 2U))),32);
	vcdp->chgBus(c+644,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem[0]),32);
	vcdp->chgBus(c+645,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem[1]),32);
	vcdp->chgBus(c+646,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem[2]),32);
	vcdp->chgBus(c+647,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem[3]),32);
	vcdp->chgBus(c+648,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem[4]),32);
	vcdp->chgQuad(c+649,((((QData)((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem
					       [1U])) 
			       << 0x20U) | (QData)((IData)(
							   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem
							   [0U])))),64);
	vcdp->chgQuad(c+651,((((QData)((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem
					       [3U])) 
			       << 0x20U) | (QData)((IData)(
							   vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem
							   [2U])))),64);
	vcdp->chgBus(c+653,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem
			    [4U]),32);
	vcdp->chgBus(c+654,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__counter),17);
	vcdp->chgBit(c+655,((0xffffffffU == vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__CLINT__DOT__clint_mem
			     [1U])));
	vcdp->chgBus(c+656,((7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
				   >> 2U))),3);
	vcdp->chgBus(c+657,((0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
				      >> 5U))),5);
	vcdp->chgBus(c+658,((0x3fffffU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
					  >> 0xaU))),22);
	vcdp->chgBus(c+659,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[0]),2);
	vcdp->chgBus(c+660,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[1]),2);
	vcdp->chgBus(c+661,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[2]),2);
	vcdp->chgBus(c+662,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[3]),2);
	vcdp->chgBus(c+663,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[4]),2);
	vcdp->chgBus(c+664,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[5]),2);
	vcdp->chgBus(c+665,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[6]),2);
	vcdp->chgBus(c+666,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[7]),2);
	vcdp->chgBus(c+667,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[8]),2);
	vcdp->chgBus(c+668,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[9]),2);
	vcdp->chgBus(c+669,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[10]),2);
	vcdp->chgBus(c+670,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[11]),2);
	vcdp->chgBus(c+671,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[12]),2);
	vcdp->chgBus(c+672,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[13]),2);
	vcdp->chgBus(c+673,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[14]),2);
	vcdp->chgBus(c+674,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[15]),2);
	vcdp->chgBus(c+675,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[16]),2);
	vcdp->chgBus(c+676,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[17]),2);
	vcdp->chgBus(c+677,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[18]),2);
	vcdp->chgBus(c+678,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[19]),2);
	vcdp->chgBus(c+679,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[20]),2);
	vcdp->chgBus(c+680,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[21]),2);
	vcdp->chgBus(c+681,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[22]),2);
	vcdp->chgBus(c+682,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[23]),2);
	vcdp->chgBus(c+683,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[24]),2);
	vcdp->chgBus(c+684,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[25]),2);
	vcdp->chgBus(c+685,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[26]),2);
	vcdp->chgBus(c+686,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[27]),2);
	vcdp->chgBus(c+687,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[28]),2);
	vcdp->chgBus(c+688,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[29]),2);
	vcdp->chgBus(c+689,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[30]),2);
	vcdp->chgBus(c+690,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__FIFO_cnt[31]),2);
	vcdp->chgBus(c+691,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__victim_sel),2);
	vcdp->chgBit(c+692,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__index_prev) 
			     != (0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r 
					  >> 5U)))));
	vcdp->chgBus(c+693,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__index_prev),5);
	vcdp->chgBus(c+694,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__S),2);
	vcdp->chgBus(c+695,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__jdx),32);
	VL_EXTEND_WI(256,32, __Vtemp24, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
	VL_EXTEND_WI(256,32, __Vtemp25, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
	VL_EXTEND_WI(256,32, __Vtemp26, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
	VL_EXTEND_WI(256,32, __Vtemp27, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
	VL_EXTEND_WI(256,32, __Vtemp28, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
	VL_EXTEND_WI(256,32, __Vtemp29, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
	VL_EXTEND_WI(256,32, __Vtemp30, vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o);
	vcdp->chgBus(c+696,(((0x10U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
			      ? ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
				  ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
				      ? vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o
				      : __Vtemp24[1U])
				  : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
				      ? __Vtemp25[2U]
				      : __Vtemp26[3U]))
			      : ((8U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
				  ? ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
				      ? __Vtemp27[4U]
				      : __Vtemp28[5U])
				  : ((4U & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__Program_Counter__DOT__pc_r)
				      ? __Vtemp29[6U]
				      : __Vtemp30[7U])))),32);
	vcdp->chgArray(c+697,(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o),256);
	vcdp->chgArray(c+705,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[0]),256);
	vcdp->chgArray(c+713,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[1]),256);
	vcdp->chgArray(c+721,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[2]),256);
	vcdp->chgArray(c+729,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[3]),256);
	vcdp->chgArray(c+737,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[4]),256);
	vcdp->chgArray(c+745,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[5]),256);
	vcdp->chgArray(c+753,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[6]),256);
	vcdp->chgArray(c+761,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[7]),256);
	vcdp->chgArray(c+769,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[8]),256);
	vcdp->chgArray(c+777,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[9]),256);
	vcdp->chgArray(c+785,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[10]),256);
	vcdp->chgArray(c+793,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[11]),256);
	vcdp->chgArray(c+801,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[12]),256);
	vcdp->chgArray(c+809,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[13]),256);
	vcdp->chgArray(c+817,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[14]),256);
	vcdp->chgArray(c+825,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[15]),256);
	vcdp->chgArray(c+833,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[16]),256);
	vcdp->chgArray(c+841,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[17]),256);
	vcdp->chgArray(c+849,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[18]),256);
	vcdp->chgArray(c+857,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[19]),256);
	vcdp->chgArray(c+865,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[20]),256);
	vcdp->chgArray(c+873,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[21]),256);
	vcdp->chgArray(c+881,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[22]),256);
	vcdp->chgArray(c+889,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[23]),256);
	vcdp->chgArray(c+897,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[24]),256);
	vcdp->chgArray(c+905,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[25]),256);
	vcdp->chgArray(c+913,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[26]),256);
	vcdp->chgArray(c+921,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[27]),256);
	vcdp->chgArray(c+929,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[28]),256);
	vcdp->chgArray(c+937,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[29]),256);
	vcdp->chgArray(c+945,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[30]),256);
	vcdp->chgArray(c+953,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[31]),256);
	vcdp->chgArray(c+961,(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o),256);
	vcdp->chgArray(c+969,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[0]),256);
	vcdp->chgArray(c+977,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[1]),256);
	vcdp->chgArray(c+985,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[2]),256);
	vcdp->chgArray(c+993,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[3]),256);
	vcdp->chgArray(c+1001,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[4]),256);
	vcdp->chgArray(c+1009,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[5]),256);
	vcdp->chgArray(c+1017,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[6]),256);
	vcdp->chgArray(c+1025,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[7]),256);
	vcdp->chgArray(c+1033,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[8]),256);
	vcdp->chgArray(c+1041,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[9]),256);
	vcdp->chgArray(c+1049,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[10]),256);
	vcdp->chgArray(c+1057,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[11]),256);
	vcdp->chgArray(c+1065,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[12]),256);
	vcdp->chgArray(c+1073,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[13]),256);
	vcdp->chgArray(c+1081,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[14]),256);
	vcdp->chgArray(c+1089,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[15]),256);
	vcdp->chgArray(c+1097,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[16]),256);
	vcdp->chgArray(c+1105,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[17]),256);
	vcdp->chgArray(c+1113,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[18]),256);
	vcdp->chgArray(c+1121,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[19]),256);
	vcdp->chgArray(c+1129,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[20]),256);
	vcdp->chgArray(c+1137,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[21]),256);
	vcdp->chgArray(c+1145,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[22]),256);
	vcdp->chgArray(c+1153,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[23]),256);
	vcdp->chgArray(c+1161,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[24]),256);
	vcdp->chgArray(c+1169,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[25]),256);
	vcdp->chgArray(c+1177,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[26]),256);
	vcdp->chgArray(c+1185,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[27]),256);
	vcdp->chgArray(c+1193,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[28]),256);
	vcdp->chgArray(c+1201,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[29]),256);
	vcdp->chgArray(c+1209,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[30]),256);
	vcdp->chgArray(c+1217,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[31]),256);
	vcdp->chgArray(c+1225,(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o),256);
	vcdp->chgArray(c+1233,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[0]),256);
	vcdp->chgArray(c+1241,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[1]),256);
	vcdp->chgArray(c+1249,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[2]),256);
	vcdp->chgArray(c+1257,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[3]),256);
	vcdp->chgArray(c+1265,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[4]),256);
	vcdp->chgArray(c+1273,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[5]),256);
	vcdp->chgArray(c+1281,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[6]),256);
	vcdp->chgArray(c+1289,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[7]),256);
	vcdp->chgArray(c+1297,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[8]),256);
	vcdp->chgArray(c+1305,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[9]),256);
	vcdp->chgArray(c+1313,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[10]),256);
	vcdp->chgArray(c+1321,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[11]),256);
	vcdp->chgArray(c+1329,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[12]),256);
	vcdp->chgArray(c+1337,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[13]),256);
	vcdp->chgArray(c+1345,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[14]),256);
	vcdp->chgArray(c+1353,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[15]),256);
	vcdp->chgArray(c+1361,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[16]),256);
	vcdp->chgArray(c+1369,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[17]),256);
	vcdp->chgArray(c+1377,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[18]),256);
	vcdp->chgArray(c+1385,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[19]),256);
	vcdp->chgArray(c+1393,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[20]),256);
	vcdp->chgArray(c+1401,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[21]),256);
	vcdp->chgArray(c+1409,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[22]),256);
	vcdp->chgArray(c+1417,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[23]),256);
	vcdp->chgArray(c+1425,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[24]),256);
	vcdp->chgArray(c+1433,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[25]),256);
	vcdp->chgArray(c+1441,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[26]),256);
	vcdp->chgArray(c+1449,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[27]),256);
	vcdp->chgArray(c+1457,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[28]),256);
	vcdp->chgArray(c+1465,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[29]),256);
	vcdp->chgArray(c+1473,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[30]),256);
	vcdp->chgArray(c+1481,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[31]),256);
	vcdp->chgArray(c+1489,(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o),256);
	vcdp->chgArray(c+1497,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[0]),256);
	vcdp->chgArray(c+1505,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[1]),256);
	vcdp->chgArray(c+1513,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[2]),256);
	vcdp->chgArray(c+1521,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[3]),256);
	vcdp->chgArray(c+1529,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[4]),256);
	vcdp->chgArray(c+1537,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[5]),256);
	vcdp->chgArray(c+1545,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[6]),256);
	vcdp->chgArray(c+1553,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[7]),256);
	vcdp->chgArray(c+1561,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[8]),256);
	vcdp->chgArray(c+1569,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[9]),256);
	vcdp->chgArray(c+1577,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[10]),256);
	vcdp->chgArray(c+1585,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[11]),256);
	vcdp->chgArray(c+1593,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[12]),256);
	vcdp->chgArray(c+1601,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[13]),256);
	vcdp->chgArray(c+1609,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[14]),256);
	vcdp->chgArray(c+1617,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[15]),256);
	vcdp->chgArray(c+1625,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[16]),256);
	vcdp->chgArray(c+1633,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[17]),256);
	vcdp->chgArray(c+1641,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[18]),256);
	vcdp->chgArray(c+1649,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[19]),256);
	vcdp->chgArray(c+1657,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[20]),256);
	vcdp->chgArray(c+1665,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[21]),256);
	vcdp->chgArray(c+1673,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[22]),256);
	vcdp->chgArray(c+1681,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[23]),256);
	vcdp->chgArray(c+1689,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[24]),256);
	vcdp->chgArray(c+1697,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[25]),256);
	vcdp->chgArray(c+1705,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[26]),256);
	vcdp->chgArray(c+1713,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[27]),256);
	vcdp->chgArray(c+1721,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[28]),256);
	vcdp->chgArray(c+1729,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[29]),256);
	vcdp->chgArray(c+1737,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[30]),256);
	vcdp->chgArray(c+1745,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[31]),256);
	vcdp->chgBus(c+1753,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__S),3);
	vcdp->chgBus(c+1754,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__datain_from_p),32);
	vcdp->chgBit(c+1755,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__rw));
	vcdp->chgBus(c+1756,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__byte_enable_from_p),4);
	vcdp->chgArray(c+1757,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__c_data_i),256);
	vcdp->chgBit(c+1765,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_write[0]));
	vcdp->chgBit(c+1766,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_write[1]));
	vcdp->chgBit(c+1767,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_write[2]));
	vcdp->chgBit(c+1768,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_write[3]));
	vcdp->chgBus(c+1769,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[0]),2);
	vcdp->chgBus(c+1770,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[1]),2);
	vcdp->chgBus(c+1771,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[2]),2);
	vcdp->chgBus(c+1772,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[3]),2);
	vcdp->chgBus(c+1773,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[4]),2);
	vcdp->chgBus(c+1774,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[5]),2);
	vcdp->chgBus(c+1775,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[6]),2);
	vcdp->chgBus(c+1776,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[7]),2);
	vcdp->chgBus(c+1777,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[8]),2);
	vcdp->chgBus(c+1778,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[9]),2);
	vcdp->chgBus(c+1779,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[10]),2);
	vcdp->chgBus(c+1780,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[11]),2);
	vcdp->chgBus(c+1781,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[12]),2);
	vcdp->chgBus(c+1782,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[13]),2);
	vcdp->chgBus(c+1783,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[14]),2);
	vcdp->chgBus(c+1784,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[15]),2);
	vcdp->chgBus(c+1785,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[16]),2);
	vcdp->chgBus(c+1786,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[17]),2);
	vcdp->chgBus(c+1787,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[18]),2);
	vcdp->chgBus(c+1788,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[19]),2);
	vcdp->chgBus(c+1789,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[20]),2);
	vcdp->chgBus(c+1790,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[21]),2);
	vcdp->chgBus(c+1791,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[22]),2);
	vcdp->chgBus(c+1792,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[23]),2);
	vcdp->chgBus(c+1793,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[24]),2);
	vcdp->chgBus(c+1794,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[25]),2);
	vcdp->chgBus(c+1795,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[26]),2);
	vcdp->chgBus(c+1796,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[27]),2);
	vcdp->chgBus(c+1797,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[28]),2);
	vcdp->chgBus(c+1798,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[29]),2);
	vcdp->chgBus(c+1799,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[30]),2);
	vcdp->chgBus(c+1800,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__FIFO_cnt[31]),2);
	vcdp->chgBus(c+1801,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__victim_sel),2);
	vcdp->chgArray(c+1802,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__m_data),256);
	vcdp->chgBus(c+1810,((7U & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
				    >> 2U))),3);
	vcdp->chgBus(c+1811,((0x1fU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
				       >> 5U))),5);
	vcdp->chgBus(c+1812,((0x3fffffU & (vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__RISCV_CORE0__DOT__exe_mem_addr2mem 
					   >> 0xaU))),22);
	vcdp->chgBus(c+1813,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__idx),32);
	vcdp->chgBus(c+1814,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__jdx),32);
	vcdp->chgBit(c+1815,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_write
			     [0U]));
	vcdp->chgBus(c+1816,(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__TAG_BRAM__data_o),22);
	vcdp->chgBus(c+1817,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[0]),22);
	vcdp->chgBus(c+1818,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[1]),22);
	vcdp->chgBus(c+1819,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[2]),22);
	vcdp->chgBus(c+1820,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[3]),22);
	vcdp->chgBus(c+1821,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[4]),22);
	vcdp->chgBus(c+1822,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[5]),22);
	vcdp->chgBus(c+1823,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[6]),22);
	vcdp->chgBus(c+1824,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[7]),22);
	vcdp->chgBus(c+1825,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[8]),22);
	vcdp->chgBus(c+1826,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[9]),22);
	vcdp->chgBus(c+1827,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[10]),22);
	vcdp->chgBus(c+1828,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[11]),22);
	vcdp->chgBus(c+1829,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[12]),22);
	vcdp->chgBus(c+1830,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[13]),22);
	vcdp->chgBus(c+1831,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[14]),22);
	vcdp->chgBus(c+1832,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[15]),22);
	vcdp->chgBus(c+1833,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[16]),22);
	vcdp->chgBus(c+1834,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[17]),22);
	vcdp->chgBus(c+1835,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[18]),22);
	vcdp->chgBus(c+1836,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[19]),22);
	vcdp->chgBus(c+1837,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[20]),22);
	vcdp->chgBus(c+1838,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[21]),22);
	vcdp->chgBus(c+1839,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[22]),22);
	vcdp->chgBus(c+1840,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[23]),22);
	vcdp->chgBus(c+1841,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[24]),22);
	vcdp->chgBus(c+1842,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[25]),22);
	vcdp->chgBus(c+1843,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[26]),22);
	vcdp->chgBus(c+1844,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[27]),22);
	vcdp->chgBus(c+1845,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[28]),22);
	vcdp->chgBus(c+1846,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[29]),22);
	vcdp->chgBus(c+1847,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[30]),22);
	vcdp->chgBus(c+1848,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[31]),22);
	vcdp->chgArray(c+1849,(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o),256);
	vcdp->chgArray(c+1857,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[0]),256);
	vcdp->chgArray(c+1865,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[1]),256);
	vcdp->chgArray(c+1873,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[2]),256);
	vcdp->chgArray(c+1881,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[3]),256);
	vcdp->chgArray(c+1889,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[4]),256);
	vcdp->chgArray(c+1897,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[5]),256);
	vcdp->chgArray(c+1905,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[6]),256);
	vcdp->chgArray(c+1913,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[7]),256);
	vcdp->chgArray(c+1921,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[8]),256);
	vcdp->chgArray(c+1929,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[9]),256);
	vcdp->chgArray(c+1937,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[10]),256);
	vcdp->chgArray(c+1945,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[11]),256);
	vcdp->chgArray(c+1953,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[12]),256);
	vcdp->chgArray(c+1961,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[13]),256);
	vcdp->chgArray(c+1969,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[14]),256);
	vcdp->chgArray(c+1977,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[15]),256);
	vcdp->chgArray(c+1985,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[16]),256);
	vcdp->chgArray(c+1993,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[17]),256);
	vcdp->chgArray(c+2001,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[18]),256);
	vcdp->chgArray(c+2009,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[19]),256);
	vcdp->chgArray(c+2017,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[20]),256);
	vcdp->chgArray(c+2025,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[21]),256);
	vcdp->chgArray(c+2033,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[22]),256);
	vcdp->chgArray(c+2041,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[23]),256);
	vcdp->chgArray(c+2049,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[24]),256);
	vcdp->chgArray(c+2057,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[25]),256);
	vcdp->chgArray(c+2065,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[26]),256);
	vcdp->chgArray(c+2073,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[27]),256);
	vcdp->chgArray(c+2081,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[28]),256);
	vcdp->chgArray(c+2089,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[29]),256);
	vcdp->chgArray(c+2097,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[30]),256);
	vcdp->chgArray(c+2105,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[31]),256);
	vcdp->chgBit(c+2113,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_write
			     [1U]));
	vcdp->chgBus(c+2114,(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__TAG_BRAM__data_o),22);
	vcdp->chgBus(c+2115,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[0]),22);
	vcdp->chgBus(c+2116,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[1]),22);
	vcdp->chgBus(c+2117,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[2]),22);
	vcdp->chgBus(c+2118,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[3]),22);
	vcdp->chgBus(c+2119,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[4]),22);
	vcdp->chgBus(c+2120,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[5]),22);
	vcdp->chgBus(c+2121,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[6]),22);
	vcdp->chgBus(c+2122,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[7]),22);
	vcdp->chgBus(c+2123,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[8]),22);
	vcdp->chgBus(c+2124,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[9]),22);
	vcdp->chgBus(c+2125,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[10]),22);
	vcdp->chgBus(c+2126,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[11]),22);
	vcdp->chgBus(c+2127,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[12]),22);
	vcdp->chgBus(c+2128,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[13]),22);
	vcdp->chgBus(c+2129,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[14]),22);
	vcdp->chgBus(c+2130,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[15]),22);
	vcdp->chgBus(c+2131,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[16]),22);
	vcdp->chgBus(c+2132,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[17]),22);
	vcdp->chgBus(c+2133,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[18]),22);
	vcdp->chgBus(c+2134,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[19]),22);
	vcdp->chgBus(c+2135,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[20]),22);
	vcdp->chgBus(c+2136,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[21]),22);
	vcdp->chgBus(c+2137,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[22]),22);
	vcdp->chgBus(c+2138,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[23]),22);
	vcdp->chgBus(c+2139,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[24]),22);
	vcdp->chgBus(c+2140,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[25]),22);
	vcdp->chgBus(c+2141,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[26]),22);
	vcdp->chgBus(c+2142,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[27]),22);
	vcdp->chgBus(c+2143,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[28]),22);
	vcdp->chgBus(c+2144,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[29]),22);
	vcdp->chgBus(c+2145,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[30]),22);
	vcdp->chgBus(c+2146,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[31]),22);
	vcdp->chgArray(c+2147,(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o),256);
	vcdp->chgArray(c+2155,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[0]),256);
	vcdp->chgArray(c+2163,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[1]),256);
	vcdp->chgArray(c+2171,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[2]),256);
	vcdp->chgArray(c+2179,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[3]),256);
	vcdp->chgArray(c+2187,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[4]),256);
	vcdp->chgArray(c+2195,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[5]),256);
	vcdp->chgArray(c+2203,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[6]),256);
	vcdp->chgArray(c+2211,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[7]),256);
	vcdp->chgArray(c+2219,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[8]),256);
	vcdp->chgArray(c+2227,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[9]),256);
	vcdp->chgArray(c+2235,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[10]),256);
	vcdp->chgArray(c+2243,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[11]),256);
	vcdp->chgArray(c+2251,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[12]),256);
	vcdp->chgArray(c+2259,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[13]),256);
	vcdp->chgArray(c+2267,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[14]),256);
	vcdp->chgArray(c+2275,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[15]),256);
	vcdp->chgArray(c+2283,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[16]),256);
	vcdp->chgArray(c+2291,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[17]),256);
	vcdp->chgArray(c+2299,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[18]),256);
	vcdp->chgArray(c+2307,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[19]),256);
	vcdp->chgArray(c+2315,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[20]),256);
	vcdp->chgArray(c+2323,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[21]),256);
	vcdp->chgArray(c+2331,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[22]),256);
	vcdp->chgArray(c+2339,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[23]),256);
	vcdp->chgArray(c+2347,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[24]),256);
	vcdp->chgArray(c+2355,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[25]),256);
	vcdp->chgArray(c+2363,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[26]),256);
	vcdp->chgArray(c+2371,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[27]),256);
	vcdp->chgArray(c+2379,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[28]),256);
	vcdp->chgArray(c+2387,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[29]),256);
	vcdp->chgArray(c+2395,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[30]),256);
	vcdp->chgArray(c+2403,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[31]),256);
	vcdp->chgBit(c+2411,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_write
			     [2U]));
	vcdp->chgBus(c+2412,(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__TAG_BRAM__data_o),22);
	vcdp->chgBus(c+2413,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[0]),22);
	vcdp->chgBus(c+2414,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[1]),22);
	vcdp->chgBus(c+2415,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[2]),22);
	vcdp->chgBus(c+2416,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[3]),22);
	vcdp->chgBus(c+2417,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[4]),22);
	vcdp->chgBus(c+2418,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[5]),22);
	vcdp->chgBus(c+2419,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[6]),22);
	vcdp->chgBus(c+2420,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[7]),22);
	vcdp->chgBus(c+2421,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[8]),22);
	vcdp->chgBus(c+2422,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[9]),22);
	vcdp->chgBus(c+2423,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[10]),22);
	vcdp->chgBus(c+2424,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[11]),22);
	vcdp->chgBus(c+2425,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[12]),22);
	vcdp->chgBus(c+2426,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[13]),22);
	vcdp->chgBus(c+2427,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[14]),22);
	vcdp->chgBus(c+2428,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[15]),22);
	vcdp->chgBus(c+2429,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[16]),22);
	vcdp->chgBus(c+2430,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[17]),22);
	vcdp->chgBus(c+2431,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[18]),22);
	vcdp->chgBus(c+2432,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[19]),22);
	vcdp->chgBus(c+2433,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[20]),22);
	vcdp->chgBus(c+2434,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[21]),22);
	vcdp->chgBus(c+2435,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[22]),22);
	vcdp->chgBus(c+2436,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[23]),22);
	vcdp->chgBus(c+2437,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[24]),22);
	vcdp->chgBus(c+2438,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[25]),22);
	vcdp->chgBus(c+2439,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[26]),22);
	vcdp->chgBus(c+2440,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[27]),22);
	vcdp->chgBus(c+2441,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[28]),22);
	vcdp->chgBus(c+2442,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[29]),22);
	vcdp->chgBus(c+2443,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[30]),22);
	vcdp->chgBus(c+2444,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[31]),22);
	vcdp->chgArray(c+2445,(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o),256);
	vcdp->chgArray(c+2453,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[0]),256);
	vcdp->chgArray(c+2461,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[1]),256);
	vcdp->chgArray(c+2469,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[2]),256);
	vcdp->chgArray(c+2477,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[3]),256);
	vcdp->chgArray(c+2485,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[4]),256);
	vcdp->chgArray(c+2493,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[5]),256);
	vcdp->chgArray(c+2501,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[6]),256);
	vcdp->chgArray(c+2509,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[7]),256);
	vcdp->chgArray(c+2517,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[8]),256);
	vcdp->chgArray(c+2525,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[9]),256);
	vcdp->chgArray(c+2533,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[10]),256);
	vcdp->chgArray(c+2541,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[11]),256);
	vcdp->chgArray(c+2549,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[12]),256);
	vcdp->chgArray(c+2557,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[13]),256);
	vcdp->chgArray(c+2565,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[14]),256);
	vcdp->chgArray(c+2573,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[15]),256);
	vcdp->chgArray(c+2581,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[16]),256);
	vcdp->chgArray(c+2589,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[17]),256);
	vcdp->chgArray(c+2597,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[18]),256);
	vcdp->chgArray(c+2605,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[19]),256);
	vcdp->chgArray(c+2613,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[20]),256);
	vcdp->chgArray(c+2621,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[21]),256);
	vcdp->chgArray(c+2629,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[22]),256);
	vcdp->chgArray(c+2637,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[23]),256);
	vcdp->chgArray(c+2645,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[24]),256);
	vcdp->chgArray(c+2653,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[25]),256);
	vcdp->chgArray(c+2661,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[26]),256);
	vcdp->chgArray(c+2669,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[27]),256);
	vcdp->chgArray(c+2677,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[28]),256);
	vcdp->chgArray(c+2685,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[29]),256);
	vcdp->chgArray(c+2693,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[30]),256);
	vcdp->chgArray(c+2701,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[31]),256);
	vcdp->chgBit(c+2709,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__cache_write
			     [3U]));
	vcdp->chgBus(c+2710,(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__TAG_BRAM__data_o),22);
	vcdp->chgBus(c+2711,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[0]),22);
	vcdp->chgBus(c+2712,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[1]),22);
	vcdp->chgBus(c+2713,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[2]),22);
	vcdp->chgBus(c+2714,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[3]),22);
	vcdp->chgBus(c+2715,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[4]),22);
	vcdp->chgBus(c+2716,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[5]),22);
	vcdp->chgBus(c+2717,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[6]),22);
	vcdp->chgBus(c+2718,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[7]),22);
	vcdp->chgBus(c+2719,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[8]),22);
	vcdp->chgBus(c+2720,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[9]),22);
	vcdp->chgBus(c+2721,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[10]),22);
	vcdp->chgBus(c+2722,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[11]),22);
	vcdp->chgBus(c+2723,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[12]),22);
	vcdp->chgBus(c+2724,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[13]),22);
	vcdp->chgBus(c+2725,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[14]),22);
	vcdp->chgBus(c+2726,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[15]),22);
	vcdp->chgBus(c+2727,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[16]),22);
	vcdp->chgBus(c+2728,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[17]),22);
	vcdp->chgBus(c+2729,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[18]),22);
	vcdp->chgBus(c+2730,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[19]),22);
	vcdp->chgBus(c+2731,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[20]),22);
	vcdp->chgBus(c+2732,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[21]),22);
	vcdp->chgBus(c+2733,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[22]),22);
	vcdp->chgBus(c+2734,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[23]),22);
	vcdp->chgBus(c+2735,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[24]),22);
	vcdp->chgBus(c+2736,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[25]),22);
	vcdp->chgBus(c+2737,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[26]),22);
	vcdp->chgBus(c+2738,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[27]),22);
	vcdp->chgBus(c+2739,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[28]),22);
	vcdp->chgBus(c+2740,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[29]),22);
	vcdp->chgBus(c+2741,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[30]),22);
	vcdp->chgBus(c+2742,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[31]),22);
	vcdp->chgArray(c+2743,(vlSymsp->TOP__aquila_testharness.aquila_core__DOT__D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o),256);
	vcdp->chgArray(c+2751,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[0]),256);
	vcdp->chgArray(c+2759,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[1]),256);
	vcdp->chgArray(c+2767,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[2]),256);
	vcdp->chgArray(c+2775,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[3]),256);
	vcdp->chgArray(c+2783,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[4]),256);
	vcdp->chgArray(c+2791,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[5]),256);
	vcdp->chgArray(c+2799,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[6]),256);
	vcdp->chgArray(c+2807,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[7]),256);
	vcdp->chgArray(c+2815,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[8]),256);
	vcdp->chgArray(c+2823,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[9]),256);
	vcdp->chgArray(c+2831,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[10]),256);
	vcdp->chgArray(c+2839,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[11]),256);
	vcdp->chgArray(c+2847,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[12]),256);
	vcdp->chgArray(c+2855,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[13]),256);
	vcdp->chgArray(c+2863,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[14]),256);
	vcdp->chgArray(c+2871,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[15]),256);
	vcdp->chgArray(c+2879,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[16]),256);
	vcdp->chgArray(c+2887,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[17]),256);
	vcdp->chgArray(c+2895,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[18]),256);
	vcdp->chgArray(c+2903,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[19]),256);
	vcdp->chgArray(c+2911,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[20]),256);
	vcdp->chgArray(c+2919,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[21]),256);
	vcdp->chgArray(c+2927,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[22]),256);
	vcdp->chgArray(c+2935,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[23]),256);
	vcdp->chgArray(c+2943,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[24]),256);
	vcdp->chgArray(c+2951,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[25]),256);
	vcdp->chgArray(c+2959,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[26]),256);
	vcdp->chgArray(c+2967,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[27]),256);
	vcdp->chgArray(c+2975,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[28]),256);
	vcdp->chgArray(c+2983,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[29]),256);
	vcdp->chgArray(c+2991,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[30]),256);
	vcdp->chgArray(c+2999,(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[31]),256);
	vcdp->chgBus(c+3007,(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__cur_state),2);
	vcdp->chgBus(c+3008,(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_tx_fifo),8);
	vcdp->chgBus(c+3009,(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_rx_fifo),8);
	vcdp->chgBit(c+3010,((1U <= (IData)(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__transmit_counter))));
	vcdp->chgBit(c+3011,(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_tx_fifo_full));
	vcdp->chgBit(c+3012,(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_tx_fifo_empty));
	vcdp->chgBit(c+3013,(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_rx_fifo_full));
	vcdp->chgBit(c+3014,(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__uart_rx_fifo_valid));
	vcdp->chgBus(c+3015,(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__transmit_counter),8);
	vcdp->chgBus(c+3016,(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__read_counter),8);
	vcdp->chgBus(c+3017,(vlSymsp->TOP__aquila_testharness.__PVT__mock_uart_0__DOT__write_counter),8);
	vcdp->chgBus(c+3018,(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o),32);
	vcdp->chgBus(c+3019,(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_dcache_o),32);
	vcdp->chgBus(c+3020,(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__icache_cur_state),2);
	vcdp->chgBus(c+3021,(((0U == (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__icache_cur_state))
			       ? ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__i_m_strobe)
				   ? 1U : 0U) : ((1U 
						  == (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__icache_cur_state))
						  ? 3U
						  : 0U))),2);
	vcdp->chgBus(c+3022,(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__dcache_cur_state),2);
	vcdp->chgBus(c+3023,((0x3fffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__i_m_addr)),22);
	vcdp->chgBus(c+3024,((0x3fffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_addr)),22);
	vcdp->chgBus(c+3025,(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__icache_delay_counter),8);
	vcdp->chgBus(c+3026,(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__dcache_delay_counter),8);
    }
}

void Vaquila_testharness::traceChgThis__5(Vaquila_testharness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vaquila_testharness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+3027,(vlTOPp->clk));
	vcdp->chgBit(c+3028,(vlTOPp->rst_n));
	vcdp->chgBus(c+3029,(vlTOPp->main_memory_addr),32);
    }
}
