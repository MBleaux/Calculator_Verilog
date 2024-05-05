`timescale 1ns / 1ps

module comp_tb;

parameter WIDTH = 8;
reg [WIDTH-1:0] a, b;
wire equal;

// Instantiate the comp module for testing
comp #(.width(WIDTH)) uut (
    .a_i(a), 
    .b_i(b), 
    .equal_o(equal)
);

// Test procedure
initial begin
    // Test Case 1: Equal numbers
    a = 8'b10101010; b = 8'b10101010;
    #10;  // Wait some time for the simulation to process
    $display("Test 1: a = %b, b = %b, equal = %b (expected: 1)", a, b, equal);

    // Test Case 2: Different numbers
    a = 8'b11110000; b = 8'b00001111;
    #10;  // Wait some time
    $display("Test 2: a = %b, b = %b, equal = %b (expected: 0)", a, b, equal);

    // Test Case 3: Another test with equal numbers
    a = 8'b00000000; b = 8'b00000000;
    #10;  // Wait some time
    $display("Test 3: a = %b, b = %b, equal = %b (expected: 1)", a, b, equal);

    // Test Case 4: Another test with different numbers
    a = 8'b10000001; b = 8'b10000000;
    #10;  // Wait some time
    $display("Test 4: a = %b, b = %b, equal = %b (expected: 0)", a, b, equal);

    // End the simulation
    $finish;
end

// Monitor changes in variables
initial begin
    $monitor("Time = %t: a = %b, b = %b, equal = %b", $time, a, b, equal);
end

endmodule
