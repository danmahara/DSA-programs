#include <stdio.h>
int i;
void displayList(int arr[], int size) {
    printf("Displaying elements in list:\n");
    for ( i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int total, i;

    printf("\nEnter how many elements you want to insert into the list: ");
    scanf("%d", &total);

    int list_arr[total];

    for (i = 0; i < total; i++) {
        printf("\nEnter element for a[%d]: ", i);
        scanf("%d", &list_arr[i]);
    }

    displayList(list_arr, total);

    int position;
    printf("\nEnter the index position to delete: ");
    scanf("%d", &position);

    if (position >= 0 && position < total) {
        // Shift elements to the left starting from the deletion point
        for (i = position; i < total - 1; i++) {
            list_arr[i] = list_arr[i + 1];
        }

        total--; // Decrease the size of the array
        printf("\nDisplaying updated list array after deletion:\n");
        displayList(list_arr, total);
    }
    else {
        printf("\nInvalid position entered. No deletion performed.\n");
    }

    return 0;
}
