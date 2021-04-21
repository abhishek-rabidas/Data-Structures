//Stack Operations in Array
#include<stdio.h>
#include<stdlib.h>
#define MAX 6
int top = 0;
int arr[MAX];
int menu();
void push();
void pop();
void display();
int main()
{ 
    do{
        int ch = menu();
    switch (ch)
    {
        case 1:
        push();
        break;
        case 2:
        pop();
        break;
        case 3:
        display();
        break;
        case 4:
        exit(0);
    }
    }while(1);
    return 0;
}

int menu()
{
    int ch;
    printf("\nStack operations using ARRAY... "); 
    printf("\n -----------**********-------------\n"); 
    printf("\n 1. Push ");
    printf("\n 2. Pop "); 
    printf("\n 3. Display"); 
    printf("\n 4. Quit ");
    printf("\n Enter your choice: "); 
    scanf("%d", &ch);
    return ch;
}

void push()
{
    int data;
    if(top==MAX)
    {
        printf("\nStack Overflow\n");
        return;
    }
    else{
        printf("\nEnter the data to push: ");
        scanf("%d",&data);
        arr[top++]=data;
        printf("\nData pushed into the stack\n");
    }
}

void pop()
{
    if(top==0)
    {
        printf("\nStack Empty\n");
        return;
    }
    else{
       printf("\nData popped from the stack: %d",arr[--top]);
    }
}

void display()
{
    if(top==0)
    {
        printf("\nStack Empty\n");
        return;
    }
    else{
        printf("\n\nStack:\n");
    for(int i=0;i<top;i++)
    printf("%d   ",arr[i]);
    }
}