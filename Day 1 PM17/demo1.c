#include<stdio.h>
int main(void)
{
    //printf("welcome to sunbeam");;;; allowed
    printf("welcome to sunbeam");
    printf("\nwelcome to sunbeam");
    printf("\nwelcome \t to \t sunbeam\bM");
    //printf(" "sunbeam" "); // error
    printf("\n\"sunbeam\" "); // allowed
    printf("\n\'sunbeam\' ");
    printf("\n'sunbeam'"); // allowed

    return 0;
}

// int  basicsal;
// int  basic_sal;
// int  _basic_sal; // allowed
// int  1basic_sal;  not allowed
// int  basic sal;  // not allowed

//  11 , 100 ,11.2 double  , 11.2f , 11.2F
// 'A' ,'Z' 
//"Sunbeam" , "pune"
