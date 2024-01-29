//write a program to describe scope of if variables and global variable

#include<stdio.h>
void main()
{
    int a; //global variable of main function
    int op;
    printf("Enter value of a = ");
    scanf("%d",&a); //now a has 23

    printf("Available options = \n");
    printf("Press 1. Find Even or Odd \n");
    printf("Press 2. Find area of Rectangle \n");

    printf("Enter your choice = ");
    scanf("%d",&op); //op has 1

    if(op==1)
    {

        printf("a = %d \n",a); // here a is global variable  print kar dia a=23
         int a;   //here a is local variable of if
         printf("a = %d \n",a); // here a is if variable a=0
         printf("Enter your number to find even or odd = ");
         scanf("%d",&a);
          printf("a = %d \n",a);
    }
    else if(op==2)
    {
        printf("a = %d\n ",a);
           
    }
    else{
        printf("Invalid Option");
    }
}
