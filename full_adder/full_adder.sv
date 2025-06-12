`timescale 1 ns / 1ns

module full_adder (
    input in1,
    in2,
    in3,
    output reg Sum,
    Cout
);

    always @(in1, in2, in3) begin
        Sum  = (in1 ^ in2) ^ in3;
        Cout = (in1 & in2) | ((in1 ^ in2) & in3);
    end

endmodule
