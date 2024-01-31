//write a program to display welcome message multiple times
#include<stdio.h>
void main()
{
        char name[20];
    char fac[20];
    printf("Enter Student Name = ");
    scanf(" %s",&name);
    printf("Enter Faculty Name = ");
    scanf(" %s",&fac);
    int i=7;
    while(i<11)
    {
       printf("\n %d.  Hello  %s,Welcome in My Lecture by %s \n",i,name,fac);
       
       i++;
    }

    printf("\n End of Loop ****************************************");
}