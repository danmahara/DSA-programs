#include <stdio.h>  
int main() {
    int a[] = { 80,40,10,150,55 };
    int val = 40;
    int n = 5, i, flag;

    printf("\n\nThe elements of the array are: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
        
    for (i = 0; i < n; i++)
    {
        flag = 0;
        if (a[i] == val) {
            flag = 1;
            break;
        }
    }
    printf("\nElement to be searched is - %d", val);

    if (flag == 1)
        printf("\n Element is present in the array at location %d \n", i + 1);
    else
        printf("\nElement is not present\n");
    return 0;

}