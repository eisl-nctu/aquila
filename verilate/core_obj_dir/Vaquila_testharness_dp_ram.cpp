// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_testharness.h for the primary calling header

#include "Vaquila_testharness_dp_ram.h"
#include "Vaquila_testharness__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES

// Begin mtask footprint  all: 
VL_ST_SIG8(Vaquila_testharness_dp_ram::__Vtable1___PVT__dcache_next_state[64],1,0);

//--------------------

VL_CTOR_IMP(Vaquila_testharness_dp_ram) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vaquila_testharness_dp_ram::__Vconfigure(Vaquila_testharness__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vaquila_testharness_dp_ram::~Vaquila_testharness_dp_ram() {
}

//--------------------
// Internal Methods

uint32_t Vaquila_testharness_dp_ram::readWord(uint32_t byte_addr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_testharness_dp_ram::readWord\n"); );
    // Variables
    VL_OUT(readWord__Vfuncrtn,31,0);
    Vaquila_testharness__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vaquila_testharness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    readWord__Vfuncrtn = (VL_GTS_III(1,32,32, 0x200000U, byte_addr)
			   ? ((vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__mem
			       [(0x1fffffU & ((IData)(3U) 
					      + (0x3fffffU 
						 & byte_addr)))] 
			       << 0x18U) | ((vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__mem
					     [(0x1fffffU 
					       & ((IData)(2U) 
						  + 
						  (0x3fffffU 
						   & byte_addr)))] 
					     << 0x10U) 
					    | ((vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__mem
						[(0x1fffffU 
						  & ((IData)(1U) 
						     + 
						     (0x3fffffU 
						      & byte_addr)))] 
						<< 8U) 
					       | vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__mem
					       [(0x1fffffU 
						 & byte_addr)])))
			   : 0xdeadbeefU);
    // Final
    return (readWord__Vfuncrtn);
}

void Vaquila_testharness_dp_ram::writeWord(uint32_t byte_addr, uint32_t val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_testharness_dp_ram::writeWord\n"); );
    // Variables
    Vaquila_testharness__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vaquila_testharness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (VL_GTS_III(1,32,32, 0x200000U, byte_addr)) {
	vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__mem[(0x1fffffU 
							       & ((IData)(3U) 
								  + 
								  (0x3fffffU 
								   & byte_addr)))] 
	    = (0xffU & (val >> 0x18U));
	vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__mem[(0x1fffffU 
							       & ((IData)(2U) 
								  + 
								  (0x3fffffU 
								   & byte_addr)))] 
	    = (0xffU & (val >> 0x10U));
	vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__mem[(0x1fffffU 
							       & ((IData)(1U) 
								  + 
								  (0x3fffffU 
								   & byte_addr)))] 
	    = (0xffU & (val >> 8U));
	vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__mem[(0x1fffffU 
							       & byte_addr)] 
	    = (0xffU & val);
    }
}

void Vaquila_testharness_dp_ram::writeByte(uint32_t byte_addr, uint32_t val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_testharness_dp_ram::writeByte\n"); );
    // Variables
    Vaquila_testharness__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vaquila_testharness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (VL_GTS_III(1,32,32, 0x200000U, byte_addr)) {
	vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__mem[(0x1fffffU 
							       & byte_addr)] 
	    = val;
    }
}

uint32_t Vaquila_testharness_dp_ram::readByte(uint32_t byte_addr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_testharness_dp_ram::readByte\n"); );
    // Variables
    VL_OUT8(readByte__Vfuncrtn,7,0);
    Vaquila_testharness__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vaquila_testharness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    readByte__Vfuncrtn = (VL_GTS_III(1,32,32, 0x200000U, byte_addr)
			   ? vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__mem
			  [(0x1fffffU & byte_addr)]
			   : 0xefU);
    // Final
    return (readByte__Vfuncrtn);
}

void Vaquila_testharness_dp_ram::_settle__TOP__aquila_testharness__mock_ram__1(Vaquila_testharness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_testharness_dp_ram::_settle__TOP__aquila_testharness__mock_ram__1\n"); );
    Vaquila_testharness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at core-ver-src/dp_ram.sv:87
    vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__icache_next_state 
	= ((0U == (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__icache_cur_state))
	    ? ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__i_m_strobe)
	        ? 1U : 0U) : ((1U == (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__icache_cur_state))
			       ? 3U : 0U));
    // ALWAYS at core-ver-src/dp_ram.sv:98
    vlSymsp->TOP__aquila_testharness__mock_ram.__Vtableidx1 
	= (0xcU | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_rw) 
		    << 5U) | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_strobe) 
			       << 4U) | (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__dcache_cur_state))));
    vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__dcache_next_state 
	= vlSymsp->TOP__aquila_testharness__mock_ram.__Vtable1___PVT__dcache_next_state
	[vlSymsp->TOP__aquila_testharness__mock_ram.__Vtableidx1];
}

VL_INLINE_OPT void Vaquila_testharness_dp_ram::_sequent__TOP__aquila_testharness__mock_ram__2(Vaquila_testharness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_testharness_dp_ram::_sequent__TOP__aquila_testharness__mock_ram__2\n"); );
    Vaquila_testharness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__aquila_testharness__mock_ram.__Vdlyvset__mem__v0 = 0U;
    // ALWAYS at core-ver-src/dp_ram.sv:55
    vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__icache_delay_counter 
	= (0xffU & (((0U == (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__icache_cur_state)) 
		     | (3U == (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__icache_cur_state)))
		     ? 0U : ((IData)(1U) + (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__icache_delay_counter))));
    // ALWAYS at core-ver-src/dp_ram.sv:60
    vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__dcache_delay_counter 
	= (0xffU & (((0U == (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__dcache_cur_state)) 
		     | (3U == (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__dcache_cur_state)))
		     ? 0U : ((IData)(1U) + (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__dcache_delay_counter))));
    // ALWAYS at core-ver-src/dp_ram.sv:120
    vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_dcache_o 
	= ((1U == (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__dcache_cur_state))
	    ? ((vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__mem
		[(0x1fffffU & ((IData)(3U) + (0x3fffffU 
					      & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_addr)))] 
		<< 0x18U) | ((vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__mem
			      [(0x1fffffU & ((IData)(2U) 
					     + (0x3fffffU 
						& vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_addr)))] 
			      << 0x10U) | ((vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__mem
					    [(0x1fffffU 
					      & ((IData)(1U) 
						 + 
						 (0x3fffffU 
						  & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_addr)))] 
					    << 8U) 
					   | vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__mem
					   [(0x1fffffU 
					     & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_addr)])))
	    : 0U);
    // ALWAYS at core-ver-src/dp_ram.sv:111
    if ((2U == (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__dcache_cur_state))) {
	vlSymsp->TOP__aquila_testharness__mock_ram.__Vdlyvval__mem__v0 
	    = (0xffU & vlSymsp->TOP__aquila_testharness.__PVT__M_DCACHE_datain[0U]);
	vlSymsp->TOP__aquila_testharness__mock_ram.__Vdlyvset__mem__v0 = 1U;
	vlSymsp->TOP__aquila_testharness__mock_ram.__Vdlyvdim0__mem__v0 
	    = (0x1fffffU & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_addr);
	vlSymsp->TOP__aquila_testharness__mock_ram.__Vdlyvval__mem__v1 
	    = (0xffU & ((vlSymsp->TOP__aquila_testharness.__PVT__M_DCACHE_datain[1U] 
			 << 0x18U) | (vlSymsp->TOP__aquila_testharness.__PVT__M_DCACHE_datain[0U] 
				      >> 8U)));
	vlSymsp->TOP__aquila_testharness__mock_ram.__Vdlyvdim0__mem__v1 
	    = (0x1fffffU & ((IData)(1U) + (0x3fffffU 
					   & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_addr)));
	vlSymsp->TOP__aquila_testharness__mock_ram.__Vdlyvval__mem__v2 
	    = (0xffU & ((vlSymsp->TOP__aquila_testharness.__PVT__M_DCACHE_datain[1U] 
			 << 0x10U) | (vlSymsp->TOP__aquila_testharness.__PVT__M_DCACHE_datain[0U] 
				      >> 0x10U)));
	vlSymsp->TOP__aquila_testharness__mock_ram.__Vdlyvdim0__mem__v2 
	    = (0x1fffffU & ((IData)(2U) + (0x3fffffU 
					   & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_addr)));
	vlSymsp->TOP__aquila_testharness__mock_ram.__Vdlyvval__mem__v3 
	    = (0xffU & ((vlSymsp->TOP__aquila_testharness.__PVT__M_DCACHE_datain[1U] 
			 << 8U) | (vlSymsp->TOP__aquila_testharness.__PVT__M_DCACHE_datain[0U] 
				   >> 0x18U)));
	vlSymsp->TOP__aquila_testharness__mock_ram.__Vdlyvdim0__mem__v3 
	    = (0x1fffffU & ((IData)(3U) + (0x3fffffU 
					   & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_addr)));
    }
}

VL_INLINE_OPT void Vaquila_testharness_dp_ram::_sequent__TOP__aquila_testharness__mock_ram__3(Vaquila_testharness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_testharness_dp_ram::_sequent__TOP__aquila_testharness__mock_ram__3\n"); );
    Vaquila_testharness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at core-ver-src/dp_ram.sv:143
    vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_dcache_o 
	= (3U == (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__dcache_cur_state));
    // ALWAYS at core-ver-src/dp_ram.sv:128
    vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_icache_o 
	= ((1U == (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__icache_cur_state))
	    ? ((vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__mem
		[(0x1fffffU & ((IData)(3U) + (0x3fffffU 
					      & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__i_m_addr)))] 
		<< 0x18U) | ((vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__mem
			      [(0x1fffffU & ((IData)(2U) 
					     + (0x3fffffU 
						& vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__i_m_addr)))] 
			      << 0x10U) | ((vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__mem
					    [(0x1fffffU 
					      & ((IData)(1U) 
						 + 
						 (0x3fffffU 
						  & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__i_m_addr)))] 
					    << 8U) 
					   | vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__mem
					   [(0x1fffffU 
					     & vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__i_m_addr)])))
	    : 0U);
    // ALWAYS at core-ver-src/dp_ram.sv:136
    vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_icache_o 
	= (3U == (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__icache_cur_state));
    // ALWAYSPOST at core-ver-src/dp_ram.sv:113
    if (vlSymsp->TOP__aquila_testharness__mock_ram.__Vdlyvset__mem__v0) {
	vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__mem[vlSymsp->TOP__aquila_testharness__mock_ram.__Vdlyvdim0__mem__v0] 
	    = vlSymsp->TOP__aquila_testharness__mock_ram.__Vdlyvval__mem__v0;
	vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__mem[vlSymsp->TOP__aquila_testharness__mock_ram.__Vdlyvdim0__mem__v1] 
	    = vlSymsp->TOP__aquila_testharness__mock_ram.__Vdlyvval__mem__v1;
	vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__mem[vlSymsp->TOP__aquila_testharness__mock_ram.__Vdlyvdim0__mem__v2] 
	    = vlSymsp->TOP__aquila_testharness__mock_ram.__Vdlyvval__mem__v2;
	vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__mem[vlSymsp->TOP__aquila_testharness__mock_ram.__Vdlyvdim0__mem__v3] 
	    = vlSymsp->TOP__aquila_testharness__mock_ram.__Vdlyvval__mem__v3;
    }
    // ALWAYS at core-ver-src/dp_ram.sv:80
    vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__dcache_cur_state 
	= ((IData)(vlTOPp->rst_n) ? (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__dcache_next_state)
	    : 0U);
    // ALWAYS at core-ver-src/dp_ram.sv:73
    vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__icache_cur_state 
	= ((IData)(vlTOPp->rst_n) ? (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__icache_next_state)
	    : 0U);
    // ALWAYS at core-ver-src/dp_ram.sv:98
    vlSymsp->TOP__aquila_testharness__mock_ram.__Vtableidx1 
	= (0xcU | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_rw) 
		    << 5U) | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__d_m_strobe) 
			       << 4U) | (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__dcache_cur_state))));
    vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__dcache_next_state 
	= vlSymsp->TOP__aquila_testharness__mock_ram.__Vtable1___PVT__dcache_next_state
	[vlSymsp->TOP__aquila_testharness__mock_ram.__Vtableidx1];
    // ALWAYS at core-ver-src/dp_ram.sv:87
    vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__icache_next_state 
	= ((0U == (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__icache_cur_state))
	    ? ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__aquila_core__DOT__i_m_strobe)
	        ? 1U : 0U) : ((1U == (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__icache_cur_state))
			       ? 3U : 0U));
}

void Vaquila_testharness_dp_ram::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_testharness_dp_ram::_ctor_var_reset\n"); );
    // Body
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__rst_n = VL_RAND_RESET_I(1);
    __PVT__strobe_icache = VL_RAND_RESET_I(1);
    __PVT__addr_icache_i = VL_RAND_RESET_I(32);
    __PVT__rdata_icache_o = VL_RAND_RESET_I(32);
    __PVT__done_icache_o = VL_RAND_RESET_I(1);
    __PVT__strobe_dcache = VL_RAND_RESET_I(1);
    __PVT__addr_dcache_i = VL_RAND_RESET_I(32);
    __PVT__wdata_dcache_i = VL_RAND_RESET_I(32);
    __PVT__rdata_dcache_o = VL_RAND_RESET_I(32);
    __PVT__rw_dcache_i = VL_RAND_RESET_I(1);
    __PVT__done_dcache_o = VL_RAND_RESET_I(1);
    __PVT__icache_cur_state = VL_RAND_RESET_I(2);
    __PVT__icache_next_state = VL_RAND_RESET_I(2);
    __PVT__dcache_cur_state = VL_RAND_RESET_I(2);
    __PVT__dcache_next_state = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<2097152; ++__Vi0) {
	    __PVT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    __PVT__icache_delay_counter = VL_RAND_RESET_I(8);
    __PVT__dcache_delay_counter = VL_RAND_RESET_I(8);
    __Vtableidx1 = VL_RAND_RESET_I(6);
    __Vtable1___PVT__dcache_next_state[0] = 0U;
    __Vtable1___PVT__dcache_next_state[1] = 1U;
    __Vtable1___PVT__dcache_next_state[2] = 2U;
    __Vtable1___PVT__dcache_next_state[3] = 0U;
    __Vtable1___PVT__dcache_next_state[4] = 0U;
    __Vtable1___PVT__dcache_next_state[5] = 1U;
    __Vtable1___PVT__dcache_next_state[6] = 3U;
    __Vtable1___PVT__dcache_next_state[7] = 0U;
    __Vtable1___PVT__dcache_next_state[8] = 0U;
    __Vtable1___PVT__dcache_next_state[9] = 3U;
    __Vtable1___PVT__dcache_next_state[10] = 2U;
    __Vtable1___PVT__dcache_next_state[11] = 0U;
    __Vtable1___PVT__dcache_next_state[12] = 0U;
    __Vtable1___PVT__dcache_next_state[13] = 3U;
    __Vtable1___PVT__dcache_next_state[14] = 3U;
    __Vtable1___PVT__dcache_next_state[15] = 0U;
    __Vtable1___PVT__dcache_next_state[16] = 1U;
    __Vtable1___PVT__dcache_next_state[17] = 1U;
    __Vtable1___PVT__dcache_next_state[18] = 2U;
    __Vtable1___PVT__dcache_next_state[19] = 0U;
    __Vtable1___PVT__dcache_next_state[20] = 1U;
    __Vtable1___PVT__dcache_next_state[21] = 1U;
    __Vtable1___PVT__dcache_next_state[22] = 3U;
    __Vtable1___PVT__dcache_next_state[23] = 0U;
    __Vtable1___PVT__dcache_next_state[24] = 1U;
    __Vtable1___PVT__dcache_next_state[25] = 3U;
    __Vtable1___PVT__dcache_next_state[26] = 2U;
    __Vtable1___PVT__dcache_next_state[27] = 0U;
    __Vtable1___PVT__dcache_next_state[28] = 1U;
    __Vtable1___PVT__dcache_next_state[29] = 3U;
    __Vtable1___PVT__dcache_next_state[30] = 3U;
    __Vtable1___PVT__dcache_next_state[31] = 0U;
    __Vtable1___PVT__dcache_next_state[32] = 0U;
    __Vtable1___PVT__dcache_next_state[33] = 1U;
    __Vtable1___PVT__dcache_next_state[34] = 2U;
    __Vtable1___PVT__dcache_next_state[35] = 0U;
    __Vtable1___PVT__dcache_next_state[36] = 0U;
    __Vtable1___PVT__dcache_next_state[37] = 1U;
    __Vtable1___PVT__dcache_next_state[38] = 3U;
    __Vtable1___PVT__dcache_next_state[39] = 0U;
    __Vtable1___PVT__dcache_next_state[40] = 0U;
    __Vtable1___PVT__dcache_next_state[41] = 3U;
    __Vtable1___PVT__dcache_next_state[42] = 2U;
    __Vtable1___PVT__dcache_next_state[43] = 0U;
    __Vtable1___PVT__dcache_next_state[44] = 0U;
    __Vtable1___PVT__dcache_next_state[45] = 3U;
    __Vtable1___PVT__dcache_next_state[46] = 3U;
    __Vtable1___PVT__dcache_next_state[47] = 0U;
    __Vtable1___PVT__dcache_next_state[48] = 2U;
    __Vtable1___PVT__dcache_next_state[49] = 1U;
    __Vtable1___PVT__dcache_next_state[50] = 2U;
    __Vtable1___PVT__dcache_next_state[51] = 0U;
    __Vtable1___PVT__dcache_next_state[52] = 2U;
    __Vtable1___PVT__dcache_next_state[53] = 1U;
    __Vtable1___PVT__dcache_next_state[54] = 3U;
    __Vtable1___PVT__dcache_next_state[55] = 0U;
    __Vtable1___PVT__dcache_next_state[56] = 2U;
    __Vtable1___PVT__dcache_next_state[57] = 3U;
    __Vtable1___PVT__dcache_next_state[58] = 2U;
    __Vtable1___PVT__dcache_next_state[59] = 0U;
    __Vtable1___PVT__dcache_next_state[60] = 2U;
    __Vtable1___PVT__dcache_next_state[61] = 3U;
    __Vtable1___PVT__dcache_next_state[62] = 3U;
    __Vtable1___PVT__dcache_next_state[63] = 0U;
    __Vdlyvdim0__mem__v0 = VL_RAND_RESET_I(21);
    __Vdlyvval__mem__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__mem__v0 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__mem__v1 = VL_RAND_RESET_I(21);
    __Vdlyvval__mem__v1 = VL_RAND_RESET_I(8);
    __Vdlyvdim0__mem__v2 = VL_RAND_RESET_I(21);
    __Vdlyvval__mem__v2 = VL_RAND_RESET_I(8);
    __Vdlyvdim0__mem__v3 = VL_RAND_RESET_I(21);
    __Vdlyvval__mem__v3 = VL_RAND_RESET_I(8);
}
