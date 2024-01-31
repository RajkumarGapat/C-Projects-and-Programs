//write a program to display counting from user's given numbers
#include<stdio.h>
void main()
{
   int st,en;
  printf("Enter Starting number of Counting = ");
  scanf("%d",&st);
  printf("Enter Ending number of Counting = ");
  scanf("%d",&en);

  while(st<=en)
  {
     printf("%d\n",st);
      st++;
  }

}