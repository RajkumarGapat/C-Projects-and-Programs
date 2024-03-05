#include<stdio.h>
int main(void)
{
    char ch1='A', ch2='B' , ans; // signed char -128 to 127
    // -128   -127  -126  -125 -124         0         126  127
    //  128    129  130   131

    ans= ch1+ch2;
    printf("\n %c + %c = %c", ch1, ch2,ans);
    printf("\n %d + %d = %d", ch1, ch2,ans);

    {
        unsigned   char ch1='A', ch2='B' , ans; // 0 to 255
        ans= ch1+ch2;
        printf("\n %c + %c = %c", ch1, ch2,ans);
        printf("\n %d + %d = %d", ch1, ch2,ans);
    }
     {
        unsigned   char ch1='4', ans; // 0 to 255

        // 0    1    2   3   4  5                          255
        // 256  257 258 259 260                            255
        ans= ch1*5;
        printf("\n %c * 5 = %c", ch1, ans);
        printf("\n %d * 5 = %d", ch1, ans);
    }
    return 0;
}