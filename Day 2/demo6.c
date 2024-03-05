// 1  algorithm
// 2  flow chart
// 3  dry run  ---> providing sample values for testing
// 4  coding  ---> symtax of prog lang
#include<stdio.h>
int main(void)
{
    {
        int x=4, y=0;
        y= ++x;  // pre increment
        // increment value of x by 1 then assign to y
        printf("\n x=%d y=%d", x, y); // x=5 y=5
    }

    {
        int x=4, y=0;
        y= x++;  // post increment
        // assign value of x to  y then increment value of x by 1
        printf("\n x=%d y=%d", x, y); // x=5 y=4
    }
    {
        int x=4, y=0;
        y= --x;  // pre decrement
        // decrement value of x by 1 then assign to y
        printf("\n x=%d y=%d", x, y); // x=3 y=3

    }
     {
        int x=4, y=0;
        y= x--;  // post decrement
        //  assign value of x to y then decrement value of x by 1 
        printf("\n x=%d y=%d", x, y); // x=3 y=4
        
    }
    {// we can not use ++ -- op with constants
        //printf("5++=%d", 5++); // lvalue req error
        //error: lvalue required as increment operand
    }
    {
        int x=5, y=4; // we can not use ++ -- oeprators with expression
      //  printf("++(x+y)=%d", ++(x+y)); // lvalue req error
        //error: lvalue required as increment operand
    }
    return 0;
}