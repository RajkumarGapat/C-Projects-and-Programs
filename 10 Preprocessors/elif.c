#include <stdio.h>

#define YEARS_OLD 10

void  main()
{
    #if YEARS_OLD <= 10
    printf("C Language is a great resource.\n");

    #elif YEARS_OLD > 10
   printf("C Language is over %d years old.\n", YEARS_OLD);

   #endif
   
}
