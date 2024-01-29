//write a program to add two numbers but if password is correct

#include<stdio.h>
void main()
{
    int psw;
    printf("Welcome User ,Enter Your Password :- ");
    scanf("%d",&psw);

    if(psw==1234)
    {
        //let's find addition of two numbers 
        int a,b,sum;

        printf("Enter your first number = ");
        scanf("%d",&a);

        printf("Enter your second number = ");
        scanf("%d",&b);

       sum=a+b;
       printf("\n Sum of %d and %d = %d",a,b,sum);

    }
    else
    {
        printf("Sorry !! Password Incorrect !!");
    }
}
