// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Varrays__pch.h"

//============================================================
// Constructors

Varrays::Varrays(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Varrays__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Varrays::Varrays(const char* _vcname__)
    : Varrays(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Varrays::~Varrays() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Varrays___024root___eval_debug_assertions(Varrays___024root* vlSelf);
#endif  // VL_DEBUG
void Varrays___024root___eval_static(Varrays___024root* vlSelf);
void Varrays___024root___eval_initial(Varrays___024root* vlSelf);
void Varrays___024root___eval_settle(Varrays___024root* vlSelf);
void Varrays___024root___eval(Varrays___024root* vlSelf);

void Varrays::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Varrays::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Varrays___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Varrays___024root___eval_static(&(vlSymsp->TOP));
        Varrays___024root___eval_initial(&(vlSymsp->TOP));
        Varrays___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Varrays___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Varrays::eventsPending() { return false; }

uint64_t Varrays::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Varrays::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Varrays___024root___eval_final(Varrays___024root* vlSelf);

VL_ATTR_COLD void Varrays::final() {
    contextp()->executingFinal(true);
    Varrays___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Varrays::hierName() const { return vlSymsp->name(); }
const char* Varrays::modelName() const { return "Varrays"; }
unsigned Varrays::threads() const { return 1; }
void Varrays::prepareClone() const { contextp()->prepareClone(); }
void Varrays::atClone() const {
    contextp()->threadPoolpOnClone();
}
