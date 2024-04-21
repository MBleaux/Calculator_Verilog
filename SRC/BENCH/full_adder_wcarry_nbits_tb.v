`timescale 1ns / 1ps

module full_adder_wcarry_nbits_tb();

parameter WIDTH = 8;
reg [WIDTH-1:0] a, b;
wire [WIDTH:0] sum;

// Instantiate the full_adder_wcarry_nbits module with the defined width
full_adder_wcarry_nbits #(.width(WIDTH)) dut (
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
        
        // Wait a while for the addition to take place
        #10;
        
        // Check the result
        if (sum != a + b) begin
            $display("Erro: a = %b, b = %b, expected %b, obtained %b", a, b, a + b, sum);
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
