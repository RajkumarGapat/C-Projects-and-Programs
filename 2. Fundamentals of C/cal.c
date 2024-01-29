//write a program to create a calculator using airthmetic operators

#include<stdio.h>
void main()
{
    int a,b,op,res;
    printf("\n \t ****** \t Welcome to My Calculator World \t ****** \n");

    printf("Enter first number  = ");
    scanf("%d",&a);

    printf("Enter second number  = ");
    scanf("%d",&b);
 
   printf("Avaialbe Options for Calculator :- \n");
   printf("Press 1 for + \n");
   printf("Press 2 for - \n");
   printf("Press 3 for * \n");
   printf("Press 4 for / \n");
   printf("Press 5 for Remainder  \n");
   printf("Enter Your option = ");
   scanf("%d",&op);

   if(op==1)
   {
      res=a+b;
      printf("\n Your addition = %d \n ",res);
   }
    else if(op==5)
   {
       res=a%b;
       printf("\n Your remainder = %d \n ",res);
   }
   else if(op==2)
   {
       res=a-b;
       printf("\n Your subtracion = %d \n ",res);
   }
   else if(op==4)
   {
       res=a/b;
       printf("\n Your division = %d \n ",res);
   }
    else if(op==3)
   {
       res=a*b;
       printf("\n Your multiplication = %d \n ",res);
   }
   
   else{
       printf("\n Sorry Invalid option !!");
   }


}


