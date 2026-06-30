`timescale 1ns/1ps

package cu_types;

    import rf_types::reg_addr_t;
    import alu_types::alu_flags_t;

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
        OP_BR       = 7'b1100011
    } opcode_t;

    typedef logic[2:0] funct3_t;
    typedef logic[6:0] funct7_t; 


    typedef struct packed {
        logic[17:0] tmp;
        alu_types   ::alu_flags_t flags;
    } csr_t;

    
endpackage
