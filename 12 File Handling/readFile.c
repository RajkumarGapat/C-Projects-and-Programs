//write a program to read content from file and display the same content on output screen
#include<stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("C:\\File Handling Programs\\check.txt","r"); //if you are using r mode then make sure on that location file should be there as 
    // fopen function will not create new file with r mode

    if(fp == NULL)
    {
        perror("Error ");
    }

char ch;
//ch=fgetc(fp); //reading only single first character of file
/*
while( (ch=fgetc(fp)) != EOF)
{
   printf("\n Reading" );
}

printf("Now END");
*/


while( (ch=fgetc(fp)) != EOF)
{
   printf("%c",ch);
}

fclose(fp);
}
//fgetc is predefined function which will read single character from file by pointer variable