#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
   int status;
   
   status=remove("C:\\myValue.txt");
  
   if(status == 0)
   {
        printf("\n File Deleted Successfully !!\n");

   }
   else
   {
        printf("\n Unable to delete File !!\n");
        perror("Following error occured ");
   }   
 
}
