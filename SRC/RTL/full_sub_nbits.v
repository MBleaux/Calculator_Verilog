/**
 * @file full_sub_nbits
 * @author Mario Araujo (gmarioaraujo@gmail.com)
 * @brief Substraction for n bits
 *        The results are the sum by complement by 2 and the borrow out, together
 * @version 0.1
 * @date 2024-04-22
 * 
 * @copyright Copyright (c) 2024
 * 
 */
module full_sub_nbits #(
    parameter width = 8
) (
    input logic [width-1:0] a_i, b_i,
    output logic [width:0] s_o
);
    logic [width:0] temp_s;

    initial begin
        temp_s = '0;
        temp_s[0] = 1;
    end
    
    genvar i;

    generate
        for (i = 0; i <= width-1; i++) begin
            full_adder fa_i (
                .a_i(a_i[i]),
                .b_i(~b_i[i]),
                .cin_i(temp_s[i]),
                .s_o(s_o[i]),
                .cout_o(temp_s[i+1])
            );
        end
    endgenerate

    assign s_o[width] = ~temp_s[width];

endmodule
