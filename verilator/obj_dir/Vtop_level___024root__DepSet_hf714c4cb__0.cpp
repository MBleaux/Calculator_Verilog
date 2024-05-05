// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_level.h for the primary calling header

#include "Vtop_level__pch.h"
#include "Vtop_level___024root.h"

void Vtop_level___024root___ico_sequent__TOP__0(Vtop_level___024root* vlSelf);

void Vtop_level___024root___eval_ico(Vtop_level___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_level__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop_level___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop_level___024root___ico_sequent__TOP__0(Vtop_level___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_level__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->top_level__DOT__fsm_unit__DOT__next_state 
        = ((0U == vlSelf->top_level__DOT__fsm_unit__DOT__current_state)
            ? ((IData)(vlSelf->start_i) ? 1U : 0U) : 
           ((1U == vlSelf->top_level__DOT__fsm_unit__DOT__current_state)
             ? 2U : ((2U == vlSelf->top_level__DOT__fsm_unit__DOT__current_state)
                      ? 3U : ((3U == vlSelf->top_level__DOT__fsm_unit__DOT__current_state)
                               ? 4U : ((4U == vlSelf->top_level__DOT__fsm_unit__DOT__current_state)
                                        ? ((IData)(vlSelf->reset_i)
                                            ? 4U : 0U)
                                        : 0U)))));
}

void Vtop_level___024root___eval_triggers__ico(Vtop_level___024root* vlSelf);

bool Vtop_level___024root___eval_phase__ico(Vtop_level___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_level__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop_level___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop_level___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop_level___024root___eval_act(Vtop_level___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_level__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level___024root___eval_act\n"); );
}

void Vtop_level___024root___nba_sequent__TOP__0(Vtop_level___024root* vlSelf);
void Vtop_level___024root___nba_sequent__TOP__1(Vtop_level___024root* vlSelf);
void Vtop_level___024root___nba_sequent__TOP__2(Vtop_level___024root* vlSelf);
void Vtop_level___024root___nba_sequent__TOP__3(Vtop_level___024root* vlSelf);
void Vtop_level___024root___nba_sequent__TOP__4(Vtop_level___024root* vlSelf);
void Vtop_level___024root___nba_sequent__TOP__5(Vtop_level___024root* vlSelf);
void Vtop_level___024root___nba_sequent__TOP__6(Vtop_level___024root* vlSelf);
void Vtop_level___024root___nba_comb__TOP__0(Vtop_level___024root* vlSelf);

void Vtop_level___024root___eval_nba(Vtop_level___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_level__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level___024root___eval_nba\n"); );
    // Body
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_level___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_level___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_level___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_level___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_level___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_level___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_level___024root___nba_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_level___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vtop_level___024root___nba_sequent__TOP__0(Vtop_level___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_level__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->top_level__DOT__done_rst_s) {
        if (vlSelf->top_level__DOT__done_we_s) {
            vlSelf->done_o = vlSelf->top_level__DOT__done_o_s;
        }
    } else {
        vlSelf->done_o = 0U;
    }
}

VL_INLINE_OPT void Vtop_level___024root___nba_sequent__TOP__1(Vtop_level___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_level__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->top_level__DOT__res_rst_s) {
        if (vlSelf->top_level__DOT__res_we_s) {
            vlSelf->res_o = vlSelf->top_level__DOT__res_s;
        }
    } else {
        vlSelf->res_o = 0U;
    }
}

VL_INLINE_OPT void Vtop_level___024root___nba_sequent__TOP__2(Vtop_level___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_level__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->top_level__DOT__rem_rst_s) {
        if (vlSelf->top_level__DOT__rem_we_s) {
            vlSelf->rem_o = vlSelf->top_level__DOT__rem_s;
        }
    } else {
        vlSelf->rem_o = 0U;
    }
}

VL_INLINE_OPT void Vtop_level___024root___nba_sequent__TOP__3(Vtop_level___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_level__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->top_level__DOT__a_rst_s) {
        if (vlSelf->top_level__DOT__a_we_s) {
            vlSelf->top_level__DOT__a_i_s = vlSelf->a_i;
        }
    } else {
        vlSelf->top_level__DOT__a_i_s = 0U;
    }
}

VL_INLINE_OPT void Vtop_level___024root___nba_sequent__TOP__4(Vtop_level___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_level__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level___024root___nba_sequent__TOP__4\n"); );
    // Body
    if (vlSelf->top_level__DOT__b_rst_s) {
        if (vlSelf->top_level__DOT__b_we_s) {
            vlSelf->top_level__DOT__b_i_s = vlSelf->b_i;
        }
    } else {
        vlSelf->top_level__DOT__b_i_s = 0U;
    }
}

VL_INLINE_OPT void Vtop_level___024root___nba_sequent__TOP__5(Vtop_level___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_level__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level___024root___nba_sequent__TOP__5\n"); );
    // Body
    if (vlSelf->top_level__DOT__fct_rst_s) {
        if (vlSelf->top_level__DOT__fct_we_s) {
            vlSelf->top_level__DOT__fct_i_s = vlSelf->fct_i;
        }
    } else {
        vlSelf->top_level__DOT__fct_i_s = 0U;
    }
}

VL_INLINE_OPT void Vtop_level___024root___nba_sequent__TOP__6(Vtop_level___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_level__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level___024root___nba_sequent__TOP__6\n"); );
    // Body
    vlSelf->top_level__DOT__fsm_unit__DOT__current_state 
        = ((IData)(vlSelf->reset_i) ? vlSelf->top_level__DOT__fsm_unit__DOT__next_state
            : 0U);
    if ((0U == vlSelf->top_level__DOT__fsm_unit__DOT__current_state)) {
        vlSelf->top_level__DOT__done_we_s = 0U;
        vlSelf->top_level__DOT__rem_we_s = 0U;
        vlSelf->top_level__DOT__res_we_s = 0U;
        vlSelf->top_level__DOT__fct_we_s = 0U;
        vlSelf->top_level__DOT__b_we_s = 0U;
        vlSelf->top_level__DOT__a_we_s = 0U;
        vlSelf->top_level__DOT__done_rst_s = 0U;
        vlSelf->top_level__DOT__rem_rst_s = 0U;
        vlSelf->top_level__DOT__res_rst_s = 0U;
        vlSelf->top_level__DOT__fct_rst_s = 0U;
        vlSelf->top_level__DOT__b_rst_s = 0U;
        vlSelf->top_level__DOT__a_rst_s = 0U;
        vlSelf->top_level__DOT__fsm_unit__DOT__next_state 
            = ((IData)(vlSelf->start_i) ? 1U : 0U);
    } else if ((1U == vlSelf->top_level__DOT__fsm_unit__DOT__current_state)) {
        vlSelf->top_level__DOT__done_we_s = 0U;
        vlSelf->top_level__DOT__rem_we_s = 0U;
        vlSelf->top_level__DOT__res_we_s = 0U;
        vlSelf->top_level__DOT__fct_we_s = 1U;
        vlSelf->top_level__DOT__b_we_s = 1U;
        vlSelf->top_level__DOT__a_we_s = 1U;
        vlSelf->top_level__DOT__done_rst_s = 0U;
        vlSelf->top_level__DOT__rem_rst_s = 0U;
        vlSelf->top_level__DOT__res_rst_s = 0U;
        vlSelf->top_level__DOT__fct_rst_s = 1U;
        vlSelf->top_level__DOT__b_rst_s = 1U;
        vlSelf->top_level__DOT__a_rst_s = 1U;
        vlSelf->top_level__DOT__fsm_unit__DOT__next_state = 2U;
    } else if ((2U == vlSelf->top_level__DOT__fsm_unit__DOT__current_state)) {
        vlSelf->top_level__DOT__done_we_s = 0U;
        vlSelf->top_level__DOT__rem_we_s = 0U;
        vlSelf->top_level__DOT__res_we_s = 0U;
        vlSelf->top_level__DOT__fct_we_s = 0U;
        vlSelf->top_level__DOT__b_we_s = 0U;
        vlSelf->top_level__DOT__a_we_s = 0U;
        vlSelf->top_level__DOT__done_rst_s = 0U;
        vlSelf->top_level__DOT__rem_rst_s = 0U;
        vlSelf->top_level__DOT__res_rst_s = 0U;
        vlSelf->top_level__DOT__fct_rst_s = 1U;
        vlSelf->top_level__DOT__b_rst_s = 1U;
        vlSelf->top_level__DOT__a_rst_s = 1U;
        vlSelf->top_level__DOT__fsm_unit__DOT__next_state = 3U;
    } else if ((3U == vlSelf->top_level__DOT__fsm_unit__DOT__current_state)) {
        vlSelf->top_level__DOT__done_we_s = 1U;
        vlSelf->top_level__DOT__rem_we_s = 1U;
        vlSelf->top_level__DOT__res_we_s = 1U;
        vlSelf->top_level__DOT__fct_we_s = 0U;
        vlSelf->top_level__DOT__b_we_s = 0U;
        vlSelf->top_level__DOT__a_we_s = 0U;
        vlSelf->top_level__DOT__done_rst_s = 1U;
        vlSelf->top_level__DOT__rem_rst_s = 1U;
        vlSelf->top_level__DOT__res_rst_s = 1U;
        vlSelf->top_level__DOT__fct_rst_s = 1U;
        vlSelf->top_level__DOT__b_rst_s = 1U;
        vlSelf->top_level__DOT__a_rst_s = 1U;
        vlSelf->top_level__DOT__fsm_unit__DOT__next_state = 4U;
    } else if ((4U == vlSelf->top_level__DOT__fsm_unit__DOT__current_state)) {
        vlSelf->top_level__DOT__done_we_s = 0U;
        vlSelf->top_level__DOT__rem_we_s = 0U;
        vlSelf->top_level__DOT__res_we_s = 0U;
        vlSelf->top_level__DOT__fct_we_s = 0U;
        vlSelf->top_level__DOT__b_we_s = 0U;
        vlSelf->top_level__DOT__a_we_s = 0U;
        vlSelf->top_level__DOT__done_rst_s = 1U;
        vlSelf->top_level__DOT__rem_rst_s = 1U;
        vlSelf->top_level__DOT__res_rst_s = 1U;
        vlSelf->top_level__DOT__fct_rst_s = 1U;
        vlSelf->top_level__DOT__b_rst_s = 1U;
        vlSelf->top_level__DOT__a_rst_s = 1U;
        vlSelf->top_level__DOT__fsm_unit__DOT__next_state 
            = ((IData)(vlSelf->reset_i) ? 4U : 0U);
    } else {
        vlSelf->top_level__DOT__fsm_unit__DOT__next_state = 0U;
    }
}

VL_INLINE_OPT void Vtop_level___024root___nba_comb__TOP__0(Vtop_level___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_level__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->top_level__DOT__alu_unit__DOT__a_extended 
        = vlSelf->top_level__DOT__a_i_s;
    vlSelf->top_level__DOT__alu_unit__DOT__b_extended 
        = vlSelf->top_level__DOT__b_i_s;
    if ((2U & (IData)(vlSelf->top_level__DOT__fct_i_s))) {
        if ((1U & (IData)(vlSelf->top_level__DOT__fct_i_s))) {
            if ((0U != (IData)(vlSelf->top_level__DOT__b_i_s))) {
                vlSelf->top_level__DOT__res_s = (0xffffU 
                                                 & VL_DIV_III(16, (IData)(vlSelf->top_level__DOT__alu_unit__DOT__a_extended), (IData)(vlSelf->top_level__DOT__alu_unit__DOT__b_extended)));
                vlSelf->top_level__DOT__rem_s = (0xffffU 
                                                 & VL_MODDIV_III(16, (IData)(vlSelf->top_level__DOT__alu_unit__DOT__a_extended), (IData)(vlSelf->top_level__DOT__alu_unit__DOT__b_extended)));
            } else {
                vlSelf->top_level__DOT__res_s = 0U;
                vlSelf->top_level__DOT__rem_s = 0U;
            }
        } else {
            vlSelf->top_level__DOT__res_s = (0xffffU 
                                             & ((IData)(vlSelf->top_level__DOT__alu_unit__DOT__a_extended) 
                                                * (IData)(vlSelf->top_level__DOT__alu_unit__DOT__b_extended)));
            vlSelf->top_level__DOT__rem_s = 0U;
        }
    } else if ((1U & (IData)(vlSelf->top_level__DOT__fct_i_s))) {
        vlSelf->top_level__DOT__res_s = (0xffffU & 
                                         ((IData)(vlSelf->top_level__DOT__alu_unit__DOT__a_extended) 
                                          - (IData)(vlSelf->top_level__DOT__alu_unit__DOT__b_extended)));
        vlSelf->top_level__DOT__rem_s = 0U;
    } else {
        vlSelf->top_level__DOT__res_s = (0xffffU & 
                                         ((IData)(vlSelf->top_level__DOT__alu_unit__DOT__a_extended) 
                                          + (IData)(vlSelf->top_level__DOT__alu_unit__DOT__b_extended)));
        vlSelf->top_level__DOT__rem_s = 0U;
    }
}

void Vtop_level___024root___eval_triggers__act(Vtop_level___024root* vlSelf);

bool Vtop_level___024root___eval_phase__act(Vtop_level___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_level__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<7> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop_level___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop_level___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop_level___024root___eval_phase__nba(Vtop_level___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_level__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop_level___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_level___024root___dump_triggers__ico(Vtop_level___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_level___024root___dump_triggers__nba(Vtop_level___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_level___024root___dump_triggers__act(Vtop_level___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_level___024root___eval(Vtop_level___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_level__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop_level___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../SRC/RTL/top_level.v", 13, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop_level___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop_level___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../SRC/RTL/top_level.v", 13, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop_level___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../SRC/RTL/top_level.v", 13, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop_level___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop_level___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop_level___024root___eval_debug_assertions(Vtop_level___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_level__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock_i & 0xfeU))) {
        Verilated::overWidthError("clock_i");}
    if (VL_UNLIKELY((vlSelf->reset_i & 0xfeU))) {
        Verilated::overWidthError("reset_i");}
    if (VL_UNLIKELY((vlSelf->start_i & 0xfeU))) {
        Verilated::overWidthError("start_i");}
    if (VL_UNLIKELY((vlSelf->fct_i & 0xfcU))) {
        Verilated::overWidthError("fct_i");}
}
#endif  // VL_DEBUG
