#include<stdio.h>
void main()
{
    int n1,n2;
    int res;
    //int sum,sub,mult,div;
    //float n1,int n2;
    char ch;
    
    printf("\n\n Welcome to Calci World \n\n");
    printf("Enter Your Numbers = ");
    scanf("%d %d",&n1,&n2);

    printf("Avaiable Choices :- \n");
    printf("Press + for Addition \n");
    printf("Press - for Subtraction \n");
    printf("Press * for Multiplication \n");
    printf("Press / for Division \n");

printf("Enter your choice  = ");
scanf(" %c",&ch);

if(ch=='+')
{
     // printf("\n First if is executing \n");
   res=n1+n2;
   printf("Sum of %d and %d = %d \n",n1,n2,res);   
}
else if(ch=='-')
{
     //printf("\n Second else if is executing \n");
     res=n1-n2;
     printf("Subtraction of %d and %d = %d \n",n1,n2,res);

}
else if(ch=='*')
{

   res=n1*n2;
   printf("Multiplication of %d and %d = %d \n",n1,n2,res);
}
else if(ch=='/')
{

   res=n1/n2;
   printf("Division of %d and %d = %d \n",n1,n2,res);
}
else
{
  printf("Sorry Invalid Choice !!");
}



}