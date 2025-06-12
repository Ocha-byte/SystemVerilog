// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vnor_gate_tb__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vnor_gate_tb::Vnor_gate_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vnor_gate_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vnor_gate_tb::Vnor_gate_tb(const char* _vcname__)
    : Vnor_gate_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vnor_gate_tb::~Vnor_gate_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vnor_gate_tb___024root___eval_debug_assertions(Vnor_gate_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vnor_gate_tb___024root___eval_static(Vnor_gate_tb___024root* vlSelf);
void Vnor_gate_tb___024root___eval_initial(Vnor_gate_tb___024root* vlSelf);
void Vnor_gate_tb___024root___eval_settle(Vnor_gate_tb___024root* vlSelf);
void Vnor_gate_tb___024root___eval(Vnor_gate_tb___024root* vlSelf);

void Vnor_gate_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vnor_gate_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vnor_gate_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vnor_gate_tb___024root___eval_static(&(vlSymsp->TOP));
        Vnor_gate_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vnor_gate_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vnor_gate_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vnor_gate_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vnor_gate_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vnor_gate_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vnor_gate_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vnor_gate_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vnor_gate_tb___024root___eval_final(Vnor_gate_tb___024root* vlSelf);

VL_ATTR_COLD void Vnor_gate_tb::final() {
    Vnor_gate_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vnor_gate_tb::hierName() const { return vlSymsp->name(); }
const char* Vnor_gate_tb::modelName() const { return "Vnor_gate_tb"; }
unsigned Vnor_gate_tb::threads() const { return 1; }
void Vnor_gate_tb::prepareClone() const { contextp()->prepareClone(); }
void Vnor_gate_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vnor_gate_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vnor_gate_tb___024root__trace_decl_types(VerilatedFst* tracep);

void Vnor_gate_tb___024root__trace_init_top(Vnor_gate_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vnor_gate_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnor_gate_tb___024root*>(voidSelf);
    Vnor_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vnor_gate_tb___024root__trace_decl_types(tracep);
    Vnor_gate_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vnor_gate_tb___024root__trace_register(Vnor_gate_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vnor_gate_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vnor_gate_tb::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vnor_gate_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
