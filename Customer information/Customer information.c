#include <stdio.h>
#include <stdlib.h>

struct musteri{
	char ad[20];
	char soyad[20];
	char adres[50];
};

int main(){
	struct musteri bilgi;
	printf("Musteri ad: ");
	gets(bilgi.ad);
	printf("Musteri soyad: ");
	gets(bilgi.soyad);
	printf("Musteri adres: ");
	gets(bilgi.adres);
	
	FILE *fp;
	
	fp = fopen("musteribilgi.txt","w+");
	
	fputs(bilgi.ad,fp);
	fputs("\n",fp);
	fputs(bilgi.soyad,fp);
	fputs("\n",fp);
	fputs(bilgi.adres,fp);
	
	fseek(fp,0,SEEK_SET);  //rewind(fp) de kullanılabilirdi.
	
	fgets(bilgi.ad,20,fp);
	fgets(bilgi.soyad,20,fp);
	fgets(bilgi.adres,50,fp);
	
	printf("%s%s%s",bilgi.ad,bilgi.soyad,bilgi.adres);
	
	fclose(fp);
	
	return 0;
}
