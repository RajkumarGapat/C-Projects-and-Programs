#include <stdio.h>
#include <stdlib.h>

void main()
{
   int num;
   FILE *fptr;
   fptr = fopen("C:\\myValue.txt","r");

   if (fptr == NULL)
   {
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   fscanf(fptr,"%d", &num);

   printf("Value of n=%d", num);
   fclose(fptr); 
  
 
}
