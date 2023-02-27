#include <stdio.h>

int main() {
    int n, i, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of negative numbers cannot be calculated.\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("%d! = %d\n", n, factorial);

    return 0;
}

