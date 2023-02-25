#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, **matrix;

    printf("Lutfen matris boyutunu girin: ");
    scanf("%d", &n);

    // Bellekten matris için yer ayýrma
    matrix = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++) {
        matrix[i] = (int *)malloc(n * sizeof(int));
    }

    // Matrisi doldurma
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Lutfen [%d][%d] elemanini girin: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Matrisi ekrana yazdirma
    printf("Girilen matris:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Bellekten matris için ayrýlan yeri serbest býrakma
    for (i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}

