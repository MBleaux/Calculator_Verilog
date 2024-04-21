`timescale 1ns / 1ps

module add_sub_nbits_tb();

parameter WIDTH = 8;
reg [WIDTH-1:0] a, b;
reg sub;
wire [WIDTH-1:0] sum;
wire carry_out;

// Instantiate the add_sub_nbits module with the defined width
add_sub_nbits #(.width(WIDTH)) dut (
    .a_i(a), 
    .b_i(b), 
    .sub_i(sub), 
    .s_o(sum), 
    .cout_o(carry_out)
);

initial begin
    // Initialize entries
    a = 0; b = 0;
    
    // Test cycle
    repeat (10) begin
        // Generate random values for a, b and sub
        a = $random;
        b = $random;
        sub = $random;
        
        // Wait a while for the addition to take place
        #10;
        
        // Check the result
        if (sub == 0) begin
            if (sum != a + b) begin
                $display("Error: a = %b, b = %b, expected %b, obtained %b", a, b, a + b, sum);
            end
            else begin
                $display("Test approved: a = %b, b = %b, result = %b, Carry = %b", a, b, sum, carry_out);
            end
        end else begin
            if (sum != a - b) begin
                $display("Error: a = %b, b = %b, expected %b, obtained %b", a, b, a - b, sum);
            end
            else begin
                $display("Test approved: a = %b, b = %b, result = %b, Carry = %b", a, b, sum, carry_out);
            end
        end
    end
    
    // Finish the simulation
    $finish;
end

// Monitoring changes in variables
initial begin
    $monitor("Time = %t: a = %b, b = %b, sub = %b, sum = %b, carry_out = %b",
              $time, a, b, sub, sum, carry_out);
end

endmodule
