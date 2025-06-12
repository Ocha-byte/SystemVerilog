// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfull_subtractor_tb.h for the primary calling header

#include "Vfull_subtractor_tb__pch.h"
#include "Vfull_subtractor_tb__Syms.h"
#include "Vfull_subtractor_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfull_subtractor_tb___024root___dump_triggers__stl(Vfull_subtractor_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfull_subtractor_tb___024root___eval_triggers__stl(Vfull_subtractor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_subtractor_tb___024root___eval_triggers__stl\n"); );
    Vfull_subtractor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfull_subtractor_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
