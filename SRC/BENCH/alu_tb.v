`timescale 1ns / 1ps

module alu_tb;

parameter WIDTH = 8;
reg [WIDTH-1:0] a, b;
reg [1:0] fct;
wire [2*WIDTH-1:0] result;
wire equal;

// Instanciar o módulo ALU
alu #(.width(WIDTH)) dut (
    .a_i(a), 
    .b_i(b),
    .fct_i(fct),
    .s_o(result),
    .signal_o(equal)
);

// Procedimento de teste
initial begin
    // Teste de adição
    a = 8'b00001111;  // 15
    b = 8'b00000101;  // 5
    fct = 2'b00;      // Função de adição
    #10;
    $display("Addition Test: a = %b, b = %b, result = %b", a, b, result);

    // Teste de subtração
    a = 8'b00001111;  // 15
    b = 8'b00000101;  // 5
    fct = 2'b01;      // Função de subtração
    #10;
    $display("Subtraction Test: a = %b, b = %b, result = %b", a, b, result);

    // Teste de multiplicação
    a = 8'b00000011;  // 3
    b = 8'b00000010;  // 2
    fct = 2'b10;      // Função de multiplicação
    #10;
    $display("Multiplication Test: a = %b, b = %b, result = %b", a, b, result);

    // Teste de comparação
    a = 8'b00001111;  // 15
    b = 8'b00001111;  // 15
    fct = 2'b11;      // Função de comparação
    #10;
    $display("Comparison Test: a = %b, b = %b, equal = %b", a, b, equal);

    // Terminar simulação
    $finish;
end

endmodule
