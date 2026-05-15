
module StructTest;
//structures similar to C, stores collection of data types
initial begin
    typedef struct {
        int     cpus;
        int     gpus;
        real    money;
    } comp_inventory;

    comp_inventory store0;
            // the ' tells compiler "infer width and type from context"
    store0 = '{25, 13, 5321.98};                //positional assignment
    $display("cpus:%d  gpus:%d  money:%.2f", store0.cpus, store0.gpus, store0.money);
    store0 = '{cpus:14, money:12.32, gpus:4};   //direct assignment
    $display("cpus:%d  gpus:%d  money:%.2f", store0.cpus, store0.gpus, store0.money);
    store0 = '{default:1};                      //assigns all to 1
    $display("cpus:%d  gpus:%d  money:%.2f", store0.cpus, store0.gpus, store0.money);
    store0 = comp_inventory'{int:10, money:543.21};         //assign all ints to 10 (casting to type)
    $display("cpus:%d  gpus:%d  money:%.2f", store0.cpus, store0.gpus, store0.money);    

//the following is typically valid according to the manual but fails in verilator 
//(any fixes? might not be important)

/*****
    struct {
        int cow, pig, sheep, horse; 
    } barn = '{7,7,7,7};                           //initialize "7" 4x

    $display("cows:%d  pigs:%d  sheep:%d  horses:%d", 
             barn.cow, barn.pig, barn.sheep, barn.horse);
*****/

end

endmodule