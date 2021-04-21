#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int arr[MAX];
int tail=0,head=0;
void enqueue();
void dequeue();
void display();
int menu();

int main()
{
    do{
        int ch=menu();
        switch(ch)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
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
    printf("\nQueue operations using ARRAY... "); 
    printf("\n -----------**********-------------\n"); 
    printf("\n 1. Insert ");
    printf("\n 2. Delete "); 
    printf("\n 3. Display"); 
    printf("\n 4. Quit ");
    printf("\n Enter your choice: "); 
    scanf("%d", &ch);
    return ch;
}

void enqueue()
{
    int data;
    if(tail==MAX){
        printf("\nQueue is full!\n");
        return;
    }
    else{
        printf("\nEnter the element to insert: ");
        scanf("%d",&data);
        arr[tail++]=data;
        printf("\nElement Inserted\n");
    }
}

void dequeue()
{
    if(head==tail)
    {
        printf("\nQueue is empty!\n");
        return;
    }
    else{
        printf("\nThe dequeued element from the queue is: %d\n",arr[head++]);
    }
}

void display(){
    int i;
    
    if(head==tail)
    {
        printf("\nQueue is empty!\n");
        return;
    }
    else{
        printf("\nQueue: ");
        for(i=head;i<tail;i++)
        {
            printf("%d\t",arr[i]);
        }
        printf("\n");
    }
}