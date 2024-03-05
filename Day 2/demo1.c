#include<stdio.h>
int main(void)
{
    int no1, no2, no3,ans;
    printf("\n Enter 2 nos :: ");
    //ans=scanf(" %d %d  ", &no1, &no2);   may take extra input
    ans=scanf("%d%d", &no1, &no2); // will take 2 input
    printf("\n no1=%d no2=%d ans=%d", no1, no2, ans);
    printf("\n &no1=%u &no2=%u &ans=%u", &no1, &no2, &ans);

    printf("\n Enter 3 nos :: ");
    ans=scanf("%d%d%d", &no1, &no2, &no3);
    printf("\n no1=%d no2=%d no3=%d ans=%d", no1, no2, no3,ans);
  

    return 0;
}

/* window    linux/ mac
   .c         .c       text  file
 
   .i         .i      text  file

   .asm       .s      text  file

   .obj       .o      binary file

   .exe       .out    binary file
*/
   