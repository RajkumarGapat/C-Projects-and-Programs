//write a program to display reverse  of given number
#include<stdio.h>
void main()
{
     int num,rem,sum=0;
     printf("Enter Your Number = ");
     scanf("%d",&num); //initilization of num variable //23456 /10 = 2345
     //for(;num!=0;)
     while(num!=0)
     {
         rem=num%10;
         //printf("\n Remainder is %d",rem);
        
         num=num/10; //it will work like increment
         //printf("\n Now num is %d",num);

         printf("%d",rem);
     }

     
}