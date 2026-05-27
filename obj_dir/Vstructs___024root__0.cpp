// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstructs.h for the primary calling header

#include "Vstructs__pch.h"

void Vstructs___024root___eval(Vstructs___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstructs___024root___eval\n"); );
    Vstructs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
void Vstructs___024root___eval_debug_assertions(Vstructs___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstructs___024root___eval_debug_assertions\n"); );
    Vstructs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG

std::string VL_TO_STRING(const Vstructs_StructTest__DOT__unnamedblk1__DOT__comp_inventory__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstructs___024root::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{cpus:" + VL_TO_STRING(obj.__PVT__cpus);
    out += ", gpus:" + VL_TO_STRING(obj.__PVT__gpus);
    out += ", money:" + VL_TO_STRING(obj.__PVT__money);
    out += "}";
    return (out);
}

std::string VL_TO_STRING(const Vstructs_StructTest__DOT__unnamedblk2__DOT____typeimpmod1__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstructs___024root::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{cow:" + VL_TO_STRING(obj.__PVT__cow);
    out += ", pig:" + VL_TO_STRING(obj.__PVT__pig);
    out += ", sheep:" + VL_TO_STRING(obj.__PVT__sheep);
    out += ", horse:" + VL_TO_STRING(obj.__PVT__horse);
    out += "}";
    return (out);
}
