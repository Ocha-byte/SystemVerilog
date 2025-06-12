// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux_tb.h for the primary calling header

#include "Vmux_tb__pch.h"
#include "Vmux_tb__Syms.h"
#include "Vmux_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vmux_tb___024root___eval_initial__TOP__Vtiming__0(Vmux_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vmux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelfRef.mux_tb__DOT__sel = 0U;
    vlSelfRef.mux_tb__DOT__in1 = 0U;
    vlSelfRef.mux_tb__DOT__in2 = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "mux_tb.sv", 
                                         20);
    vlSelfRef.mux_tb__DOT__sel = 1U;
    vlSelfRef.mux_tb__DOT__in1 = 1U;
    vlSelfRef.mux_tb__DOT__in2 = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "mux_tb.sv", 
                                         24);
    vlSelfRef.mux_tb__DOT__sel = 0U;
    vlSelfRef.mux_tb__DOT__in1 = 0U;
    vlSelfRef.mux_tb__DOT__in2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "mux_tb.sv", 
                                         28);
    vlSelfRef.mux_tb__DOT__sel = 1U;
    vlSelfRef.mux_tb__DOT__in1 = 1U;
    vlSelfRef.mux_tb__DOT__in2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "mux_tb.sv", 
                                         32);
    VL_FINISH_MT("mux_tb.sv", 33, "");
    __Vtemp_1[0U] = 0x2e667374U;
    __Vtemp_1[1U] = 0x666f726dU;
    __Vtemp_1[2U] = 0x77617665U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux_tb___024root___dump_triggers__act(Vmux_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmux_tb___024root___eval_triggers__act(Vmux_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_tb___024root___eval_triggers__act\n"); );
    Vmux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.mux_tb__DOT__in1) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mux_tb__DOT__in1__0)));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.mux_tb__DOT__in2) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mux_tb__DOT__in2__0)));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.mux_tb__DOT__sel) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mux_tb__DOT__sel__0)));
    vlSelfRef.__VactTriggered.set(3U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__mux_tb__DOT__in1__0 
        = vlSelfRef.mux_tb__DOT__in1;
    vlSelfRef.__Vtrigprevexpr___TOP__mux_tb__DOT__in2__0 
        = vlSelfRef.mux_tb__DOT__in2;
    vlSelfRef.__Vtrigprevexpr___TOP__mux_tb__DOT__sel__0 
        = vlSelfRef.mux_tb__DOT__sel;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
        vlSelfRef.__VactTriggered.set(1U, 1U);
        vlSelfRef.__VactTriggered.set(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmux_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
