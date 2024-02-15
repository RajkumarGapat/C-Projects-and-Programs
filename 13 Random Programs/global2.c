#include<stdio.h>
int a,b; //Global Variable are a and b
void input()
{
     printf("Enter Two numbers = ");
     scanf("%d %d",&a,&b);

}
void incre()
{
    a++;
    b++;
}
void decre()
{
    b--; //49
    a--; //88
}
void output()
{
    printf("a = %d \n",a);
    printf("b = %d \n",b);
}
void sum()
{
    a=a+b; //a=88+49=137
    b=9+a; //b= 9+137=146
}
void logic()
{
    a=50-2+3-10+20-1+b; 
    b=30+2+5+a-5;
}
void main()
{
    a=89,b=50; //fill values of a  and b
    output(); //89 50
    decre(); 
    input(); //again fill by user's value now a and b has new values assume a =10 b=20
    sum(); // 30 39
    output(); // a= 30 b= 39
    logic(); //
    output();

}

