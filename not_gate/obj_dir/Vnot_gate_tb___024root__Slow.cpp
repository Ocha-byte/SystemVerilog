// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnot_gate_tb.h for the primary calling header

#include "Vnot_gate_tb__pch.h"
#include "Vnot_gate_tb__Syms.h"
#include "Vnot_gate_tb___024root.h"

void Vnot_gate_tb___024root___ctor_var_reset(Vnot_gate_tb___024root* vlSelf);

Vnot_gate_tb___024root::Vnot_gate_tb___024root(Vnot_gate_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vnot_gate_tb___024root___ctor_var_reset(this);
}

void Vnot_gate_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vnot_gate_tb___024root::~Vnot_gate_tb___024root() {
}
