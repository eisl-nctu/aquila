// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vaquila_testharness__Syms.h"
#include "Vaquila_testharness.h"
#include "Vaquila_testharness_aquila_testharness.h"
#include "Vaquila_testharness_dp_ram.h"

// FUNCTIONS
Vaquila_testharness__Syms::Vaquila_testharness__Syms(Vaquila_testharness* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_activity(false)
	, __Vm_didInit(false)
	// Setup submodule names
	, TOP__aquila_testharness        (Verilated::catName(topp->name(),"aquila_testharness"))
	, TOP__aquila_testharness__mock_ram (Verilated::catName(topp->name(),"aquila_testharness.mock_ram"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->aquila_testharness        = &TOP__aquila_testharness;
    TOPp->aquila_testharness->mock_ram  = &TOP__aquila_testharness__mock_ram;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__aquila_testharness.__Vconfigure(this, true);
    TOP__aquila_testharness__mock_ram.__Vconfigure(this, true);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
    }
}
