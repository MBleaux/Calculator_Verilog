/**
 * @file or_gate
 * @author Mario Araujo (gmarioaraujo@gmail.com)
 * @brief Finite State Machine - FSM
  *        IDLE -> READING -> RUNNING -> WRITING -> DONE -> IDLE
 * @version 0.1
 * @date 2024-04-22
 * 
 * @copyright Copyright (c) 2024
 * 
 */
`timescale 1ns / 1ps

module fsm(
    input logic clock_i, reset_i, start_i,
    output logic    a_we_o, a_rst_o,
                    b_we_o, b_rst_o,
                    fct_we_o, fct_rst_o,
                    s_we_o, s_rst_o,
                    signal_we_o, signal_rst_o
);

// Defining states using typedef and enum
typedef enum {IDLE, READING, RUNNING, WRITING, DONE} state_t;

// State variables
state_t current_state, next_state;

// Always_ff block for state transition logic
always_ff @(posedge clock_i or negedge reset_i) begin
    if (!reset_i) begin
        current_state <= IDLE; // Reset to IDLE state
    end else begin
        current_state <= next_state; // Transition to the next state
    end
end

// Always_comb block to determine the next state
always_comb begin
    case (current_state)
        IDLE: begin
            if (start_i) begin
                next_state = READING; // Transition to READIING if start_i is high
            end else begin
                next_state = IDLE; // Remains in IDLE
            end
        end
        READING: begin
            next_state = RUNNING; // Transition to RUNNING after one cycle
        end
        RUNNING: begin
            next_state = WRITING; // Transition to WRITING after one cycle
        end
        WRITING: begin
            next_state = DONE; // Transition to DONE after one cycle
        end
        DONE: begin
            if (!reset_i) begin
                next_state = IDLE; // Returns to IDLE if reset_i is low
            end else begin
                next_state = DONE; // Remains in DONE
            end
        end
        default: begin
            next_state = IDLE; // Default security state
        end
    endcase
end

// Always_comb block for output updates
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
