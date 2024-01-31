#include<stdio.h>
void main()
{
    char sta;
    do
    {  
          //code starts from here
int a,b,res,ch;
     printf("\n\n \t\t ***** \t Welcome to My Calculator\t ***** \n");

     printf("\n Enter Two numbers :-");
     scanf("%d %d",&a,&b);

     printf("\n Available Choices :- \n");
     printf("Press 1 for + \n ");
     printf("Press 2 for - \n Press 3 for * \n Press 4 for / \n ");

     printf("\nEnter Your Choice :-");
     scanf("%d",&ch);

     if(ch==1)
     {
         res=a+b;
         printf("Sum = %d\n",res);

     }
     else if(ch==2)
     {
        res=a-b;
         printf("Subtraction = %d\n",res);
     }
     else if(ch==3)
     {
         res=a*b;
         printf("Multiplication of %d and %d  = %d\n",a,b,res);

     }
     else if(ch==4)
     {
         res=a/b;
        printf("Division of %d and %d  = %d\n",a,b,res);      
         
        
     }
     else{
         printf("Invalid Choice !!");
     }


          //code ends here

          //below code will work like increment
          printf("Do you want to continue ? Press y for Yes = ");
          scanf(" %c",&sta);

    }while(sta=='y' || sta=='Y');
    
}