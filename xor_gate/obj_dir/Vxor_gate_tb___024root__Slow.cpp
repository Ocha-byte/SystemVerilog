// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vxor_gate_tb.h for the primary calling header

#include "Vxor_gate_tb__pch.h"
#include "Vxor_gate_tb__Syms.h"
#include "Vxor_gate_tb___024root.h"

void Vxor_gate_tb___024root___ctor_var_reset(Vxor_gate_tb___024root* vlSelf);

Vxor_gate_tb___024root::Vxor_gate_tb___024root(Vxor_gate_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vxor_gate_tb___024root___ctor_var_reset(this);
}

void Vxor_gate_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vxor_gate_tb___024root::~Vxor_gate_tb___024root() {
}
