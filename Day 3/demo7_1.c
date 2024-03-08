// print no to 1 using for loop
#include<stdio.h>
int main(void)
{
    int no, counter;
    printf("\n Enter no ::");
    scanf("%d", &no);

    for(counter=no;counter>=1; counter--) 
    {
        printf("%5d", counter);
    } 

    // print 5 4 3 2 1 if no is 5
    return 0;
}

