// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnand_gate_tb.h for the primary calling header

#ifndef VERILATED_VNAND_GATE_TB___024ROOT_H_
#define VERILATED_VNAND_GATE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vnand_gate_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnand_gate_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ nand_gate_tb__DOT__in1;
    CData/*0:0*/ nand_gate_tb__DOT__in2;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vnand_gate_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnand_gate_tb___024root(Vnand_gate_tb__Syms* symsp, const char* v__name);
    ~Vnand_gate_tb___024root();
    VL_UNCOPYABLE(Vnand_gate_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
