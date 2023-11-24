#include<stdio.h>
#include<stdio.h>
int main() {

    int total;
    printf("\nEnter how many elements you want to insert into list\t");
    scanf("%d", &total);
    int list_arr[total];

    for (int i = 0;i < total;i++) {
        printf("\nEnter element for a[%d]", i + 1);
        scanf("%d", &list_arr[i]);
    }

    printf("\nDisplaying all elements from list\n");
    for (int i = 0;i < total;i++) {
        printf("\nElement [%d] is %d", i + 1, list_arr[i]);
    }

    return 0;
}