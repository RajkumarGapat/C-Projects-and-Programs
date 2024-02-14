#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
   char ch;
   FILE *fptr;
   char fileName[50];
  
   fptr = fopen("C:\\myFile.txt","r");

   if (fptr == NULL)
   {
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   printf("\n Content of File is below :- \n");
   
   while( (ch=fgetc(fptr)) != EOF) //here EOF means end of file
   {
        printf("%c",ch);

   }

  
   fclose(fptr); 
  
 
}
