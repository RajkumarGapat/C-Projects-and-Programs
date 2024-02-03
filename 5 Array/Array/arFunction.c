//write a program to find existance of given number in an array
#include<stdio.h>
int keyNo=0; //global variable

int checkExistance(int n,int val,int arKey) // here n will be that number jisko find karna hai, val will be array elemet, and arKey will be indexing of array
{  
   if(n==val)
   {
       keyNo=arKey;
       return 1;
       //printf("\n Yes %d is Existing in array\n ",n);
   }
   else
   {
         return 0;
         //printf("\n No %d is not Existing in array\n ",n);
   }
}

void main()
{
    int num,res,found=0;
    int myArray[10];
    //let's fill the array 
    for(int i=0;i<10;i++)
    {
        printf("Enter Array Element = ");
        scanf("%d",&myArray[i]);
    }

printf("Enter Your Number to find in array = ");
scanf("%d",&num);

for(int i=0;i<10;i++)
{
    res=checkExistance(num,myArray[i],i);
    if(res==1)
    { 
        found=1;
    }
    
}

if(found==1)
{
    printf("Yes %d is Existing in array on indexing no %d\n",num,keyNo);
}
else
{
     printf("No %d is not Existing in array \n",num);
}

}