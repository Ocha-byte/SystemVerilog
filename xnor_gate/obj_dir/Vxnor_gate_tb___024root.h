// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vxnor_gate_tb.h for the primary calling header

#ifndef VERILATED_VXNOR_GATE_TB___024ROOT_H_
#define VERILATED_VXNOR_GATE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vxnor_gate_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vxnor_gate_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ xnor_gate_tb__DOT__in1;
    CData/*0:0*/ xnor_gate_tb__DOT__in2;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vxnor_gate_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vxnor_gate_tb___024root(Vxnor_gate_tb__Syms* symsp, const char* v__name);
    ~Vxnor_gate_tb___024root();
    VL_UNCOPYABLE(Vxnor_gate_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
