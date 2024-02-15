#include<stdio.h>
#include<string.h>
struct Person
{
  int aadharId; //4
  char name[20];  // 20
  int citiNo; // 4
  float Salary; // 4
}; 
//We will have to create members(admin) of Structure
void main()
{
struct Person p1;
printf("Let's Initilize internal member variable of structure by outer member p1\n");
printf("\n Enter Aadhar Id = ");
scanf("%d",&p1.aadharId);
printf("\n Enter Name = ");
scanf(" %s",&p1.name);
printf("\n Enter City No = ");
scanf("%d",&p1.citiNo);
printf("\n Enter Salary = ");
scanf("%f",&p1.Salary);

printf("\n P1 Person details are below:- \n");
printf("Aadhar Id no = %d \n",p1.aadharId);
printf("Name = %s \n",p1.name);
printf("Citi no = %d \n",p1.citiNo);
printf("Salary = %f\n",p1.Salary);


}