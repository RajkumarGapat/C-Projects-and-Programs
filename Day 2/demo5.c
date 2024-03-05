#include<stdio.h>
int main(void)
{
    int no1=300, no2=300, ans=0;
    ans= no1*no2;
    printf("\n %d * %d =%d", no1, no2, ans);

    {
        short  int no1=300, no2=300, ans;
        // -32768 -32767 -32766                0              32767
        // 32768  32769  32770
        ans= 32767;
        printf("\n ans=%hd", ans);
        ans= 32768;
        printf("\n ans=%hd", ans);
        ans= 32770; // -32766
        printf("\n ans=%hd", ans);
        ans= 65535; // -1
        printf("\n ans=%hd", ans);

        ans= 65536; // 0
        printf("\n ans=%hd", ans);
        
       
        ans= no1*no2;
    
        printf("\n %hd * %hd =%hd", no1, no2, ans);
    
    }
    return 0;
}