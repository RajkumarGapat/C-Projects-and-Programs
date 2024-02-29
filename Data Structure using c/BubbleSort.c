#include<stdio.h>
//in case of bubble sort highest element will be placed on its position 
//after completion of one pass
//n-1 passes will conclude data is sorted
void bubble_sort(int *p,int n)
{
    int i,j;
    for(i=0;i<n-1;i++) //no .o f passes
    {
        for(j=0 ; j < n-1-i ;j++)
        {
            if(p[j] > p[j+1])
            {
                p[j] = p[j] + p[j+1];
                p[j+1] = p[j] - p[j+1];
                p[j] = p[j] - p[j+1];
            }
        }
    }
   

}
int main()
{
    int arr[5] = {12,35,6,78,23};
    int i;
    printf("\n Before Sorting \n");
    for(i=0;i<5;i++)
    {
        printf("%4d",arr[i]);
    }
    bubble_sort(arr,5);

    printf("\n after Sorting \n");
    for(i=0;i<5;i++)
    {
        printf("%4d",arr[i]);
    }
    
}