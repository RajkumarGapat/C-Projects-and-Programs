#include<stdio.h>
void main()
{
    int anupma;
    int *p;

    anupma=56;
    p=&anupma;
    printf("\n******************************************************\n ");
     printf("Value of anupma = %d\n",*p);
     printf("Addreess of anupma = %d\n",p);
    printf("\n******************************************************\n ");

    p=p+2;
    *p=34;
    
    printf("\n******************************************************\n ");
     printf("Value of meghraj = %d\n",*p);
     printf("Addreess of meghraj = %d\n",p);
    printf("\n******************************************************\n ");

}