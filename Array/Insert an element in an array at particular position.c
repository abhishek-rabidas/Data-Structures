#include<stdio.h>

int main()
{
    int arr[10]={1,2,3,4,5};
    int pos,value, size=5;
    printf("Enter the position and value: ");
    scanf("%d   %d", &pos,&value);
    for(int i=size;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=value;
    for(int i=0;i<size+1;i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
}