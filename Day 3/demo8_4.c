#include<stdio.h>
int main(void)
{
    int no1=5, no2=0;
    if(no1);   // error else without if
          printf("\n yes for no1");
    else 
         printf("\n no for no1");

    if(no2==0);  //error: ‘else’ without a previous ‘if
          printf("\n yes for no2"); // print yes
    else if(no2>=0)
          printf("\n yes for no2"); // print yes

    // we can not use ; with if else and nested if
    return 0;
}