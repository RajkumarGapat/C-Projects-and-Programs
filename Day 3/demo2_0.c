// print how many days in given month
#include<stdio.h>
int main(void)
{
    int month, year;

    printf("\n Enter Month =");
    scanf("%d", &month);

    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10|| month==12  )
        printf("\n 31 days");
    else if( month==4 || month==6 || month==9 || month==11)
        printf("\n 30 days");
    else if( month==2)
    {
        printf("\n Enter year =");
        scanf("%d", &year);

        if(year%4==0)
            printf("\n feb has 29 days (leap year)");
        else
            printf("\n feb has 28 days (not a leap year)");

    }
    return 0;
}