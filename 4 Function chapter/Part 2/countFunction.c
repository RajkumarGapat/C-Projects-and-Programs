//Show concept of Parameters in functions
#include<stdio.h>

void showParameter(int a,int b,int n) //here a and b are paramenters 
{
    printf("Calling Number %d. ********** a= %d ---- b= %d\n\n",n,a,b);
}
void main()
{
    showParameter(10,20,1);
    //showParameter(10); //this is wrong function calling as there is need of two values for two parameters
    showParameter(89,67,2);
    showParameter(8943,6237,3);
    int x,y; //local variables of main
    printf("Enter two numbers = ");
    scanf("%d%d",&x,&y);
    showParameter(x,y,4);
    showParameter(x,80,5);
    showParameter(77,y,6);
    printf("********** x= %d ---- y = %d\n\n",x,y);
    x=35;
    y=99;
    showParameter(x,y,7);
    int a,b; // local variable of main
    printf("Enter two numbers = ");
    scanf("%d%d",&a,&b);
    showParameter(a,b,8);

}
