#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    int i, j;
    int arr[10] = { 'U','N','I','V','E','R','S','I','T','Y' };
    for (i = 0;i < 10;i++) {
        // printf("first loop");
        for (j = 0;j <= i;j++) {
            printf("%c", arr[j]);

        }
        printf("\n");
    }
    return 0;
}