#include<stdio.h>
int main(void)
{
    int no1=5, no2=0;
    if(no1);    // if(5); we can use ; with simple if only
          printf("\n yes for no1"); // print yes

    if(no2);   //if(0) we can use ; with simple if only
          printf("\n yes for mo2"); // print yes

    // we can not use ; with if else and nested if
    return 0;
}