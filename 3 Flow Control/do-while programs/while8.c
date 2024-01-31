//write a program to find even number or odd numbers from user's given number
#include<stdio.h>
void main()
{
    int num,i,rem;
    printf("Enter Your Number = ");
    scanf("%d",&num);
    
    i=1;
    while(i<=num)
    {
        //let's find i is even or odd
        rem=i%2;
        if(rem==0)
        {
           printf("\n %d is Even Number \n",i);
        }
        else
        {
           printf("\n %d is Odd Number \n",i);
        }
        i++;
    }


}
