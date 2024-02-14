#include <stdio.h>
#include <stdlib.h> //this header file is used here to call exit function

void main()
{ 
   FILE *p;   
   p = fopen("E:\\C Language Online Course\\my C Work\\Student Programs\\File Handling\\anupma.txt","w"); //it will create one notepad file name is anupma
   if(p == NULL)
   {
      printf("Error!");   
      exit(1);             
   } 

int num=10;
printf("Value of num variable = %d",num); //Writing in output console screen
fprintf(p,"Value of num variable = %d",num); //write in anupma.txt file


   fclose(p); //closing file   
}
