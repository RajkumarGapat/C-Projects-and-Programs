//write a program to display welcome message multiple times
#include<stdio.h>
void main()
{


    char name[20];
    printf("Enter Student Name = ");
    scanf(" %s",&name);
    int i=7;
    while(i<11)
    {
       printf("\n %d.  Hello  %s,Welcome in My Lecture by Raj \n",i,name);
       
       i++;
    }
}