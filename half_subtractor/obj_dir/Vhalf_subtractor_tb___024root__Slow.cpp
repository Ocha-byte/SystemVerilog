// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhalf_subtractor_tb.h for the primary calling header

#include "Vhalf_subtractor_tb__pch.h"
#include "Vhalf_subtractor_tb__Syms.h"
#include "Vhalf_subtractor_tb___024root.h"

void Vhalf_subtractor_tb___024root___ctor_var_reset(Vhalf_subtractor_tb___024root* vlSelf);

Vhalf_subtractor_tb___024root::Vhalf_subtractor_tb___024root(Vhalf_subtractor_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vhalf_subtractor_tb___024root___ctor_var_reset(this);
}

void Vhalf_subtractor_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vhalf_subtractor_tb___024root::~Vhalf_subtractor_tb___024root() {
}
