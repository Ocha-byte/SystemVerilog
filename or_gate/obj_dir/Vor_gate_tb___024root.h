// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vor_gate_tb.h for the primary calling header

#ifndef VERILATED_VOR_GATE_TB___024ROOT_H_
#define VERILATED_VOR_GATE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vor_gate_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vor_gate_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ or_gate_tb__DOT__in1;
    CData/*0:0*/ or_gate_tb__DOT__in2;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vor_gate_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vor_gate_tb___024root(Vor_gate_tb__Syms* symsp, const char* v__name);
    ~Vor_gate_tb___024root();
    VL_UNCOPYABLE(Vor_gate_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
