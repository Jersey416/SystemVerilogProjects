module cu(
    input logic clk,
    input global_defs::word_t instr,
);
/*
    typedef struct packed {
        reg_addr_t rs1,
        reg_addr_t rs1,
        logic[2:0] mod,
        reg_addr_t rd,
        logic[6:0] opcode,
    } instr_reg_t;

    typedef struct packed {
        
    } status_reg_t;
*/

    import cu_types::*;

    word_t pc;
    ir_u ir;
    csr_t csr;

    always_comb begin : opcode_logic
        
        case(ir.def.opcode) begin




        end
    end
    always_ff @(posedge CLK) begin
    end
endmodule
