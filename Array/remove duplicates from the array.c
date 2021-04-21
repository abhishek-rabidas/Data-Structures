#include<stdio.h>

int main()
{
    int arr[]={1,1,1,3,3,5};
    int len=0;
    int size=sizeof(arr)/sizeof(arr[1]);
   
    for(int i=0;i<size;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            arr[len++]=arr[i];
            
        }
    }
    for(int i=0;i<len;i++)
    printf("%d   ",arr[i]);


    return 0;
}