// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmodule.h for the primary calling header

#include "Vmodule__pch.h"

VL_ATTR_COLD void Vmodule___024root___eval_static(Vmodule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmodule___024root___eval_static\n"); );
    Vmodule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmodule___024root___eval_initial(Vmodule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmodule___024root___eval_initial\n"); );
    Vmodule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("r0 = 0x5a \nr1 = 0x0\n\n\nr0 = 0xff \nr1 = 0x0\n",0);
}

VL_ATTR_COLD void Vmodule___024root___eval_initial__TOP(Vmodule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmodule___024root___eval_initial__TOP\n"); );
    Vmodule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("r0 = 0x5a \nr1 = 0x0\n\n\nr0 = 0xff \nr1 = 0x0\n",0);
}

VL_ATTR_COLD void Vmodule___024root___eval_final(Vmodule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmodule___024root___eval_final\n"); );
    Vmodule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmodule___024root___eval_settle(Vmodule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmodule___024root___eval_settle\n"); );
    Vmodule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
