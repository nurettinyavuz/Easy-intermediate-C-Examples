#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the height of the tree: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        // bo�luklar� yazd�r
        for (j = 0; j < n-i-1; j++) {
            printf(" ");
        }
        // y�ld�zlar� yazd�r
        for (j = 0; j < 2*i+1; j++) {
            printf("*");
        }
        printf("\n");
    }
    // g�vdeyi yazd�r
    for (i = 0; i < 2; i++) {
        for (j = 0; j < n-1; j++) {
            printf(" ");
        }
        printf("*\n");
    }

    return 0;
}

