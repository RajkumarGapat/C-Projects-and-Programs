//write a program to display a year is leap year or not ,for this create a  return type function
#include<stdio.h>
int year=2000;
int find()
{ 
    int rem;
    printf("\nEnter your year = ");
    scanf("%d",&year);
    rem=year%4;
    return rem; 
}
void valid()
{
    if(year<1984)
    {
        year=1984;
        printf("Please enter greater than 1984");
    }else
    {
       year=year;
    }
}

void main()
{
   //we will have to call that find function to execute block of statements
  
   int status=find(); //int status=rem;
    valid();
   if(status==0 && year>1984)
    {
        printf("\n %d is Leap Year ",year);
    }
    else if(year>1984)
    {
        printf("\n %d is Not a Leap Year ",year);
    }
   
   
}