// Write a program to Ask Cost Price and Sale Price from User and identify loss or Profit

#include<stdio.h>
void main()
{
    int cp,sp;
    printf("Enter Product's Cost Price = ");
    scanf("%d",&cp);
    printf("\nEnter Product's Sale Price = ");
    scanf("%d",&sp);

    if(cp>sp)
    {
          printf("Oh you got loss dear !!");
    }
    else if(cp==sp)
    {
        printf("No profit or no loss !!");
    }
    else{
        printf("Hey wow you got profit dear !!");
    }
    
    
    printf("\n");
    
    //You can apply below condition for same logic
    
   if(sp>cp)
    {
        printf("Yes Dear you got profit !!\n");
    }
    else if(cp==sp)
    {
        printf("No profit or no loss !!");
    }
    else
    {
        printf("Oh  Dear you got loss !!\n");
    }

    

}