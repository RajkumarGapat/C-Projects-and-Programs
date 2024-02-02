//Show concept of Parameters in functions

/*
void yourFunctionName(datatype variable,datatype variable)
{

}
*/
#include<stdio.h>
void showParameter(int a,int b) //here a and b are parameters of showParameters function
{
    printf("\n a = %d\n b= %d \n",a,b);
}
void main()
{
    //showParameter(); //wrong way of function calling as it is parametrised function

    showParameter(10,20); //here we are calling function by passing values of two parameters a and b
    showParameter(5,65);
    showParameter(0,2000);
    int x,y;
    printf("Enter two numbers = ");
    scanf("%d%d",&x,&y);
    showParameter(x,y);   

     int a,b; //local variable of main function
    printf("Enter two numbers = ");
    scanf("%d%d",&a,&b);
    showParameter(a,b); 

}

/*
Processing:-
1. compiler will do int a=10 and int b=20 in run time
2. compiler will do int a=5 and int b=65 in run time
3. compiler will do int a=0 and int b=2000 in run time
4. compiler will do int a=x and int b=y in run time


*/
