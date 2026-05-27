// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VARRAYS__SYMS_H_
#define VERILATED_VARRAYS__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Varrays.h"

// INCLUDE MODULE CLASSES
#include "Varrays___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Varrays__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Varrays* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Varrays___024root              TOP;

    // CONSTRUCTORS
    Varrays__Syms(VerilatedContext* contextp, const char* namep, Varrays* modelp);
    ~Varrays__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
