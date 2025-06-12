`timescale 1 ns / 1ns

module xor_gate (
    input in1,
    in2,
    output reg out1
);

    always @(in1, in2) begin
        out1 = in1 ^ in2;
    end

endmodule
