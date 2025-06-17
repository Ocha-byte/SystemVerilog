// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_tb.h for the primary calling header

#include "Valu_tb__pch.h"
#include "Valu_tb__Syms.h"
#include "Valu_tb___024root.h"

VL_INLINE_OPT VlCoroutine Valu_tb___024root___eval_initial__TOP__Vtiming__0(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelfRef.alu_tb__DOT__sel = 0U;
    vlSelfRef.alu_tb__DOT__rs1 = 0U;
    vlSelfRef.alu_tb__DOT__rs2 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "alu_tb.sv", 
                                         22);
    vlSelfRef.alu_tb__DOT__sel = 1U;
    vlSelfRef.alu_tb__DOT__rs1 = 0x80U;
    vlSelfRef.alu_tb__DOT__rs2 = 0x80U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "alu_tb.sv", 
                                         25);
    vlSelfRef.alu_tb__DOT__sel = 2U;
    vlSelfRef.alu_tb__DOT__rs1 = 0x80U;
    vlSelfRef.alu_tb__DOT__rs2 = 0x80U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "alu_tb.sv", 
                                         28);
    vlSelfRef.alu_tb__DOT__sel = 3U;
    vlSelfRef.alu_tb__DOT__rs1 = 0x80U;
    vlSelfRef.alu_tb__DOT__rs2 = 0x80U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "alu_tb.sv", 
                                         31);
    vlSelfRef.alu_tb__DOT__sel = 4U;
    vlSelfRef.alu_tb__DOT__rs1 = 0x80U;
    vlSelfRef.alu_tb__DOT__rs2 = 0x80U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "alu_tb.sv", 
                                         34);
    vlSelfRef.alu_tb__DOT__sel = 5U;
    vlSelfRef.alu_tb__DOT__rs1 = 0x80U;
    vlSelfRef.alu_tb__DOT__rs2 = 0x80U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "alu_tb.sv", 
                                         37);
    vlSelfRef.alu_tb__DOT__sel = 6U;
    vlSelfRef.alu_tb__DOT__rs1 = 0x80U;
    vlSelfRef.alu_tb__DOT__rs2 = 0x80U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "alu_tb.sv", 
                                         40);
    vlSelfRef.alu_tb__DOT__sel = 7U;
    vlSelfRef.alu_tb__DOT__rs1 = 0x80U;
    vlSelfRef.alu_tb__DOT__rs2 = 0x80U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "alu_tb.sv", 
                                         43);
    vlSelfRef.alu_tb__DOT__sel = 8U;
    vlSelfRef.alu_tb__DOT__rs1 = 0x80U;
    vlSelfRef.alu_tb__DOT__rs2 = 0x80U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "alu_tb.sv", 
                                         46);
    VL_FINISH_MT("alu_tb.sv", 46, "");
    __Vtemp_1[0U] = 0x2e667374U;
    __Vtemp_1[1U] = 0x666f726dU;
    __Vtemp_1[2U] = 0x77617665U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_tb___024root___dump_triggers__act(Valu_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Valu_tb___024root___eval_triggers__act(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_triggers__act\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
