#include <stdio.h>

void display(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
int main() {
    int arr[] = { 12, 78, 25, 8, 32, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before sorting, array elements are - \n");
    display(arr, n);

    for (int i = 0; i < n - 1; i++) {
        int small = i; // Index of the minimum element in the unsorted subarray

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[small])
                small = j;
        }

        // Swap the minimum element with the first element of the unsorted subarray
        int temp = arr[i];
        arr[i] = arr[small];
        arr[small] = temp;
    }

    printf("\nAfter sorting, array elements are - \n");
    display(arr, n);
    return 0;
}