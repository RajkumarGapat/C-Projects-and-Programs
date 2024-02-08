#include <stdio.h>

#define WINDOWS 1

void main()
{
   printf("Latest Laptop has a great ");

   #if WINDOWS //checking Macro WINDOWS EXISTANCE
   printf("Windows "); //printing some statement
   #endif //Closing #if directive

   printf("resource.\n");

}
