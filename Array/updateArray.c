#include<stdio.h>
#include<conio.h>


int main() {

    int i, num;
    int choice;
    printf("Enter how many number want to insert in array");
    scanf("%d", &num);
    int list[num];

    for (i = 0;i < num;i++)
        scanf("%d", &list[i]);

    printf("\n");

    printf("Enter which position element want to insert?\t");
    scanf("%d", &choice);


    printf("Enter new element want to update");
    int newElement;

    scanf("%d", &newElement);

    list[choice - 1] = newElement;


    for (i = 0;i < num;i++)
        printf("%d\t", list[i]);


    return 0;
}