// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Venum__pch.h"

//============================================================
// Constructors

Venum::Venum(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Venum__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Venum::Venum(const char* _vcname__)
    : Venum(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Venum::~Venum() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Venum___024root___eval_debug_assertions(Venum___024root* vlSelf);
#endif  // VL_DEBUG
void Venum___024root___eval_static(Venum___024root* vlSelf);
void Venum___024root___eval_initial(Venum___024root* vlSelf);
void Venum___024root___eval_settle(Venum___024root* vlSelf);
void Venum___024root___eval(Venum___024root* vlSelf);

void Venum::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Venum::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Venum___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Venum___024root___eval_static(&(vlSymsp->TOP));
        Venum___024root___eval_initial(&(vlSymsp->TOP));
        Venum___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Venum___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Venum::eventsPending() { return false; }

uint64_t Venum::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Venum::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Venum___024root___eval_final(Venum___024root* vlSelf);

VL_ATTR_COLD void Venum::final() {
    contextp()->executingFinal(true);
    Venum___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Venum::hierName() const { return vlSymsp->name(); }
const char* Venum::modelName() const { return "Venum"; }
unsigned Venum::threads() const { return 1; }
void Venum::prepareClone() const { contextp()->prepareClone(); }
void Venum::atClone() const {
    contextp()->threadPoolpOnClone();
}
