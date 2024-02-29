#include<stdio.h>
#define SIZE 8
#define SWAP(a,b,type) {type t=a; a=b; b=t;}

void display_array_elements(int *p)
{
    int i;
    for(i=0;i<SIZE;i++)
        printf("%4d",p[i]);
}
void insertion_sort(int arr[], int n)
{
	int i, j;
	int temp;
	for(i=1; i<n; i++)
	{
		temp = arr[i];
		for(j=i-1; j>=0 && arr[j] > temp; j--)
			arr[j+1] = arr[j];
		arr[j+1] = temp;
	}
}
int main()
{
    int arr[SIZE]={7,1,15,6,3,34,12,23};
    printf("Before Sort state of an array is \n");
    display_array_elements(arr);
    
    insertion_sort(arr,SIZE);
    
    printf("After Sort state of an array is \n");
    display_array_elements(arr);
}