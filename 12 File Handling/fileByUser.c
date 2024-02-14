#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
   int num;
   FILE *fptr;
   char fileName[50];
   printf("Enter name of a file you wish to create = ");
   gets(fileName);
   char filePath[100];
   strcpy(filePath,"C:\\"); //   
   strcat(filePath,fileName); // C:\\manu
   strcat(filePath,".txt"); // C:\\manu.txt
   puts(filePath);
   fptr = fopen(filePath,"w");

   if (fptr == NULL)
   {
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   fprintf(fptr,"Hello I am here Your filename = %s",fileName);
   fclose(fptr); 
  
 
}
