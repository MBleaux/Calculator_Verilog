// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_level_alternative.h for the primary calling header

#include "Vtop_level_alternative.h"
#include "Vtop_level_alternative__Syms.h"

//==========

VL_CTOR_IMP(Vtop_level_alternative) {
    Vtop_level_alternative__Syms* __restrict vlSymsp = __VlSymsp = new Vtop_level_alternative__Syms(this, name());
    Vtop_level_alternative* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop_level_alternative::__Vconfigure(Vtop_level_alternative__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-9);
    Verilated::timeprecision(-12);
}

Vtop_level_alternative::~Vtop_level_alternative() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vtop_level_alternative::_settle__TOP__7(Vtop_level_alternative__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level_alternative::_settle__TOP__7\n"); );
    Vtop_level_alternative* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vtop_level_alternative::_eval_initial(Vtop_level_alternative__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level_alternative::_eval_initial\n"); );
    Vtop_level_alternative* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

void Vtop_level_alternative::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level_alternative::final\n"); );
    // Variables
    Vtop_level_alternative__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop_level_alternative* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop_level_alternative::_eval_settle(Vtop_level_alternative__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level_alternative::_eval_settle\n"); );
    Vtop_level_alternative* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__7(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vtop_level_alternative::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_level_alternative::_ctor_var_reset\n"); );
    // Body
    clock_i = VL_RAND_RESET_I(1);
    reset_i = VL_RAND_RESET_I(1);
    start_i = VL_RAND_RESET_I(1);
    a_i = VL_RAND_RESET_I(8);
    b_i = VL_RAND_RESET_I(8);
    fct_i = VL_RAND_RESET_I(2);
    s_o = VL_RAND_RESET_I(16);
    signal_o = VL_RAND_RESET_I(1);
    top_level_alternative__DOT__a_we_s = VL_RAND_RESET_I(1);
    top_level_alternative__DOT__a_rst_s = VL_RAND_RESET_I(1);
    top_level_alternative__DOT__b_we_s = VL_RAND_RESET_I(1);
    top_level_alternative__DOT__b_rst_s = VL_RAND_RESET_I(1);
    top_level_alternative__DOT__fct_we_s = VL_RAND_RESET_I(1);
    top_level_alternative__DOT__fct_rst_s = VL_RAND_RESET_I(1);
    top_level_alternative__DOT__s_we_s = VL_RAND_RESET_I(1);
    top_level_alternative__DOT__s_rst_s = VL_RAND_RESET_I(1);
    top_level_alternative__DOT__signal_we_s = VL_RAND_RESET_I(1);
    top_level_alternative__DOT__signal_rst_s = VL_RAND_RESET_I(1);
    top_level_alternative__DOT__a_i_s = VL_RAND_RESET_I(8);
    top_level_alternative__DOT__b_i_s = VL_RAND_RESET_I(8);
    top_level_alternative__DOT__s_s = VL_RAND_RESET_I(16);
    top_level_alternative__DOT__fct_i_s = VL_RAND_RESET_I(2);
    top_level_alternative__DOT__signal_o_s = VL_RAND_RESET_I(1);
    top_level_alternative__DOT__fsm_unit__DOT__current_state = 0;
    top_level_alternative__DOT__fsm_unit__DOT__next_state = 0;
    __VinpClk__TOP__top_level_alternative__DOT__s_rst_s = VL_RAND_RESET_I(1);
    __VinpClk__TOP__top_level_alternative__DOT__signal_rst_s = VL_RAND_RESET_I(1);
    __VinpClk__TOP__top_level_alternative__DOT__a_rst_s = VL_RAND_RESET_I(1);
    __VinpClk__TOP__top_level_alternative__DOT__b_rst_s = VL_RAND_RESET_I(1);
    __VinpClk__TOP__top_level_alternative__DOT__fct_rst_s = VL_RAND_RESET_I(1);
    __Vchglast__TOP__top_level_alternative__DOT__a_rst_s = VL_RAND_RESET_I(1);
    __Vchglast__TOP__top_level_alternative__DOT__b_rst_s = VL_RAND_RESET_I(1);
    __Vchglast__TOP__top_level_alternative__DOT__fct_rst_s = VL_RAND_RESET_I(1);
    __Vchglast__TOP__top_level_alternative__DOT__s_rst_s = VL_RAND_RESET_I(1);
    __Vchglast__TOP__top_level_alternative__DOT__signal_rst_s = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
