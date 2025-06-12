// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfull_adder_tb.h for the primary calling header

#ifndef VERILATED_VFULL_ADDER_TB___024ROOT_H_
#define VERILATED_VFULL_ADDER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vfull_adder_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfull_adder_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ full_adder_tb__DOT__in1;
    CData/*0:0*/ full_adder_tb__DOT__in2;
    CData/*0:0*/ full_adder_tb__DOT__in3;
    CData/*0:0*/ full_adder_tb__DOT__Sum;
    CData/*0:0*/ full_adder_tb__DOT__Cout;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vfull_adder_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfull_adder_tb___024root(Vfull_adder_tb__Syms* symsp, const char* v__name);
    ~Vfull_adder_tb___024root();
    VL_UNCOPYABLE(Vfull_adder_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
