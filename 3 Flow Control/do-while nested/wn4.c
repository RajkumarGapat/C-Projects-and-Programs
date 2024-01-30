//write a program to create counting according to kids counting
#include<stdio.h>
void main()
{
    int i,j;
    i=1; //j=1;
    while(i<=10)
    {
       // printf("%d",i);
        j=0;
        while(j<10)
        {

           // printf("%d%d ",j,i);
            if(i==10)
            {
                //int res=i*(j+1); //10*
                int res=i*(j+1); //10*
                printf("%d ",res);
            }
            else
            {
               printf("%d%d ",j,i); 
            }
            j++;
        }
        printf("\n");

        i++;
    }
}