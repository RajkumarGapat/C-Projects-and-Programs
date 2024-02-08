//In below program #if anf #else will work like if-else but will apply on #define macros
#include <stdio.h>

#define YEARS_OLD 876

void  main()
{
    #if YEARS_OLD <= 49
    printf("C Language is over %d years old.\n", YEARS_OLD);
    

    #else
    printf("C Language is a great resource.\n");   

   #endif
   
}
