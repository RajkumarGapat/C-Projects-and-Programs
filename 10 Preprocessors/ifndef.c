#include <stdio.h>
#define YEARS_OLD 49
#ifndef YEARS_OLD
#define YEARS_OLD 50
#endif

int main()
{
   printf("C Language is over %d years old.\n", YEARS_OLD);

   return 0;
}
