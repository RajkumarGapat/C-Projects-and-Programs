#include<stdio.h>
int main(void)
{
    int no1=1111, no2=123456;
    printf("\n%10d%10d", no1,no2); // right allign
    printf("\n%-10d%-10d", no1,no2); // left allign
    {
        int no1=1234567, no2=12345678;
        printf("\n%10d%10d", no1,no2); // right allign
        printf("\n%-10d%-10d", no1,no2); // left allign
    }
    {
        float no1=1234.3456, no2=12345.34567;
        printf("\n%10.2f%10.3f", no1,no2); // right allign
        printf("\n%-10.2f%-10.3f", no1,no2); // left allign
    }
    return 0;
}