#include <stdio.h>
#include<stdlib.h>
#define MAX 3
void insert();
void delete();
void display();
void peek();
int queue_array[MAX];
int rear = -1;
int front = -1;
int main() {
    int choice;
    while (1)
    {
        printf("\n1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display peek element \n");
        printf("4.Display all elements of queue \n");
        printf("5.Quit \n");
        printf("\nEnter your choice : \t");
        scanf("%d", &choice);
        printf("\n");

        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
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
            break;
        }
    }
    return 0;
}



void insert() {
    int item;
    if (rear == MAX - 1)
        printf("Queue Overflow \n\n");
    else if (front == -1 && rear == -1)
    {

        front = rear = 0;
        printf("Insert element in queue : ");

        scanf("%d", &item);
        queue_array[rear] = item;

    }

    else
    {

        rear++;
        printf("Insert the element in queue : \t");
        scanf("%d", &item);
        queue_array[rear] = item;

    }
}



void delete() {
    if (front == -1 && rear == -1)
    {
        printf("Queue Underflow \n ");
        // return;  
    }
    else if (front == rear) {

        printf("Element deleted from queue is : % d\n", queue_array[front]);

        front = rear = -1;

    }

    else
    {
        printf("Element deleted from queue is: % d\n", queue_array[front]);
        front = front + 1;
    }
    printf("\n");
}

void peek() {
    if (front == -1 && rear == -1)
        printf("Queue is empty \n\n");
    else
    {

        printf("Peek element is: %d\n", queue_array[front]);

    }

}
void display() {
    int i;

    if (front == -1 && rear == -1)
        printf("Queue is empty \n\n");
    else
    {
        printf("Queue elements : ");
        for (i = front; i < rear + 1; i++)
            printf("%d ", queue_array[i]);
        printf(" \n");
    }
    printf("\n");
}