//write a program to read content from file and display the same content on output screen
#include<stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("C:\\File Handling Programs\\info.txt","r"); 
    if(fp == NULL)
    {
        perror("Error ");
    }

char ch;
while( (ch=fgetc(fp)) != EOF)
{
   printf("%c",ch);
}
fclose(fp);
}
