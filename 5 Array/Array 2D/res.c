#include<stdio.h>
void main()
{
    int multi[20][20];
    int stu,sub,total=0;
    printf("Enter No of Students(Less than 20) = ");
    scanf("%d",&stu);

    printf("Enter No of Subjects per students(Less than 20) = ");
    scanf("%d",&sub);

    for(int i=1;i<=stu;i++)
    {
        //s=i+1;
         printf("Please give Student %d details:- \n",i);
        for(int j=1;j<=sub;j++)
        {
           
             printf("Enter Subject %d marks = ",j);
             scanf("%d",&multi[i][j]);
            
        }
    }


  
    for(int i=1;i<=stu;i++)
    {
        printf("\nStudent %d Result is below:- \n",i);
        for(int j=1;j<=sub;j++)
        {
            //printf("%d ",multi[i][j]);
            total=total+multi[i][j];
        }
       printf("Total Marks of Student %d = %d \n",i,total);
       total=0;
       
    }

}