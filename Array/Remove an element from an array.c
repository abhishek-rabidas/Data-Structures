#include<stdio.h>

int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[1]), pos;
    printf("Enter the position to delete: ");
    scanf("%d",&pos);
    for(int i=pos;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
    for(int i=0;i<size-1;i++)
    {
        printf("%d    ",arr[i]);
    }
    return 0;
}