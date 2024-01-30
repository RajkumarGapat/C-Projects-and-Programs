//write a program to ddisplay even or odd numbers
#include<stdio.h>
void main()
{
    int num,rem;
    printf("Enter Your number to find list of even or odd = ");
    scanf("%d",&num); //here num will be limit of our loop
    for(int i=1;i<=num;i++)
    {
        rem=i%2;
        if(rem==0)
        {
            printf("%d is Even Number \n",i);
        }
        else
        {
            printf("%d is Odd Number \n",i);
        }
        

    }
}
