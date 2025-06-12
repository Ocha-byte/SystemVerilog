// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vxnor_gate_tb.h for the primary calling header

#include "Vxnor_gate_tb__pch.h"
#include "Vxnor_gate_tb___024root.h"

VlCoroutine Vxnor_gate_tb___024root___eval_initial__TOP__Vtiming__0(Vxnor_gate_tb___024root* vlSelf);

void Vxnor_gate_tb___024root___eval_initial(Vxnor_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxnor_gate_tb___024root___eval_initial\n"); );
    Vxnor_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vxnor_gate_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

void Vxnor_gate_tb___024root___eval_act(Vxnor_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxnor_gate_tb___024root___eval_act\n"); );
    Vxnor_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vxnor_gate_tb___024root___eval_nba(Vxnor_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxnor_gate_tb___024root___eval_nba\n"); );
    Vxnor_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vxnor_gate_tb___024root___timing_resume(Vxnor_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxnor_gate_tb___024root___timing_resume\n"); );
    Vxnor_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vxnor_gate_tb___024root___eval_triggers__act(Vxnor_gate_tb___024root* vlSelf);

bool Vxnor_gate_tb___024root___eval_phase__act(Vxnor_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxnor_gate_tb___024root___eval_phase__act\n"); );
    Vxnor_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vxnor_gate_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vxnor_gate_tb___024root___timing_resume(vlSelf);
        Vxnor_gate_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vxnor_gate_tb___024root___eval_phase__nba(Vxnor_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxnor_gate_tb___024root___eval_phase__nba\n"); );
    Vxnor_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vxnor_gate_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vxnor_gate_tb___024root___dump_triggers__nba(Vxnor_gate_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vxnor_gate_tb___024root___dump_triggers__act(Vxnor_gate_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vxnor_gate_tb___024root___eval(Vxnor_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxnor_gate_tb___024root___eval\n"); );
    Vxnor_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vxnor_gate_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("xnor_gate_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vxnor_gate_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("xnor_gate_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vxnor_gate_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vxnor_gate_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vxnor_gate_tb___024root___eval_debug_assertions(Vxnor_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxnor_gate_tb___024root___eval_debug_assertions\n"); );
    Vxnor_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
