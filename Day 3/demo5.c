// we can use goto with same function only
// not across multiple function
#include<stdio.h>
int main(void)
{
    int age;

    START:
    printf("\n Enter age :: ");
    scanf("%d", &age);

    if(age>=18)
        printf("\n you can vote");
    else 
    {
        printf("\n you can not vote");
        goto START; // goto line 6
    }
    return 0;
}
