//Write a program to find result of student by while loop
#include<stdio.h>
void main()
{
    int i,stu;
    printf("How many studnets are here ? ");
    scanf("%d",&stu);
    i=1;
    do
    {

      //Let's find students result
      int eng,phy,mat,sid,total;
      char sname[20];
      float per;
    printf("Enter Student%d Id = ",i);
    scanf("%d",&sid);
    printf("Enter Student%d Name = ",i);
    scanf(" %s",&sname);
    printf("Enter Student%d English Marks = ",i);
    scanf("%d",&eng);
    printf("Enter Student%d Physics Marks = ",i);
    scanf("%d",&phy);

    printf("Enter Student%d Maths Marks = ",i);
    scanf("%d",&mat);

    total=eng+phy+mat;
    per=total/3;
    printf("\n************************************* \n");
    printf("\nResult of %s is below:- \n",sname);
    printf("\nTotal Marks of %s = %d",sname,total);
    printf("\nPercentage of %s =  %f",sname,per);
    printf("\n************************************* \n");
        i++;
    }while(i<=stu);


}