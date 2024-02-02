//With Parameters Function - Basic Coding - write a program to find average of given numbers
#include<stdio.h>
//below is parameterised function
void findAverage(int a,int b,int c,int d,int e)
{    
    float avg;
    
    avg=(a+b+c+d+e)/5;
    printf("\nAverage of Numbers = %f",avg);    
}
void main()
{
    int a,b,c,d,e; //local variable of main
    printf("\nEnter your five numbers ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    findAverage(a,b,c,d,e);
    findAverage(2,5,7,9,10);
    findAverage(a,b,6,2,e);

   // printf("Hello"); printf is also a parameterised function

   int x,y,z,l,m;
    printf("\nEnter your five numbers ");
    scanf("%d%d%d%d%d",&x,&y,&z,&l,&m);
    findAverage(x,y,z,l,m);

}

