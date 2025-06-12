// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vxor_gate_tb.h for the primary calling header

#ifndef VERILATED_VXOR_GATE_TB___024ROOT_H_
#define VERILATED_VXOR_GATE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vxor_gate_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vxor_gate_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ xor_gate_tb__DOT__in1;
    CData/*0:0*/ xor_gate_tb__DOT__in2;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vxor_gate_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vxor_gate_tb___024root(Vxor_gate_tb__Syms* symsp, const char* v__name);
    ~Vxor_gate_tb___024root();
    VL_UNCOPYABLE(Vxor_gate_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
