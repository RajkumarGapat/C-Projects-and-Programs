#include<stdio.h>
void main()
{
    int multi[2][3];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
             printf("Enter Subject %d marks = ",j);
             scanf("%d",&multi[i][j]);
            
        }
    }
printf("Let's show all studnets subjects marks :- \n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Student %d Subject %d Marks= %d\n",i,j,multi[i][j]);
            
        }
        printf("\n**********************************\n");
    }

    printf("\n Another Method to display  :- \n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Multi[%d][%d] = %d\n",i,j,multi[i][j]);
            
        }
        printf("\n**********************************\n");
    }

}