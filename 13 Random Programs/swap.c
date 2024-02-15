//write a program to swap of two numbers and values are given by user
#include<stdio.h>
void main()
{
    int n1,n2;
    int bk;
    printf("Enter Two Numbers = ");
    scanf("%d %d",&n1,&n2);

    printf("Before Swapping numbers are below:- \n");
    printf("n1 = %d \n",n1);
    printf("n2 = %d \n",n2);
    printf("Swapping is Processing ---------------- \n");
    printf("| \n | \n | \n ");
    bk=n1; //now bk has value of n1
    n1=n2; //now n1 has value of n2
    n2=bk; // now n2 has value of n1 so swaping done

    printf("Swapping done Now !! \n");
    printf("After Swapping numbers are below:- \n");
    printf("n1 = %d \n",n1);
    printf("n2 = %d \n",n2);
}