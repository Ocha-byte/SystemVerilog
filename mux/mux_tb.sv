`timescale 1 ns / 1ns

module mux_tb;
    reg sel, in1, in2;
    // verilator lint_off UNUSED
    wire out1;
    // verilator lint_on UNUSED

    mux uut (
        .sel(sel),
        .in1 (in1),
        .in2 (in2),
        .out1(out1)
    );

    initial begin
        sel = 0;
        in1 = 0;
        in2 = 0;
        #1;
        sel = 1;
        in1 = 1;
        in2 = 0;
        #1;
        sel = 0;
        in1 = 0;
        in2 = 1;
        #1;
        sel = 1;
        in1 = 1;
        in2 = 1;
        #1;
        $finish;
        $dumpfile("waveform.fst");
        $dumpvars;
    end

endmodule
