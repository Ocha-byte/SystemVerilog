// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux_tb.h for the primary calling header

#ifndef VERILATED_VMUX_TB___024ROOT_H_
#define VERILATED_VMUX_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vmux_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmux_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ mux_tb__DOT__sel;
    CData/*0:0*/ mux_tb__DOT__in1;
    CData/*0:0*/ mux_tb__DOT__in2;
    CData/*0:0*/ mux_tb__DOT__out1;
    CData/*0:0*/ __Vtrigprevexpr___TOP__mux_tb__DOT__in1__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__mux_tb__DOT__in2__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__mux_tb__DOT__sel__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmux_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmux_tb___024root(Vmux_tb__Syms* symsp, const char* v__name);
    ~Vmux_tb___024root();
    VL_UNCOPYABLE(Vmux_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
