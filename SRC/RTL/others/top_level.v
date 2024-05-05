/**
 * @file or_gate
 * @author Mario Araujo (gmarioaraujo@gmail.com)
 * @brief Top Level
 * @version 0.1
 * @date 2024-04-22
 * 
 * @copyright Copyright (c) 2024
 * 
 */
`timescale 1ns / 1ps

module top_level #(parameter width = 8)(
    input logic clock_i,
    input logic reset_i,
    input logic start_i,
    input logic [width-1:0] a_i, b_i,
    input logic [1:0] fct_i,
    output logic [2*width-1:0] s_o,
    output logic signal_o
);
    // Internal control and status signals
    logic a_we_s, a_rst_s, b_we_s, b_rst_s, fct_we_s, fct_rst_s, s_we_s, s_rst_s, signal_we_s, signal_rst_s;

    // Output signals from the registers
    logic [width-1:0] a_i_s, b_i_s;
    logic [2*width-1:0] s_s;
    logic [1:0] fct_i_s;
    logic signal_o_s;

    // REG_A_i : component instanciation
    dff_nbits #(.width(width)) reg_a (.d_i(a_i), .clock_i(clock_i), .reset_i(a_rst_s), .we_i(a_we_s), .q_o(a_i_s));

    // REG_B_i : component instanciation
    dff_nbits #(.width(width)) reg_b (.d_i(b_i), .clock_i(clock_i), .reset_i(b_rst_s), .we_i(b_we_s), .q_o(b_i_s));

    // REG_fct_i : component instanciation
    dff_nbits #(.width(2)) reg_fct (.d_i(fct_i), .clock_i(clock_i), .reset_i(fct_rst_s), .we_i(fct_we_s), .q_o(fct_i_s));

    // Módulo FSM - controla a lógica de operação
    fsm fsm_unit (
        .clock_i(clock_i),
        .reset_i(reset_i),
        .start_i(start_i),
        .a_we_o(a_we_s), .a_rst_o(a_rst_s),
        .b_we_o(b_we_s), .b_rst_o(b_rst_s),
        .fct_we_o(fct_we_s), .fct_rst_o(fct_rst_s),
        .s_we_o(s_we_s), .s_rst_o(s_rst_s),
        .signal_we_o(signal_we_s), .signal_rst_o(signal_rst_s)
    );

    // Instantiate the ALU module
    alu #(.width(width)) dut (
        .a_i(a_i_s), 
        .b_i(b_i_s),
        .fct_i(fct_i_s),
        .s_o(s_s),
        .signal_o(signal_o_s)
    );

    // REG_s_o : component instanciation
    dff_nbits #(.width(2*width)) reg_s (.d_i(s_s), .clock_i(clock_i), .reset_i(s_rst_s), .we_i(s_we_s), .q_o(s_o));

    // REG_signal_o : component instanciation
    dff_nbits #(.width(1)) reg_signal (.d_i(signal_o_s), .clock_i(clock_i), .reset_i(signal_rst_s), .we_i(signal_we_s), .q_o(signal_o));

endmodule
