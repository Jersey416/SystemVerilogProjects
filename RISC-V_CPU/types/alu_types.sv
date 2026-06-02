`timescale 1ns/1ps

package alu_types;

    //TODO adjust this to optimize for opcodes

    typedef enum logic[3:0] {
        NOT, AND, OR,  XOR,
        ADD, SUB, MUL, DIV, 
        LSL, LSR, ASL, ASR 
    } alu_mode_t;

    typedef struct packed{
        logic n;
        logic c;
        logic v;
        logic z;
    } alu_flags_t;

endpackage
