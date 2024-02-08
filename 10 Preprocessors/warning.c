#include <stdio.h>

void main()
{
   
   int res;

   #warning The variable res may exceed the size of a 32 bit integer

   /* 12 years, 365 days/year, 24 hours/day, 60 minutes/hour, 60 seconds/min */
   res = 10000 * 32000;

   printf("%d\n", res);

   
}

