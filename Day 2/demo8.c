#include<stdio.h>
int main(void)
{
    {
         // -32768 -32767         0            32766 32767
        short int no1=182, no2=182, ans=0;
        // 182*182=33124
        ans=no1*no2; // 
        printf("\n ans= %hd", ans); //181*182 = -32412
    }
     {
         // -32768 -32767         0            32766 32767
        short int no1=200 ,no2=164, ans=0;
        // 200*164=32800
        ans=no1*no2; // 
        printf("\n ans= %hd", ans); //-32736 = 200*164
    }

    return 0;
}
// please complete steps till 9 ( Click here to find your username) from page 1 to 5

//  then follow Git Installation Steps  till steo 14 (from page 6 to 13)