//data types:

/*** integer data types: ***/

// 2-type (two-value) only 1 and 0 per bit
shortint shi;   //16b s
int i;          //32b s
longint loi;    //64b s
byte by;        //8b  s
bit bi;         //user defined vector size
bit[3:0] nib;   //4b 
// 4-type, each bit can be 1, 0, x (unknown), z (high-impedance)
logic log;      //user defined vector size
logic[15:0] bus16;  //16b
reg rg;         //user-defined
reg[1:16] flags;//16b
integer itgr;   //32b s
time t;         //64b u

/*** floating-point types ***/
real double;    //C-double 64b fp
shortreal float;//C-float  32b fp

/*** void type ***/
void vd;        //used as foo return type and tagged unions

/*** chandle type ***/
/**
 * storage for ptrs passed using DPI, platform-dependent size
 * initialized to null (0 on C-side) 
 * weird behavior that needs more context
 * TODO review later
 */
chandle chndl;  

/*** string type ***/
/**
 * string type vars are variable size & dynamically allocated
 * string literals can be assignd to string type or integral type (right-justified)
 * strings are a dynamically sized array of bytes (must be a multiple of 8 bits)
 * not only ascii characters. Essentially a dynamic integer array
 */
string s0 = "Hello world\n";   //assigned as shown
bit [11:0] hex0 = "\x2F";       //"\x" indicates hex number: 0b0000_0010_1111 assigned
bit [1:4] [7:0] = "later";      //left-justified so assignes "ater"
bit [11:0] hex1 = 12'h3a9;      //x'h is an x bit hexadecimal literal so:
string s1 = hex1;               //s2 = 0x03a9
string s2 = "";                 //has length 0, nothing assigned
string s3 = {"AI",s2};          //becomes "AI" only
string s4 = {s3, " is fun"};    //becomes "AI is fun"
string s5 = {4{s3}};            //becomes "AIAIAIAI"
//a string can use non-constant replication while integral types cannot
integer j = 5;
string replicate = {j{"bots"}}; //this is non-constant replication, OK for strings 
//but not for any fixed-size (packed) data types
// bit[63:0] rep = {j{"A"}}; ILLEGAL
reg[15:0] lefty = {"L", ""};    //though literals are right-justified, these kinds of array
//                  assignments are left-justified so "lefty" becomes "L/0" (ascii: 0x4C00)
// we can check strings for: ==, !-, <, <=, >, >=
unsigned int k = s0[0]; //k = "H" (ascii: 0x48) 
// strings also have methods e.g. some_string.some_method(...)
int length = s0.len();  //rets len of str (# of bytes not bits, excludes terminations)
s0.putc(11, 128)        //.putc takes byte or string, does not change size so here "\n" -> 128;
s0.putc(11, "string");  //here, 128 (previously "\n") becomes "s" so : s0 == "Hello worlds"
byte char = s0.getc(0); //returns charater 0 so : char == "H"
string s6 = s0.substr(0,5); //s6 == "Hello"
/**
 * straightforward string functions:
 * .toupper() & .tolower() : only affects ASCII alphebetic chars, everything else unchanged
 * .compare() & .icompare() : like C's strcmp(), icompare is case-insensitive
