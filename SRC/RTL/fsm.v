`timescale 1ns / 1ps

module fsm(
    input logic clock_i, reset_i, start_i,
    output logic    a_we_o, a_rst_o,
                    b_we_o, b_rst_o,
                    fct_we_o, fct_rst_o,
                    s_we_o, s_rst_o,
                    signal_we_o, signal_rst_o
);

// Definindo os estados usando typedef e enum
typedef enum {IDLE, READING, RUNNING, WRITING, DONE} state_t;

// Variáveis de estado
state_t current_state, next_state;

// Bloco always_ff para lógica de transição de estado
always_ff @(posedge clock_i or negedge reset_i) begin
    if (!reset_i) begin
        current_state <= IDLE; // Reset para o estado IDLE
    end else begin
        current_state <= next_state; // Transição para o próximo estado
    end
end

// Bloco always_comb para determinar o próximo estado
always_comb begin
    case (current_state)
        IDLE: begin
            if (start_i) begin
                next_state = READING; // Transição para READIING se start_i for alto
            end else begin
                next_state = IDLE; // Permanece em IDLE
            end
        end
        READING: begin
            next_state = RUNNING; // Transição para RUNNING após um ciclo (simplicidade)
        end
        RUNNING: begin
            next_state = WRITING; // Transição para WRITING após um ciclo (simplicidade)
        end
        WRITING: begin
            next_state = DONE; // Transição para DONE após um ciclo (simplicidade)
        end
        DONE: begin
            if (!reset_i) begin
                next_state = IDLE; // Retorna para IDLE se reset_i for baixo
            end else begin
                next_state = DONE; // Permanece em DONE
            end
        end
        default: begin
            next_state = IDLE; // Estado de segurança padrão
        end
    endcase
end

// Bloco always_comb para atualizações de saída
always_comb begin
    case (current_state)
        IDLE: begin
            a_we_o  = 0;
            a_rst_o = 0;

            b_we_o  = 0;
            b_rst_o = 0;

            fct_we_o  = 0;
            fct_rst_o = 0;

            s_we_o  = 0;
            s_rst_o = 0;

            signal_we_o  = 0;
            signal_rst_o = 0;
        end
        READING: begin
            a_we_o  = 1;
            a_rst_o = 1;

            b_we_o  = 1;
            b_rst_o = 1;

            fct_we_o  = 1;
            fct_rst_o = 1;

            s_we_o  = 0;
            s_rst_o = 0;

            signal_we_o  = 0;
            signal_rst_o = 0;
        end
        RUNNING: begin
            a_we_o  = 0;
            a_rst_o = 1;

            b_we_o  = 0;
            b_rst_o = 1;

            fct_we_o  = 0;
            fct_rst_o = 1;

            s_we_o  = 0;
            s_rst_o = 0;

            signal_we_o  = 0;
            signal_rst_o = 0;
        end
        WRITING: begin
            a_we_o  = 0;
            a_rst_o = 1;

            b_we_o  = 0;
            b_rst_o = 1;

            fct_we_o  = 0;
            fct_rst_o = 1;

            s_we_o  = 1;
            s_rst_o = 1;

            signal_we_o  = 1;
            signal_rst_o = 1;
        end
        DONE: begin
            a_we_o  = 0;
            a_rst_o = 1;

            b_we_o  = 0;
            b_rst_o = 1;

            fct_we_o  = 0;
            fct_rst_o = 1;

            s_we_o  = 0;
            s_rst_o = 1;

            signal_we_o  = 0;
            signal_rst_o = 1;
        end
    endcase
end

endmodule
