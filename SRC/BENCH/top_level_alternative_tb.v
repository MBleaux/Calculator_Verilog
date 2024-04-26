`timescale 1ns / 1ps

module top_level_alternative_tb;

parameter WIDTH = 8;
reg clock_i;
reg reset_i;
reg start_i;
reg [WIDTH-1:0] a_i, b_i;
reg [1:0] fct_i;
wire [2*WIDTH-1:0] s_o;
wire signal_o;

// Instance of the top_level module
top_level_alternative #(.width(WIDTH)) dut (
    .clock_i(clock_i),
    .reset_i(reset_i),
    .start_i(start_i),
    .a_i(a_i),
    .b_i(b_i),
    .fct_i(fct_i),
    .s_o(s_o),
    .signal_o(signal_o)
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
    // Test Comparison
    a_i = 0;
    b_i = 0;
    fct_i = 2'b11;
    start_i = 1;
    #100; // Observe changes in output signals

    $finish;  // End simulation
end

// Monitoring
initial begin
    $monitor("At %t, a_i = %h, b_i = %h, fct_i = %b, s_o = %h, signal_o = %b", $time, a_i, b_i, fct_i, s_o, signal_o);
end

endmodule
