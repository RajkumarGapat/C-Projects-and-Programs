#include<stdio.h>
#include<stdlib.h>
void main()
{
     printf("\033[1;31m"); 


    FILE *fp;
    fp=fopen("E:\\C Language Online Course\\my C Work\\Student Programs\\File Handling\\students.txt","a");
    if(fp==NULL)
    {
        printf("Finding Error !!");
        exit(0);
    }
    //Now my pointer is ready
    char userName[30];
    char sname[30];
 int i,j,stu,sub,total=0,marks;
 float per;

 printf("Hey User ,Please give me your good name = ");
 scanf(" %s",&userName);
 fprintf(fp,"******************** Username = %s ********************\n",userName);
 
 printf("Enter No of Students = ");
 scanf("%d",&stu);
 printf("Enter no of subjects = ");
 scanf("%d",&sub);

 fprintf(fp,"\nNumber of Students = %d ",stu);
 fprintf(fp,"\nNumber of Subjects = %d ",sub);

 for(i=1;i<=stu;i++)
 {
     printf("Enter Student Name = ");
     scanf(" %s",&sname);
     fprintf(fp,"\n Student Name = %s\n",sname);
       
       for(j=1;j<=sub;j++)
       {
           printf("Enter Subject %d Marks = ",j);
           scanf("%d",&marks);
           fprintf(fp,"\n Subject %d Marks = %d",j,marks);

           total=total+marks;        

       } //closing nested loop

       per=total/sub;
       printf("\n Result :- \n");
       printf("Total Marks = %d\n",total);
       printf("Percentage = %f\n",per);

       fprintf(fp,"\n Result :- \n");
       fprintf(fp,"Total Marks = %d\n",total);
       fprintf(fp,"Percentage = %f\n",per);

       total=0;
       fprintf(fp,"\n ================================================================= \n");
 }

fprintf(fp,"\n *************** Thanks %s for using my program ***************\n",userName);

printf("\033[0m");

    fclose(fp);
}