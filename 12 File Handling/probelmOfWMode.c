#include<stdio.h>
void main()
{
    FILE *p;
    //p=fopen("C:\\sum.txt","w"); // Solution is do not use w in fopen function use a mode in fopen function
     p=fopen("C:\\sum.txt","a");
    fprintf(p,"Hello I am content");
    char user[30];
    printf("Hey User, Please type your good name :- ");
    scanf(" %s",&user);
    fprintf(p,"Hey %s, \n",user);
    int a,b;
    printf("Enter First Number = ");
    scanf("%d",&a);
    printf("Enter Second Number = ");
    scanf("%d",&b);
    int c=a+b;
    fprintf(p,"\nSum of %d and %d = %d\n",a,b,c);
    fclose(p);
}
//In above program every output is replacing previous output in file so use append mode for joining content in old content
