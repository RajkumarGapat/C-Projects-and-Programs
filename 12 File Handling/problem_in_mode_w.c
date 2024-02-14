/*
In below program we are finding one problem,every time my new output will replace old content of my file
but we need old and new content together in my file 

Reason of Problem:- we are using w mode in fopen function, because w mode will always start writing from starting of file
that's why by using w mode in fopen function all previous content will loss

Solution of Problem:- we should use a mode in fopen function because a mode will start writing from end of previous content of file
that's why a mode will not harm to previous content and join new content in previous
*/

#include<stdio.h>
void main()
{
    FILE *fp;
   // fp=fopen("D:\\Datatbase of my Programs\\table_of_number.txt","w"); //this was problem do not use w here
    fp=fopen("D:\\Datatbase of my Programs\\table_of_number.txt","a"); // this is the solution use a mode to carry old and new content of file
    if(fp != NULL)
    {
        printf("Your file has been created successfully !!");
    }
    else
    {
       perror("Finding Error ");
    }

    //My Program will start from here
    char uname[20];
    printf("\n Hey User Enter Your name = ");
    scanf(" %s",&uname);

    // printf("\n ***************** %s ******************** \n",uname); //this line will write in ouput screen
    /*
    Syntax of fprintf function
    fprintf(pointerVariable,"Your Text");

    */
    fprintf(fp,"\n \t \t    ***************** %s ******************** \n",uname); //this line will write in file



   //My Program will ends here
        fclose(fp);
}
