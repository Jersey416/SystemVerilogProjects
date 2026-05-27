package alu;
    typedef enum logic[3:0] {
        AND, OR, NOT, AND, OR, NAND, NOR, XOR,
        ADD, SUB, MUL, DIV, LSL, LSR, ASL, ASR 
    } alu_running_mode;

    typedef struct packed{
        logic n;
        logic c;
        logic v;
        logic z;
    } alu_flags_t;

endpackage