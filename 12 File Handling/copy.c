//write a program to read content from file and display the same content on output screen
#include<stdio.h>
void main()
{
    FILE *source;
    FILE *target; 
    source=fopen("C:\\File Handling Programs\\info.txt","r");  // file 1
    target=fopen("C:\\File Handling Programs\\infoNew.txt","a");  // file 2
    if(source == NULL)
    {
        perror("Error ");
    }

char ch;
while( (ch=fgetc(source)) != EOF)
{
   printf("%c",ch); //giving ouput on screen
   fprintf(target,"%c",ch); //writing in another file with ofp pointer

}
fclose(source);
fclose(target);
}
