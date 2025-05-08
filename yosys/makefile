# Directories
YOSYS_DIR = /home/md278709/podman_ubuntu/uarchifi_artifact/build/yosys#/home/mario/artifact_µarchiFI_fmcad23/build/yosys
YOSYS_CMD = $(YOSYS_DIR)/yosys
CURRENT_DIR = /home/md278709/podman_ubuntu/calculatrice/yosys#/home/mario/verilog/Calculator_Verilog/yosys

# Workspace
SCRIPT := ${CURRENT_DIR}/script
SRC    := ${CURRENT_DIR}/src
OUT    := ${CURRENT_DIR}/out

# Parameters
PIPE_TIME := | ts '[%Y-%m-%d %H:%M:%.S]'
YOSYS_SMT := yices
BMC_DEPTH := 20
YOSYS_OPTIONS := --dump-vcd $(OUT)/counter_example.vcd
BASE_NAME := fault_gen
BASE_NAME_NOFAULT := nofault_gen

# Inputs (only in binary)
A_I 	?= 00000011	# 8 bits
B_I 	?= 00000111	# 8 bits
FCT_I 	?= 01		# 2 bits
START_I ?= 1		# 1 bit

# Property: change it in ./src/wrapper_gen.v according to the expected result
#	assign check_res = ((done_o == 1'b0) && (res_o == 16'h00)) || ((done_o == 1'b1) && (res_o == 16'hFFFC));
#	assert property(check_res);

# Rules
mkdir_out:
	mkdir -p "out"

nofault: check_yosys_build mkdir_out
	$(YOSYS_CMD) ${SCRIPT}/nofault_parse.ys
	perl -pi -e 's/connect \\d_i \\a_i/connect \\d_i 8'\''$(A_I)/g' $(OUT)/$(BASE_NAME_NOFAULT).il
	perl -pi -e 's/connect \\d_i \\b_i/connect \\d_i 8'\''$(B_I)/g' $(OUT)/$(BASE_NAME_NOFAULT).il
	perl -pi -e 's/connect \\d_i \\fct_i/connect \\d_i 2'\''$(FCT_I)/g' $(OUT)/$(BASE_NAME_NOFAULT).il
	perl -pi -e 's/connect \\start_i \\start_i/connect \\start_i 1'\''$(START_I)/g' $(OUT)/$(BASE_NAME_NOFAULT).il
	$(YOSYS_CMD) ${SCRIPT}/nofault_build.ys

fault: check_yosys_build mkdir_out
	$(YOSYS_CMD) ${SCRIPT}/fault_parse.ys
	perl -pi -e 's/connect \\d_i \\a_i/connect \\d_i 8'\''$(A_I)/g' $(OUT)/$(BASE_NAME).il
	perl -pi -e 's/connect \\d_i \\b_i/connect \\d_i 8'\''$(B_I)/g' $(OUT)/$(BASE_NAME).il
	perl -pi -e 's/connect \\d_i \\fct_i/connect \\d_i 2'\''$(FCT_I)/g' $(OUT)/$(BASE_NAME).il
	perl -pi -e 's/connect \\start_i \\start_i/connect \\start_i 1'\''$(START_I)/g' $(OUT)/$(BASE_NAME).il
	$(YOSYS_CMD) ${SCRIPT}/fault_build.ys

yosysmc: check_yices2_deps
	time yosys-smtbmc -t $(BMC_DEPTH) -s $(YOSYS_SMT) --presat $(YOSYS_OPTIONS) $(OUT)/$(BASE_NAME).smt2 $(PIPE_TIME)

fault-yosysmc: fault yosysmc

clean:
	rm -rf $(OUT)

check_yices2_deps:
	@if ! command -v yices-smt2 >/dev/null 2>&1; then echo "Please install yices2 (https://github.com/SRI-CSL/yices2)"; exit 1; fi

check_yosys_build:
ifeq (,$(wildcard $(YOSYS_CMD)))
	$(error "yosys command does not exist! Please run 'make build' in the root directory first")
endif