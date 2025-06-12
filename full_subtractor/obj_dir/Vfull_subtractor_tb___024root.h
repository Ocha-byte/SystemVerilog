// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfull_subtractor_tb.h for the primary calling header

#ifndef VERILATED_VFULL_SUBTRACTOR_TB___024ROOT_H_
#define VERILATED_VFULL_SUBTRACTOR_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vfull_subtractor_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfull_subtractor_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ full_subtractor_tb__DOT__in1;
    CData/*0:0*/ full_subtractor_tb__DOT__in2;
    CData/*0:0*/ full_subtractor_tb__DOT__in3;
    CData/*0:0*/ full_subtractor_tb__DOT__Diff;
    CData/*0:0*/ full_subtractor_tb__DOT__Borrow;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vfull_subtractor_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfull_subtractor_tb___024root(Vfull_subtractor_tb__Syms* symsp, const char* v__name);
    ~Vfull_subtractor_tb___024root();
    VL_UNCOPYABLE(Vfull_subtractor_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
