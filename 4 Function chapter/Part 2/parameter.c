//Show concept of Parameters in functions
#include<stdio.h>
/*
void yourFunctionName(datatype variable,datatype variable)
{

}
*/
void showParameter(int a,int b) //here a and b are paramenters 
{
    printf("a= %d\n b= %d\n\n",a,b);
}
void main()
{
    showParameter(10,20);
    //showParameter(10); //this is wrong function calling as there is need of two values for two parameters
    showParameter(89,67);
    showParameter(8943,6237);
    int x,y; //local variables of main
    printf("Enter two numbers = ");
    scanf("%d%d",&x,&y);
    showParameter(x,y);
    showParameter(x,80);
    showParameter(77,y);
    printf("x= %d \n y = %d",x,y);
    x=35;
    y=99;
    showParameter(x,y);
    int a,b; // local variable of main
    printf("Enter two numbers = ");
    scanf("%d%d",&a,&b);
    showParameter(a,b);

}
//In above Programming Processing:-
/*
 1. showParameter(10,20); -> in run time int a=10; int b=20;
 2. showParameter(89,67); -> in run time int a=89; int b=67;
 3.
 4. showParameter(89,67); -> in run time int a=x; int b=y;

*/