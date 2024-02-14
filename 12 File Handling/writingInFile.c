#include<stdio.h>
void main()
{
    FILE *p;
    p=fopen("C:\\sum.txt","w");
    fprintf(p,"Hello I am content");
    int a=10,b=20;
    int c=a+b;
    fprintf(p,"\nSum of %d and %d = %d\n",a,b,c);

    fclose(p);
}