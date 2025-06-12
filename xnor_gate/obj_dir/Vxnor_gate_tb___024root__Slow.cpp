// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vxnor_gate_tb.h for the primary calling header

#include "Vxnor_gate_tb__pch.h"
#include "Vxnor_gate_tb__Syms.h"
#include "Vxnor_gate_tb___024root.h"

void Vxnor_gate_tb___024root___ctor_var_reset(Vxnor_gate_tb___024root* vlSelf);

Vxnor_gate_tb___024root::Vxnor_gate_tb___024root(Vxnor_gate_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vxnor_gate_tb___024root___ctor_var_reset(this);
}

void Vxnor_gate_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vxnor_gate_tb___024root::~Vxnor_gate_tb___024root() {
}
