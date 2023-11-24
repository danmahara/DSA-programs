#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {

    int array[10], i, j;
    int num;

    printf("Enter how many number want to insert in array:\t");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        printf("Enter element for a[%d]:\t", i + 1);
        scanf("%d", &array[i]);
    }

    int oldElement;
    int newElement;
    printf("Enter which element want to replace with:\t");
    scanf("%d", &oldElement);
    printf("\nEnter new element:\t");
    scanf("%d", &newElement);

    for (i = 0;i < num;i++) {
        for (j = i + 1;j < num;j++) {
            if (array[i] == oldElement)
                array[i] = newElement;
            break;
        }
    }



    for (i = 0; i < num; i++)
    {
        printf("%d\n", array[i]);
    }

    return 0;
}