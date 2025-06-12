`timescale 1 ns / 1ns

module not_gate_tb;
    reg  in1;
    // verilator lint_off UNUSED
    wire out1;
    // verilator lint_on UNUSED

    not_gate uut (
        .in1 (in1),
        .out1(out1)
    );

    initial begin
        in1 = 0;
        #1;
        in1 = 1;
        #1;
        $finish;
        $dumpfile("waveform.fst");
        $dumpvars;
    end

endmodule
