#include<stdio.h>
int main(void)
{
    int month, year;

    printf("\n Enter Month =");
    scanf("%d", &month);

    if(month==1 )
        printf("\n jan has 31 days");
    else if( month==2)
    {
        printf("\n Enter year =");
        scanf("%d", &year);

        if(year%4==0)
            printf("\n feb has 29 days (leap year)");
        else
            printf("\n feb has 28 days (not a leap year)");
    }
    else if (month==3)
        printf("\n mar has 31 days");
    else if( month==4 )
        printf("\n apr has 30 days");
    else if(month==6 )
        printf("\n jun  has 30 days");
    
    return 0;
}