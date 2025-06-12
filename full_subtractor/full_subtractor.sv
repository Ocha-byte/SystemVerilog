`timescale 1 ns / 1ns

module full_subtractor (
    input in1,
    in2,
    in3,
    output reg Diff,
    Borrow
);

    always @(in1, in2, in3) begin
        Diff = (in1 ^ in2) ^ in3;
        Borrow = (~(in1 ^ in2) & in3) | (~(in1) & in2);
    end

endmodule
