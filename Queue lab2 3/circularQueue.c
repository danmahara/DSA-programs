#include <stdio.h>
#include<stdlib.h>
#define MAX 3
void insert();
void del();
void display();
void peek();

int queue_array[MAX];
int rear = -1;
int front = -1;

int main()
{
    int choice;
    while (1)
    {
        printf("\n1.Insert element to queue\n");
        printf("2.Delete element from queue \n");
        printf("3.Display peek element \n");
        printf("4.Display all elements of queue \n");
        printf("5.Exit\n\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)

        {
        case 1:
            insert();
            break;
        case 2:
            del();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(1);
        default:
            printf("Wrong choice \n");
        }
    }
}


void insert()
{
    int item;
    if ((rear + 1) % MAX == front)
        printf("Queue Overflow \n");
    else if (front == -1 && rear == -1)
    {

        front = rear = 0;
        printf("\nInsert the element in   queue : \t");

        scanf("%d", &item);
        queue_array[rear] = item;

    }

    else 
    {

        rear = (rear + 1) % MAX;
        printf("\nInsert the element in queue : \t");
  
        scanf("%d", &item);
        queue_array[rear] = item;
    }
}


void del()
{
    if (front == -1 && rear == -1)
    {
        printf("\nQueue Underflow \n ");
        return;
    }
    else if (front == rear) {

        printf("\nElement deleted from queue is : % d\n", queue_array[front]);

        front = rear = -1;

    }
    else
    {

        printf("\nElement deleted from queue is : %d\n", queue_array[front]);
        front = (front + 1) % MAX;

        // printf("\nAfter delete , front is %d",front);
    }
}
void peek()
{
    if (front == -1 && rear == -1)
        printf("Queue is empty \n");
    else
    {

        printf("peek element : %d\n", queue_array[front]);

    }

}

void display() {

    int i = front;
    if (front == -1 && rear == -1)
        printf("\nQueue is empty \n");
    else {
        printf("Queue elements : ");


        for (i = front; i != rear; i = (i + 1) % MAX)
        {
            printf("%d ", queue_array[i]);
        }

        printf("%d ", queue_array[i]);
        printf("\n\n\n");

    }
}