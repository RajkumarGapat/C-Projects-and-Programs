#include<stdio.h>
int main(void)
{
    int no=100;
    printf("\n no=%d decimal", no);
    printf("\n no=%o octal", no);


    printf("\n no=%x hex", no);
    printf("\n no=%o octal", 0100); // no start with 0 is octal

    printf("\n no=%d ", 0100); // 64

    return 0;
}