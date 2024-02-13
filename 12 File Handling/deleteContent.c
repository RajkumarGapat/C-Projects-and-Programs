#include<stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("D:\\Datatbase of my Programs\\myData.txt","w");
    //fprintf(fp," Right now m giving lecture on file handling in c");
    fclose(fp);
}