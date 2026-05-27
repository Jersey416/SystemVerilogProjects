// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfuncs_tasks__pch.h"

//============================================================
// Constructors

Vfuncs_tasks::Vfuncs_tasks(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vfuncs_tasks__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vfuncs_tasks::Vfuncs_tasks(const char* _vcname__)
    : Vfuncs_tasks(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vfuncs_tasks::~Vfuncs_tasks() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vfuncs_tasks___024root___eval_debug_assertions(Vfuncs_tasks___024root* vlSelf);
#endif  // VL_DEBUG
void Vfuncs_tasks___024root___eval_static(Vfuncs_tasks___024root* vlSelf);
void Vfuncs_tasks___024root___eval_initial(Vfuncs_tasks___024root* vlSelf);
void Vfuncs_tasks___024root___eval_settle(Vfuncs_tasks___024root* vlSelf);
void Vfuncs_tasks___024root___eval(Vfuncs_tasks___024root* vlSelf);

void Vfuncs_tasks::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfuncs_tasks::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfuncs_tasks___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vfuncs_tasks___024root___eval_static(&(vlSymsp->TOP));
        Vfuncs_tasks___024root___eval_initial(&(vlSymsp->TOP));
        Vfuncs_tasks___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vfuncs_tasks___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vfuncs_tasks::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vfuncs_tasks::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vfuncs_tasks::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vfuncs_tasks___024root___eval_final(Vfuncs_tasks___024root* vlSelf);

VL_ATTR_COLD void Vfuncs_tasks::final() {
    contextp()->executingFinal(true);
    Vfuncs_tasks___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vfuncs_tasks::hierName() const { return vlSymsp->name(); }
const char* Vfuncs_tasks::modelName() const { return "Vfuncs_tasks"; }
unsigned Vfuncs_tasks::threads() const { return 1; }
void Vfuncs_tasks::prepareClone() const { contextp()->prepareClone(); }
void Vfuncs_tasks::atClone() const {
    contextp()->threadPoolpOnClone();
}
