/*
    2. for
    
     //1   //2         //5
for(init;condition;incre/decre;) 
{
    statement1;
    statement2;
    statement3; //3    
}//4
//6


1 2 if condition is true 3 4 5
  2 if condition is true 3 4 5
  2 if condition is true 3 4 5
  2 if condition is false 6


  for(;;)
  {
      if (condition)
        break;
  }

  for()  // error
  {

  }


   for(init; condition; incre/decrement);
   {
       statements
   }
   // print last value

   for(counter=1;counter<=no; counter++);
    {
        printf("%5d", counter);
    }  // print counter =6


    for(counter=1;counter<=no; );
    {
        printf("%5d", counter);
    }  // infinite loop
*/

// print 1 to no using for loop
#include<stdio.h>
int main(void)
{
    int no, counter;
    printf("\n Enter no ::");
    scanf("%d", &no);

    for(counter=1;counter<=no; counter++) 
    {
        printf("%5d", counter);
    }
    // print 1 2 3 4 5 if no is 5
    return 0;
}


