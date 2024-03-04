#include<stdio.h>
int main()
{
// datatype variable
    char   ch='A';
    printf("\n sizeof(10)=%d", sizeof(10)) ; // int sizeof(int) =4
    printf("\n sizeof(10.2)=%d", sizeof(10.2)) ; // sizeof(double) =8
    printf("\n sizeof(10.2f)=%d", sizeof(10.2f)) ; // sizeof(float) =4
    printf("\n sizeof(10.2F)=%d", sizeof(10.2F)) ; // sizeof(float) =4
    printf("\n sizeof(ch)=%d", sizeof(ch)) ; // sizeof(char) =1
    printf("\n sizeof('A')=%d", sizeof('A')) ; // sizeof('A') = 4 bytes
                     // sizeof(65)==sizeof(int) 
                                  


    return 0;
}
//() {} [] <> ""