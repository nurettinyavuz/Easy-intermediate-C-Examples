#include <stdio.h>

int main() {
    int n, i, j, temp, swap_count;
    int arr[100];

    printf("Lutfen dizinin boyutunu girin: ");
    scanf("%d", &n);

    printf("Lutfen dizinin elemanlarini girin:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Diziyi sýralama
    swap_count = 0;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap_count++;
            }
        }
        if (swap_count == 0) {
            break;
        }
    }

    // Sýralanmýþ diziyi ekrana yazdýrma
    printf("Siralanan dizi:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

