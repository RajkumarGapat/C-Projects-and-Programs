#include<stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("D:\\Datatbase of my Programs\\table_of_number.txt","w");
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
