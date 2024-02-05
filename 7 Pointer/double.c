//write a example to describe concept of increment or decrement in pointer by saving user's input in diffrent memory cells
#include<stdio.h>
void main()
{
    float Engine;
    float *p; //pointer variable
    p=&Engine;
    printf("Enter Your Value = ");
    scanf("%f",p); //here p having address of a variable

    printf("\n******************************************************\n ");
     printf("Value of Engine = %f\n",*p);
     printf("Addreess of Engine = %d\n",p);
    printf("\n******************************************************\n ");


      p=p+3;
     printf("Enter Your Value = ");
    scanf("%f",p); //here p having address of a variable

    printf("\n******************************************************\n ");
     printf("Value of i = %f\n",*p);
     printf("Addreess of i = %d\n",p);
    printf("\n******************************************************\n ");

     p=p+2;
     printf("Enter Your Value = ");
    scanf("%f",p); //here p having address of a variable

    printf("\n******************************************************\n ");
     printf("Value of j = %f\n",*p);
     printf("Addreess of j = %d\n",p);
    printf("\n******************************************************\n ");

     p=p+1;
     printf("Enter Your Value = ");
    scanf("%f",p); //here p having address of a variable

    printf("\n******************************************************\n ");
     printf("Value of d = %f\n",*p);
     printf("Addreess of d = %d\n",p);
    printf("\n******************************************************\n ");

 p=p-9;
     printf("Enter Your Value = ");
    scanf("%f",p); //here p having address of a variable

    printf("\n******************************************************\n ");
     printf("Value of f = %f\n",*p);
     printf("Addreess of f = %d\n",p);
    printf("\n******************************************************\n ");

    
}