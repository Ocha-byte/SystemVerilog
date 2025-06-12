`timescale 1 ns / 1ns

module half_adder (
    input in1,
    in2,
    output reg Sum,
    Cout
);

    always @(in1, in2) begin
        Sum  = in1 ^ in2;
        Cout = in1 & in2;
    end

endmodule
