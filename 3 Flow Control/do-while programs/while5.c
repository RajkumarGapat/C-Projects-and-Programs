//write a program to display table of number given by user
#include<stdio.h>
void main()
{
    int number,res;

    printf("Enter your number = ");
    scanf("%d",&number);
     int i=1;
     while(i<11)
     {
      // number*i=res;
      res=number*i;
      printf("\n %d * %d = %d \n",number,i,res);
       i++;
     }
}    