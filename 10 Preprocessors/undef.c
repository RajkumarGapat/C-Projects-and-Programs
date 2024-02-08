#include <stdio.h>

#define YEARS_OLD 49 //creating macros

#undef YEARS_OLD //finishing macros

void main()
{
   #ifdef YEARS_OLD //checking macros
   printf("C Language is over %d years old.\n", YEARS_OLD); //printing macros
   #endif


   printf("C Language is a great resource.\n");

  
}
