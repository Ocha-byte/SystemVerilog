// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnot_gate_tb.h for the primary calling header

#ifndef VERILATED_VNOT_GATE_TB___024UNIT_H_
#define VERILATED_VNOT_GATE_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vnot_gate_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnot_gate_tb___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vnot_gate_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnot_gate_tb___024unit(Vnot_gate_tb__Syms* symsp, const char* v__name);
    ~Vnot_gate_tb___024unit();
    VL_UNCOPYABLE(Vnot_gate_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
