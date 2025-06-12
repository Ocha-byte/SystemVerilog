
// module.sv
xnor_gate.sv

// testbench.sv
xnor_gate_tb.sv

// top module
--top xnor_gate_tb

// generate executable binary
--binary

// Translate sv to C++
//--cc

// lint only
//--lint-only

// All warnings
-Wall

// Timing
--timing

// Multithreading
-j 0

// SystemVerilog assertions
--assert

// dump waveform as FST
--trace-fst

// Human readable structs
--trace-structs

// Tracing depth
//--trace-depth 4

// Tracing coverage
//--trace-coverage

// Random intergers for unknown values
--x-assign unique

// Custom inital values of all signals
--x-initial unique
