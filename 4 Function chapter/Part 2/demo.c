#include<stdio.h>
//in below send1 is not return type function
void send1()
{
    int a=10;
    printf("\n I am in send 1 a= %d\n\n",a);
}
//below send2 is return type function who is returning value of a in function calling
int send2()
{
    int a=10;   
    return a;
}
//

int send3()
{
    int a=10,b=25; 
    return b;
}

void main()
{
    send1(); //calling a non returntype function here
    //int b=25;
    
   int b=send2(); //calling a returntype function here // int b=a; means b=10;
   printf("By calling send2 function,now value of b = %d\n",b);
   b=send3();  //int b=b; means b=25;
   printf("By calling send3 function,now value of b = %d\n",b);

   
}