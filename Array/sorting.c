#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    int array[10];
    int i, j;

    int num;

    printf("Enter how many number want to insert in array <10:\t");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Your entered elements in array are:");
    for (i = 0;i < num;i++) {
        printf("\n%d\t", array[i]);
    }
    int search;


    // sorting 
    for (i = 0;i < num;i++) {
        for (j = i + 1;j < num;j++) {
            if (array[i] < array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;

            }
        }
    }
    
    
    printf("\nDisplaying in Descending order:\n");
    for (i = 0;i < num;i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}
