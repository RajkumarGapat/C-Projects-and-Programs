//write a program to save student's multiple subject marks:-
#include<stdio.h>
void main()
{
    char name[10];
    int sid,sub;
    int subjects[10];
    
    printf("Enter Student's name = ");
    scanf(" %s",&name);

    printf("Enter Student's id = ");
    scanf("%d",&sid);

    printf("Enter Number of Subjects(less than 10) = ");
    scanf("%d",&sub);
for(int i=0;i<sub;i++)
{
    printf("\n Enter Subject%d Marks =  ",i);
    scanf("%d",&subjects[i]);
}

for(int i=0;i<sub;i++)
{
    printf("Subject[%d] Marks = %d \n",i,subjects[i]);
}





//printf("\n Let's find result of Student %s \n",name);


}
