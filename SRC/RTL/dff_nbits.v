/**
 * @file dff_nbits
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
    input logic clock_i, resetb_i,
    output logic[width-1:0] q_o
);
    always @(posedge clock_i or negedge resetb_i) begin
        if (!resetb_i) begin
            q_o <= '0;
        end else begin
            q_o <= d_i;
        end
    end
endmodule