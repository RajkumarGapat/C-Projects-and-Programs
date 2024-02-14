#include<stdio.h>
#include<string.h>
void main()
{
    char s1[]="manu";
    char s2[]=".txt";
    char s3[50];


    strcpy(s3,"C:\\ ");
    puts(s3); //Hello
    strcat(s3,s1); // C:\\manu
    puts(s3);

    strcat(s3,s2); 
    puts(s3); // C://manu.txt
}