
#include <stdio.h>
int main()
{
    /*printf("Example of printf and scanf functions :- \n");
    char myname[30];
    printf("\n Enter Your Name = ");
    scanf("%s",&myname);

    printf("Value of myname variable = %s \n ",myname);*/

    printf("\n Example of fgets and puts functions :- \n");
    char ch;
    printf("Enter first letter or your name = ");
    scanf(" %c",&ch);
    printf(" \n %c",ch);
    char name[300];
    
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  // read string
    printf("Name: ");
    puts(name);    // display string
    return 0;
}
/*
Note:-
The problem with above code is scanf() reads an integer and leaves a newline character in buffer.
 So fgets() only reads newline and the string “test” is ignored by the program. ..
 */