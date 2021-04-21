#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int CQ[MAX];
int tail,head,count;
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
    printf("\nCircular Queue operations using ARRAY... ");
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
    if(count==MAX)
    {
        printf("\nQueue is full!\n");
        return;
    }
    else{
            printf("\nEnter the element to insert: ");
        scanf("%d",&data);
        CQ[tail]=data;
        tail=(tail+1)%MAX;
        count++;
         printf("\nElement Inserted\n");

    }
}

void dequeue()
{
    if(count==0)
    {
        printf("\nQueue is empty!\n");
        return;
    }
    else{
            count--;
        printf("\nThe dequeued element from the queue is: %d\n",CQ[head]);
        head=(head+1)%MAX;
    }
}

void display()
{
    int i=0,j=0;
    if(count==0)
    {
        printf("\nQueue is empty!\n");
        return;
    }
    else{
        printf("\nCircular Queue Elements: ");
        for(i=head;j<count;j++)
        {
            printf("%d\t",CQ[i]);
            i=(i+1)%MAX;
        }
    }

}
