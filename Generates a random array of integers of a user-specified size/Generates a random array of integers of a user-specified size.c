#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int size, i;
    int *arr;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = (int*) malloc(size * sizeof(int));

    srand(time(0));

    for(i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }

    printf("The randomly generated array:\n");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}

