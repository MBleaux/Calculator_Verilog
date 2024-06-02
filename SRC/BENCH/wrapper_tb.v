`timescale 1ns / 1ps

module wrapper_tb;

parameter WIDTH = 8;
reg clock_i;
reg reset_i;
wire [2*WIDTH-1:0] res_o, rem_o;
wire done_o;

// Instance of the core module
wrapper #(.width(WIDTH)) dut (
    .clock_i(clock_i),
    .reset_i(reset_i),
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
    #10
    reset_i = 1;
    start_i = 1;
    #100
    reset_i = 0;
    #13
    start_i = 0;
    #6
    reset_i = 1;
    #11
    start_i = 1;
    #100
    $finish;  // End simulation
end

// Monitoring
initial begin
    $monitor("At %t, res_o = %h, rem_o = %h, done_o = %b", $time, res_o, rem_o, done_o);
end

endmodule
