//Show concept of non-parameters functions
#include<stdio.h>
void showParamenters()
{
     int a,b; //local variable of showParamenters
     printf("Enter Your first number = ");
     scanf("%d",&a);
     printf("Enter Your Second Number = ");
     scanf("%d",&b);
     printf(" a = %d\n b= %d",a,b);
}
void main()
{
    showParamenters();
}