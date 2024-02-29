#include<stdio.h>
#define SIZE 8
#define SWAP(a,b,type) {type t=a; a=b; b=t;}

void display_array_elements(int *p)
{
    int i;
    for(i=0;i<SIZE;i++)
        printf("%4d",p[i]);
}
void merge_sort(int a[], int left, int right)
{
	int cnt=right-left+1, mid=(left+right)/2; 
	int i=left, j=mid+1, k=0;
	int *tmp;

	if(left>=right)
		return;
	merge_sort(a, left, mid);
	merge_sort(a, mid+1, right);
	tmp = (int*)malloc(cnt*sizeof(int));
	
	while(i<=mid && j<=right)
	{
		tmp[k++] = a[i] < a[j] ? a[i++] : a[j++];
	}

	while(i<=mid)
	{
		tmp[k++] = a[i++];
	}

	while(j<=right)
	{
		tmp[k++] = a[j++];
	}

	memcpy(a+left, tmp, cnt*sizeof(int));
	free(tmp);

}//end of merge_sort function

int main()
{
    int arr[SIZE]={7,1,15,6,3,34,12,23};
    printf("Before Sort state of an array is \n");
    display_array_elements(arr);
    
    merge_sort(arr,0,7);
    
    printf("After Sort state of an array is \n");
    display_array_elements(arr);
}