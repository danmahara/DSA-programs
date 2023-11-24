#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    int array[10], i, j;
    int num;

    printf("Enter how many elements want to store in array:\t");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        printf("Enter a[%d] element:", i + 1);
        scanf("%d", &array[i]);
    }
    int delete;
    printf("Enter position  which element want to delete:\t");
    scanf("%d", &delete);

    for (i = delete - 1;i < num - 1;i++) {
     

        array[i] = array[i + 1];

    }

    for (i = 0;i < num-1;i++) {
        printf("%d \t", array[i]);
    }

    return 0;
}

