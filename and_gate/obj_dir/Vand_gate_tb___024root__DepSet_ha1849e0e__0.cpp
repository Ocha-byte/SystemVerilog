// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vand_gate_tb.h for the primary calling header

#include "Vand_gate_tb__pch.h"
#include "Vand_gate_tb__Syms.h"
#include "Vand_gate_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vand_gate_tb___024root___eval_initial__TOP__Vtiming__0(Vand_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelfRef.and_gate_tb__DOT__in1 = 0U;
    vlSelfRef.and_gate_tb__DOT__in2 = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "and_gate_tb.sv", 
                                         18);
    vlSelfRef.and_gate_tb__DOT__in1 = 1U;
    vlSelfRef.and_gate_tb__DOT__in2 = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "and_gate_tb.sv", 
                                         21);
    vlSelfRef.and_gate_tb__DOT__in1 = 0U;
    vlSelfRef.and_gate_tb__DOT__in2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "and_gate_tb.sv", 
                                         24);
    vlSelfRef.and_gate_tb__DOT__in1 = 1U;
    vlSelfRef.and_gate_tb__DOT__in2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "and_gate_tb.sv", 
                                         27);
    VL_FINISH_MT("and_gate_tb.sv", 28, "");
    __Vtemp_1[0U] = 0x2e667374U;
    __Vtemp_1[1U] = 0x666f726dU;
    __Vtemp_1[2U] = 0x77617665U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vand_gate_tb___024root___dump_triggers__act(Vand_gate_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vand_gate_tb___024root___eval_triggers__act(Vand_gate_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate_tb___024root___eval_triggers__act\n"); );
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vand_gate_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
