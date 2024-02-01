//write a program to create calculator in functions 
#include<stdio.h>
int a,b,c;
void input()
{
   printf("Enter two Numbers = ");
   scanf("%d%d",&a,&b);
}
void output()
{
    printf("Number1 = %d\n",a);
    printf("Number2 = %d\n",b);
}
void add()
{
   c=a+b;
   printf("Sum = %d\n",c);
}
void sub()
{
    c=a-b;
    printf("Subtraction = %d\n",c);
}
void mult()
{
    c=a*b;
    printf("Multiplication = %d\n",c);
}
void div()
{
    c=a/b;
    printf("Division = %d\n",c);
}


void options()
{
    printf("Press 1 for +\n");
    printf("Press 2 for -\n");
    printf("Press 3 for *\n");
    printf("Press 4 for /\n");
    printf("Press 5 for Prakash\n");
}
void main()
{
    int op;
printf("\n\n************ Welcome to Calculator World ****************\n");
input();
output();
options();
printf("\n Enter your option:- ");
scanf("%d",&op);
output();
switch(op)
{
     case 1:
     add();
     break;

     case 2:
     sub();
     break;

     case 3:
     mult();
     break;

     case 4:
     div();
     break;

    default:
     printf("Invalid Option !!");

}

}