#include<stdio.h>
//1. selection Sort
//2. bubble sort
//3. insertion sort
//4. merge sort - uses divide and conqur 
//5. quick sort - uses divide and conqur


//in case of selection sort lowest element will be placed on its position 
//after completion of one pass
//n-1 passes will conclude data is sorted
void selection_sort(int *p,int n)
{
    int i,j;
    for(i=0;i<n-1;i++) //to select element
    {
        for(j=i+1;j<n ; j++) //compare with rest eles
        {
            if(p[i] > p[j] )
            {
                p[i] = p[i] + p[j];
                p[j] = p[i] - p[j];
                p[i] = p[i] - p[j];
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
    selection_sort(arr,5);

    printf("\n after Sorting \n");
    for(i=0;i<5;i++)
    {
        printf("%4d",arr[i]);
    }
    
}