#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {

    int i, num;
    int choice;
    printf("Enter how many number want to insert in array");
    scanf("%d", &num);
    int list[num];

    for (i = 0;i < num;i++)
        scanf("%d", &list[i]);

    printf("\n");

    int count = 0;

    int search;
    printf("\nEnter the element you want to search:\t");
    scanf("%d", &search);
    for (i = 0;i < num;i++) {
        if (list[i] == search) {
            count++;
            break;
        }
    }

    if (count == 1) {
        printf("Element founds %d", list[i]);
        printf("\nElement position is %d", i + 1);
    }
    else {
        printf("Element not found");
    }

    return 0;
}