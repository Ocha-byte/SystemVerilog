// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnot_gate_tb.h for the primary calling header

#ifndef VERILATED_VNOT_GATE_TB___024ROOT_H_
#define VERILATED_VNOT_GATE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vnot_gate_tb___024unit;


class Vnot_gate_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnot_gate_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vnot_gate_tb___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ not_gate_tb__DOT__in1;
    CData/*0:0*/ __Vtrigprevexpr___TOP__not_gate_tb__DOT__in1__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vnot_gate_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnot_gate_tb___024root(Vnot_gate_tb__Syms* symsp, const char* v__name);
    ~Vnot_gate_tb___024root();
    VL_UNCOPYABLE(Vnot_gate_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
