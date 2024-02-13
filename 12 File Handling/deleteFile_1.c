#include<stdio.h>
void main()
{
    int status;
    status=remove("C:\\sum.txt");
    if(status==0)
    {
        printf("File Deleted Successfully !!\n");
    }
    else
    {
       perror("Finding Error During Process:- ");
    }

}