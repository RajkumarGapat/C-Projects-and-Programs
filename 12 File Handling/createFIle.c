#include <stdio.h>
#include <stdlib.h> //this header file is used here to call exit function

void main()
{ 
   FILE *p;   
   p = fopen("C:\\anupma.txt","w"); //it will create one notepad file name is anupma
   if(p == NULL)
   {
      printf("Error!");   
      exit(1);             
   }   
   fclose(p); //closing file   
}
