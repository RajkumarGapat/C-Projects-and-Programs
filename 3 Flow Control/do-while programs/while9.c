//write a program to find sum of even numbers and odd numbers from user's given number
#include<stdio.h>
void main()
{
    int num,i,rem,Esum=0,Osum=0;
    printf("Enter Your Number = ");
    scanf("%d",&num);
    
    i=1;
    while(i<=num)
    {
        //let's find i is even or odd
        rem=i%2;
        if(rem==0)
        {
            Esum=Esum+i; //1 Esum=0+2 = 2, Esum=2+4=6,Esum=6+6=12
           //printf("\n %d is Even Number \n",i);
           
        }
        else
        {
            Osum=Osum+i; //1 Osum=0+1=1, Osum=1+3=4,Osum=4+5=9
           
           //printf("\n %d is Odd Number \n",i);
        }
        i++;
    }
printf("Sum of Even Number= %d\n",Esum); //12
 printf("Sum of Odd Number= %d\n",Osum); //9

}
