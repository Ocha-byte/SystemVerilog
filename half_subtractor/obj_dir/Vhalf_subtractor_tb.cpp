// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vhalf_subtractor_tb__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vhalf_subtractor_tb::Vhalf_subtractor_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vhalf_subtractor_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vhalf_subtractor_tb::Vhalf_subtractor_tb(const char* _vcname__)
    : Vhalf_subtractor_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vhalf_subtractor_tb::~Vhalf_subtractor_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vhalf_subtractor_tb___024root___eval_debug_assertions(Vhalf_subtractor_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vhalf_subtractor_tb___024root___eval_static(Vhalf_subtractor_tb___024root* vlSelf);
void Vhalf_subtractor_tb___024root___eval_initial(Vhalf_subtractor_tb___024root* vlSelf);
void Vhalf_subtractor_tb___024root___eval_settle(Vhalf_subtractor_tb___024root* vlSelf);
void Vhalf_subtractor_tb___024root___eval(Vhalf_subtractor_tb___024root* vlSelf);

void Vhalf_subtractor_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vhalf_subtractor_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vhalf_subtractor_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vhalf_subtractor_tb___024root___eval_static(&(vlSymsp->TOP));
        Vhalf_subtractor_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vhalf_subtractor_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vhalf_subtractor_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vhalf_subtractor_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vhalf_subtractor_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vhalf_subtractor_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vhalf_subtractor_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vhalf_subtractor_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vhalf_subtractor_tb___024root___eval_final(Vhalf_subtractor_tb___024root* vlSelf);

VL_ATTR_COLD void Vhalf_subtractor_tb::final() {
    Vhalf_subtractor_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vhalf_subtractor_tb::hierName() const { return vlSymsp->name(); }
const char* Vhalf_subtractor_tb::modelName() const { return "Vhalf_subtractor_tb"; }
unsigned Vhalf_subtractor_tb::threads() const { return 1; }
void Vhalf_subtractor_tb::prepareClone() const { contextp()->prepareClone(); }
void Vhalf_subtractor_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vhalf_subtractor_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vhalf_subtractor_tb___024root__trace_decl_types(VerilatedFst* tracep);

void Vhalf_subtractor_tb___024root__trace_init_top(Vhalf_subtractor_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vhalf_subtractor_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhalf_subtractor_tb___024root*>(voidSelf);
    Vhalf_subtractor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vhalf_subtractor_tb___024root__trace_decl_types(tracep);
    Vhalf_subtractor_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vhalf_subtractor_tb___024root__trace_register(Vhalf_subtractor_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vhalf_subtractor_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vhalf_subtractor_tb::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vhalf_subtractor_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
