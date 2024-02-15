//write a program to swap of two numbers and values are given by user without using third variable
#include<stdio.h>
void main()
{
    int n1,n2;    
    printf("Enter Two Numbers = ");
    scanf("%d %d",&n1,&n2);

    printf("Before Swapping numbers are below:- \n");
    printf("n1 = %d \n",n1);
    printf("n2 = %d \n",n2);
    printf("Swapping is Processing ---------------- \n");
    printf("| \n | \n | \n ");
   n1=n2+n1; // 23+56 means 79
   n2=n1-n2;  // 23
   n1=n1-n2; // 56  

    printf("Swapping done Now !! \n");
    printf("After Swapping numbers are below:- \n");
    printf("n1 = %d \n",n1);
    printf("n2 = %d \n",n2);
}