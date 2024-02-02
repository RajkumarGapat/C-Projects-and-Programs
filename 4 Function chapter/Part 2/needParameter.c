//write a program to find sum of even numbers by loop and create function of this operation and find average of even numbers in user defined function findAverage()
#include<stdio.h>
int SumOfEven()
{
  int num,rem,sum=0;
  printf("Enter Your Number limit = ");
  scanf("%d",&num);
  for(int i =1;i<=num;i++)
  {
      //printf("\n%d",i);
      rem=i%2;
      if(rem==0)
      {
          sum=sum+i;
          //printf("\n %d is Even Number ",i);
      }
  }

  printf("\nSum of Even Numbers = %d",sum);
  return sum;

}

void findAverage(int s)
{
    float avg;
   printf("\n Yes I am getting sum of Even numbers which is = %d",s);  

}

void main()
{
    int total=SumOfEven();
    findAverage(total);
    //Processing of Above Code
    //1. In above line first complier will find sum of even numbers
    //2. and then copy value of sum variable and paste in total variable
    //3. now compiler will copy value of total variable and paste in s variable of findAverage Parameter
    //4. So now s has value of sum variable 

}