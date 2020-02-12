// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_testharness.h for the primary calling header

#include "Vaquila_testharness.h"
#include "Vaquila_testharness__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vaquila_testharness) {
    Vaquila_testharness__Syms* __restrict vlSymsp = __VlSymsp = new Vaquila_testharness__Syms(this, name());
    Vaquila_testharness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(aquila_testharness, Vaquila_testharness_aquila_testharness);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vaquila_testharness::__Vconfigure(Vaquila_testharness__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vaquila_testharness::~Vaquila_testharness() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vaquila_testharness::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vaquila_testharness::eval\n"); );
    Vaquila_testharness__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vaquila_testharness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

void Vaquila_testharness::_eval_initial_loop(Vaquila_testharness__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void Vaquila_testharness::_eval(Vaquila_testharness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaquila_testharness::_eval\n"); );
    Vaquila_testharness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlSymsp->TOP__aquila_testharness__mock_ram._sequent__TOP__aquila_testharness__mock_ram__2(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
	vlSymsp->TOP__aquila_testharness._sequent__TOP__aquila_testharness__2(vlSymsp);
	vlSymsp->TOP__aquila_testharness__mock_ram._sequent__TOP__aquila_testharness__mock_ram__3(vlSymsp);
	vlSymsp->TOP__aquila_testharness._sequent__TOP__aquila_testharness__3(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vaquila_testharness::_eval_initial(Vaquila_testharness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaquila_testharness::_eval_initial\n"); );
    Vaquila_testharness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlSymsp->TOP__aquila_testharness._initial__TOP__aquila_testharness__4(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void Vaquila_testharness::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaquila_testharness::final\n"); );
    // Variables
    Vaquila_testharness__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vaquila_testharness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vaquila_testharness::_eval_settle(Vaquila_testharness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaquila_testharness::_eval_settle\n"); );
    Vaquila_testharness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__aquila_testharness._settle__TOP__aquila_testharness__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlSymsp->TOP__aquila_testharness__mock_ram._settle__TOP__aquila_testharness__mock_ram__1(vlSymsp);
}

VL_INLINE_OPT QData Vaquila_testharness::_change_request(Vaquila_testharness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaquila_testharness::_change_request\n"); );
    Vaquila_testharness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vaquila_testharness::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaquila_testharness::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
	Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((rst_n & 0xfeU))) {
	Verilated::overWidthError("rst_n");}
}
#endif // VL_DEBUG

void Vaquila_testharness::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaquila_testharness::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst_n = VL_RAND_RESET_I(1);
    main_memory_addr = VL_RAND_RESET_I(32);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
