//Without Function - Basic Coding - write a program to find average of given numbers
#include<stdio.h>
//below is non parametrised function
void findAverage()
{
    int a,b,c,d,e;
    float avg;
    printf("\nEnter your five numbers ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    avg=(a+b+c+d+e)/5;
    printf("\nAverage of Numbers = %f",avg);    
}
void main()
{
    findAverage();
    findAverage();
    findAverage();
    findAverage();
    findAverage();    
}
