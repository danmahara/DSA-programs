#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int linearSearch(int[], int, int);
int main() {
    int num, i;
    printf("Enter how many number want to insert in array:\t");
    scanf("%d", &num);
    int arr[num];

    for (i = 0; i < num; i++)
    {
        printf("Enter element for a[%d]:\t", i + 1);
        scanf("%d", &arr[i]);
    }

    int  element;
    printf("Enter element want to search in array:\t");
    scanf("%d", &element);

    int value = linearSearch(arr, num, element);
    printf("The search value is %d\n", value);


    return 0; 
}

int linearSearch(int arr[], int num, int element) {
    int i, j;
    int temp;
    int flag = 0;
    int position;
    for (i = 0;i < num;i++) {
        // for (j = i + 1;j < num-1;j++) {
        if (arr[i] == element) {
            flag = flag + 1;
            temp = arr[i];
            position = i + 1;
            break;
        }
        // }
    }
    if (flag == 1) {
        printf("\nSearch is complete:\n");
    }
    else {
        printf("\nSearch is not complete:\n");
    }
    printf("Your element position is %d\n", position);
    return temp;
}