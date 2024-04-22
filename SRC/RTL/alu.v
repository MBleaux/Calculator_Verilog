module alu #(
    parameter width = 8
) (
    input logic [width-1:0] a_i, b_i,
    input logic [1:0] fct_i, // Corrigido para especificar a largura do seletor de função
    output logic [2*width-1:0] s_o, // Corrigido para que o tamanho seja apropriado
    output logic signal_o
);

    // Instâncias de módulos devem ser declaradas fora do always_comb
    logic [width:0] temp_add, temp_sub;
    logic [2*width-1:0] temp_mul;
    logic temp_equal;

    full_adder_nbits #(.width(width)) add (
        .a_i(a_i),
        .b_i(b_i),
        .s_o(temp_add)
    );

    full_sub_nbits #(.width(width)) sub (
        .a_i(a_i),
        .b_i(b_i),
        .s_o(temp_sub)
    );

    mult_nbits #(.width(width)) mul (
        .a_i(a_i),
        .b_i(b_i),
        .s_o(temp_mul)
    );

    comp #(.width(width)) compare (
        .a_i(a_i),
        .b_i(b_i),
        .equal_o(temp_equal)
    );

    // Lógica combinacional para selecionar a saída baseada em fct_i
    always_comb begin
        case (fct_i)
            2'b00: begin
                s_o = { {(2*width-width-1){1'b0}}, temp_add}; // Ajustar a concatenação para corresponder ao tamanho
                signal_o = 0;
            end
            2'b01: begin
                s_o = { {(2*width-width-1){1'b0}}, temp_sub};
                signal_o = 0;
            end
            2'b10: begin
                s_o = temp_mul;
                signal_o = 0;
            end
            2'b11: begin
                s_o = 0;
                signal_o = temp_equal;
            end
            default: begin
                s_o = 0;
                signal_o = 0;
            end
        endcase
    end

endmodule
