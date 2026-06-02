module cu(
    input logic clk,
    input global_defs::word_t instr,
);
    typedef struct packed {
        reg_addr_t rs1,
        reg_addr_t rs1,
        logic[2:0] mod,
        reg_addr_t rd,
        logic[6:0] opcode,
    } instr_reg_t;

    typedef struct packed {
        
    } status_reg_t;


    word_t pc;
    instr_reg_t ir;
    status_reg_t sr;

    always_ff @(posedge CLK) begin
    end
endmodule
