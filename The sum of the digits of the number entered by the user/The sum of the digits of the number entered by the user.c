#include <stdio.h>
int main(){
    int sayi,toplam = 0,temp; 
    printf("Bir sayi giriniz : ");    scanf("%d", &sayi);

    temp = sayi;    
    while(temp > 0){
        toplam = toplam + temp%10;
        temp = temp / 10;
    }

    printf("%d sayisinin rakamlarinin toplami : %d", sayi,toplam);
}
