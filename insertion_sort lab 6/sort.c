#include<stdio.h>
int main()
{
    int i, j, temp;
    int a[] = { 12, 71, 25, 2, 32, 1 };
    int n = sizeof(a) / sizeof(a[0]);// store array size ( 4*6=24 )  24/4=6
    printf("Before sorting array elements are - \n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\nAfter sorting array elements are - \n");

    for (i = 1; i < n; i++) {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && temp <= a[j])  /* Move the elements greater than temp to one position ahead from their current position*/
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = temp;
    }
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}