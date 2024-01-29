//write a program to display week of the day

#include<stdio.h>
void main()
{
    int day;
    printf("\n\n Enter Your day of the week .");
    scanf("%d",&day);

    if(day==3)
    {
        printf("Good Morning \nIt's a Tuesday !! \n\n");
    }
    else if(day==5)
    {
         printf("Good Morning It's a Thrusday !! \n");

    }
    else if(day==1)
    {
         printf("Good Morning It's a Sunday !! \n");

    }
    else if(day==6)
    {
        printf("Good Morning It's a Friday !! \n");
    }
    else if(day==2)
    {
        printf("Good Morning It's a Monday !! \n");
    }
    else if(day==4)
    {
        printf("Good Morning It's a Wednesday !! \n");
    }
    else if(day==7)
    {
        printf("Good Morning It's a Saturday !! \n");
    }
    else{
        printf("day limit is out of 7 !!");
    }

}