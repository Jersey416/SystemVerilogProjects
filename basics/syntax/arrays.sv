module arrs;

    //fixed array can be explicitely indexed or auto indexed
    //can be multi-dimensional
    int iarr0[1:4];         //4 elements {1: i_0, 2: i_1, ..., 4: i_3}
    int iarr1[5:0];         //6 elements stored 5 downto 0 {5: i_0, 4: i_1, ..., 0: i_5}
    int iarr2[7];           //7 elements stored 0 upto 6 (like C-array)
    int imtx[2][1:4];    //2*4 = 8 total elements

    initial begin

        iarr0 = '{1,2,3,4};
        iarr1[4] = 32'habab_f1f1;
        iarr2 = '{7{16}};
        imtx = '{default:'{default:0}};
        imtx[1] = '{1,2,3,4};

        foreach (iarr0[i])
            $display("iarr0[%0d] = 0x0%0h", i, iarr0[i]);
        $display("");

        foreach (iarr1[i])
            $display("iarr1[%0d] = 0x0%0h", i, iarr1[i]);
        $display("");

        foreach (iarr2[n])
            $display("iarr2[%0d] = 0x0%0d", n, iarr2[n]);
        $display("");

        foreach (imtx[i]) begin
            $display("imtx[%0d] = %0h", i, imtx[i]);
            foreach (imtx[i][j])
                $display("imtx[%0d][%0d] = 0x0%0h", i, j, imtx[i][j]);
        end

    end

endmodule
/*** OUTPUT ***

iarr0[1] = 0x01
iarr0[2] = 0x02
iarr0[3] = 0x03
iarr0[4] = 0x04

iarr1[5] = 0x00
iarr1[4] = 0x0ababf1f1
iarr1[3] = 0x00
iarr1[2] = 0x00
iarr1[1] = 0x00
iarr1[0] = 0x00

iarr2[0] = 0x016
iarr2[1] = 0x016
iarr2[2] = 0x016
iarr2[3] = 0x016
iarr2[4] = 0x016
iarr2[5] = 0x016
iarr2[6] = 0x016

imtx[0] = '{'h0, 'h0, 'h0, 'h0}
imtx[0][1] = 0x00
imtx[0][2] = 0x00
imtx[0][3] = 0x00
imtx[0][4] = 0x00
imtx[1] = '{'h1, 'h2, 'h3, 'h4}
imtx[1][1] = 0x01
imtx[1][2] = 0x02
imtx[1][3] = 0x03
imtx[1][4] = 0x04

***/