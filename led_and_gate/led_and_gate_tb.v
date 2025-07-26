`timescale 1 ns / 1ns

module led_and_gate_tb;
    reg SW1, SW2;
    /* verilator lint_off UNUSEDSIGNAL */
    wire LED0;
    /* verilator lint_on UNUSEDSIGNAL */

    led_and_gate uut (
        .SW1 (SW1),
        .SW2 (SW2),
        .LED0(LED0)
    );

    initial begin
        SW1 = 0;
        SW2 = 0;
        #1;
        SW1 = 1;
        SW2 = 0;
        #1;
        SW1 = 0;
        SW2 = 1;
        #1;
        SW1 = 1;
        SW2 = 1;
        #1;
        $finish;
        $dumpfile("led_and_gate_tb.vcd");
        $dumpvars;
    end

endmodule
