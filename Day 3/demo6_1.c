// print no to 1
// 5 ---->  5 4 3 2 1
#include<stdio.h>
int main(void)
{
    int no, counter;
    printf("\n Enter no ::");
    scanf("%d", &no);

    counter=no; //init

    while(counter>0)  
    {
        printf("%5d", counter);
        counter--;  // counter= counter-1;        
    }
    return 0;
}






