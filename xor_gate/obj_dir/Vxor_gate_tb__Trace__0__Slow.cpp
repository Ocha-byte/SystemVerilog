// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vxor_gate_tb__Syms.h"


VL_ATTR_COLD void Vxor_gate_tb___024root__trace_init_sub__TOP__0(Vxor_gate_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxor_gate_tb___024root__trace_init_sub__TOP__0\n"); );
    Vxor_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("xor_gate_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"in1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"in2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"out1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"in2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"out1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vxor_gate_tb___024root__trace_init_top(Vxor_gate_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxor_gate_tb___024root__trace_init_top\n"); );
    Vxor_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vxor_gate_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vxor_gate_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vxor_gate_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vxor_gate_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vxor_gate_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vxor_gate_tb___024root__trace_register(Vxor_gate_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxor_gate_tb___024root__trace_register\n"); );
    Vxor_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vxor_gate_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vxor_gate_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vxor_gate_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vxor_gate_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vxor_gate_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxor_gate_tb___024root__trace_const_0\n"); );
    // Init
    Vxor_gate_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vxor_gate_tb___024root*>(voidSelf);
    Vxor_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vxor_gate_tb___024root__trace_full_0_sub_0(Vxor_gate_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vxor_gate_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxor_gate_tb___024root__trace_full_0\n"); );
    // Init
    Vxor_gate_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vxor_gate_tb___024root*>(voidSelf);
    Vxor_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vxor_gate_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vxor_gate_tb___024root__trace_full_0_sub_0(Vxor_gate_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxor_gate_tb___024root__trace_full_0_sub_0\n"); );
    Vxor_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.xor_gate_tb__DOT__in1));
    bufp->fullBit(oldp+2,(vlSelfRef.xor_gate_tb__DOT__in2));
    bufp->fullBit(oldp+3,(((IData)(vlSelfRef.xor_gate_tb__DOT__in1) 
                           ^ (IData)(vlSelfRef.xor_gate_tb__DOT__in2))));
}
