#include<stdio.h>
void main()
{
    int a=10;
    int *p;
    int **p2p;
    printf("\n Showing Value of a variable by variable = %d\n",a);

    p=&a;
    printf("\n Showing Value of a variable by pointer variable = %d\n",*p);
    p2p=&p;
    printf("\n Showing Value of a variable by pointer to pointer variable = %d\n",**p2p);


}