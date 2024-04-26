/**
 * @file full_adder_nbits_clk
 * @author Mario Araujo (gmarioaraujo@gmail.com)
 * @brief Addition for n bits
 *        The results are the sum and the carry out, together.
 *        Use a clock
 * @version 0.2
 * @date 2024-04-26
 * 
 * @copyright Copyright (c) 2024
 * 
 */
module full_adder_nbits_clk #(
    parameter width = 8
) (
    input logic clk,  // Adicionado sinal de clock
    input logic[width-1:0] a_i, b_i,
    output logic[width:0] s_o
);
    /* verilator lint_off UNUSED */
    logic [width:0] temp_s;
    /* verilator lint_on UNUSED */
    logic [width:0] temp_s_next;  // Registro temporário para o próximo valor de temp_s

    genvar i;

    generate
        for (i = 0; i <= width-1; i++) begin
            full_adder fa_i (
                .a_i(a_i[i]),
                .b_i(b_i[i]),
                .cin_i(temp_s[i]),
                .s_o(s_o[i]),
                .cout_o(temp_s_next[i+1])
            );
        end
    endgenerate

    always_ff @(posedge clk) begin
        temp_s <= temp_s_next;  // Atualiza temp_s no flanco de subida do clock
    end

    assign temp_s_next[0] = '0;  // Inicializa o primeiro bit para evitar lógica indefinida
    assign s_o[width] = temp_s_next[width];

endmodule
