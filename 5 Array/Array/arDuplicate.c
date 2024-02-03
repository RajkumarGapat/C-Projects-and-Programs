//write a program to find existance of duplicate numbers in an array
#include<stdio.h>
int count=0;

int countDuplicate(int n,int val) 
{  
    ///printf("\n n= %d and val = %d \n",n,val);
    
   if(n==val)
   {
     count++;
   }
   else{
      // count=0;
   }
   //printf("\n count = %d\n",count);
}
//2,6,4,5,7,4
void main()
{
    int num,res,found=0;
    int myArray[10];
    //let's fill the array 
    for(int i=0;i<3;i++)
    {
        printf("Enter Array Element = ");
        scanf("%d",&myArray[i]);
    }
for(int i=0;i<3;i++)
{//3 4 3 3
    num=myArray[i]; //4
    for(int i=0;i<3;i++)
    {
      countDuplicate(num,myArray[i]);

    }

    
}



//printf("\n Count = %d",count);
if(count>1)
{
    printf("Yes  is duplicate number");
}
else if(count!=1){
   printf("No there is not any duplicate number");  
}


}