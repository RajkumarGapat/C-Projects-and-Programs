#include<stdio.h>
void main()
{
    int status;
    status=remove("D:\\Datatbase of my Programs\\testing.txt"); //here remove function will delete testing.txt file from given path
    if(status == 0)
    {
        printf("Your file has been deleted successfully !!");
    }
    else{
        perror("");
    }
}