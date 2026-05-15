module ControlUnit #(
    parameters
) (
    ports
);
    
    always_ff @(posedge CLK) begin
        logic PC[31:0];
    end
endmodule
