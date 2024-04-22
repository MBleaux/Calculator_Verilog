/**
 * @file half_adder
 * @author Mario Araujo (gmarioaraujo@gmail.com)
 * @brief Half adder for 1 bit
 *        The results are the sum and the carry out, separately
 * @version 0.1
 * @date 2024-04-22
 * 
 * @copyright Copyright (c) 2024
 * 
 */
module half_adder (
    input logic a_i, b_i,
    output logic s_o, c_o
);
    assign s_o = (a_i ^ b_i);
    assign c_o = (a_i & b_i);
endmodule