#include<stdio.h>
#include<conio.h>
#include"myHeader.h"
void main()
{
   clrscr();
   int result=add(10,20);
   printf("Sum of 10 and 20 = %d\n",result);
   checkLeap(1999);
   input();
   rect();

   getch();
}