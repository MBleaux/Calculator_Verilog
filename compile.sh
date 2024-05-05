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

    vlog -sv -work LIB $PROJECTNAME/SRC/RTL/dff_nbits.v
    echo -e "\e[33m---------------------------------------\e[0m"
    vlog -sv -work LIB $PROJECTNAME/SRC/RTL/fsm.v
    echo -e "\e[33m---------------------------------------\e[0m"
    vlog -sv -work LIB $PROJECTNAME/SRC/RTL/alu.v
    echo -e "\e[33m---------------------------------------\e[0m"
    vlog -sv -work LIB $PROJECTNAME/SRC/RTL/top_level.v
    echo -e "\e[33m---------------------------------------\e[0m"

echo -e "\e[33mEnd of compilation of the RTL files!\e[0m"
echo -e "\e[33m---------------------------------------\e[0m"

# Compilation of testbench files
echo -e "\e[35m---------------------------------------\e[0m"
echo -e "\e[35mCompiling testbench files...\e[0m"
echo -e "\e[35m---------------------------------------\e[0m"

    vlog -sv -work LIB $PROJECTNAME/SRC/BENCH/dff_nbits_tb.v
    echo -e "\e[35m---------------------------------------\e[0m"
    vlog -sv -work LIB $PROJECTNAME/SRC/BENCH/fsm_tb.v
    echo -e "\e[35m---------------------------------------\e[0m"
    vlog -sv -work LIB $PROJECTNAME/SRC/BENCH/alu_tb.v
    echo -e "\e[35m---------------------------------------\e[0m"
    vlog -sv -work LIB $PROJECTNAME/SRC/BENCH/top_level_tb.v
    echo -e "\e[35m---------------------------------------\e[0m"

echo -e "\e[35mEnd of compilation the testbench files!\e[0m"
echo -e "\e[35m---------------------------------------\e[0m"

# Lauching the simulator
echo -e "\e[32m---------------------------------------\e[0m"
echo -e "\e[32mCompilation finished!\e[0m"
echo -e "\e[32m---------------------------------------\e[0m"

vsim
