#include<stdio.h>

double fact(double n) {
    if (n < 0)
        return 0;
    else if (n == 0 || n == 1) {
        return 1;
    }
    return fact(n - 1) * n;
}

int main() {
    printf("Enter a number to find factorial of: \t");
    double num;
    scanf("%lf", &num);

    if (num < 0) {
        printf("Please enter a non-negative number.\n");
    }
    else {
        double result = fact(num);
        printf("Factorial is: %.0lf\n", result);
    }

    return 0;
}
