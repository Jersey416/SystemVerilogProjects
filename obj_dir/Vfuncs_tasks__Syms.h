// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VFUNCS_TASKS__SYMS_H_
#define VERILATED_VFUNCS_TASKS__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vfuncs_tasks.h"

// INCLUDE MODULE CLASSES
#include "Vfuncs_tasks___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vfuncs_tasks__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vfuncs_tasks* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vfuncs_tasks___024root         TOP;

    // CONSTRUCTORS
    Vfuncs_tasks__Syms(VerilatedContext* contextp, const char* namep, Vfuncs_tasks* modelp);
    ~Vfuncs_tasks__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
