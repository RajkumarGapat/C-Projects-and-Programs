#include<stdio.h>
void main()
{
    int rows, cols,r,c;
    char word[20];

    printf("Enter no of rows = ");
    scanf("%d",&rows);
    printf("Enter no of columns = ");
    scanf("%d",&cols);
    printf("Enter Your word to be printed =");
    scanf(" %s",&word);
    int i=1,j;
    while(i<=rows)
    {
        //start inner or child loop here 
        j=1;
        while(j<=cols)
        {
            if(i==2 && j==7)
            {
                printf("%s ",word);
            }
            else
            {
                printf("* ");
            }
           
            j++;
        }
        //ends inner or child loop here
        printf("\n");
        i++;
    }
}