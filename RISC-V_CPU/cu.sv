module cu(
    input   logic       clk, 
    input   global_defs::pc_t    pc_in,
    input   global_defs::ir_u    ir_in,
    output  logic       w_pc,
    output  logic       w_ir,
    output  global_defs::ir_u    ir_out,
    output  rf_types::reg_addr_t waddr,
    output  global_defs::word_t  wdata, 
    output  rf_types::reg_addr_t raddr0,
    output  rf_types::reg_addr_t raddr1

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
    import global_defs::*;

    //word_t pc;
    ir_u ir;
    //sr_t csr;

    always_comb begin : opcode_logic
        
        case(ir.def.opcode)
            OP_LUI: begin
                waddr = ir.src0.rd;
                wdata = 32'(ir.src0.imm);
            end
            OPAUIPC: begin
                
            end
            default: begin
                //none
            end
        endcase

    end
    always_ff @(posedge clk) begin
        ir <= instr;
    end
endmodule
