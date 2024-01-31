#include<stdio.h>
void main()
{
int n, s, i, j;
printf("Enter number of rows: ");
scanf("%d",&n);

 for(i = 1; i <= n; i++)
 {
    //for loop for displaying space
    for(s = i; s < n; s++)
    {
      printf("  ");
    }
     //for loop to display star equal to row number
    for(j = 1; j <= (2 * i - 1); j++)
   {
        printf("*");
   }
      // ending line after each row
      printf("\n");
 }
}
/*
s=1; 1<5; 1++ means 
when i =1 then (2*i)-1 means 1
when i=2 then (2 * 2)-1 means 3
when i=3 then (2*3)-1 means 5
when i=4 then (2*4)-1 means 7
*/
