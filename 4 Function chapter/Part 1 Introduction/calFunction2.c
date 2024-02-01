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
int mult()
{
    c=a*b;
    //printf(" %d\n",c);
return c;
}
void div()
{
    c=a/b;
    printf("Division = %d\n",c);
}
void prakash()

{

  int a,b,sum,sub,mult,rem;
  
  float div;
  printf("  Enter your first number and second number = ");
  scanf("%d %d",&a,&b);
  sum=a+b;
  printf(" \n   Sum of %d and %d = %d",a,b,sum);
  printf("   \n   Size of sum variable is %d Bytes",sizeof (sum));
  sub=a-b;
  printf(" \n   Subtraction of %d and %d = %d",a,b,sub);
   printf("   \n   Size of sub variable is %d Bytes",sizeof(sub));
   mult=a*b;
   printf("  \n Multiplication of %d and %d = %d",a,b,mult);
    printf("   \n   Size of mult variable is %d Bytes",sizeof(mult));
   div=a/b;
   printf(" \n  Division of %d and %d = %f",a,b,div);
    printf("   \n   Size of div variable is %d Bytes",sizeof(div));
   rem = a%b;
   printf("  \n Reminder of %d and %d = %d",a,b,rem);
    printf("   \n   Size of rem variable is %d Bytes",sizeof(rem));

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
     printf("Multiplication = %d",mult());
     break;

     case 4:
     div();
     break;

     case 5:
     prakash();
     break;

     default:
     printf("Invalid Option !!");

}

printf("\n");
printf("Let's find area of rectangle = ");
input();
output();
printf("Area of Recatngle = %d",mult());

}