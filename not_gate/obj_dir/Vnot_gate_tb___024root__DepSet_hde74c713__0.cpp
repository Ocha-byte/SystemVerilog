// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnot_gate_tb.h for the primary calling header

#include "Vnot_gate_tb__pch.h"
#include "Vnot_gate_tb__Syms.h"
#include "Vnot_gate_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vnot_gate_tb___024root___eval_initial__TOP__Vtiming__0(Vnot_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnot_gate_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vnot_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelfRef.not_gate_tb__DOT__in1 = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "not_gate_tb.sv", 
                                         16);
    vlSelfRef.not_gate_tb__DOT__in1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "not_gate_tb.sv", 
                                         18);
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    VL_FINISH_MT("not_gate_tb.sv", 20, "");
    __Vtemp_1[0U] = 0x2e667374U;
    __Vtemp_1[1U] = 0x666f726dU;
    __Vtemp_1[2U] = 0x77617665U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnot_gate_tb___024root___dump_triggers__act(Vnot_gate_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vnot_gate_tb___024root___eval_triggers__act(Vnot_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnot_gate_tb___024root___eval_triggers__act\n"); );
    Vnot_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.not_gate_tb__DOT__in1) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__not_gate_tb__DOT__in1__0)));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__not_gate_tb__DOT__in1__0 
        = vlSelfRef.not_gate_tb__DOT__in1;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vnot_gate_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vnot_gate_tb___024root___nba_sequent__TOP__0(Vnot_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnot_gate_tb___024root___nba_sequent__TOP__0\n"); );
    Vnot_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                      & (1U == vlSymsp->TOP____024unit.__VmonitorNum))))) {
        VL_WRITEF_NX("%t | in1 = %1#| out1 = %1#\n",0,
                     64,VL_TIME_UNITED_Q(1),-9,1,(IData)(vlSelfRef.not_gate_tb__DOT__in1),
                     1,(1U & (~ (IData)(vlSelfRef.not_gate_tb__DOT__in1))));
    }
}
