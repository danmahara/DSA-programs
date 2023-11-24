#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// int arr[num];
int addElement(int num, int[]);
// void search(int num);
// int num = 10;
// int arr[];
int main() {
    int num;
    int i;
    int choice;
    printf("\nEnter how many elements want to store:\n");
    scanf("%d", &num);
    int arr[num];
    // printf("in main function Num is %d", num);

    printf("Enter %d elements in array\n", num);
    for (i = 0;i < num;i++) {
        printf("Enter array[%d] element:", i);
        scanf("%d", &arr[i]);
    }

    // addElement(num, arr);
    printf("What do you want to do: ");
    printf("1. Insert");
    scanf("%d", &choice);
    while (1)
    {
        switch (choice) {
        case 1:
            addElement(num, arr);
            break;

        case 2:
            // deletion();
            break;
        default:
            printf("Invalid choice");
            break;
        }
    }



    return 0;

    // search(num);
}


int addElement(int num, int arr[]) {
    int i;
    int newElement;
    printf("\n\nEnter how many elements want to store");
    scanf("%d", &newElement);

    int a = num + newElement;//to run loop
    arr[a];// to increase array size


    for (i = num;i < a;i++) {
        printf("\nEnter your array[%d] element", i);
        scanf("%d", &arr[i]);
    }
    printf("\nAll elements in array:");

    for (i = 0;i < a;i++) {
        printf("\nelement array[%d] is: %d", i, arr[i]);
    }


}
// void search(int num) {
//     int  element;
//     printf("Enter element want to search in array:\t");
//     scanf("%d", &element);

// }
