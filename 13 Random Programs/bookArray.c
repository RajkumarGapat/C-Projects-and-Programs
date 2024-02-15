#include<stdio.h>
#include<string.h>
struct myBook
{
   int num;
    int price;
    char title[50];
    int indexLimit;
    char premable[100];
    char author[50];
    char preface[100];
    char content[100];
    int writtenYear;
}; 
void main()
{
    struct myBook meghraj[3]; //this is an array of structure members

   /* raj.price=300;
    strcpy(raj.title,"C Programming");
    strcpy(raj.premable,"The Constitution Of India");
    raj.indexLimit=400;
    strcpy(raj.author,"Denis Retchie");
    strcpy(raj.preface,"Basic Knowledge Of C");
    strcpy(raj.content,"C language is the mother language of all IT languages.");
    raj.writtenYear=1982;*/

for(int i=0;i<3;i++)
{
    printf("Enter Price of Avi's Book = ");
    gets(meghraj[i].price);
    //scanf(" %d",&meghraj[i].price);
    printf("Enter Title = ");
    fgets(meghraj[i].title,50,stdin);
   /* printf("Enter Premable = ");
    gets(meghraj[i].premable);
    printf("Enter Index Limit = ");
    gets(meghraj[i].indexLimit);
    printf("Enter author = ");
    gets(meghraj[i].author);
    printf("Enter Preface = ");
    gets(meghraj[i].preface);
    printf("Enter Content = ");
    gets(meghraj[i].content);
    printf("Enter Year  = ");
    gets(meghraj[i].writtenYear);*/
}


printf("\n\n Price of Meghraj's First Book = %d",meghraj[0].price);
}