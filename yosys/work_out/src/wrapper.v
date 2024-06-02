`timescale 1ns / 1ps

module wrapper #(parameter width = 8)(
    input logic reset_i, clock_i,
    output logic [2*width-1:0] res_o, rem_o,
    output logic done_o
);
    // Internal control and status signals
    logic [width-1:0] a_s = 8'h03;
    logic [width-1:0] b_s = 8'h07;
    logic [1:0] fct_s = 2'b00;
    logic start_s = 1'b1;

    // Instance of the top_level module
    top_level #(.width(width)) dut (
    .clock_i(clock_i),
    .reset_i(reset_i),
    .start_i(start_s),
    .a_i(a_s),
    .b_i(b_s),
    .fct_i(fct_s),
    .res_o(res_o),
    .rem_o(rem_o),
    .done_o(done_o)
);

    // assertions
    assign add = fct_s == 2'b00;
    property check_add;
        @(posedge clock_i) add;
    endproperty
    assert property(check_add);

endmodule
