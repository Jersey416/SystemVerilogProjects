// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VENUM__SYMS_H_
#define VERILATED_VENUM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Venum.h"

// INCLUDE MODULE CLASSES
#include "Venum___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Venum__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Venum* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Venum___024root                TOP;

    // CONSTRUCTORS
    Venum__Syms(VerilatedContext* contextp, const char* namep, Venum* modelp);
    ~Venum__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
