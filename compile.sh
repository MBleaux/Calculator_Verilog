#!/bin/bash

export PROJECTNAME="."

# Creation of libraries
echo -e "\e[32m---------------------------------------\e[0m"
echo -e "\e[32mThe project location is : $PROJECTNAME\e[0m"

echo -e "\e[32mRemoving libraries...\e[0m"
echo -e "\e[32m---------------------------------------\e[0m"
    mkdir -p $PROJECTNAME/LIB
    vdel -lib $PROJECTNAME/LIB -all

echo -e "\e[32mCreating libraries...\e[0m"
echo -e "\e[32m---------------------------------------\e[0m"
    vlib $PROJECTNAME/LIB
    vmap LIB $PROJECTNAME/LIB

# Compilation of RTL files
echo -e "\e[33m---------------------------------------\e[0m"
echo -e "\e[33mCompiling RTL files...\e[0m"
echo -e "\e[33m---------------------------------------\e[0m"

    vlog -sv -work LIB $PROJECTNAME/SRC/RTL/or_gate.v
    echo -e "\e[33m---------------------------------------\e[0m"
    vlog -sv -work LIB $PROJECTNAME/SRC/RTL/half_adder.v
    echo -e "\e[33m---------------------------------------\e[0m"
    vlog -sv -work LIB $PROJECTNAME/SRC/RTL/full_adder.v
    echo -e "\e[33m---------------------------------------\e[0m"
    vlog -sv -work LIB $PROJECTNAME/SRC/RTL/full_adder_nbits.v
    echo -e "\e[33m---------------------------------------\e[0m"
    vlog -sv -work LIB $PROJECTNAME/SRC/RTL/dff_nbits.v
    echo -e "\e[33m---------------------------------------\e[0m"
    vlog -sv -work LIB $PROJECTNAME/SRC/RTL/full_sub_nbits.v
    echo -e "\e[33m---------------------------------------\e[0m"
    vlog -sv -work LIB $PROJECTNAME/SRC/RTL/add_sub_nbits.v
    echo -e "\e[33m---------------------------------------\e[0m"
    vlog -sv -work LIB $PROJECTNAME/SRC/RTL/full_adder_wcarry_nbits.v
    echo -e "\e[33m---------------------------------------\e[0m"
    vlog -sv -work LIB $PROJECTNAME/SRC/RTL/full_sub_wborrow_nbits.v
    echo -e "\e[33m---------------------------------------\e[0m"
    vlog -sv -work LIB $PROJECTNAME/SRC/RTL/mult_nbits.v
    echo -e "\e[33m---------------------------------------\e[0m"

echo -e "\e[33mEnd of compilation of the RTL files!\e[0m"
echo -e "\e[33m---------------------------------------\e[0m"

# Compilation of testbench files
echo -e "\e[35m---------------------------------------\e[0m"
echo -e "\e[35mCompiling testbench files...\e[0m"
echo -e "\e[35m---------------------------------------\e[0m"

    vlog -sv -work LIB $PROJECTNAME/SRC/BENCH/or_gate_tb.v
    echo -e "\e[35m---------------------------------------\e[0m"
    vlog -sv -work LIB $PROJECTNAME/SRC/BENCH/half_adder_tb.v
    echo -e "\e[35m---------------------------------------\e[0m"
    vlog -sv -work LIB $PROJECTNAME/SRC/BENCH/full_adder_tb.v
    echo -e "\e[35m---------------------------------------\e[0m"
    vlog -sv -work LIB $PROJECTNAME/SRC/BENCH/full_adder_nbits_tb.v
    echo -e "\e[35m---------------------------------------\e[0m"
    vlog -sv -work LIB $PROJECTNAME/SRC/BENCH/dff_nbits_tb.v
    echo -e "\e[35m---------------------------------------\e[0m"
    vlog -sv -work LIB $PROJECTNAME/SRC/BENCH/full_sub_nbits_tb.v
    echo -e "\e[35m---------------------------------------\e[0m"
    vlog -sv -work LIB $PROJECTNAME/SRC/BENCH/add_sub_nbits_tb.v
    echo -e "\e[35m---------------------------------------\e[0m"
    vlog -sv -work LIB $PROJECTNAME/SRC/BENCH/full_adder_wcarry_nbits_tb.v
    echo -e "\e[35m---------------------------------------\e[0m"
    vlog -sv -work LIB $PROJECTNAME/SRC/BENCH/full_sub_wborrow_nbits_tb.v
    echo -e "\e[35m---------------------------------------\e[0m"
    vlog -sv -work LIB $PROJECTNAME/SRC/BENCH/mult_nbits_tb.v
    echo -e "\e[35m---------------------------------------\e[0m"

echo -e "\e[35mEnd of compilation the testbench files!\e[0m"
echo -e "\e[35m---------------------------------------\e[0m"

# Lauching the simulator
echo -e "\e[32m---------------------------------------\e[0m"
echo -e "\e[32mCompilation finished!\e[0m"
echo -e "\e[32m---------------------------------------\e[0m"

#vsim
