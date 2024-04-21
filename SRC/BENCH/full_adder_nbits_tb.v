`timescale 1ns / 1ps

module full_adder_nbits_tb;

parameter WIDTH = 8;
reg [WIDTH-1:0] a, b;
wire [WIDTH-1:0] sum;
wire carry_out;

// Instanciar o módulo full_adder_nbits com a largura definida
full_adder_nbits #(.width(WIDTH)) uut (
    .a_i(a), 
    .b_i(b), 
    .s_o(sum), 
    .cout_o(carry_out)
);

initial begin
    // Inicializar as entradas
    a = 0; b = 0;
    
    // Ciclo de teste
    repeat (10) begin
        // Gerar valores aleatórios para a e b
        a = $random;
        b = $random;
        
        // Esperar um pouco para que a adição aconteça
        #10;
        
        // Verificar o resultado
        if (sum != a + b) begin
            $display("Erro: a = %b, b = %b, esperado %b, obtido %b", a, b, a + b, sum);
        end
        else begin
            $display("Teste passou: a = %b, b = %b, resultado = %b", a, b, sum);
            $display("Carry = %b", carry_out);
        end
    end
    
    // Terminar a simulação
    $finish;
end

// Monitorar as mudanças nas variáveis
initial begin
    $monitor("Time = %t: a = %b, b = %b, sum = %b, carry_out = %b",
              $time, a, b, sum, carry_out);
end

endmodule
