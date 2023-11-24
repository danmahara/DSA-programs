#include <stdio.h>

void insertElement(int arr[], int* size, int element, int position) {
    if (*size < 0 || position < 0 || position > *size) {
        printf("Invalid position for insertion\n");
        return;
    }

    for (int i = *size; i > position && i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    (*size)++;
}

void deleteElement(int arr[], int* size, int position) {
    if (*size <= 0 || position < 0 || position >= *size) {
        printf("Invalid position for deletion\n");
        return;
    }

    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*size)--;
}

int searchElement(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i; // Return index if element is found
        }
    }
    return -1; // Return -1 if element is not found
}

void updateElement(int arr[], int size, int position, int newElement) {
    if (position < 0 || position >= size) {
        printf("Invalid position for update\n");
        return;
    }
    arr[position] = newElement;
}

int main() {
    int arr[100]; // Array to store elements
    int size = 0; // Current size of the array
    int choice;

    printf("Enter how many elements you want to store in the array: ");
    scanf("%d", &size);

    if (size < 0 || size > 100) {
        printf("Invalid array   size\n");
        return 1;
    }

    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    while (1) {
        // printf("\nArray: ");
        // for (int i = 0; i < size; i++) {
        //     printf("%d ", arr[i]);
        // }
        printf("\n\n");
        printf("1. Insert element\n");
        printf("2. Delete element\n");
        printf("3. Display array elements\n");
        printf("4. Search element\n");
        printf("5. Update element\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1: {
            int element, position;
            printf("Enter the element to insert: ");
            scanf("%d", &element);
            printf("Enter the position to insert at: ");
            scanf("%d", &position);
            insertElement(arr, &size, element, position);
            break;
        }
        case 2: {
            int position;
            printf("Enter the position to delete from: ");
            scanf("%d", &position);
            deleteElement(arr, &size, position);
            break;
        }
        case 3:
            printf("Array elements:\n");
            for (int i = 0; i < size; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;
        case 4: {
            int element, index;
            printf("Enter the element to search for: ");
            scanf("%d", &element);
            index = searchElement(arr, size, element);
            if (index != -1) {
                printf("Element %d found at index %d\n", element, index);
            }
            else {
                printf("Element %d not found in the array\n", element);
            }
            break;
        }
        case 5: {
            int position, newElement;
            printf("Enter the position to update: ");
            scanf("%d", &position);
            printf("Enter the new element: ");
            scanf("%d", &newElement);
            updateElement(arr, size, position, newElement);
            break;
        }
        case 6:
            printf("Exiting...\n");
            return 0;
        default:
            printf("Invalid choice\n");
            break;
        }
    }

    return 0;
}
