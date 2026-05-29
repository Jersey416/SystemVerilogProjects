
package rf_types;

    typedef enum logic[4:0] {
        ZERO, RA, SP, GP,
        TP, T0, T1,T2, 
        S0, S1, A0, A1,                 //S0 and FP reference the same physical register,
        A2, A3, A4, A5,                         //so both have value 8
        A6, A7, S2, S3, 
        S4, S5, S6, S7, 
        S8, S9, S10, S11, 
        T3, T4, T5, T6
    } alu_running_mode_t;

    //parameter FP = S0;

endpackage
