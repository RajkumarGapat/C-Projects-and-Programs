//write a program to display table of number 2
#include<stdio.h>
void main()
{
    int number,res;

     number=5;
     int i=1;
     while(i<11)
     {
      // number*i=res;
      res=number*i;
      printf("\n %d * %d = %d \n",number,i,res);
       i++;
     }
}    