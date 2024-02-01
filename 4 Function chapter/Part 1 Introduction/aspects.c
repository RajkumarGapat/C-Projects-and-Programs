#include<stdio.h>
void add(); //Aspect No 1----------function declaration
//Let's initilize or define function
void add()
{
    int n1=200,n2=300;
    int sum=n1+n2;
    printf("Sum = %d",sum);
}

//Aspect No 2----------In above lines from 4 to 9 is called definition of function add
void main()
{
    // like a variable declaration we will also declare function e.g
    int a; //declaration
    a=10; //initilization
    printf("a = %d",a); //calling of a 
    add(); //Aspect No 3----------function calling

}