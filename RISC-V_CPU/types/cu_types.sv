`timescale 1ns/1ps

package cu_types;

    typedef struct packed {
        logic[17:0] tmp;
        alu_types::alu_flags_t flags;
    } sr_t;

    typedef union packed {

        word_t raw;

        typedef struct packed {
            logic[19:0] imm;
            logic[4:0]  rd;
            logic[6:0]  opcode;
        } src0;

        typedef struct packed {
            logic[11:0] imm;
            logic[4:0]  rs1;
            logic[2:0]  funct;
            logic[4:0]  rd;
            logic[6:0]  opcode;
        } src1;

        typedef struct packed {
            logic[6:0]  funct7;
            logic[4:0]  rs2;
            logic[4:0]  rs1;
            logic[6:0]  funct3;
            logic[4:0]  rd;
            logic[6:0]  opcode;
        } src2;

        typedef struct packed {
            logic[6:0]  funct7;
            logic[4:0]  shamt;
            logic[4:0]  rs1;
            logic[2:0]  funct3;
            logic[4:0]  rd;
            logic[6:0]  opcode;
        } shift;

        typedef struct packed {
            logic[6:0]  imm_u;
            logic[4:0]  rs2;
            logic[4:0]  rs1;
            logic[2:0]  funct;
            logic[4:0]  imm_l;
            logic[6:0]  opcode;
        } str;

        typedef struct packed {
            logic       imm_20;
            logic[9:0]  imm_10_1;
            logic       imm_11;
            logic[7:0]  imm_19_12;
            logic[4:0]  rd;
            logic[6:0]  opcode;
        } jmp;

        typedef struct packed {
            logic[11:0] imm;
            logic[4:0]  rs1;
            logic[2:0]  funct;
            logic[4:0]  rd;
            logic[6:0]  opcode;
        } jmpr;

        typedef struct packed {
            logic       imm_12;
            logic[5:0]  imm_10_5;
            logic[4:0]  rs2;
            logic[4:0]  rs1;
            logic[2:0]  funct;
            logic[3:0]  imm_4_1;
            logic       imm_11
            logic[6:0]  opcode;
        } br;

    } ir_u;

endpackage