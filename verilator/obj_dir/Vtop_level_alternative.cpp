// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_level_alternative.h for the primary calling header

#include "Vtop_level_alternative.h"
#include "Vtop_level_alternative__Syms.h"

//==========

void Vtop_level_alternative::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop_level_alternative::eval\n"); );
    Vtop_level_alternative__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtop_level_alternative* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../SRC/RTL/top_level_alternative.v", 13, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop_level_alternative::_eval_initial_loop(Vtop_level_alternative__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../SRC/RTL/top_level_alternative.v", 13, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vtop_level_alternative::_sequent__TOP__1(Vtop_level_alternative__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level_alternative::_sequent__TOP__1\n"); );
    Vtop_level_alternative* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->top_level_alternative__DOT__s_rst_s) {
        if (vlTOPp->top_level_alternative__DOT__s_we_s) {
            vlTOPp->s_o = vlTOPp->top_level_alternative__DOT__s_s;
        }
    } else {
        vlTOPp->s_o = 0U;
    }
}

VL_INLINE_OPT void Vtop_level_alternative::_sequent__TOP__2(Vtop_level_alternative__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level_alternative::_sequent__TOP__2\n"); );
    Vtop_level_alternative* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->top_level_alternative__DOT__signal_rst_s) {
        if (vlTOPp->top_level_alternative__DOT__signal_we_s) {
            vlTOPp->signal_o = vlTOPp->top_level_alternative__DOT__signal_o_s;
        }
    } else {
        vlTOPp->signal_o = 0U;
    }
}

VL_INLINE_OPT void Vtop_level_alternative::_sequent__TOP__3(Vtop_level_alternative__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level_alternative::_sequent__TOP__3\n"); );
    Vtop_level_alternative* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->top_level_alternative__DOT__a_rst_s) {
        if (vlTOPp->top_level_alternative__DOT__a_we_s) {
            vlTOPp->top_level_alternative__DOT__a_i_s 
                = vlTOPp->a_i;
        }
    } else {
        vlTOPp->top_level_alternative__DOT__a_i_s = 0U;
    }
}

VL_INLINE_OPT void Vtop_level_alternative::_sequent__TOP__4(Vtop_level_alternative__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level_alternative::_sequent__TOP__4\n"); );
    Vtop_level_alternative* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->top_level_alternative__DOT__b_rst_s) {
        if (vlTOPp->top_level_alternative__DOT__b_we_s) {
            vlTOPp->top_level_alternative__DOT__b_i_s 
                = vlTOPp->b_i;
        }
    } else {
        vlTOPp->top_level_alternative__DOT__b_i_s = 0U;
    }
}

VL_INLINE_OPT void Vtop_level_alternative::_sequent__TOP__5(Vtop_level_alternative__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level_alternative::_sequent__TOP__5\n"); );
    Vtop_level_alternative* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->top_level_alternative__DOT__fct_rst_s) {
        if (vlTOPp->top_level_alternative__DOT__fct_we_s) {
            vlTOPp->top_level_alternative__DOT__fct_i_s 
                = vlTOPp->fct_i;
        }
    } else {
        vlTOPp->top_level_alternative__DOT__fct_i_s = 0U;
    }
}

VL_INLINE_OPT void Vtop_level_alternative::_sequent__TOP__6(Vtop_level_alternative__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level_alternative::_sequent__TOP__6\n"); );
    Vtop_level_alternative* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state 
        = ((IData)(vlTOPp->reset_i) ? vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__next_state
            : 0U);
    if ((0U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
        vlTOPp->top_level_alternative__DOT__a_rst_s = 0U;
    } else {
        if ((1U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
            vlTOPp->top_level_alternative__DOT__a_rst_s = 1U;
        } else {
            if ((2U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
                vlTOPp->top_level_alternative__DOT__a_rst_s = 1U;
            } else {
                if ((3U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
                    vlTOPp->top_level_alternative__DOT__a_rst_s = 1U;
                } else {
                    if ((4U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
                        vlTOPp->top_level_alternative__DOT__a_rst_s = 1U;
                    }
                }
            }
        }
    }
    if ((0U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
        vlTOPp->top_level_alternative__DOT__signal_rst_s = 0U;
    } else {
        if ((1U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
            vlTOPp->top_level_alternative__DOT__signal_rst_s = 0U;
        } else {
            if ((2U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
                vlTOPp->top_level_alternative__DOT__signal_rst_s = 0U;
            } else {
                if ((3U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
                    vlTOPp->top_level_alternative__DOT__signal_rst_s = 1U;
                } else {
                    if ((4U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
                        vlTOPp->top_level_alternative__DOT__signal_rst_s = 1U;
                    }
                }
            }
        }
    }
    if ((0U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
        vlTOPp->top_level_alternative__DOT__s_rst_s = 0U;
    } else {
        if ((1U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
            vlTOPp->top_level_alternative__DOT__s_rst_s = 0U;
        } else {
            if ((2U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
                vlTOPp->top_level_alternative__DOT__s_rst_s = 0U;
            } else {
                if ((3U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
                    vlTOPp->top_level_alternative__DOT__s_rst_s = 1U;
                } else {
                    if ((4U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
                        vlTOPp->top_level_alternative__DOT__s_rst_s = 1U;
                    }
                }
            }
        }
    }
    if ((0U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
        vlTOPp->top_level_alternative__DOT__fct_rst_s = 0U;
    } else {
        if ((1U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
            vlTOPp->top_level_alternative__DOT__fct_rst_s = 1U;
        } else {
            if ((2U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
                vlTOPp->top_level_alternative__DOT__fct_rst_s = 1U;
            } else {
                if ((3U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
                    vlTOPp->top_level_alternative__DOT__fct_rst_s = 1U;
                } else {
                    if ((4U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
                        vlTOPp->top_level_alternative__DOT__fct_rst_s = 1U;
                    }
                }
            }
        }
    }
    if ((0U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
        vlTOPp->top_level_alternative__DOT__b_rst_s = 0U;
    } else {
        if ((1U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
            vlTOPp->top_level_alternative__DOT__b_rst_s = 1U;
        } else {
            if ((2U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
                vlTOPp->top_level_alternative__DOT__b_rst_s = 1U;
            } else {
                if ((3U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
                    vlTOPp->top_level_alternative__DOT__b_rst_s = 1U;
                } else {
                    if ((4U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
                        vlTOPp->top_level_alternative__DOT__b_rst_s = 1U;
                    }
                }
            }
        }
    }
    if ((0U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
        vlTOPp->top_level_alternative__DOT__signal_we_s = 0U;
    } else {
        if ((1U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
            vlTOPp->top_level_alternative__DOT__signal_we_s = 0U;
        } else {
            if ((2U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
                vlTOPp->top_level_alternative__DOT__signal_we_s = 0U;
            } else {
                if ((3U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
                    vlTOPp->top_level_alternative__DOT__signal_we_s = 1U;
                } else {
                    if ((4U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
                        vlTOPp->top_level_alternative__DOT__signal_we_s = 0U;
                    }
                }
            }
        }
    }
    if ((0U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
        vlTOPp->top_level_alternative__DOT__s_we_s = 0U;
    } else {
        if ((1U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
            vlTOPp->top_level_alternative__DOT__s_we_s = 0U;
        } else {
            if ((2U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
                vlTOPp->top_level_alternative__DOT__s_we_s = 0U;
            } else {
                if ((3U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
                    vlTOPp->top_level_alternative__DOT__s_we_s = 1U;
                } else {
                    if ((4U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
                        vlTOPp->top_level_alternative__DOT__s_we_s = 0U;
                    }
                }
            }
        }
    }
    if ((0U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
        vlTOPp->top_level_alternative__DOT__fct_we_s = 0U;
    } else {
        if ((1U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
            vlTOPp->top_level_alternative__DOT__fct_we_s = 1U;
        } else {
            if ((2U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
                vlTOPp->top_level_alternative__DOT__fct_we_s = 0U;
            } else {
                if ((3U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
                    vlTOPp->top_level_alternative__DOT__fct_we_s = 0U;
                } else {
                    if ((4U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
                        vlTOPp->top_level_alternative__DOT__fct_we_s = 0U;
                    }
                }
            }
        }
    }
    if ((0U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
        vlTOPp->top_level_alternative__DOT__b_we_s = 0U;
    } else {
        if ((1U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
            vlTOPp->top_level_alternative__DOT__b_we_s = 1U;
        } else {
            if ((2U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
                vlTOPp->top_level_alternative__DOT__b_we_s = 0U;
            } else {
                if ((3U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
                    vlTOPp->top_level_alternative__DOT__b_we_s = 0U;
                } else {
                    if ((4U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
                        vlTOPp->top_level_alternative__DOT__b_we_s = 0U;
                    }
                }
            }
        }
    }
    if ((0U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
        vlTOPp->top_level_alternative__DOT__a_we_s = 0U;
    } else {
        if ((1U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
            vlTOPp->top_level_alternative__DOT__a_we_s = 1U;
        } else {
            if ((2U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
                vlTOPp->top_level_alternative__DOT__a_we_s = 0U;
            } else {
                if ((3U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
                    vlTOPp->top_level_alternative__DOT__a_we_s = 0U;
                } else {
                    if ((4U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)) {
                        vlTOPp->top_level_alternative__DOT__a_we_s = 0U;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vtop_level_alternative::_multiclk__TOP__8(Vtop_level_alternative__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level_alternative::_multiclk__TOP__8\n"); );
    Vtop_level_alternative* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top_level_alternative__DOT__s_s = (0xffffU 
                                               & ((2U 
                                                   & (IData)(vlTOPp->top_level_alternative__DOT__fct_i_s))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->top_level_alternative__DOT__fct_i_s))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlTOPp->top_level_alternative__DOT__a_i_s) 
                                                    * (IData)(vlTOPp->top_level_alternative__DOT__b_i_s)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->top_level_alternative__DOT__fct_i_s))
                                                    ? 
                                                   ((IData)(vlTOPp->top_level_alternative__DOT__a_i_s) 
                                                    - (IData)(vlTOPp->top_level_alternative__DOT__b_i_s))
                                                    : 
                                                   ((IData)(vlTOPp->top_level_alternative__DOT__a_i_s) 
                                                    + (IData)(vlTOPp->top_level_alternative__DOT__b_i_s)))));
    vlTOPp->top_level_alternative__DOT__signal_o_s 
        = (((IData)(vlTOPp->top_level_alternative__DOT__fct_i_s) 
            >> 1U) & ((IData)(vlTOPp->top_level_alternative__DOT__fct_i_s) 
                      & ((IData)(vlTOPp->top_level_alternative__DOT__a_i_s) 
                         == (IData)(vlTOPp->top_level_alternative__DOT__b_i_s))));
}

VL_INLINE_OPT void Vtop_level_alternative::_combo__TOP__9(Vtop_level_alternative__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level_alternative::_combo__TOP__9\n"); );
    Vtop_level_alternative* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__next_state 
        = ((0U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)
            ? ((IData)(vlTOPp->start_i) ? 1U : 0U) : 
           ((1U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)
             ? 2U : ((2U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)
                      ? 3U : ((3U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)
                               ? 4U : ((4U == vlTOPp->top_level_alternative__DOT__fsm_unit__DOT__current_state)
                                        ? ((IData)(vlTOPp->reset_i)
                                            ? 4U : 0U)
                                        : 0U)))));
}

void Vtop_level_alternative::_eval(Vtop_level_alternative__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level_alternative::_eval\n"); );
    Vtop_level_alternative* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clock_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock_i))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__top_level_alternative__DOT__s_rst_s)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__top_level_alternative__DOT__s_rst_s)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    if ((((IData)(vlTOPp->clock_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock_i))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__top_level_alternative__DOT__signal_rst_s)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__top_level_alternative__DOT__signal_rst_s)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if ((((IData)(vlTOPp->clock_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock_i))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__top_level_alternative__DOT__a_rst_s)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__top_level_alternative__DOT__a_rst_s)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if ((((IData)(vlTOPp->clock_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock_i))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__top_level_alternative__DOT__b_rst_s)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__top_level_alternative__DOT__b_rst_s)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if ((((IData)(vlTOPp->clock_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock_i))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__top_level_alternative__DOT__fct_rst_s)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__top_level_alternative__DOT__fct_rst_s)))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    if ((((IData)(vlTOPp->clock_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock_i))) 
         | ((~ (IData)(vlTOPp->reset_i)) & (IData)(vlTOPp->__Vclklast__TOP__reset_i)))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    if ((((((IData)(vlTOPp->clock_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock_i))) 
           | ((~ (IData)(vlTOPp->__VinpClk__TOP__top_level_alternative__DOT__a_rst_s)) 
              & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__top_level_alternative__DOT__a_rst_s))) 
          | ((~ (IData)(vlTOPp->__VinpClk__TOP__top_level_alternative__DOT__b_rst_s)) 
             & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__top_level_alternative__DOT__b_rst_s))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__top_level_alternative__DOT__fct_rst_s)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__top_level_alternative__DOT__fct_rst_s)))) {
        vlTOPp->_multiclk__TOP__8(vlSymsp);
    }
    vlTOPp->_combo__TOP__9(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock_i = vlTOPp->clock_i;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__top_level_alternative__DOT__s_rst_s 
        = vlTOPp->__VinpClk__TOP__top_level_alternative__DOT__s_rst_s;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__top_level_alternative__DOT__signal_rst_s 
        = vlTOPp->__VinpClk__TOP__top_level_alternative__DOT__signal_rst_s;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__top_level_alternative__DOT__a_rst_s 
        = vlTOPp->__VinpClk__TOP__top_level_alternative__DOT__a_rst_s;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__top_level_alternative__DOT__b_rst_s 
        = vlTOPp->__VinpClk__TOP__top_level_alternative__DOT__b_rst_s;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__top_level_alternative__DOT__fct_rst_s 
        = vlTOPp->__VinpClk__TOP__top_level_alternative__DOT__fct_rst_s;
    vlTOPp->__Vclklast__TOP__reset_i = vlTOPp->reset_i;
    vlTOPp->__VinpClk__TOP__top_level_alternative__DOT__s_rst_s 
        = vlTOPp->top_level_alternative__DOT__s_rst_s;
    vlTOPp->__VinpClk__TOP__top_level_alternative__DOT__signal_rst_s 
        = vlTOPp->top_level_alternative__DOT__signal_rst_s;
    vlTOPp->__VinpClk__TOP__top_level_alternative__DOT__a_rst_s 
        = vlTOPp->top_level_alternative__DOT__a_rst_s;
    vlTOPp->__VinpClk__TOP__top_level_alternative__DOT__b_rst_s 
        = vlTOPp->top_level_alternative__DOT__b_rst_s;
    vlTOPp->__VinpClk__TOP__top_level_alternative__DOT__fct_rst_s 
        = vlTOPp->top_level_alternative__DOT__fct_rst_s;
}

VL_INLINE_OPT QData Vtop_level_alternative::_change_request(Vtop_level_alternative__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level_alternative::_change_request\n"); );
    Vtop_level_alternative* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vtop_level_alternative::_change_request_1(Vtop_level_alternative__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level_alternative::_change_request_1\n"); );
    Vtop_level_alternative* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->top_level_alternative__DOT__a_rst_s ^ vlTOPp->__Vchglast__TOP__top_level_alternative__DOT__a_rst_s)
         | (vlTOPp->top_level_alternative__DOT__b_rst_s ^ vlTOPp->__Vchglast__TOP__top_level_alternative__DOT__b_rst_s)
         | (vlTOPp->top_level_alternative__DOT__fct_rst_s ^ vlTOPp->__Vchglast__TOP__top_level_alternative__DOT__fct_rst_s)
         | (vlTOPp->top_level_alternative__DOT__s_rst_s ^ vlTOPp->__Vchglast__TOP__top_level_alternative__DOT__s_rst_s)
         | (vlTOPp->top_level_alternative__DOT__signal_rst_s ^ vlTOPp->__Vchglast__TOP__top_level_alternative__DOT__signal_rst_s));
    VL_DEBUG_IF( if(__req && ((vlTOPp->top_level_alternative__DOT__a_rst_s ^ vlTOPp->__Vchglast__TOP__top_level_alternative__DOT__a_rst_s))) VL_DBG_MSGF("        CHANGE: ../SRC/RTL/top_level_alternative.v:23: top_level_alternative.a_rst_s\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->top_level_alternative__DOT__b_rst_s ^ vlTOPp->__Vchglast__TOP__top_level_alternative__DOT__b_rst_s))) VL_DBG_MSGF("        CHANGE: ../SRC/RTL/top_level_alternative.v:23: top_level_alternative.b_rst_s\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->top_level_alternative__DOT__fct_rst_s ^ vlTOPp->__Vchglast__TOP__top_level_alternative__DOT__fct_rst_s))) VL_DBG_MSGF("        CHANGE: ../SRC/RTL/top_level_alternative.v:23: top_level_alternative.fct_rst_s\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->top_level_alternative__DOT__s_rst_s ^ vlTOPp->__Vchglast__TOP__top_level_alternative__DOT__s_rst_s))) VL_DBG_MSGF("        CHANGE: ../SRC/RTL/top_level_alternative.v:23: top_level_alternative.s_rst_s\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->top_level_alternative__DOT__signal_rst_s ^ vlTOPp->__Vchglast__TOP__top_level_alternative__DOT__signal_rst_s))) VL_DBG_MSGF("        CHANGE: ../SRC/RTL/top_level_alternative.v:23: top_level_alternative.signal_rst_s\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__top_level_alternative__DOT__a_rst_s 
        = vlTOPp->top_level_alternative__DOT__a_rst_s;
    vlTOPp->__Vchglast__TOP__top_level_alternative__DOT__b_rst_s 
        = vlTOPp->top_level_alternative__DOT__b_rst_s;
    vlTOPp->__Vchglast__TOP__top_level_alternative__DOT__fct_rst_s 
        = vlTOPp->top_level_alternative__DOT__fct_rst_s;
    vlTOPp->__Vchglast__TOP__top_level_alternative__DOT__s_rst_s 
        = vlTOPp->top_level_alternative__DOT__s_rst_s;
    vlTOPp->__Vchglast__TOP__top_level_alternative__DOT__signal_rst_s 
        = vlTOPp->top_level_alternative__DOT__signal_rst_s;
    return __req;
}

#ifdef VL_DEBUG
void Vtop_level_alternative::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level_alternative::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock_i & 0xfeU))) {
        Verilated::overWidthError("clock_i");}
    if (VL_UNLIKELY((reset_i & 0xfeU))) {
        Verilated::overWidthError("reset_i");}
    if (VL_UNLIKELY((start_i & 0xfeU))) {
        Verilated::overWidthError("start_i");}
    if (VL_UNLIKELY((fct_i & 0xfcU))) {
        Verilated::overWidthError("fct_i");}
}
#endif  // VL_DEBUG
