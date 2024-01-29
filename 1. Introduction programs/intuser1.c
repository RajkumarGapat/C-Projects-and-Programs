//Write a program to take two numbers from user and display their sum

#include<stdio.h>
#include<conio.h>
void main()
{
    //clrscr();
    int a;
    int b;
    int sum;

   //Let's take first number from user
    printf("\n Give me your First Number = ");
    scanf("%d",&a);

    //Let's take second number from user
    printf("\n Give me your Second Number = ");
    scanf("%d",&b);

    sum=a+b; //adding value of a and b then storing in sum variable

    printf("\n Sum = %d",sum);
    printf("\n Addition is %d",sum);

    //How to use three variables in printf function
    printf("\n Sum of %d and %d = %d",a,b,sum);

    //getch();
}