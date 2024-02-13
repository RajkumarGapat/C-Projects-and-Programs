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
    //You can do any program code here, and code will start from here

     

     //code will ends here
        fclose(fp);
}
