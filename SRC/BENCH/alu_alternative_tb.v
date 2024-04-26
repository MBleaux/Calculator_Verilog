`timescale 1ns / 1ps

module alu_alternative_tb;

parameter WIDTH = 8;
reg [WIDTH-1:0] a, b;
reg [1:0] fct;
wire [2*WIDTH-1:0] result;
wire equal;

// Instantiate the ALU module
alu_alternative #(.width(WIDTH)) dut (
    .a_i(a), 
    .b_i(b),
    .fct_i(fct),
    .s_o(result),
    .signal_o(equal)
);

// Test procedure
initial begin
    // Addition test
    a = 8'b00001111;  // 15
    b = 8'b00000101;  // 5
    fct = 2'b00;      // Addition function
    #10;
    $display("Addition Test: a = %b, b = %b, result = %b", a, b, result);

    // Subtraction test
    a = 8'b00001111;  // 15
    b = 8'b00000101;  // 5
    fct = 2'b01;      // Subtraction function
    #10;
    $display("Subtraction Test: a = %b, b = %b, result = %b", a, b, result);

    // Multiplication test
    a = 8'b00000011;  // 3
    b = 8'b00000010;  // 2
    fct = 2'b10;      // Multiplication function
    #10;
    $display("Multiplication Test: a = %b, b = %b, result = %b", a, b, result);

    // Comparison test
    a = 8'b00001111;  // 15
    b = 8'b00001111;  // 15
    fct = 2'b11;      // Comparison function
    #10;
    $display("Comparison Test: a = %b, b = %b, equal = %b", a, b, equal);

    // End simulation
    $finish;
end

endmodule
