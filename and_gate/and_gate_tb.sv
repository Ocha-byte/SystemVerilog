`timescale 1 ns / 1ns

module and_gate_tb;
    reg in1, in2;
    // verilator lint_off UNUSED
    wire out1;
    // verilator lint_on UNUSED

    and_gate uut (
        .in1 (in1),
        .in2 (in2),
        .out1(out1)
    );

    initial begin
        in1 = 0;
        in2 = 0;
        #1;
        in1 = 1;
        in2 = 0;
        #1;
        in1 = 0;
        in2 = 1;
        #1;
        in1 = 1;
        in2 = 1;
        #1;
        $finish;
        $dumpfile("waveform.fst");
        $dumpvars;
    end

endmodule
