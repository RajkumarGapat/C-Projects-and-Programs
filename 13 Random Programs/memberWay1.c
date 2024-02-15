#include<stdio.h>
#include<string.h>
struct Person
{
  int aadharId; //4
  char name[20];  // 20
  int citiNo; // 4
  float Salary; // 4
}p1; 
//We will have to create members(admin) of Structure
void main()
{

printf("Let's Initilize internal member variable of structure by outer member p1\n");
p1.aadharId=101;
strcpy(p1.name,"Anupma");
p1.citiNo=122016;
p1.Salary=25000;

printf("\n P1 Person details are below:- \n");
printf("Aadhar Id no = %d \n",p1.aadharId);
printf("Name = %s \n",p1.name);
printf("Citi no = %d \n",p1.citiNo);
printf("Salary = %d\n",p1.Salary);


}