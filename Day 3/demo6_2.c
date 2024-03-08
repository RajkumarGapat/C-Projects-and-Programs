#include<stdio.h>
int main(void)
{
    int no, counter;
    printf("\n Enter no ::");
    scanf("%d", &no);
    counter=0; //init
    while(1) // true  
    {
        counter++;// counter=counter+1;
        printf("%5d", counter);
        if(counter>=no) // condition  to go out of loop
            break; // go out of loop
    }
    return 0;
}






