`timescale 1ns / 1ps

module mult_nbits_tb();

parameter WIDTH = 8;
reg [WIDTH-1:0] a, b;
wire [2*WIDTH:0] sum;

// Instantiate the mult_nbits module with the defined width
mult_nbits #(.width(WIDTH)) dut (
    .a_i(a), 
    .b_i(b), 
    .s_o(sum) 
);

initial begin
    // Initialize entries
    a = 0; b = 0;
    
    // Test cycle
    repeat (10) begin
        // Generate random values for a and b
        a = $random;
        b = $random;
        
        // Esperar um pouco para que a adição aconteça
        #10;
        
        // Check the result
        if (sum != a * b) begin
            $display("Error: a = %b, b = %b, expected %b, obtained %b", a, b, a * b, sum);
        end
        else begin
            $display("Test approved: a = %b, b = %b, result = %b", a, b, sum);
        end
    end
    
    // Finish the simulation
    $finish;
end

// Monitoring changes in variables
initial begin
    $monitor("Time = %t: a = %b, b = %b, sum = %b",
              $time, a, b, sum);
end

endmodule
