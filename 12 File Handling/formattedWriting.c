#include<stdio.h>
void main()
{
    FILE *p;
    
     p=fopen("C:\\sum.txt","a"); //starting of p here
    fprintf(p,"\n ***************************************************************** \n");
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
    fprintf(p,"\n ***************************************************************** \n");

    fclose(p); //ending of p here 
}
