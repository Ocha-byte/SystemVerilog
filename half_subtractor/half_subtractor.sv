`timescale 1 ns / 1ns

module half_subtractor (
    input in1,
    in2,
    output reg Diff,
    Borrow
);

    always @(in1, in2) begin
        Diff  = in1 ^ in2;
        Borrow = ~(in1) & in2;
    end

endmodule
