#include<stdio.h>
int main(void)
{
    int month, year;

    printf("\n Enter Month =");
    scanf("%d", &month);

    switch(month)
    {  
        case 1:
        case 2:
        {
            printf("\n Enter year =");
            scanf("%d", &year);

            if(year%4==0)
                printf("\n feb has 29 days (leap year)");
            else
                printf("\n feb has 28 days (not a leap year)");

        }
        case 3:
        case 5:
        case 7:
        case 8: 
        case 10:
        case 12 : 
                printf("\n 31 days");
                break;
        case 4: 
        case 6:
        case 9: 
        case 11:
                printf("\n 30 days");
                break;
       
    }
    return 0;
}