// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vled_and_gate_tb.h for the primary calling header

#ifndef VERILATED_VLED_AND_GATE_TB___024ROOT_H_
#define VERILATED_VLED_AND_GATE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vled_and_gate_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vled_and_gate_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ led_and_gate_tb__DOT__SW1;
    CData/*0:0*/ led_and_gate_tb__DOT__SW2;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vled_and_gate_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vled_and_gate_tb___024root(Vled_and_gate_tb__Syms* symsp, const char* v__name);
    ~Vled_and_gate_tb___024root();
    VL_UNCOPYABLE(Vled_and_gate_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
