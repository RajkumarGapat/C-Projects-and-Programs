#include<stdio.h>
void swap(int *a,int *b) //int *a=&n1; int *b=&n2;
{

    printf("*a means %d\n",*a);
    printf("*b means %d\n",*b);
   int c=*a; //take backup of value of n1 by giving *a ,here a is pointer variable means int c=55;
    *a=*b; //storing value of n2 variable by giving *b,here b is pointer variable means *a means n1=90;
    *b=c;//now getting value of n1 from c in n2 variable by b pointer  means *b means n2=55; 
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

    swap(&n1,&n2); //Call by Reference  
     printf("\n ************** After Swapping ************** \n");
     printf("\n Value of n1 = %d\n",n1);
    printf("\n Value of n2 = %d\n",n2);
     
}