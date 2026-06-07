`timescale 1ns/1ps

package cu_types;

    import rf_types::reg_addr_t

    typedef enum logic[6:0] {
        OP_LUI      = 7'b0110111,
        OP_AUIPC    = 7'b0010111,
        OP_SRC1     = 7'b0010011,
        OP_SRC2     = 7'b0110011,
        OP_FENCE    = 7'b0001111,
        OP_CSR      = 7'b1110011,
        OP_LD       = 7'b0000011,
        OP_STR      = 7'b0100011,
        OP_JMP      = 7'b1100111,
        OP_JMPR     = 7'b1101111,
        OP_BR       = 7'b1100011,
    }opcode_t;
    typedef logic[2:0] funct3_t;
    typedef logic[6:0] funct7_t; 


    typedef struct packed {
        logic[17:0] tmp;
        alu_types::alu_flags_t flags;
    } csr_t;

    typedef union packed {

        typedef struct packed {
            logic[24:0] unknown;
            opcode_t opcode;
        } def;
        typedef struct packed {
            logic[19:0] imm;
            reg_addr_t  rd;
            opcode_t  opcode;
        } src0;

        typedef struct packed {
            logic[11:0] imm;
            reg_addr_t  rs1;
            funct3_t  funct;
            reg_addr_t  rd;
            opcode_t  opcode;
        } src1;

        typedef struct packed {
            funct7_t  funct7;
            reg_addr_t  rs2;
            reg_addr_t  rs1;
            funct3_t  funct3;
            reg_addr_t  rd;
            opcode_t  opcode;
        } src2;

        typedef struct packed {
            funct7_t  funct7;
            logic[4:0]  shamt;
            reg_addr_t  rs1;
            funct3_t  funct3;
            reg_addr_t  rd;
            opcode_t  opcode;
        } shift;

        typedef struct packed {
            logic[11:0] imm;
            reg_addr_t  rs1;
            funct3_t  funct;
            reg_addr_t  rd;
            opcode_t  opcode;
        } ld;

        typedef struct packed {
            funct7_t  imm_u;
            reg_addr_t  rs2;
            reg_addr_t  rs1;
            funct3_t  funct;
            logic[4:0]  imm_l;
            opcode_t  opcode;
        } str;

        typedef struct packed {
            logic       imm_20;
            logic[9:0]  imm_10_1;
            logic       imm_11;
            logic[7:0]  imm_19_12;
            reg_addr_t  rd;
            opcode_t  opcode;
        } jmp;

        typedef struct packed {
            logic[11:0] imm;
            reg_addr_t  rs1;
            funct3_t  funct;
            reg_addr_t  rd;
            opcode_t  opcode;
        } jmpr;

        typedef struct packed {
            logic       imm_12;
            logic[5:0]  imm_10_5;
            reg_addr_t  rs2;
            reg_addr_t  rs1;
            funct3_t  funct;
            logic[3:0]  imm_4_1;
            logic       imm_11
            opcode_t  opcode;
        } br;

    } ir_u;

endpackage