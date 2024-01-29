#include<stdio.h>
void main()
{
    int a=5;
    if(a==5)
    {
        int num=10; // here num is local variable of if statement and it cannot access out of if
         printf("Hello I am num and i am here inside of if statement and i have value %d \n ",num);
    } //here finishing num variable

    printf("Hello I am num and i am here inside of main function and i have value %d \n",num); //giving error as num is not accessble here
    //in above line we cannot access num outside of if body as scope of num is if body
} //finishing a here 

