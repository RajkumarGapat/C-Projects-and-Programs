//write a program to ddisplay even or odd numbers and find sum of even numbers and odd numbers
#include<stdio.h>
void main()
{
    int num,rem,sumOdd=0,sumEven=0;
    printf("Enter Your number to find list of even or odd = ");
    scanf("%d",&num); //here num will be limit of our loop
    for(int i=1;i<=num;i++)
    {
        rem=i%2;
        if(rem==0)
        {
            sumEven=sumEven+i;
            printf("%d is Even Number \n",i);
        }
        else
        {
            sumOdd=sumOdd+i;
            printf("%d is Odd Number \n",i);
        }
        

    }

    printf("\n SUm of Even Numbers = %d",sumEven);
    printf("\n SUm of Odd Numbers = %d",sumOdd);

}
