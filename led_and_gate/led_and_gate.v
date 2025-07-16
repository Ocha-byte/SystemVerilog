// Flash LED if AND Gate is true.

module led_and_gate (
    input SW1,
    input SW2,
    output reg LED0
);

    //assign LED0 = 1'b0;

    always @(SW1, SW2) begin
        LED0 = SW1 & SW2;
    end

endmodule
