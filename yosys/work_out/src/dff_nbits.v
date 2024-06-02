/**
 * @file dff_nbits.v
 * @author Mario Araujo (gmarioaraujo@gmail.com)
 * @brief Register for n bits
 * @version 0.1
 * @date 2024-04-22
 * 
 * @copyright Copyright (c) 2024
 * 
 */
module dff_nbits #(
    parameter width = 8
) (
    input logic[width-1:0] d_i,
    input logic clock_i, reset_i, we_i,
    output logic[width-1:0] q_o
);
    always @(posedge clock_i or negedge reset_i) begin
        if (!reset_i) begin
            q_o <= '0;  // Clear the output on reset
        end else if (we_i) begin
            q_o <= d_i; // Update the output only if write enable is high
        end
    end
endmodule
