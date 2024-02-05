//write a example to describe concept of increment or decrement in pointer by saving user's input in diffrent memory cells
#include<stdio.h>
void main()
{
    int Engine;
    int *p; //pointer variable
    p=&Engine;
    printf("Enter Your Value = ");
    scanf("%d",p); //here p having address of a variable

    printf("\n******************************************************\n ");
     printf("Value of Engine = %d\n",*p);
     printf("Addreess of Engine = %d\n",p);
    printf("\n******************************************************\n ");


      p=p+3;
     printf("Enter Your Value = ");
    scanf("%d",p); //here p having address of a variable

    printf("\n******************************************************\n ");
     printf("Value of i = %d\n",*p);
     printf("Addreess of i = %d\n",p);
    printf("\n******************************************************\n ");

     p=p+2;
     printf("Enter Your Value = ");
    scanf("%d",p); //here p having address of a variable

    printf("\n******************************************************\n ");
     printf("Value of j = %d\n",*p);
     printf("Addreess of j = %d\n",p);
    printf("\n******************************************************\n ");

     p=p+1;
     printf("Enter Your Value = ");
    scanf("%d",p); //here p having address of a variable

    printf("\n******************************************************\n ");
     printf("Value of d = %d\n",*p);
     printf("Addreess of d = %d\n",p);
    printf("\n******************************************************\n ");

 p=p-9;
     printf("Enter Your Value = ");
    scanf("%d",p); //here p having address of a variable

    printf("\n******************************************************\n ");
     printf("Value of f = %d\n",*p);
     printf("Addreess of f = %d\n",p);
    printf("\n******************************************************\n ");

p=p+5;
     printf("Enter Your Value = ");
    scanf("%d",p); //here p having address of a variable

    printf("\n******************************************************\n ");
     printf("Value of g = %d\n",*p);
     printf("Addreess of g = %d\n",p);
    printf("\n******************************************************\n ");

    p=p+3;
     printf("Enter Your Value = ");
    scanf("%d",p); //here p having address of a variable

    printf("\n******************************************************\n ");
     printf("Value of j = %d\n",*p);
     printf("Addreess of j = %d\n",p);
    printf("\n******************************************************\n ");

    
}