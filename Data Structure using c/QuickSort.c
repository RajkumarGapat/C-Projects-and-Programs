#include<stdio.h>
#define SIZE 8
#define SWAP(a,b,type) {type t=a; a=b; b=t;}

void display_array_elements(int *p)
{
    int i;
    for(i=0;i<SIZE;i++)
        printf("%4d",p[i]);
}
void quick_sort(int a[], int left, int right)
{
	int i = left, j = right;
	if(left >= right)
		return;
	
	while(i < j)
	{
		while(i<=right && a[i]<=a[left])
		{
			i++;
		
		}

		while(a[j]>a[left])
		{
			j--;
		}

		if(i < j)
		{
			SWAP(a[i], a[j], int);
		}
	}
	SWAP(a[left], a[j], int);
	quick_sort(a, left, j-1);
	quick_sort(a, j+1, right);

}//end of quick_sort function

int main()
{
    int arr[SIZE]={7,1,15,6,3,34,12,23};
    printf("Before Sort state of an array is \n");
    display_array_elements(arr);
    
    quick_sort(arr);
    
    printf("After Sort state of an array is \n");
    display_array_elements(arr);
}