
package toplevel_types;
    
    import global_defs::*;
    import cu_types::*;
    import rf_types::*;

    typedef logic[`WORD_SIZE-1:0] pc_t;
    
    // ir_u: instruction register union type
    // reference differently based on opcode
    typedef union packed {

        struct packed {
            logic[24:0] unknown;
            opcode_t opcode;
        } def;
        struct packed {
            logic[19:0] imm;
            reg_addr_t  rd;
            opcode_t  opcode;
        } src0;

        struct packed {
            logic[11:0] imm;
            reg_addr_t  rs1;
            funct3_t  funct;
            reg_addr_t  rd;
            opcode_t  opcode;
        } src1;

        struct packed {
            funct7_t  funct7;
            reg_addr_t  rs2;
            reg_addr_t  rs1;
            funct3_t  funct3;
            reg_addr_t  rd;
            opcode_t  opcode;
        } src2;

        struct packed {
            funct7_t  funct7;
            logic[4:0]  shamt;
            reg_addr_t  rs1;
            funct3_t  funct3;
            reg_addr_t  rd;
            opcode_t  opcode;
        } shift;

        struct packed {
            logic[11:0] imm;
            reg_addr_t  rs1;
            funct3_t  funct;
            reg_addr_t  rd;
            opcode_t  opcode;
        } ld;

        struct packed {
            funct7_t  imm_u;
            reg_addr_t  rs2;
            reg_addr_t  rs1;
            funct3_t  funct;
            logic[4:0]  imm_l;
            opcode_t  opcode;
        } str;

        struct packed {
            logic       imm_20;
            logic[9:0]  imm_10_1;
            logic       imm_11;
            logic[7:0]  imm_19_12;
            reg_addr_t  rd;
            opcode_t  opcode;
        } jmp;

        struct packed {
            logic[11:0] imm;
            reg_addr_t  rs1;
            funct3_t  funct;
            reg_addr_t  rd;
            opcode_t  opcode;
        } jmpr;

        struct packed {
            logic       imm_12;
            logic[5:0]  imm_10_5;
            reg_addr_t  rs2;
            reg_addr_t  rs1;
            funct3_t  funct;
            logic[3:0]  imm_4_1;
            logic       imm_11;
            opcode_t  opcode;
        } br;

    } ir_u;

endpackage;