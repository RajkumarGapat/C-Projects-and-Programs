#include<stdio.h>
#include<conio.h>
void main()
{
  //clrscr();
   int a=20,num=5;
    printf("\n a = %d",a);

    a--; // a= a-1; a=19
    printf("\n after one decrement a = %d",a);

    printf("\n num = %d",num);

    a=num+a;
    printf("\n after addition of num in a = %d",a); //a= 24

    num=a--; // decrement operator will effect only a not num here num will store old value of a means 24
    printf("\n after num=a-- then num = %d",num); // num=24
    printf("\n after one more decrement a = %d",a); //a =23

    a--;
    a--;
    a--;
    
    printf("\n After three decrement a= %d",a); // a=20
  //getch();

}