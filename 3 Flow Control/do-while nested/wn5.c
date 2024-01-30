#include<stdio.h>
void main()
{
    printf("\n\n****************** Printing i *************************\n");
    int i=1,j;
    while(i<11)
    {
        //start inner or child loop here 
        j=1;
        while(j<11)
        {
            printf("%d ",i);
            j++;
        }
        //ends inner or child loop here
        printf("\n");
        i++;
    }

    printf("\n\n****************** Printing j *************************\n");
   i=1;
    while(i<11)
    {
        //start inner or child loop here 
        j=1;
        while(j<11)
        {
            printf("%d ",j);
            j++;
        }
        //ends inner or child loop here
        printf("\n");
        i++;
    }
}