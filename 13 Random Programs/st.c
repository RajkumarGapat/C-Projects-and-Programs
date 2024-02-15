#include<stdio.h>
struct Student
{
    int roll;
    char name[20];
    
    void input()
    {
         printf("\nEnter Student record:\n");
        printf("\nStudent name:\t");
        scanf("%s", &name);
        printf("\nEnter Student rollno.:\t");
        scanf("%d", &roll);
    }

    void show()
    {
        printf("\nstudent name is %s", name);
        printf("\nroll is %d", roll);
    }


};
void main()
{
    struct Student s1;
    s1.input();
    s1.show();
}