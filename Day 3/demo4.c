#include<stdio.h>
int main(void)
{
    int no=10;
    if(no==10)
    {
         //error: break statement not within loop or switch

        printf("\n yes");
        break;
        // we can not use break statement inside if only 

    }
    return 0;
}