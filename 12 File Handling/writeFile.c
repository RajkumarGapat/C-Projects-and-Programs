#include <stdio.h>
#include <stdlib.h> //this header file is used here to call exit function
#include <string.h>
void main()
{ 
   FILE *p;   
   p = fopen("E:\\C Language Online Course\\my C Work\\Student Programs\\File Handling\\meghraj.c","w"); //it will create one notepad file name is anupma
   if(p == NULL)
   {
      printf("Error!");   
      exit(1);             
   } 
char s1[]="Hello";

fprintf(p,'#include<stdio.h> \n void main(){ \n printf("Hello"); \n } '); //write in anupma.txt file


   fclose(p); //closing file   
}
