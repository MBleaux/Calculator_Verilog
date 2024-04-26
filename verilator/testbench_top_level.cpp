#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "obj_dir/Vtop_level_alternative.h"

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);

    // Create an instance of the Verilated module
    Vtop_level_alternative* dut = new Vtop_level_alternative;

    // Initialize VCD trace
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;

    // Attach trace to the top module
    dut->trace(m_trace, 99); // 99 is the desired trace depth
    m_trace->open("waveform.vcd");

    // Simulation time
    int sim_time = 20; // Total simulation time
    int time = 0;

    // Reset the design
    dut->clock_i = 0;
    dut->reset_i = 0;
    dut->start_i = 0;
    dut->a_i     = 0x1; //std::rand() % 256;
    dut->b_i     = 0x2; //std::rand() % 256;
    dut->fct_i   = 1;

    // Dump trace
    m_trace->dump(time);
    
    dut->eval();
    dut->start_i = 1;
    dut->reset_i = 1;

    // Run simulation
    for (time = 1; time < sim_time; ++time) {
        // Toggle clock
        dut->clock_i = !dut->clock_i;
        dut->eval();

        // Dump trace
        m_trace->dump(time);

        // Print outputs
        std::cout << "Time: " << time
                  << " start_i: " << (int)dut->start_i
                  << " reset_i: " << (int)dut->reset_i
                  << " clock_i: " << (int)dut->clock_i
                  << " a_i: " << (int)dut->a_i
                  << " b_i: " << (int)dut->b_i
                  << " fct_i: " << (int)dut->fct_i
                  << " s_o: " << (int)dut->s_o
                  << " signal_o: " << (int)dut->signal_o << std::endl;

        // Advance time
        dut->eval();
    }

    // Finalize VCD trace
    m_trace->close();
    delete m_trace;

    // Cleanup
    delete dut;
    return 0;
}