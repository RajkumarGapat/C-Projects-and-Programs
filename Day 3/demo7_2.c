#include<stdio.h>
int main(void)
{
    int no, counter;
    printf("\n Enter no ::");
    scanf("%d", &no);
    counter=1;
    for(;; ) 
    {
        printf("%5d", counter);
        counter++;
        if(counter>no)
            break; // go out of loop
    }
    // print 1 2 3 4 5 if no is 5
    return 0;
}
