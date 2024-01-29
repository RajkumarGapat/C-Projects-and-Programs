#include<stdio.h>
void main()
{
    int num=10;
    printf("num i am variable of main function and i am global = %d \n",num);

    int a=5;
    if(a==5)
    {
       printf("\nHello \n ");
        int num=30;
        printf("\nHello \n ");

        printf("\nHello \n ");
        printf("\nHello \n ");
        printf("\nHello \n ");
        printf("num I am variable of if statement and I am local = %d \n",num);

    }
}