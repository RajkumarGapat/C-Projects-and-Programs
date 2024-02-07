#include <stdio.h>
#include <stdlib.h>
void main()
{
int n,i;
float *p,sum=0;
printf("Enter number of elements: ");
scanf("%d",&n); //here n has number of values
//p=(int*)malloc(n*sizeof(int));  //memory allocated using malloc means p=malloc(5*4); means p=(int*)malloc(20);
p=(float*)malloc(n*sizeof(float));
if(p==NULL)                     
    {
printf("Error! memory not allocated.");
exit(0);
    }
printf("Enter elements of array: ");
for(i=0;i<n;i++)
    {
       scanf("%f",p+i);
       //printf("Element %d = %d\n",i,*p);
        sum=sum+*(p+i);
    }
printf("\n Sum=%f",sum);
free(p);

}

/*1 number - 2 or 4
2 number - 2*2 or 2*4 means 4 or 8 _bytes
3 number - 3*2 or 3*4 means 6 or 12 Bytes*/
 
