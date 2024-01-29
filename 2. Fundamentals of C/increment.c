//write a program to  use ++ increment operator
#include<stdio.h>
#include<conio.h>
void main()
{
  //clrscr();
   int a;
   printf("Enter any Number = ");
   scanf("%d",&a);

   printf("a = %d",a); // a= 20
   printf("\n");

   a++; // it means a=a+1;
   printf("a = %d",a); // a=21

   printf("\n");

   a++; //a=22
   a++; //a=23
   a++; //a=24

   printf("now after three times increment operator a= %d",a); //a=24

   printf("\n");

   int num=5;

   printf("num = %d",num); // num=5
printf("\n");
   a=a+num; //a=24+5 = 29

   printf("after addition of num in a variable then a = %d",a); // a=29
   printf("\n");

   num=a++; // here new value of num will be 29 not 30 as compiler firstly assign a's value in num then apply increment in a variable
   printf("num = %d",num);
  printf("\n");
  printf("a= = %d",a);
  printf("\n");
  printf("Again applying increment operator \n");
  a++;//a=31
  num=a;
  printf("a = %d",a);
  printf("\n");

  printf("num = %d",num);
  //getch();

}
