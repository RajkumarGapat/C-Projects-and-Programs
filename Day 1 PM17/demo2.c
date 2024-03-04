#include<stdio.h>
#include<limits.h>
int main(void)
{
    printf("\n int %%d  %d  %d to %d",sizeof(int), INT_MIN,INT_MAX );

    printf("\n short int %%hd  %d  %hd to %hd",sizeof(short int), SHRT_MIN,SHRT_MAX);
    printf("\n unsigned char %%c  %d  0 to %d",sizeof(unsigned char), UCHAR_MAX);
    

    return 0;
}
/* int     %d
short int %hd
char       %c
float      %f
*/