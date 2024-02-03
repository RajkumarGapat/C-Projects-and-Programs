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


    printf("\n Another Method to display  :- \n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",multi[i][j]);
            
        }
        printf("\n");
       
    }

}