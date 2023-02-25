#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the height of the tree: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        // boþluklarý yazdýr
        for (j = 0; j < n-i-1; j++) {
            printf(" ");
        }
        // yýldýzlarý yazdýr
        for (j = 0; j < 2*i+1; j++) {
            printf("*");
        }
        printf("\n");
    }
    // gövdeyi yazdýr
    for (i = 0; i < 2; i++) {
        for (j = 0; j < n-1; j++) {
            printf(" ");
        }
        printf("*\n");
    }

    return 0;
}

