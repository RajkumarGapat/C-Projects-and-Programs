#include<stdio.h>
int main(void)
{
    char ch;
    printf("\n Enter char :: ");
    scanf("%c", &ch);
    printf("\n ch=%c  ch=%d ",ch, ch);

    if(ch>=97 && ch<=122) // convert small to capital
       ch-=32; //ch= ch-32; short hand operator
    
    printf("\n ch=%c  ch=%d ",ch, ch);

    //if( ch=='A' || 'E' || 'I' || 'U' || 'O') // in correct
    if( ch=='A' || ch=='E' || ch=='I' || ch=='U' || ch=='O')
        printf("\n %c is vov", ch);
    else if(ch>=65 && ch<=90)
        printf("\n %c is con", ch);
    else if ( ch>=48 && ch<=57)  // '0' 48 and '9' 57
    {
        printf("\n %c is digits", ch);
    }
    else
        printf("\n %c is other char", ch);
    

    return 0;
}


// a=a+10   a+=10;


