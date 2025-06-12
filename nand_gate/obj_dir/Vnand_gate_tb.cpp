// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vnand_gate_tb__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vnand_gate_tb::Vnand_gate_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vnand_gate_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vnand_gate_tb::Vnand_gate_tb(const char* _vcname__)
    : Vnand_gate_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vnand_gate_tb::~Vnand_gate_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vnand_gate_tb___024root___eval_debug_assertions(Vnand_gate_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vnand_gate_tb___024root___eval_static(Vnand_gate_tb___024root* vlSelf);
void Vnand_gate_tb___024root___eval_initial(Vnand_gate_tb___024root* vlSelf);
void Vnand_gate_tb___024root___eval_settle(Vnand_gate_tb___024root* vlSelf);
void Vnand_gate_tb___024root___eval(Vnand_gate_tb___024root* vlSelf);

void Vnand_gate_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vnand_gate_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vnand_gate_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vnand_gate_tb___024root___eval_static(&(vlSymsp->TOP));
        Vnand_gate_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vnand_gate_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vnand_gate_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vnand_gate_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vnand_gate_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vnand_gate_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vnand_gate_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vnand_gate_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vnand_gate_tb___024root___eval_final(Vnand_gate_tb___024root* vlSelf);

VL_ATTR_COLD void Vnand_gate_tb::final() {
    Vnand_gate_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vnand_gate_tb::hierName() const { return vlSymsp->name(); }
const char* Vnand_gate_tb::modelName() const { return "Vnand_gate_tb"; }
unsigned Vnand_gate_tb::threads() const { return 1; }
void Vnand_gate_tb::prepareClone() const { contextp()->prepareClone(); }
void Vnand_gate_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vnand_gate_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vnand_gate_tb___024root__trace_decl_types(VerilatedFst* tracep);

void Vnand_gate_tb___024root__trace_init_top(Vnand_gate_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vnand_gate_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnand_gate_tb___024root*>(voidSelf);
    Vnand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vnand_gate_tb___024root__trace_decl_types(tracep);
    Vnand_gate_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vnand_gate_tb___024root__trace_register(Vnand_gate_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vnand_gate_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vnand_gate_tb::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vnand_gate_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
