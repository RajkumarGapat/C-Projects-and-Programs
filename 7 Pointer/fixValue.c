#include<stdio.h>
void main()
{
    char anupma;
    char *p;
p=&anupma;

printf("Enter Your First letter = ");
scanf(" %c",p);

 printf("\n******************************************************\n ");
     printf("Value of anupma = %c\n",*p);
     printf("Addreess of anupma = %d\n",p);
    printf("\n******************************************************\n ");
anupma=*p;
anupma++;
//p=p+1;
printf("Enter Your First letter = ");
scanf(" %c",p);

 printf("\n******************************************************\n ");
     printf("Value of avi = %c\n",*p);
     printf("Addreess of avi = %d\n",p);
    printf("\n******************************************************\n ");

}