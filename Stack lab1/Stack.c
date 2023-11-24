#include<stdio.h>
#include<stdlib.h>

#define MAX 5
int queue_array[MAX];
int rear = -1;
int front = -1;

void dashboard();
void insert();
void delete();
void peek();
void display();

int main() {

    int choice;
    while (1) {
        dashboard();

        printf("\nChoose your operations:\t");
        scanf("%d", &choice);

        switch (choice) {
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
            break;

        default:
            printf("\nInvalid Input\n");

        }


    }

    return 0;
}

void dashboard() {
    printf("\n1.Insert\n");
    printf("2.Delete\n");
    printf("3.Peek\n");
    printf("4.Display all elements\n");
    printf("5.Exit\n");

}
void insert() {

    int item;


    if (rear == MAX - 1) {
        printf("\nQueue is full.\n");
    }
    else if (front == -1 && rear == -1) {
        front = rear = 0;
        printf("\nInsert element in queue:\t");
        scanf("%d", &item);
        queue_array[rear] = item;

    }
    else {
        rear++;
        printf("Insert element in queue:\t");
        scanf("%d", &item);
        queue_array[rear] = item;
    }

}

void delete() {


    if (front == -1 && rear == -1) {
        printf("\nStack is empty:\n");
    }
    else if (front == rear) {
        printf("Element deleted from queue is %d\n", queue_array[front]);
        front = rear = -1;

    }
    else {

        printf("\nElement deleted from queue is : %d\n", queue_array[front]);
        front = front + 1;
    }

}

void peek() {
    if (front == -1 && rear == -1) {
        printf("\nQueue is empty:\n");
    }
    else {
        printf("\nPeek element is %d\n", queue_array[front]);
    }

}

void display() {
    int i;
    if (front == -1 && rear == -1) {
        printf("\nQueue is Empty:\n");
    }

    else {
        printf("\nQueue elements are:\n");

        for (i = front;i < rear + 1;i++) {
            printf("%d\n", queue_array[i]);

        }
    }

}