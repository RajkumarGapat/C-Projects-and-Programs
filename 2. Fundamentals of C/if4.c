//write a program to find given number is even 
#include<stdio.h>
void main()
{
    int num,rem;
    printf("Enter Your Number = ");
    scanf("%d",&num);

    rem=num%2; //8%2=0
    printf("\n Remainder is = %d",rem);

    if(rem==0)
    {
        printf("\n %d is Even Number",num);
    }
    
}