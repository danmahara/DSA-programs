#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 3

int stack[MAX];
int top = -1;
void push();
void pop();
void peek();
void display();

int main() {  
    printf("\n~~~~~~~~~~~~~~~~~Stack operations~~~~~~~~~~~~~~~\n\n");

    while (1) {
        printf("\n1. Push operation");
        printf("\n2. Pop operaiton");
        printf("\n3. Peek operation");
        printf("\n4. Display operaiton");
        int choice;
        printf("\n\nK garxas number thich:");
        scanf("%d", &choice);
        printf("\n");
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
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
            printf(" \nMuji j pai tei na han\n\n");
            break;
        }

    }
    printf("\n");


    return 0;
}

void push() {

    int a;

    if (top == MAX - 1) {
        printf("\n\nElement atena khatey: Stack full vaisakyo\n");
    }
    else {
        printf("\n\nTero element han :");
        scanf("%d", &a);
        top = top + 1;
        stack[top] = a;
    }

}

void pop() {
    if (top == -1) {
        printf("\n\nTero stack ma kei xaina\n ");
    }
    else {
        top = top - 1;
        printf("\nTero stack ko value %d delete vaisakyo fuchhe.\n", stack[top+1]);
    }
}
void peek() {

    if (top == -1) {
        printf("\nTero stack ma kei pani xaina bhai:\n");
    }
    else {
        printf("\nTero top stack ko value %d ho vai.\n", stack[top]);
    }

}
void display() {
    int i;
    if (top == -1) {
        printf("\n\nTero stack ma kei pani xaina yr kati choti vanam?\n");
    }
    else {
        printf("\n\nTero stack ko value haru tala her:");
        for (i = top;i >= 0;i--) {
            printf("\n%d\n", stack[i]);
        }
    }
}
