//write a program to read content from file and display the same content on output screen
#include<stdio.h>
void main()
{
    FILE *fp;
    FILE *ofp; //here ofp is other file pointer
    fp=fopen("C:\\File Handling Programs\\info.txt","r");  // file 1
      ofp=fopen("C:\\File Handling Programs\\infoNew.txt","a");  // file 2
    if(fp == NULL)
    {
        perror("Error ");
    }

char ch;
while( (ch=fgetc(fp)) != EOF)
{
   printf("%c",ch); //giving ouput on screen
   fprintf(ofp,"%c",ch); //writing in another file with ofp pointer

}
fclose(fp);
fclose(ofp);
}
