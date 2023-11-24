#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main() {

    int a[] = { 60,40,30,11,57,41,15,14,52 };
    int val = 41, n = 9, flag, i;


    printf("\n\nThe elements of array are: \n");
    for (i = 0;i < n;i++) {
        printf("%d\t", a[i]);
    }

    for (i = 0;i < n;i++) {
        if (a[i] == val) {
            flag = 1;
            break;
        }
    }

    printf("\nElement to be searched is : %d\n", val);
    if (flag == -1) {
        printf("\n Element is not present in the array ");
    } 
    else {
        printf("\n Element is present at %d position of array: \n\n", i + 1);
    }


    return 0;
}