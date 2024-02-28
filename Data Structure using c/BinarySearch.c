#include<stdio.h>

int binary_search(int *p,int key)
{
    int low=0,high=9,mid;

    while(low<=high) 
    {
        mid = (low + high) /2;
        if(key == p[mid])
            return mid; //key present at mid
        else if(key > p[mid])
            low = mid + 1; //key may present in right partition
        else if(key < p[mid])
            high = mid - 1;//key may present in left partition

    }
    return -1;
}

int main()
{
    int arr[10] ={11,22,33,44,55,66,77,88,99,100};
    int key,index;
    
    printf("Specify key to search \n");
    scanf("%d",&key);

    index = binary_search(arr,key);
    if(index==-1)
        printf("%d key is not found \n",key);
    else
        printf("%d key is found at %d index \n",key,index);
        
    
}


