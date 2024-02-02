//Describe Types of Parameters
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
   int x,y,z,l,m;
    printf("\nEnter your five numbers ");
    scanf("%d%d%d%d%d",&x,&y,&z,&l,&m);
    findAverage(x,y,z,l,m);

}
/*
There are two types of Parameters
1. Formal Parameters - these parameters are used in Function Calling
e.g In above Program in main function x,y,z,l, are formal paramters 
2. Actual Parameters - these are used in function definition
e.g In above Program a,b,c,d,e are actual Parameters which will be initilize by formal parameters in run time, and these actual parameters are 
acutually value holder and they will work in findAverage function
*/