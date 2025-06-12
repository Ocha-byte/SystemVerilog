`timescale 1 ns / 1ns

module full_subtractor_tb;
    reg in1, in2, in3;
    // verilator lint_off UNUSED
    wire Diff, Borrow;
    // verilator lint_on UNUSED

    full_subtractor uut (
        .in1 (in1),
        .in2 (in2),
        .in3 (in3),
        .Diff (Diff),
        .Borrow(Borrow)
    );

    initial begin

        in1 = 0;
        in2 = 0;
        in3 = 0;
        #1;

        in1 = 0;
        in2 = 0;
        in3 = 1;
        #1;

        in1 = 0;
        in2 = 1;
        in3 = 0;
        #1;

        in1 = 0;
        in2 = 1;
        in3 = 1;
        #1;

        in1 = 1;
        in2 = 0;
        in3 = 0;
        #1;

        in1 = 1;
        in2 = 0;
        in3 = 1;
        #1;

        in1 = 1;
        in2 = 1;
        in3 = 0;
        #1;

        in1 = 1;
        in2 = 1;
        in3 = 1;
        #1;

        $finish;
        $dumpfile("waveform.fst");
        $dumpvars;
    end

endmodule
