#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 3

int queue_array[MAX];

int front = -1, rear = -1;

void Dashboard() {
    printf("\n1.Insert element");
    printf("\n2.Delete element");
    printf("\n3.Peek element");
    printf("\n4.Display all element");
    printf("\n5.Exit");

    // printf("\nEnter your choice: \t");
    // scanf("%d", &choice);
}

void Insert() {

    int item;
    if ((rear + 1) % MAX == front) {
        printf("\nStack is full !\n");
    }
    else if (front == -1 && rear == -1) {
        front = rear = 0;

        // front++;
        // rear++;

        printf("\nEnter your element:\t");
        scanf("%d", &item); 
        queue_array[rear] = item;
    }


    else {
 
        rear = (rear + 1) % MAX;
        printf("\nEnter your element:\t");
        scanf("%d", &item);
        queue_array[rear] = item;

    }

}

void Delete() {

    if (front == -1 && rear == -1) {
        printf("\nQueue is empty.\n\n ");
    }

    else if (front == rear) {
        printf("\nDeleted from queue is %d\n\n", queue_array[front]);
        front = rear = -1;
    }

    else {

        printf("\nDeleted element from queue is %d\n\n", queue_array[front]);
        front = (front + 1) % MAX;

    }
}

void Peek() {

    if (front == -1 && rear == -1) {
        printf("\nQueue is underflow.\n\n");
    }

    else {
        printf("\nQueue front element is %d\n\n", queue_array[front]);
    }
}

void Display() {

    if (front == -1 && rear == -1) {
        printf("\nQueue is undeflow.\n\n");
    }
    else {
        int i = front;

        for (;i != rear;i = (i + 1) % MAX) {
            printf("\n%d", queue_array[i]);
        }
        printf("\n%d", queue_array[i]);
        printf("\n\n");
    }
}




int main() {

    int choice;

    while (1) {

        // printf("\n\nOperations are:\n");
        // printf("\n1.Insert element");
        // printf("\n2.Delete element");
        // printf("\n3.Peek element");
        // printf("\n4.Display all element");
        // printf("\n5.Exit");

        Dashboard();

        printf("\nEnter your choice: \t");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            Insert();
            break;
        case 2:
            Delete();
            break;
        case 3:
            Peek();
            break;

        case 4:
            Display();
            break;
        case 5:
            exit(1);
            break;
        default:
            printf("\nInvalid Input !\n\n");
        }

    }

    printf("\n");



    return 0;
}

