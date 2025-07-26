// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vled_and_gate_tb__Syms.h"


VL_ATTR_COLD void Vled_and_gate_tb___024root__trace_init_sub__TOP__0(Vled_and_gate_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_and_gate_tb___024root__trace_init_sub__TOP__0\n"); );
    Vled_and_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("led_and_gate_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"SW1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"SW2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"LED0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"SW1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"SW2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"LED0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vled_and_gate_tb___024root__trace_init_top(Vled_and_gate_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_and_gate_tb___024root__trace_init_top\n"); );
    Vled_and_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vled_and_gate_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vled_and_gate_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vled_and_gate_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vled_and_gate_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vled_and_gate_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vled_and_gate_tb___024root__trace_register(Vled_and_gate_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_and_gate_tb___024root__trace_register\n"); );
    Vled_and_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vled_and_gate_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vled_and_gate_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vled_and_gate_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vled_and_gate_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vled_and_gate_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_and_gate_tb___024root__trace_const_0\n"); );
    // Init
    Vled_and_gate_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vled_and_gate_tb___024root*>(voidSelf);
    Vled_and_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vled_and_gate_tb___024root__trace_full_0_sub_0(Vled_and_gate_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vled_and_gate_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_and_gate_tb___024root__trace_full_0\n"); );
    // Init
    Vled_and_gate_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vled_and_gate_tb___024root*>(voidSelf);
    Vled_and_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vled_and_gate_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vled_and_gate_tb___024root__trace_full_0_sub_0(Vled_and_gate_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_and_gate_tb___024root__trace_full_0_sub_0\n"); );
    Vled_and_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.led_and_gate_tb__DOT__SW1));
    bufp->fullBit(oldp+2,(vlSelfRef.led_and_gate_tb__DOT__SW2));
    bufp->fullBit(oldp+3,(((IData)(vlSelfRef.led_and_gate_tb__DOT__SW1) 
                           & (IData)(vlSelfRef.led_and_gate_tb__DOT__SW2))));
}
