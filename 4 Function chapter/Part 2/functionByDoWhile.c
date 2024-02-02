//Show concept of Parameters in functions
#include<stdio.h>

void showParameter(int a,int b,int n) //here a and b are paramenters 
{
    printf("Calling Number %d. ********** a= %d ---- b= %d\n\n",n,a,b);
}
void main()
{
    int x,y,i=0;
    char status;
  
    do
    {
        i++;        
       printf("Enter Two Numbers = ");
       scanf("%d%d",&x,&y);
       showParameter(x,y,i);
       printf("Do You want to Continue Press y for Yes  ");
       scanf(" %c",&status);
       
    }while(status=='y');

}
