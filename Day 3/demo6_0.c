/* loop
1. while


init; //1
while(condition) //2
{
    statement1;
    statement2;
    statement3; //3
    incre/decre;//4
}//5
//6

1 2 if condition is true 3 4 5
  2 if condition is true 3 4 5
  2 if condition is true 3 4 5
  2 if condition is false 6


diplay 1st n nunbers
5--->  1  2   3  4   5

10---> 1  2  3  4  5            10
100---> 1 2                       100

1. start
2. accept no
3. assign  counter=0
4. check counter<no
        if yes
            increment counter by 1
            print counter
        goto step 4(repeat step 4)    
5. if no
5. stop


dry run
no counter      1   2   3   4   5
5     0+1=1
      1+1=2
      2+1=3
      3+1=4
      4+1=5

      while(1)  or while(100)  non zero // while(true)  
      {
          // infinite loop
      }
      while(0)  // while(false)  
      {
          // dont go with in loop
      }

      while()   // error while(1) or while(1) or while(condition)
      {
          
      }

       if we dont know how many times we have to go in loop
       we can use while loop

       while(conidtion); // genrelly infinite loop
       {                  // but depends on condition
           statement1;
           increment/ decrement
       }
*/
#include<stdio.h>
int main(void)
{
    int no, counter;
    printf("\n Enter no ::");
    scanf("%d", &no);
    counter=0; //init
    while(counter<no)  // // condition  to remain of loop
    {
        counter++;// counter=counter+1;
        printf("%5d", counter);
        if(counter%10==0)
            printf("\n");
    }
    return 0;
}






