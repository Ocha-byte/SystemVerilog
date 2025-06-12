// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vxnor_gate_tb__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vxnor_gate_tb::Vxnor_gate_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vxnor_gate_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vxnor_gate_tb::Vxnor_gate_tb(const char* _vcname__)
    : Vxnor_gate_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vxnor_gate_tb::~Vxnor_gate_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vxnor_gate_tb___024root___eval_debug_assertions(Vxnor_gate_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vxnor_gate_tb___024root___eval_static(Vxnor_gate_tb___024root* vlSelf);
void Vxnor_gate_tb___024root___eval_initial(Vxnor_gate_tb___024root* vlSelf);
void Vxnor_gate_tb___024root___eval_settle(Vxnor_gate_tb___024root* vlSelf);
void Vxnor_gate_tb___024root___eval(Vxnor_gate_tb___024root* vlSelf);

void Vxnor_gate_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vxnor_gate_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vxnor_gate_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vxnor_gate_tb___024root___eval_static(&(vlSymsp->TOP));
        Vxnor_gate_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vxnor_gate_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vxnor_gate_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vxnor_gate_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vxnor_gate_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vxnor_gate_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vxnor_gate_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vxnor_gate_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vxnor_gate_tb___024root___eval_final(Vxnor_gate_tb___024root* vlSelf);

VL_ATTR_COLD void Vxnor_gate_tb::final() {
    Vxnor_gate_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vxnor_gate_tb::hierName() const { return vlSymsp->name(); }
const char* Vxnor_gate_tb::modelName() const { return "Vxnor_gate_tb"; }
unsigned Vxnor_gate_tb::threads() const { return 1; }
void Vxnor_gate_tb::prepareClone() const { contextp()->prepareClone(); }
void Vxnor_gate_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vxnor_gate_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vxnor_gate_tb___024root__trace_decl_types(VerilatedFst* tracep);

void Vxnor_gate_tb___024root__trace_init_top(Vxnor_gate_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vxnor_gate_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vxnor_gate_tb___024root*>(voidSelf);
    Vxnor_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vxnor_gate_tb___024root__trace_decl_types(tracep);
    Vxnor_gate_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vxnor_gate_tb___024root__trace_register(Vxnor_gate_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vxnor_gate_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vxnor_gate_tb::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vxnor_gate_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
