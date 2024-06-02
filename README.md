# Calculator_Verilog

This document outlines the project to create a simple 8-bit calculator using Verilog. The calculator is capable of performing the following operations:

- Addition of two values: \(a + b\)

- Subtraction of two values: \(a - b\)

- Multiplication of two values: \(a * b\)

- Euclid's Division of two values: \(a / b\)

## Finite State Machine

FSM consists in five states:
1. IDLE: the system waits for the command start_i high, otherwise the state continues being IDLE
2. READING: after receiving start_i high, it reads the values a_i and b_i, and fct_i to define the function chosen
3. RUNNING: ALU is operating the function chosen
4. WRITING: after calculting, the results are writing in the registers
5. DONE: in this state, the value is in the output

Thus, the time needed to calculate the operation is 3 clock periods.

To reset all values, put the reset_i in low level.