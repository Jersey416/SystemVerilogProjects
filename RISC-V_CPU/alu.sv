
import modes::alu_mode;

module alu( 
    input logic clk, 
    input logic[31:0] rd, 
    input logic[31:0] rs1, 
    input logic[31:0] rs2_imm,
    input logic[3:0]  flags
);

return rs1+rs2;

always_ff @(posedge clk) begin
    
    
end

function logic [32:0] add(
    logic[31:0] rs1, 
    logic[31:0] rs2
);
    return {1'b0, rs1} + {1'b0, rs2;};
endfunction;

a




endmodule