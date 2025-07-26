// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vled_and_gate_tb.h for the primary calling header

#include "Vled_and_gate_tb__pch.h"
#include "Vled_and_gate_tb__Syms.h"
#include "Vled_and_gate_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vled_and_gate_tb___024root___eval_initial__TOP__Vtiming__0(Vled_and_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_and_gate_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vled_and_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    vlSelfRef.led_and_gate_tb__DOT__SW1 = 0U;
    vlSelfRef.led_and_gate_tb__DOT__SW2 = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "led_and_gate_tb.v", 
                                         18);
    vlSelfRef.led_and_gate_tb__DOT__SW1 = 1U;
    vlSelfRef.led_and_gate_tb__DOT__SW2 = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "led_and_gate_tb.v", 
                                         21);
    vlSelfRef.led_and_gate_tb__DOT__SW1 = 0U;
    vlSelfRef.led_and_gate_tb__DOT__SW2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "led_and_gate_tb.v", 
                                         24);
    vlSelfRef.led_and_gate_tb__DOT__SW1 = 1U;
    vlSelfRef.led_and_gate_tb__DOT__SW2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "led_and_gate_tb.v", 
                                         27);
    VL_FINISH_MT("led_and_gate_tb.v", 28, "");
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x655f7462U;
    __Vtemp_1[2U] = 0x5f676174U;
    __Vtemp_1[3U] = 0x5f616e64U;
    __Vtemp_1[4U] = 0x6c6564U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vled_and_gate_tb___024root___dump_triggers__act(Vled_and_gate_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vled_and_gate_tb___024root___eval_triggers__act(Vled_and_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_and_gate_tb___024root___eval_triggers__act\n"); );
    Vled_and_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vled_and_gate_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
