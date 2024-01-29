//write a program to find sum of counting by user given numbers
#include<stdio.h>
void main()
{
    int a;
    int st,end,sum=0;
    printf("Enter starting number of counting = ");
    scanf("%d",&st);
    printf("Enter ending number of counting = ");
    scanf("%d",&end);

    a=st;
    while(a<=end)
    {
        printf("%d + %d = ",sum,a);
       sum=sum+a;
       printf("%d \n",sum);
       printf("Now Sum = %d\n",sum);
    
        a++;
    }


printf("Sum of Counting = %d\n",sum);
}