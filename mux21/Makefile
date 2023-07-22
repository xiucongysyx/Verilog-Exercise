module = mux21

# checkout space
ifneq ($(words $(CURDIR)),1)
	$(error Unsupported: A space is located in the directory)
endif

VERILATOR = verilator
GTKWAVE = gtkwave

# FLAGS
VERILATOR_FLAGS += --cc --exe -j 0
VERILATOR_FLAGS += --Wall
VERILATOR_FLAGS += --trace
VERILATOR_FLAGS += --build

# Input files
VERILATOR_INPUT += vsrc/$(module).v
VERILATOR_INPUT += csrc/$(module).cpp

run:
	@echo
	@echo "----------Switch Exercise----------"
	@echo
	@echo "----------Verilator Compile--------"
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT)
	@echo
	@echo "----------Generating Wavefrom------"
	@rm -rf logs
	obj_dir/V$(module) +trace
	@echo
	@echo "----------Done---------------------"
	@echo "You can make GTKwave to see the wavefroms."

wave:
	@echo
	@echo "------Open wave using GTKwave------"
	$(GTKWAVE) $(module).vcd

clean:
	rm -rf obj_dir logs
