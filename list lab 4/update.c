#include<stdio.h>
#include<stdlib.h>

int main() {

    int total;
    printf("\nEnter how many elements you want to insert into list\t");
    scanf("%d", &total);
    int list_arr[total];

    for (int i = 0;i < total;i++) {
        printf("\nEnter element for a[%d]", i);
        scanf("%d", &list_arr[i]);
    }

    printf("Displaying elements in list:\n");
    for (int i = 0;i < total;i++) {
        printf("%d ", list_arr[i]);

    }

    int newElement;
    printf("\nEnter new element to update \t");
    scanf("%d", &newElement);
    int position;
    printf("\nEnter the index position to update \t");
    scanf("%d", &position);

    // if (position<-1 || position>total) {
    //     printf("Position error");
    // }
    // else {
    list_arr[position] = newElement;
    // }

    printf("Displaying update list array\n");
    for (int i = 0;i < total;i++) {
        printf("%d ", list_arr[i]);
    }
    printf("\nExiting....");
    return 0;

}