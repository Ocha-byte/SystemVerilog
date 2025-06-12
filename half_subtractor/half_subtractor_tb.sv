`timescale 1 ns / 1ns

module half_subtractor_tb;
    reg in1, in2;
    // verilator lint_off UNUSED
    wire Diff, Borrow;
    // verilator lint_on UNUSED

    half_subtractor uut (
        .in1 (in1),
        .in2 (in2),
        .Diff (Diff),
        .Borrow(Borrow)
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
