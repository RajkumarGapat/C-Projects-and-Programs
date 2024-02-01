#include<stdio.h>
/*void show()
{
    int a=10; //local variable of show function
}
void main()
{
    printf("a = %d",a);
}
*/

//another way to return a value in main
int show()
{
    int a=100;
    return a;
}

void main()
{
    int get=show();
    printf("a= %d",get);
}