//write a program to create rows and columns according to user
#include<stdio.h>
void main()
{
    int i,j,row,cols;
    printf("How many rows you want to create ? ");
    scanf("%d",&row);

    printf("How many columns you want to create ? ");
    scanf("%d",&cols);
    i=1; //j=1;
    while(i<=row)
    {
        j=1;
        while(j<=cols)
        {
            printf("%d%d ",i,j);
            j++;
        }
        printf("\n");

        i++;
    }
}