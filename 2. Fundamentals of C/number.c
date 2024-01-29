//write a program to find number is negative or positive
#include<stdio.h>
void main()
{
    int num;
    printf("\n\n****************************************\n");
printf("Please give me your number = ");
scanf("%d",&num);
 
 if(num<0)
 {
     printf("\nYes your number which is %d is negative number ",num);
 }
 else
 {
      printf("\nYes your number which is %d is positive number ",num);
 }

    printf("\n\n****************************************\n");

}