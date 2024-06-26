`timescale 1ns / 1ps

module top_level_tb;

parameter WIDTH = 8;
reg clock_i;
reg reset_i;
reg start_i;
reg [WIDTH-1:0] a_i, b_i;
reg [1:0] fct_i;
wire [2*WIDTH-1:0] res_o, rem_o;
wire done_o;

// Instance of the top_level module
top_level #(.width(WIDTH)) dut (
    .clock_i(clock_i),
    .reset_i(reset_i),
    .start_i(start_i),
    .a_i(a_i),
    .b_i(b_i),
    .fct_i(fct_i),
    .res_o(res_o),
    .rem_o(rem_o),
    .done_o(done_o)
);

// Clock generation
initial begin
    clock_i = 0;
    forever #5 clock_i = ~clock_i;  // Clock with a period of 10ns
end

// Test procedure
initial begin
    // Initialize signals
    reset_i = 0;
    start_i = 0;
    #10 reset_i = 1;
    // Test addition
    a_i = 8'b10101010;
    b_i = 8'b01010101;
    fct_i = 2'b00;
    start_i = 1;
    #100; // Observe changes in output signals

    // Initialize signals
    reset_i = 0;
    start_i = 0;
    #10 reset_i = 1;
    // Test substraction
    a_i = 8'hAA;
    b_i = 8'h55;
    fct_i = 2'b01;
    start_i = 1;
    #100; // Observe changes in output signals

    // Initialize signals
    reset_i = 0;
    start_i = 0;
    #10 reset_i = 1;
    // Test Multiplication
    a_i = 8'd5;
    b_i = 8'd200;
    fct_i = 2'b10;
    start_i = 1;
    #100; // Observe changes in output signals

    // Initialize signals
    reset_i = 0;
    start_i = 0;
    #10 reset_i = 1;
    // Test Division
    a_i = 8'd15;
    b_i = 8'd2;
    fct_i = 2'b11;
    start_i = 1;
    #100; // Observe changes in output signals

    $finish;  // End simulation
end

// Monitoring
initial begin
    $monitor("At %t, a_i = %h, b_i = %h, fct_i = %b, res_o = %h, rem_o = %h, done_o = %b", $time, a_i, b_i, fct_i, res_o, rem_o, done_o);
end

endmodule
