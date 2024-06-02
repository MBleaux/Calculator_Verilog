/**
 * @file top_level
 * @author Mario Araujo (gmarioaraujo@gmail.com)
 * @brief Top Level: instantiating the registers, FSM and ALU
 * @version 0.3
 * @date 2024-05-05
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
    output logic [2*width-1:0] res_o, rem_o,
    output logic done_o
);
    // Internal control and status signals
    logic a_we_s, a_rst_s, b_we_s, b_rst_s, fct_we_s, fct_rst_s, res_we_s, res_rst_s, rem_we_s, rem_rst_s, done_we_s, done_rst_s;

    // Output signals from the registers
    logic [width-1:0] a_i_s, b_i_s;
    logic [2*width-1:0] res_s, rem_s;
    logic [1:0] fct_i_s;
    logic done_o_s;

    // reg_a_i : component instanciation
    dff_nbits #(.width(width)) reg_a (.d_i(a_i), .clock_i(clock_i), .reset_i(a_rst_s), .we_i(a_we_s), .q_o(a_i_s));

    // reg_b_i : component instanciation
    dff_nbits #(.width(width)) reg_b (.d_i(b_i), .clock_i(clock_i), .reset_i(b_rst_s), .we_i(b_we_s), .q_o(b_i_s));

    // reg_fct_i : component instanciation
    dff_nbits #(.width(2)) reg_fct (.d_i(fct_i), .clock_i(clock_i), .reset_i(fct_rst_s), .we_i(fct_we_s), .q_o(fct_i_s));

    // Instantiate the FSM module
    fsm fsm_unit (
        .clock_i(clock_i),
        .reset_i(reset_i),
        .start_i(start_i),
        .a_we_o(a_we_s), .a_rst_o(a_rst_s),
        .b_we_o(b_we_s), .b_rst_o(b_rst_s),
        .fct_we_o(fct_we_s), .fct_rst_o(fct_rst_s),
        .res_we_o(res_we_s), .res_rst_o(res_rst_s),
        .rem_we_o(rem_we_s), .rem_rst_o(rem_rst_s),
        .done_we_o(done_we_s), .done_rst_o(done_rst_s)
    );

    // Instantiate the ALU module
    alu #(.width(width)) alu_unit (
        .a_i(a_i_s), 
        .b_i(b_i_s),
        .fct_i(fct_i_s),
        .res_o(res_s),
        .rem_o(rem_s),
        .done_o(done_o_s)
    );

    // reg_res_o : component instanciation
    dff_nbits #(.width(2*width)) reg_res (.d_i(res_s), .clock_i(clock_i), .reset_i(res_rst_s), .we_i(res_we_s), .q_o(res_o));

    // reg_rem_o : component instanciation
    dff_nbits #(.width(2*width)) reg_rem (.d_i(rem_s), .clock_i(clock_i), .reset_i(rem_rst_s), .we_i(rem_we_s), .q_o(rem_o));

    // reg_done_o : component instanciation
    dff_nbits #(.width(1)) reg_done (.d_i(done_o_s), .clock_i(clock_i), .reset_i(done_rst_s), .we_i(done_we_s), .q_o(done_o));

endmodule
