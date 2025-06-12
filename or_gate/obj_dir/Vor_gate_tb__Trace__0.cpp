// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vor_gate_tb__Syms.h"


void Vor_gate_tb___024root__trace_chg_0_sub_0(Vor_gate_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vor_gate_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_gate_tb___024root__trace_chg_0\n"); );
    // Init
    Vor_gate_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vor_gate_tb___024root*>(voidSelf);
    Vor_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vor_gate_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vor_gate_tb___024root__trace_chg_0_sub_0(Vor_gate_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_gate_tb___024root__trace_chg_0_sub_0\n"); );
    Vor_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.or_gate_tb__DOT__in1));
    bufp->chgBit(oldp+1,(vlSelfRef.or_gate_tb__DOT__in2));
    bufp->chgBit(oldp+2,(((IData)(vlSelfRef.or_gate_tb__DOT__in1) 
                          | (IData)(vlSelfRef.or_gate_tb__DOT__in2))));
}

void Vor_gate_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_gate_tb___024root__trace_cleanup\n"); );
    // Init
    Vor_gate_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vor_gate_tb___024root*>(voidSelf);
    Vor_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
