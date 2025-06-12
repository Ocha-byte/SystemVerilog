`timescale 1 ns / 1ns

module not_gate (
    input in1,
    output reg out1
);

    always @(in1) begin
        out1 = ~(in1);
    end

endmodule
