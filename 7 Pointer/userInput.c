//write a program to take user's input and save in variable but with pointer
#include<stdio.h>
void main()
{
    int num;
    int *p;
    p=&num;

    printf("Enter Your value = ");
    scanf("%d",p);

    printf("\n You have entered num = %d",*p);
    printf("\n Address of num variable = %u \n",p);
}