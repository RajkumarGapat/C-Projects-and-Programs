//write a program to create function of leap year
#include<stdio.h>
void findLeap()
{
    int year,rem;
    printf("Enter Your year = ");
    scanf("%d",&year);
    rem=year%4;
    //printf("\nRemainder - %d",rem);
    if(rem==0)
    {
        printf("%d is Leap Year \n",year);
    }
    else
    {
          printf("%d is not a Leap Year \n",year);
    }
}

void main()
{
    findLeap();
    findLeap();
    findLeap();
    findLeap();
    findLeap();
    findLeap();
    
}