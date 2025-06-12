// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfull_subtractor_tb.h for the primary calling header

#include "Vfull_subtractor_tb__pch.h"
#include "Vfull_subtractor_tb___024root.h"

VL_ATTR_COLD void Vfull_subtractor_tb___024root___eval_static(Vfull_subtractor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_subtractor_tb___024root___eval_static\n"); );
    Vfull_subtractor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vfull_subtractor_tb___024root___eval_final(Vfull_subtractor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_subtractor_tb___024root___eval_final\n"); );
    Vfull_subtractor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfull_subtractor_tb___024root___dump_triggers__stl(Vfull_subtractor_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vfull_subtractor_tb___024root___eval_phase__stl(Vfull_subtractor_tb___024root* vlSelf);

VL_ATTR_COLD void Vfull_subtractor_tb___024root___eval_settle(Vfull_subtractor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_subtractor_tb___024root___eval_settle\n"); );
    Vfull_subtractor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vfull_subtractor_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("full_subtractor_tb.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vfull_subtractor_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfull_subtractor_tb___024root___dump_triggers__stl(Vfull_subtractor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_subtractor_tb___024root___dump_triggers__stl\n"); );
    Vfull_subtractor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vfull_subtractor_tb___024root___act_sequent__TOP__0(Vfull_subtractor_tb___024root* vlSelf);

VL_ATTR_COLD void Vfull_subtractor_tb___024root___eval_stl(Vfull_subtractor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_subtractor_tb___024root___eval_stl\n"); );
    Vfull_subtractor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vfull_subtractor_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vfull_subtractor_tb___024root___eval_triggers__stl(Vfull_subtractor_tb___024root* vlSelf);

VL_ATTR_COLD bool Vfull_subtractor_tb___024root___eval_phase__stl(Vfull_subtractor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_subtractor_tb___024root___eval_phase__stl\n"); );
    Vfull_subtractor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vfull_subtractor_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vfull_subtractor_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfull_subtractor_tb___024root___dump_triggers__act(Vfull_subtractor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_subtractor_tb___024root___dump_triggers__act\n"); );
    Vfull_subtractor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfull_subtractor_tb___024root___dump_triggers__nba(Vfull_subtractor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_subtractor_tb___024root___dump_triggers__nba\n"); );
    Vfull_subtractor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfull_subtractor_tb___024root___ctor_var_reset(Vfull_subtractor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_subtractor_tb___024root___ctor_var_reset\n"); );
    Vfull_subtractor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->full_subtractor_tb__DOT__in1 = VL_RAND_RESET_I(1);
    vlSelf->full_subtractor_tb__DOT__in2 = VL_RAND_RESET_I(1);
    vlSelf->full_subtractor_tb__DOT__in3 = VL_RAND_RESET_I(1);
    vlSelf->full_subtractor_tb__DOT__Diff = VL_RAND_RESET_I(1);
    vlSelf->full_subtractor_tb__DOT__Borrow = VL_RAND_RESET_I(1);
    }
