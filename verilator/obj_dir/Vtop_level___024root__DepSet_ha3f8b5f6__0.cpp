// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_level.h for the primary calling header

#include "Vtop_level__pch.h"
#include "Vtop_level__Syms.h"
#include "Vtop_level___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_level___024root___dump_triggers__ico(Vtop_level___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_level___024root___eval_triggers__ico(Vtop_level___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_level__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_level___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_level___024root___dump_triggers__act(Vtop_level___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_level___024root___eval_triggers__act(Vtop_level___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_level__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clock_i) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clock_i__0))) 
                                     | ((~ (IData)(vlSelf->top_level__DOT__a_rst_s)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__top_level__DOT__a_rst_s__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->clock_i) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clock_i__0))) 
                                     | ((~ (IData)(vlSelf->top_level__DOT__b_rst_s)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__top_level__DOT__b_rst_s__0))));
    vlSelf->__VactTriggered.set(2U, (((IData)(vlSelf->clock_i) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clock_i__0))) 
                                     | ((~ (IData)(vlSelf->top_level__DOT__fct_rst_s)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__top_level__DOT__fct_rst_s__0))));
    vlSelf->__VactTriggered.set(3U, (((IData)(vlSelf->clock_i) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clock_i__0))) 
                                     | ((~ (IData)(vlSelf->reset_i)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__reset_i__0))));
    vlSelf->__VactTriggered.set(4U, (((IData)(vlSelf->clock_i) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clock_i__0))) 
                                     | ((~ (IData)(vlSelf->top_level__DOT__res_rst_s)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__top_level__DOT__res_rst_s__0))));
    vlSelf->__VactTriggered.set(5U, (((IData)(vlSelf->clock_i) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clock_i__0))) 
                                     | ((~ (IData)(vlSelf->top_level__DOT__rem_rst_s)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__top_level__DOT__rem_rst_s__0))));
    vlSelf->__VactTriggered.set(6U, (((IData)(vlSelf->clock_i) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clock_i__0))) 
                                     | ((~ (IData)(vlSelf->top_level__DOT__done_rst_s)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__top_level__DOT__done_rst_s__0))));
    vlSelf->__Vtrigprevexpr___TOP__clock_i__0 = vlSelf->clock_i;
    vlSelf->__Vtrigprevexpr___TOP__top_level__DOT__a_rst_s__0 
        = vlSelf->top_level__DOT__a_rst_s;
    vlSelf->__Vtrigprevexpr___TOP__top_level__DOT__b_rst_s__0 
        = vlSelf->top_level__DOT__b_rst_s;
    vlSelf->__Vtrigprevexpr___TOP__top_level__DOT__fct_rst_s__0 
        = vlSelf->top_level__DOT__fct_rst_s;
    vlSelf->__Vtrigprevexpr___TOP__reset_i__0 = vlSelf->reset_i;
    vlSelf->__Vtrigprevexpr___TOP__top_level__DOT__res_rst_s__0 
        = vlSelf->top_level__DOT__res_rst_s;
    vlSelf->__Vtrigprevexpr___TOP__top_level__DOT__rem_rst_s__0 
        = vlSelf->top_level__DOT__rem_rst_s;
    vlSelf->__Vtrigprevexpr___TOP__top_level__DOT__done_rst_s__0 
        = vlSelf->top_level__DOT__done_rst_s;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_level___024root___dump_triggers__act(vlSelf);
    }
#endif
}
