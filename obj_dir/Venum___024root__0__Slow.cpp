// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Venum.h for the primary calling header

#include "Venum__pch.h"

VL_ATTR_COLD void Venum___024root___eval_static(Venum___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Venum___024root___eval_static\n"); );
    Venum__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Venum___024root___eval_initial(Venum___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Venum___024root___eval_initial\n"); );
    Venum__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vinline__eval_initial__TOP_EnumTest__DOT____VlemCall_3__set_brightness;
    IData/*31:0*/ __Vinline__eval_initial__TOP_EnumTest__DOT____VlemCall_2__set_brightness;
    IData/*31:0*/ __Vinline__eval_initial__TOP_EnumTest__DOT____VlemCall_1__set_brightness;
    CData/*7:0*/ __Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__1__level;
    __Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__1__level = 0;
    IData/*31:0*/ __Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__1__ret;
    __Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__1__ret = 0;
    IData/*31:0*/ __Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__2__mode;
    __Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__2__mode = 0;
    CData/*7:0*/ __Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__2__level;
    __Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__2__level = 0;
    IData/*31:0*/ __Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__2__ret;
    __Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__2__ret = 0;
    IData/*31:0*/ __Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__3__mode;
    __Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__3__mode = 0;
    CData/*7:0*/ __Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__3__level;
    __Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__3__level = 0;
    IData/*31:0*/ __Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__3__ret;
    __Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__3__ret = 0;
    // Body
    VL_WRITEF_NX("RED 1: 0x01000000\n",0);
    __Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__1__level = 0x19U;
    __Vinline__eval_initial__TOP_EnumTest__DOT____VlemCall_1__set_brightness = 0U;
    __Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__1__ret = 0U;
    __Vinline__eval_initial__TOP_EnumTest__DOT____VlemCall_1__set_brightness 
        = (__Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__1__ret 
           | VL_SHIFTL_III(32,8,32, (IData)(__Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__1__level), 0x00000010U));
    VL_WRITEF_NX("GREEN 25: 0x%h\n",1, '#',32,__Vinline__eval_initial__TOP_EnumTest__DOT____VlemCall_1__set_brightness);
    __Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__2__level = 0x64U;
    __Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__2__mode = 2U;
    __Vinline__eval_initial__TOP_EnumTest__DOT____VlemCall_2__set_brightness = 0U;
    __Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__2__ret = 0U;
    if ((2U == __Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__2__mode)) {
        __Vinline__eval_initial__TOP_EnumTest__DOT____VlemCall_2__set_brightness 
            = (__Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__2__ret 
               | VL_SHIFTL_III(32,8,32, (IData)(__Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__2__level), 8U));
    } else if ((3U == __Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__2__mode)) {
        __Vinline__eval_initial__TOP_EnumTest__DOT____VlemCall_2__set_brightness 
            = (__Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__2__ret 
               | __Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__2__level);
    }
    VL_WRITEF_NX("BLUE 100: 0x%h\n",1, '#',32,__Vinline__eval_initial__TOP_EnumTest__DOT____VlemCall_2__set_brightness);
    __Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__3__level = 0xffU;
    __Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__3__mode = 3U;
    __Vinline__eval_initial__TOP_EnumTest__DOT____VlemCall_3__set_brightness = 0U;
    __Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__3__ret = 0U;
    if ((2U == __Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__3__mode)) {
        __Vinline__eval_initial__TOP_EnumTest__DOT____VlemCall_3__set_brightness 
            = (__Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__3__ret 
               | VL_SHIFTL_III(32,8,32, (IData)(__Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__3__level), 8U));
    } else if ((3U == __Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__3__mode)) {
        __Vinline__eval_initial__TOP_EnumTest__DOT____VlemCall_3__set_brightness 
            = (__Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__3__ret 
               | __Vinline__eval_initial__TOP___Vfunc_EnumTest__DOT__set_brightness__3__level);
    }
    VL_WRITEF_NX("ALPHA 255: 0x%h\n",1, '#',32,__Vinline__eval_initial__TOP_EnumTest__DOT____VlemCall_3__set_brightness);
}

VL_ATTR_COLD void Venum___024root___eval_initial__TOP(Venum___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Venum___024root___eval_initial__TOP\n"); );
    Venum__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ EnumTest__DOT____VlemCall_3__set_brightness;
    IData/*31:0*/ EnumTest__DOT____VlemCall_2__set_brightness;
    IData/*31:0*/ EnumTest__DOT____VlemCall_1__set_brightness;
    CData/*7:0*/ __Vfunc_EnumTest__DOT__set_brightness__1__level;
    __Vfunc_EnumTest__DOT__set_brightness__1__level = 0;
    IData/*31:0*/ __Vfunc_EnumTest__DOT__set_brightness__1__ret;
    __Vfunc_EnumTest__DOT__set_brightness__1__ret = 0;
    IData/*31:0*/ __Vfunc_EnumTest__DOT__set_brightness__2__mode;
    __Vfunc_EnumTest__DOT__set_brightness__2__mode = 0;
    CData/*7:0*/ __Vfunc_EnumTest__DOT__set_brightness__2__level;
    __Vfunc_EnumTest__DOT__set_brightness__2__level = 0;
    IData/*31:0*/ __Vfunc_EnumTest__DOT__set_brightness__2__ret;
    __Vfunc_EnumTest__DOT__set_brightness__2__ret = 0;
    IData/*31:0*/ __Vfunc_EnumTest__DOT__set_brightness__3__mode;
    __Vfunc_EnumTest__DOT__set_brightness__3__mode = 0;
    CData/*7:0*/ __Vfunc_EnumTest__DOT__set_brightness__3__level;
    __Vfunc_EnumTest__DOT__set_brightness__3__level = 0;
    IData/*31:0*/ __Vfunc_EnumTest__DOT__set_brightness__3__ret;
    __Vfunc_EnumTest__DOT__set_brightness__3__ret = 0;
    // Body
    VL_WRITEF_NX("RED 1: 0x01000000\n",0);
    __Vfunc_EnumTest__DOT__set_brightness__1__level = 0x19U;
    EnumTest__DOT____VlemCall_1__set_brightness = 0U;
    __Vfunc_EnumTest__DOT__set_brightness__1__ret = 0U;
    EnumTest__DOT____VlemCall_1__set_brightness = (__Vfunc_EnumTest__DOT__set_brightness__1__ret 
                                                   | VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_EnumTest__DOT__set_brightness__1__level), 0x00000010U));
    VL_WRITEF_NX("GREEN 25: 0x%h\n",1, '#',32,EnumTest__DOT____VlemCall_1__set_brightness);
    __Vfunc_EnumTest__DOT__set_brightness__2__level = 0x64U;
    __Vfunc_EnumTest__DOT__set_brightness__2__mode = 2U;
    EnumTest__DOT____VlemCall_2__set_brightness = 0U;
    __Vfunc_EnumTest__DOT__set_brightness__2__ret = 0U;
    if ((2U == __Vfunc_EnumTest__DOT__set_brightness__2__mode)) {
        EnumTest__DOT____VlemCall_2__set_brightness 
            = (__Vfunc_EnumTest__DOT__set_brightness__2__ret 
               | VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_EnumTest__DOT__set_brightness__2__level), 8U));
    } else if ((3U == __Vfunc_EnumTest__DOT__set_brightness__2__mode)) {
        EnumTest__DOT____VlemCall_2__set_brightness 
            = (__Vfunc_EnumTest__DOT__set_brightness__2__ret 
               | (IData)(__Vfunc_EnumTest__DOT__set_brightness__2__level));
    }
    VL_WRITEF_NX("BLUE 100: 0x%h\n",1, '#',32,EnumTest__DOT____VlemCall_2__set_brightness);
    __Vfunc_EnumTest__DOT__set_brightness__3__level = 0xffU;
    __Vfunc_EnumTest__DOT__set_brightness__3__mode = 3U;
    EnumTest__DOT____VlemCall_3__set_brightness = 0U;
    __Vfunc_EnumTest__DOT__set_brightness__3__ret = 0U;
    if ((2U == __Vfunc_EnumTest__DOT__set_brightness__3__mode)) {
        EnumTest__DOT____VlemCall_3__set_brightness 
            = (__Vfunc_EnumTest__DOT__set_brightness__3__ret 
               | VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_EnumTest__DOT__set_brightness__3__level), 8U));
    } else if ((3U == __Vfunc_EnumTest__DOT__set_brightness__3__mode)) {
        EnumTest__DOT____VlemCall_3__set_brightness 
            = (__Vfunc_EnumTest__DOT__set_brightness__3__ret 
               | (IData)(__Vfunc_EnumTest__DOT__set_brightness__3__level));
    }
    VL_WRITEF_NX("ALPHA 255: 0x%h\n",1, '#',32,EnumTest__DOT____VlemCall_3__set_brightness);
}

VL_ATTR_COLD void Venum___024root___eval_final(Venum___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Venum___024root___eval_final\n"); );
    Venum__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Venum___024root___eval_settle(Venum___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Venum___024root___eval_settle\n"); );
    Venum__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
