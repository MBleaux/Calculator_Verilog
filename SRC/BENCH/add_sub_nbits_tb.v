`timescale 1ns / 1ps

module add_sub_nbits_tb();

parameter WIDTH = 8;
reg [WIDTH-1:0] a, b;
reg sub;
wire [WIDTH-1:0] sum;
wire carry_out;

// Instanciar o módulo sub_nbits com a largura definida
add_sub_nbits #(.width(WIDTH)) dut (
    .a_i(a), 
    .b_i(b), 
    .sub_i(sub), 
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
        sub = $random;
        
        // Esperar um pouco para que a adição aconteça
        #10;
        
        // Verificar o resultado
        if (sub == 0) begin
            if (sum != a + b) begin
                $display("Erro: a = %b, b = %b, esperado %b, obtido %b", a, b, a + b, sum);
            end
            else begin
                $display("Teste passou: a = %b, b = %b, resultado = %b, Carry = %b", a, b, sum, carry_out);
            end
        end else begin
            if (sum != a - b) begin
                $display("Erro: a = %b, b = %b, esperado %b, obtido %b", a, b, a - b, sum);
            end
            else begin
                $display("Teste passou: a = %b, b = %b, resultado = %b, Carry = %b", a, b, sum, carry_out);
            end
        end
    end
    
    // Terminar a simulação
    $finish;
end

// Monitorar as mudanças nas variáveis
initial begin
    $monitor("Time = %t: a = %b, b = %b, sub = %b, sum = %b, carry_out = %b",
              $time, a, b, sub, sum, carry_out);
end

endmodule
