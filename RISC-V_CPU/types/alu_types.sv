
package alu_types;
    typedef enum logic[3:0] {
        NOT, AND, OR,  XOR,
        ADD, SUB, MUL, DIV, 
        LSL, LSR, ASL, ASR 
    } alu_running_mode_t;

    typedef struct packed{
        logic n;
        logic c;
        logic v;
        logic z;
    } alu_flags_t;

endpackage
