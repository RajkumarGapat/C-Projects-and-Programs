#include<stdio.h>
int main(void)
{
    float no1, no2;
    printf("\n Enter No1=");
    scanf("%f", &no1);
    printf("\n Enter No2=");
    scanf("%f", &no2);
    
    printf("\n no1=%f no2=%f", no1, no2);
    printf("\n no1=%.2f no2=%.2f", no1, no2);
    printf("\n no1=%.3f no2=%.3f", no1, no2);
    printf("\n no1=%.0f no2=%.0f", no1, no2);

    return 0;

}