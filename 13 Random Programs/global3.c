
#include<stdio.h>
int a,b,c;
void get()
{
    printf("a = %d \n b = %d \n",a,b);
}
void add()
{
    c=a+b;
     printf("addition of %d and %d = %d \n",a,b,c);
}
void set()
{
    printf("Enter two numbers = ");
    scanf("%d %d",&a,&b);
     
}
void minus()
{
    c=a-b;
    printf("Subtraction of %d and %d = %d \n",a,b,c);
}
void logic()
{
    int res=c>=a; // 1 
    int b=res>0 ? ++a : --a;
    printf("\n b = %d",b);
}

void main()
{
    set();
    get(); // 10 20
    minus(); // c=-10
    add(); //c =30
    get(); // a=10 b=20
    logic(); //b=11

}


     