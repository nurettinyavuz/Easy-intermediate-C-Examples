#include <stdio.h>
#include <stdlib.h>

void fonksiyon(int array[], int b){
	int max = 0;
	int min = 0;
	int i;
	int toplam=0;
	
	for(i=0;i<b;i++){
		if(array[i]>array[max]){ //Dizinin en büyük elemanýnýn bulunduðu yer
			max = i;
		}
		if(array[i]<array[min]){ //Dizinin en küçük elemanýnýn bulunduðu yer
			min = i;
	    }
	    toplam += array[i]; //Dizinin elemanlarý toplamýnýn bulunduðu yer
    }
	double ort = (double)toplam/b;
	printf("Dizinin en kucuk elemani: %d\nDizinin en buyuk elemani: %d\nDizinin aritmetik ortalamasi: %.3lf",array[min],array[max],ort);
}
int main() {
	int *dizi;
	int n,i;
	
	printf("Dizi kac elemanli olsun: "); //Dizinin eleman sayýsýnýn kullanýcýdan alýndýðý yer
	scanf("%d",&n);
	
	dizi = (int*)malloc(n*sizeof(int));

	for(i=0;i<n;i++){ //Dizinin elemanlarýnýn kullanýcýdan alýndýðý yer
		printf("Dizinin %d. elemani: ",i+1);
		scanf("%d",&dizi[i]);
	}
	fonksiyon(dizi,n);
	
	free(dizi);	
    
	return 0;
}
