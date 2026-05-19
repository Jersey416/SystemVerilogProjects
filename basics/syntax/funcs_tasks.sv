module funcs_and_tasks;

    function void f_display (string txt);   //functions are combinational 
        $display(txt);
    endfunction

    task t_display (input string txt);       //tasks are sequenctial
        #10 $display(txt);                  //execute after 10 time units
    endtask

    initial begin
        f_display("Hello");
        t_display("world");
    end
endmodule

/*** OUTPUT ***

Hello
world

***/
