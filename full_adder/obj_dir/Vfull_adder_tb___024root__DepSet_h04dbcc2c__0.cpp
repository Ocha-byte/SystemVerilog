// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfull_adder_tb.h for the primary calling header

#include "Vfull_adder_tb__pch.h"
#include "Vfull_adder_tb__Syms.h"
#include "Vfull_adder_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vfull_adder_tb___024root___eval_initial__TOP__Vtiming__0(Vfull_adder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vfull_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelfRef.full_adder_tb__DOT__in1 = 0U;
    vlSelfRef.full_adder_tb__DOT__in2 = 0U;
    vlSelfRef.full_adder_tb__DOT__in3 = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "full_adder_tb.sv", 
                                         22);
    vlSelfRef.full_adder_tb__DOT__in1 = 0U;
    vlSelfRef.full_adder_tb__DOT__in2 = 0U;
    vlSelfRef.full_adder_tb__DOT__in3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "full_adder_tb.sv", 
                                         27);
    vlSelfRef.full_adder_tb__DOT__in1 = 0U;
    vlSelfRef.full_adder_tb__DOT__in2 = 1U;
    vlSelfRef.full_adder_tb__DOT__in3 = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "full_adder_tb.sv", 
                                         32);
    vlSelfRef.full_adder_tb__DOT__in1 = 0U;
    vlSelfRef.full_adder_tb__DOT__in2 = 1U;
    vlSelfRef.full_adder_tb__DOT__in3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "full_adder_tb.sv", 
                                         37);
    vlSelfRef.full_adder_tb__DOT__in1 = 1U;
    vlSelfRef.full_adder_tb__DOT__in2 = 0U;
    vlSelfRef.full_adder_tb__DOT__in3 = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "full_adder_tb.sv", 
                                         42);
    vlSelfRef.full_adder_tb__DOT__in1 = 1U;
    vlSelfRef.full_adder_tb__DOT__in2 = 0U;
    vlSelfRef.full_adder_tb__DOT__in3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "full_adder_tb.sv", 
                                         47);
    vlSelfRef.full_adder_tb__DOT__in1 = 1U;
    vlSelfRef.full_adder_tb__DOT__in2 = 1U;
    vlSelfRef.full_adder_tb__DOT__in3 = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "full_adder_tb.sv", 
                                         52);
    vlSelfRef.full_adder_tb__DOT__in1 = 1U;
    vlSelfRef.full_adder_tb__DOT__in2 = 1U;
    vlSelfRef.full_adder_tb__DOT__in3 = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "full_adder_tb.sv", 
                                         57);
    VL_FINISH_MT("full_adder_tb.sv", 59, "");
    __Vtemp_1[0U] = 0x2e667374U;
    __Vtemp_1[1U] = 0x666f726dU;
    __Vtemp_1[2U] = 0x77617665U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfull_adder_tb___024root___dump_triggers__act(Vfull_adder_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vfull_adder_tb___024root___eval_triggers__act(Vfull_adder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder_tb___024root___eval_triggers__act\n"); );
    Vfull_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfull_adder_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
