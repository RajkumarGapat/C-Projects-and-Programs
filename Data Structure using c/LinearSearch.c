#include<stdio.h>

int linear_search(int p[5],int key) //int *p
{
    int i;
    for(i=0;i<5;i++)
    {
        if( p[i] == key)    //*(p+i)
            return i;
    }
    return -1;
}

int main()
{
    int arr[5] ={11,22,33,44,55};
    int key,index;
    
    printf("Specify key to search \n");
    scanf("%d",&key);

    index = linear_search(arr,key);
    if(index==-1)
        printf("%d key is not found \n",key);
    else
        printf("%d key is found at %d index \n",key,index);
        
    
}


