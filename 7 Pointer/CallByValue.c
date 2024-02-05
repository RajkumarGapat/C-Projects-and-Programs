#include<stdio.h>
void swap(int a,int b) //int a=n1; int b=n2;
{
   int c=a; //take backup of a value in c variable
    a=b; //storing value of b variable in a variable
    b=c;//now getting value of a from c in b variable

    printf("\n ************** After Swapping ************** \n");
     printf("\n Value of n1 = %d\n",a);
    printf("\n Value of n2 = %d\n",b);
}
void main()
{
    int n1,n2;
    printf("Enter Your first  Number = ");
    scanf("%d",&n1);
     printf("Enter Your first  Number = ");
    scanf("%d",&n2);

    printf("\n ************** Before Swapping ************** \n");
    printf("\n Value of n1 = %d\n",n1);
    printf("\n Value of n2 = %d\n",n2);

    swap(n1,n2); //Call by Value   
    
     
}