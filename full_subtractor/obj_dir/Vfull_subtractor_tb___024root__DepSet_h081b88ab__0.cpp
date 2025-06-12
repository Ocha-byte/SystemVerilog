// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfull_subtractor_tb.h for the primary calling header

#include "Vfull_subtractor_tb__pch.h"
#include "Vfull_subtractor_tb___024root.h"

VlCoroutine Vfull_subtractor_tb___024root___eval_initial__TOP__Vtiming__0(Vfull_subtractor_tb___024root* vlSelf);

void Vfull_subtractor_tb___024root___eval_initial(Vfull_subtractor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_subtractor_tb___024root___eval_initial\n"); );
    Vfull_subtractor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vfull_subtractor_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

void Vfull_subtractor_tb___024root___act_sequent__TOP__0(Vfull_subtractor_tb___024root* vlSelf);

void Vfull_subtractor_tb___024root___eval_act(Vfull_subtractor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_subtractor_tb___024root___eval_act\n"); );
    Vfull_subtractor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vfull_subtractor_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vfull_subtractor_tb___024root___act_sequent__TOP__0(Vfull_subtractor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_subtractor_tb___024root___act_sequent__TOP__0\n"); );
    Vfull_subtractor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.full_subtractor_tb__DOT__Diff = (((IData)(vlSelfRef.full_subtractor_tb__DOT__in1) 
                                                ^ (IData)(vlSelfRef.full_subtractor_tb__DOT__in2)) 
                                               ^ (IData)(vlSelfRef.full_subtractor_tb__DOT__in3));
    vlSelfRef.full_subtractor_tb__DOT__Borrow = (((~ 
                                                   ((IData)(vlSelfRef.full_subtractor_tb__DOT__in1) 
                                                    ^ (IData)(vlSelfRef.full_subtractor_tb__DOT__in2))) 
                                                  & (IData)(vlSelfRef.full_subtractor_tb__DOT__in3)) 
                                                 | ((~ (IData)(vlSelfRef.full_subtractor_tb__DOT__in1)) 
                                                    & (IData)(vlSelfRef.full_subtractor_tb__DOT__in2)));
}

void Vfull_subtractor_tb___024root___eval_nba(Vfull_subtractor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_subtractor_tb___024root___eval_nba\n"); );
    Vfull_subtractor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vfull_subtractor_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vfull_subtractor_tb___024root___timing_resume(Vfull_subtractor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_subtractor_tb___024root___timing_resume\n"); );
    Vfull_subtractor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vfull_subtractor_tb___024root___eval_triggers__act(Vfull_subtractor_tb___024root* vlSelf);

bool Vfull_subtractor_tb___024root___eval_phase__act(Vfull_subtractor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_subtractor_tb___024root___eval_phase__act\n"); );
    Vfull_subtractor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vfull_subtractor_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vfull_subtractor_tb___024root___timing_resume(vlSelf);
        Vfull_subtractor_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vfull_subtractor_tb___024root___eval_phase__nba(Vfull_subtractor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_subtractor_tb___024root___eval_phase__nba\n"); );
    Vfull_subtractor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vfull_subtractor_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfull_subtractor_tb___024root___dump_triggers__nba(Vfull_subtractor_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vfull_subtractor_tb___024root___dump_triggers__act(Vfull_subtractor_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vfull_subtractor_tb___024root___eval(Vfull_subtractor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_subtractor_tb___024root___eval\n"); );
    Vfull_subtractor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vfull_subtractor_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("full_subtractor_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vfull_subtractor_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("full_subtractor_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vfull_subtractor_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vfull_subtractor_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vfull_subtractor_tb___024root___eval_debug_assertions(Vfull_subtractor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_subtractor_tb___024root___eval_debug_assertions\n"); );
    Vfull_subtractor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
