//write a program to  Ask Cost Price and Sale Price from User and identify loss or Profit but *** calculate them according to user's defined months.

#include<stdio.h>
void main()
{
    int month,k=1,total,pro=0,loss=0;
    char status;
   

 do
 {
    int cp,sp;
    printf("Enter Product's Cost Price = ");
    scanf("%d",&cp);
    printf("\nEnter Product's Sale Price = ");
    scanf("%d",&sp);

    if(sp>cp)
    {
        total=sp-cp;
        pro=pro+total;
        printf(" Now Profit = %d\n",pro);
        printf("Yes Dear you got profit !!\n");
    }
    else if(sp==cp)
    {
        printf("No Profit nor loss !!\n");
    }
    else
    {
        total=cp-sp;
        loss=loss+total;
        printf(" Now Loss = %d\n",loss);
        printf("Oh  Dear you got loss !!\n");
    }

     //k++;
     printf("Do you want to conitnue ? Press y for yes and press n for No =");
     scanf(" %c",&status);


 }while(status=='y');

   printf(" Total Profit = %d\n",pro);
   printf(" Total Loss = %d\n",loss);

}
