//write a program to display table of a number by for loop
#include<stdio.h>
void main()
{
    int num,mult;
    printf("Enter Your number = ");
    scanf("%d",&num);
    for(int i=1;i<=10;i++)
    {
        mult=num*i;
        printf("%d * %d = %d \n",num,i,mult);

    }
}
