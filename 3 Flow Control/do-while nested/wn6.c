#include<stdio.h>
void main()
{
    int rows, cols;
    printf("Enter no of rows = ");
    scanf("%d",&rows);
    printf("Enter no of columns = ");
    scanf("%d",&cols);
    int i=1,j;
    while(i<=rows)
    {
        //start inner or child loop here 
        j=1;
        while(j<=cols)
        {
            printf("* ");
            j++;
        }
        //ends inner or child loop here
        printf("\n");
        i++;
    }
}