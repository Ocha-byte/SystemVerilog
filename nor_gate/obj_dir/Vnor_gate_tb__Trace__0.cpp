// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vnor_gate_tb__Syms.h"


void Vnor_gate_tb___024root__trace_chg_0_sub_0(Vnor_gate_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vnor_gate_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnor_gate_tb___024root__trace_chg_0\n"); );
    // Init
    Vnor_gate_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnor_gate_tb___024root*>(voidSelf);
    Vnor_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vnor_gate_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vnor_gate_tb___024root__trace_chg_0_sub_0(Vnor_gate_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnor_gate_tb___024root__trace_chg_0_sub_0\n"); );
    Vnor_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.nor_gate_tb__DOT__in1));
    bufp->chgBit(oldp+1,(vlSelfRef.nor_gate_tb__DOT__in2));
    bufp->chgBit(oldp+2,((1U & (~ ((IData)(vlSelfRef.nor_gate_tb__DOT__in1) 
                                   | (IData)(vlSelfRef.nor_gate_tb__DOT__in2))))));
}

void Vnor_gate_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnor_gate_tb___024root__trace_cleanup\n"); );
    // Init
    Vnor_gate_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnor_gate_tb___024root*>(voidSelf);
    Vnor_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
