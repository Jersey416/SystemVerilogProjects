// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vstructs.h for the primary calling header

#ifndef VERILATED_VSTRUCTS___024ROOT_H_
#define VERILATED_VSTRUCTS___024ROOT_H_  // guard

#include "verilated.h"
#include "Vstructs___024root.h"


class Vstructs__Syms;
struct Vstructs_StructTest__DOT__unnamedblk1__DOT__comp_inventory__struct__0 {
    IData/*31:0*/ __PVT__cpus;
    IData/*31:0*/ __PVT__gpus;
    double __PVT__money;

    bool operator==(const Vstructs_StructTest__DOT__unnamedblk1__DOT__comp_inventory__struct__0& rhs) const {
        return __PVT__cpus == rhs.__PVT__cpus
            && __PVT__gpus == rhs.__PVT__gpus
            && __PVT__money == rhs.__PVT__money;
    }
    bool operator!=(const Vstructs_StructTest__DOT__unnamedblk1__DOT__comp_inventory__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vstructs_StructTest__DOT__unnamedblk1__DOT__comp_inventory__struct__0& rhs) const {
        return std::tie(__PVT__cpus, __PVT__gpus, __PVT__money)
            <  std::tie(rhs.__PVT__cpus, rhs.__PVT__gpus, rhs.__PVT__money);
    }
};
template <>
struct VlIsCustomStruct<Vstructs_StructTest__DOT__unnamedblk1__DOT__comp_inventory__struct__0> : public std::true_type {};
struct Vstructs_StructTest__DOT__unnamedblk2__DOT____typeimpmod1__struct__0 {
    IData/*31:0*/ __PVT__cow;
    IData/*31:0*/ __PVT__pig;
    IData/*31:0*/ __PVT__sheep;
    IData/*31:0*/ __PVT__horse;

    bool operator==(const Vstructs_StructTest__DOT__unnamedblk2__DOT____typeimpmod1__struct__0& rhs) const {
        return __PVT__cow == rhs.__PVT__cow
            && __PVT__pig == rhs.__PVT__pig
            && __PVT__sheep == rhs.__PVT__sheep
            && __PVT__horse == rhs.__PVT__horse;
    }
    bool operator!=(const Vstructs_StructTest__DOT__unnamedblk2__DOT____typeimpmod1__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vstructs_StructTest__DOT__unnamedblk2__DOT____typeimpmod1__struct__0& rhs) const {
        return std::tie(__PVT__cow, __PVT__pig, __PVT__sheep, __PVT__horse)
            <  std::tie(rhs.__PVT__cow, rhs.__PVT__pig, rhs.__PVT__sheep, rhs.__PVT__horse);
    }
};
template <>
struct VlIsCustomStruct<Vstructs_StructTest__DOT__unnamedblk2__DOT____typeimpmod1__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) Vstructs___024root final {
  public:

    // DESIGN SPECIFIC STATE
    Vstructs_StructTest__DOT__unnamedblk2__DOT____typeimpmod1__struct__0 StructTest__DOT__unnamedblk2__DOT__barn;

    // INTERNAL VARIABLES
    Vstructs__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vstructs___024root(Vstructs__Syms* symsp, const char* namep);
    ~Vstructs___024root();
    VL_UNCOPYABLE(Vstructs___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vstructs_StructTest__DOT__unnamedblk1__DOT__comp_inventory__struct__0& obj);
std::string VL_TO_STRING(const Vstructs_StructTest__DOT__unnamedblk2__DOT____typeimpmod1__struct__0& obj);

#endif  // guard
