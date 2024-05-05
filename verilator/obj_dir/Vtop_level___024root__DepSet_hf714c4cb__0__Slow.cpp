// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_level.h for the primary calling header

#include "Vtop_level__pch.h"
#include "Vtop_level___024root.h"

VL_ATTR_COLD void Vtop_level___024root___eval_static(Vtop_level___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_level__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop_level___024root___eval_initial__TOP(Vtop_level___024root* vlSelf);

VL_ATTR_COLD void Vtop_level___024root___eval_initial(Vtop_level___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_level__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level___024root___eval_initial\n"); );
    // Body
    Vtop_level___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
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
}

VL_ATTR_COLD void Vtop_level___024root___eval_initial__TOP(Vtop_level___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_level__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top_level__DOT__done_o_s = 1U;
}

VL_ATTR_COLD void Vtop_level___024root___eval_final(Vtop_level___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_level__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_level___024root___dump_triggers__stl(Vtop_level___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop_level___024root___eval_phase__stl(Vtop_level___024root* vlSelf);

VL_ATTR_COLD void Vtop_level___024root___eval_settle(Vtop_level___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_level__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop_level___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../SRC/RTL/top_level.v", 13, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop_level___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_level___024root___dump_triggers__stl(Vtop_level___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_level__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_level___024root___stl_sequent__TOP__0(Vtop_level___024root* vlSelf);

VL_ATTR_COLD void Vtop_level___024root___eval_stl(Vtop_level___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_level__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop_level___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtop_level___024root___stl_sequent__TOP__0(Vtop_level___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_level__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level___024root___stl_sequent__TOP__0\n"); );
    // Body
    if ((0U == vlSelf->top_level__DOT__fsm_unit__DOT__current_state)) {
        vlSelf->top_level__DOT__done_rst_s = 0U;
        vlSelf->top_level__DOT__done_we_s = 0U;
        vlSelf->top_level__DOT__rem_rst_s = 0U;
        vlSelf->top_level__DOT__rem_we_s = 0U;
        vlSelf->top_level__DOT__res_rst_s = 0U;
        vlSelf->top_level__DOT__res_we_s = 0U;
        vlSelf->top_level__DOT__fct_rst_s = 0U;
        vlSelf->top_level__DOT__fct_we_s = 0U;
        vlSelf->top_level__DOT__b_rst_s = 0U;
        vlSelf->top_level__DOT__b_we_s = 0U;
        vlSelf->top_level__DOT__a_rst_s = 0U;
        vlSelf->top_level__DOT__a_we_s = 0U;
        vlSelf->top_level__DOT__fsm_unit__DOT__next_state 
            = ((IData)(vlSelf->start_i) ? 1U : 0U);
    } else if ((1U == vlSelf->top_level__DOT__fsm_unit__DOT__current_state)) {
        vlSelf->top_level__DOT__done_rst_s = 0U;
        vlSelf->top_level__DOT__done_we_s = 0U;
        vlSelf->top_level__DOT__rem_rst_s = 0U;
        vlSelf->top_level__DOT__rem_we_s = 0U;
        vlSelf->top_level__DOT__res_rst_s = 0U;
        vlSelf->top_level__DOT__res_we_s = 0U;
        vlSelf->top_level__DOT__fct_rst_s = 1U;
        vlSelf->top_level__DOT__fct_we_s = 1U;
        vlSelf->top_level__DOT__b_rst_s = 1U;
        vlSelf->top_level__DOT__b_we_s = 1U;
        vlSelf->top_level__DOT__a_rst_s = 1U;
        vlSelf->top_level__DOT__a_we_s = 1U;
        vlSelf->top_level__DOT__fsm_unit__DOT__next_state = 2U;
    } else if ((2U == vlSelf->top_level__DOT__fsm_unit__DOT__current_state)) {
        vlSelf->top_level__DOT__done_rst_s = 0U;
        vlSelf->top_level__DOT__done_we_s = 0U;
        vlSelf->top_level__DOT__rem_rst_s = 0U;
        vlSelf->top_level__DOT__rem_we_s = 0U;
        vlSelf->top_level__DOT__res_rst_s = 0U;
        vlSelf->top_level__DOT__res_we_s = 0U;
        vlSelf->top_level__DOT__fct_rst_s = 1U;
        vlSelf->top_level__DOT__fct_we_s = 0U;
        vlSelf->top_level__DOT__b_rst_s = 1U;
        vlSelf->top_level__DOT__b_we_s = 0U;
        vlSelf->top_level__DOT__a_rst_s = 1U;
        vlSelf->top_level__DOT__a_we_s = 0U;
        vlSelf->top_level__DOT__fsm_unit__DOT__next_state = 3U;
    } else if ((3U == vlSelf->top_level__DOT__fsm_unit__DOT__current_state)) {
        vlSelf->top_level__DOT__done_rst_s = 1U;
        vlSelf->top_level__DOT__done_we_s = 1U;
        vlSelf->top_level__DOT__rem_rst_s = 1U;
        vlSelf->top_level__DOT__rem_we_s = 1U;
        vlSelf->top_level__DOT__res_rst_s = 1U;
        vlSelf->top_level__DOT__res_we_s = 1U;
        vlSelf->top_level__DOT__fct_rst_s = 1U;
        vlSelf->top_level__DOT__fct_we_s = 0U;
        vlSelf->top_level__DOT__b_rst_s = 1U;
        vlSelf->top_level__DOT__b_we_s = 0U;
        vlSelf->top_level__DOT__a_rst_s = 1U;
        vlSelf->top_level__DOT__a_we_s = 0U;
        vlSelf->top_level__DOT__fsm_unit__DOT__next_state = 4U;
    } else if ((4U == vlSelf->top_level__DOT__fsm_unit__DOT__current_state)) {
        vlSelf->top_level__DOT__done_rst_s = 1U;
        vlSelf->top_level__DOT__done_we_s = 0U;
        vlSelf->top_level__DOT__rem_rst_s = 1U;
        vlSelf->top_level__DOT__rem_we_s = 0U;
        vlSelf->top_level__DOT__res_rst_s = 1U;
        vlSelf->top_level__DOT__res_we_s = 0U;
        vlSelf->top_level__DOT__fct_rst_s = 1U;
        vlSelf->top_level__DOT__fct_we_s = 0U;
        vlSelf->top_level__DOT__b_rst_s = 1U;
        vlSelf->top_level__DOT__b_we_s = 0U;
        vlSelf->top_level__DOT__a_rst_s = 1U;
        vlSelf->top_level__DOT__a_we_s = 0U;
        vlSelf->top_level__DOT__fsm_unit__DOT__next_state 
            = ((IData)(vlSelf->reset_i) ? 4U : 0U);
    } else {
        vlSelf->top_level__DOT__fsm_unit__DOT__next_state = 0U;
    }
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

VL_ATTR_COLD void Vtop_level___024root___eval_triggers__stl(Vtop_level___024root* vlSelf);

VL_ATTR_COLD bool Vtop_level___024root___eval_phase__stl(Vtop_level___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_level__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop_level___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop_level___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_level___024root___dump_triggers__ico(Vtop_level___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_level__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ vlSelf->__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_level___024root___dump_triggers__act(Vtop_level___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_level__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock_i or negedge top_level.a_rst_s)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clock_i or negedge top_level.b_rst_s)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clock_i or negedge top_level.fct_rst_s)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge clock_i or negedge reset_i)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge clock_i or negedge top_level.res_rst_s)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge clock_i or negedge top_level.rem_rst_s)\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge clock_i or negedge top_level.done_rst_s)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_level___024root___dump_triggers__nba(Vtop_level___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_level__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock_i or negedge top_level.a_rst_s)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clock_i or negedge top_level.b_rst_s)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clock_i or negedge top_level.fct_rst_s)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge clock_i or negedge reset_i)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge clock_i or negedge top_level.res_rst_s)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge clock_i or negedge top_level.rem_rst_s)\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge clock_i or negedge top_level.done_rst_s)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_level___024root___ctor_var_reset(Vtop_level___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_level__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock_i = VL_RAND_RESET_I(1);
    vlSelf->reset_i = VL_RAND_RESET_I(1);
    vlSelf->start_i = VL_RAND_RESET_I(1);
    vlSelf->a_i = VL_RAND_RESET_I(8);
    vlSelf->b_i = VL_RAND_RESET_I(8);
    vlSelf->fct_i = VL_RAND_RESET_I(2);
    vlSelf->res_o = VL_RAND_RESET_I(16);
    vlSelf->rem_o = VL_RAND_RESET_I(16);
    vlSelf->done_o = VL_RAND_RESET_I(1);
    vlSelf->top_level__DOT__a_we_s = VL_RAND_RESET_I(1);
    vlSelf->top_level__DOT__a_rst_s = VL_RAND_RESET_I(1);
    vlSelf->top_level__DOT__b_we_s = VL_RAND_RESET_I(1);
    vlSelf->top_level__DOT__b_rst_s = VL_RAND_RESET_I(1);
    vlSelf->top_level__DOT__fct_we_s = VL_RAND_RESET_I(1);
    vlSelf->top_level__DOT__fct_rst_s = VL_RAND_RESET_I(1);
    vlSelf->top_level__DOT__res_we_s = VL_RAND_RESET_I(1);
    vlSelf->top_level__DOT__res_rst_s = VL_RAND_RESET_I(1);
    vlSelf->top_level__DOT__rem_we_s = VL_RAND_RESET_I(1);
    vlSelf->top_level__DOT__rem_rst_s = VL_RAND_RESET_I(1);
    vlSelf->top_level__DOT__done_we_s = VL_RAND_RESET_I(1);
    vlSelf->top_level__DOT__done_rst_s = VL_RAND_RESET_I(1);
    vlSelf->top_level__DOT__a_i_s = VL_RAND_RESET_I(8);
    vlSelf->top_level__DOT__b_i_s = VL_RAND_RESET_I(8);
    vlSelf->top_level__DOT__res_s = VL_RAND_RESET_I(16);
    vlSelf->top_level__DOT__rem_s = VL_RAND_RESET_I(16);
    vlSelf->top_level__DOT__fct_i_s = VL_RAND_RESET_I(2);
    vlSelf->top_level__DOT__done_o_s = VL_RAND_RESET_I(1);
    vlSelf->top_level__DOT__fsm_unit__DOT__current_state = 0;
    vlSelf->top_level__DOT__fsm_unit__DOT__next_state = 0;
    vlSelf->top_level__DOT__alu_unit__DOT__a_extended = VL_RAND_RESET_I(16);
    vlSelf->top_level__DOT__alu_unit__DOT__b_extended = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__clock_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__top_level__DOT__a_rst_s__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__top_level__DOT__b_rst_s__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__top_level__DOT__fct_rst_s__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__top_level__DOT__res_rst_s__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__top_level__DOT__rem_rst_s__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__top_level__DOT__done_rst_s__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
