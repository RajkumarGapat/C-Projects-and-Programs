//write a example to describe concept of increment or decrement in pointer by saving user's input in diffrent memory cells
#include<stdio.h>
void main()
{
    int test,anupma;
    int *p; //pointer variable
    p=&test; //now pointer  pointing a variable by its address
    printf("Enter Your Value = ");
    scanf("%d",p); //here p having address of a variable

    printf("\n******************************************************\n ");
     printf("Value of anupma = %d\n",*p);
     printf("Addreess of anupma = %d\n",p);
    printf("\n******************************************************\n ");

    p=p+2;
    printf("Enter Value for Meghraj = ");
    scanf("%d",p); //here p having address of a variable

    printf("\n******************************************************\n ");
     printf("Value of Meghraj = %d\n",*p);
     printf("Addreess of Meghraj = %d\n",p);
    printf("\n******************************************************\n ");

    p=p+2;
    printf("Enter Value for Avi = ");
    scanf("%d",p); //here p having address of a variable

    printf("\n******************************************************\n ");
     printf("Value of Avi = %d\n",*p);
     printf("Addreess of Avi = %d\n",p);
    printf("\n******************************************************\n ");

    p=p-1;
    printf("Enter Value for Prakash = ");
    scanf("%d",p); //here p having address of a variable

    printf("\n******************************************************\n ");
     printf("Value of Prakash = %d\n",*p);
     printf("Addreess of Prakash = %d\n",p);
    printf("\n******************************************************\n ");

    p=p+2;
    printf("Enter Value for Raj = ");
    scanf("%d",p); //here p having address of a variable

    printf("\n******************************************************\n ");
     printf("Value of Raj = %d\n",*p);
     printf("Addreess of Raj = %d\n",p);
    printf("\n******************************************************\n ");

}