//Show concept of Parameters in functions
#include<stdio.h>

void showParameter(int a,int b,int n) //here a and b are paramenters 
{
    printf("Calling Number %d. ********** a= %d ---- b= %d\n\n",n,a,b);
}
void main()
{
    int x,y,num;
    printf("How many times you want to call your function = ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
       printf("Enter Two Numbers = ");
       scanf("%d%d",&x,&y);
       showParameter(x,y,i);
    }

}
