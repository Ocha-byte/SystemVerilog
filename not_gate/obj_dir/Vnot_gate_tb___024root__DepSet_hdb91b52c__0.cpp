// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnot_gate_tb.h for the primary calling header

#include "Vnot_gate_tb__pch.h"
#include "Vnot_gate_tb___024root.h"

VlCoroutine Vnot_gate_tb___024root___eval_initial__TOP__Vtiming__0(Vnot_gate_tb___024root* vlSelf);

void Vnot_gate_tb___024root___eval_initial(Vnot_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnot_gate_tb___024root___eval_initial\n"); );
    Vnot_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vnot_gate_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__not_gate_tb__DOT__in1__0 
        = vlSelfRef.not_gate_tb__DOT__in1;
}

void Vnot_gate_tb___024root___eval_act(Vnot_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnot_gate_tb___024root___eval_act\n"); );
    Vnot_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vnot_gate_tb___024root___nba_sequent__TOP__0(Vnot_gate_tb___024root* vlSelf);

void Vnot_gate_tb___024root___eval_nba(Vnot_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnot_gate_tb___024root___eval_nba\n"); );
    Vnot_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vnot_gate_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vnot_gate_tb___024root___timing_resume(Vnot_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnot_gate_tb___024root___timing_resume\n"); );
    Vnot_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vnot_gate_tb___024root___eval_triggers__act(Vnot_gate_tb___024root* vlSelf);

bool Vnot_gate_tb___024root___eval_phase__act(Vnot_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnot_gate_tb___024root___eval_phase__act\n"); );
    Vnot_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vnot_gate_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vnot_gate_tb___024root___timing_resume(vlSelf);
        Vnot_gate_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vnot_gate_tb___024root___eval_phase__nba(Vnot_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnot_gate_tb___024root___eval_phase__nba\n"); );
    Vnot_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vnot_gate_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnot_gate_tb___024root___dump_triggers__nba(Vnot_gate_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vnot_gate_tb___024root___dump_triggers__act(Vnot_gate_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vnot_gate_tb___024root___eval(Vnot_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnot_gate_tb___024root___eval\n"); );
    Vnot_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vnot_gate_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("not_gate_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vnot_gate_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("not_gate_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vnot_gate_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vnot_gate_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vnot_gate_tb___024root___eval_debug_assertions(Vnot_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnot_gate_tb___024root___eval_debug_assertions\n"); );
    Vnot_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
