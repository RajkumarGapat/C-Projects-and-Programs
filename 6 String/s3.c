#include<stdio.h>
#include<string.h>
void main()
{
    char s1[]="Hello ";
    char s2[]="World ";
     char s3[]="How are You";
     char s4[]="Hey Thank you";
     char s5[]="?";
puts(s1);
puts(s2);
//Now we will use string functions from string.h header file
//strcpy(s1,s2);
//puts(s1);

strcat(s1,s2);
puts(s1);

strcat(s1,s3);
strcat(s1,s5);
puts(s1);

}