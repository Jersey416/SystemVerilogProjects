// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vstructs__pch.h"

//============================================================
// Constructors

Vstructs::Vstructs(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vstructs__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vstructs::Vstructs(const char* _vcname__)
    : Vstructs(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vstructs::~Vstructs() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vstructs___024root___eval_debug_assertions(Vstructs___024root* vlSelf);
#endif  // VL_DEBUG
void Vstructs___024root___eval_static(Vstructs___024root* vlSelf);
void Vstructs___024root___eval_initial(Vstructs___024root* vlSelf);
void Vstructs___024root___eval_settle(Vstructs___024root* vlSelf);
void Vstructs___024root___eval(Vstructs___024root* vlSelf);

void Vstructs::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vstructs::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vstructs___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vstructs___024root___eval_static(&(vlSymsp->TOP));
        Vstructs___024root___eval_initial(&(vlSymsp->TOP));
        Vstructs___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vstructs___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vstructs::eventsPending() { return false; }

uint64_t Vstructs::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vstructs::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vstructs___024root___eval_final(Vstructs___024root* vlSelf);

VL_ATTR_COLD void Vstructs::final() {
    contextp()->executingFinal(true);
    Vstructs___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vstructs::hierName() const { return vlSymsp->name(); }
const char* Vstructs::modelName() const { return "Vstructs"; }
unsigned Vstructs::threads() const { return 1; }
void Vstructs::prepareClone() const { contextp()->prepareClone(); }
void Vstructs::atClone() const {
    contextp()->threadPoolpOnClone();
}
