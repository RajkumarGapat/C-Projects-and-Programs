//write a program to show need of function declaration
#include<stdio.h>
int l,b;
//syntax of function declaration returntype functionname();
void area();
void main()
{
    area(); //function calling
}
//below is function definition
void area()
{
    printf("\nEnter length of rectangle = ");
    scanf("%d",&l);
    printf("\nEnter breadth of rectangle = ");
    scanf("%d",&b);
    int ar=l*b;
    printf("\nArea of Rectangle = %d",ar);
}