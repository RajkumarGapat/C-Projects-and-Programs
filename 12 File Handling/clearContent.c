#include<stdio.h>
void main()
{
    FILE *p;
    p=fopen("C:\\sum.txt","w"); //simply pass w mode in fopen function to clear all existing content
    fclose(p); //ending of p here 
}
