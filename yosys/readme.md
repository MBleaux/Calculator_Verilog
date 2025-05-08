# Fault Injection

The µArchiFI framework is used in order to inject faults into the calculator circuit. The fct_i_s signal is targeted as shown in the schematic below to modify the results.

![Schematic of the calculator being attacked](images/Calculator-top_level_fault.png)

## Organization of Files

In this repository, the folders are divided into:

- **out**: contains output files
- **script**: contains the Yosys scripts used to automatically to build the formal model
- **src**: contains all the modules used to build the calculator in the Verilog language, as well as the verification properties
- **work_out**: folder used to store the result of the conversion of SystemVerilog files into Verilog files

- **convert_sv2v.sh**: script used to convert SystemVerilog files to Verilog files
- **makefile**: targets to build the model and run the verifications

## Run instructions

In the makefile, it is possible to specify the values of the inputs to be run on the calculator. But before running the simulation, make sure that the properties in the Verilog file match the inputs chosen.

- To build the formal model, run `make fault`
- To run the bounded model checking, run `make yosysmc`
- To run both commands above, run `make fault-yosysmc`
- To clean the output files, run `make clean`