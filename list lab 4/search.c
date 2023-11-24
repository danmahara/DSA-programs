#include <stdio.h>  

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;  // Return the index if the target is found  
        }
    }
    return -1;  // Return -1 if the target is not found  
}

int main() {

    int total;
    printf("\nEnter how many elements you want to insert into list\t");
    scanf("%d", &total);
    int arr[total];

    for (int i = 0;i < total;i++) {
        printf("\nEnter element for a[%d]", i);
        scanf("%d", &arr[i]);
    }
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the number of elements in the array  

    int target;
    printf("\nEnter element want to search\t");
    scanf("%d", &target);

    int result = linearSearch(arr, n, target);

    if (result == -1) {
        printf("Element not found\n");
    }
    else {
        printf("Element found at index %d\n", result);
    }

    return 0;
}