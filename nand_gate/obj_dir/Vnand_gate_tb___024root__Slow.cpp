// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnand_gate_tb.h for the primary calling header

#include "Vnand_gate_tb__pch.h"
#include "Vnand_gate_tb__Syms.h"
#include "Vnand_gate_tb___024root.h"

void Vnand_gate_tb___024root___ctor_var_reset(Vnand_gate_tb___024root* vlSelf);

Vnand_gate_tb___024root::Vnand_gate_tb___024root(Vnand_gate_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vnand_gate_tb___024root___ctor_var_reset(this);
}

void Vnand_gate_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vnand_gate_tb___024root::~Vnand_gate_tb___024root() {
}
