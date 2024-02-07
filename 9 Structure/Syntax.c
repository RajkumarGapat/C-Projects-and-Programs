#include<stdio.h>
struct Person
{
  int aadharId; //4
  char name[20];  // 20
  int citiNo; // 4
  float Salary; // 4
}; 
//Person Structure will create 4+20+4+4=32 Bytes

struct demo
{
    double d; //8
    int i; //4
    char na[10]; //10
    int marks[5];//4*5=20
    float per[5]; //4*5=20
    int stu[4]; //4*4=16
    char grade; // 1

};
//demo structure will create memory of 8+4+10+20+20+!6+1=79 Bytes


/*void Person()
{

}*/