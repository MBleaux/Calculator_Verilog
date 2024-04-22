/**
 * @file or_gate
 * @author Mario Araujo (gmarioaraujo@gmail.com)
 * @brief Logic Gate OR
 * @version 0.1
 * @date 2024-04-22
 * 
 * @copyright Copyright (c) 2024
 * 
 */
module or_gate (
    input a_i, b_i,
    output s_o
);
    assign s_o = (a_i | b_i);
endmodule