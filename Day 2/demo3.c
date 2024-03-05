#include<stdio.h>
int main(void)
{
    int no1=10, no2=3, ans;

    ans=no1/no2;  
    printf("\n %d /%d =%d", no1, no2, ans);

    float ans1;
    ans1=no1/no2;
    printf("\n %d /%d =%f", no1, no2, ans1);

    ans1=no1/no2;
    printf("\n %d /%d =%.3f", no1, no2, ans1);

    ans1=(float)no1/no2;  // type casting
    printf("\n %d /%d =%.3f", no1, no2, ans1);

    ans1=no1/3.0f;
    printf("\n %d /%d =%.3f", no1, no2, ans1);

    return 0;
}
