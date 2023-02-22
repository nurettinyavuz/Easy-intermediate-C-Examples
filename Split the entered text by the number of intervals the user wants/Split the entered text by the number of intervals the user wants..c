#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {  
	int i,n,j,count=0;
	char temp;
	printf("Sadece rakamlarin, harflerin ve '-'nin kullanidigi bir metin giriniz.\n");
	char str[50];
	gets(str);
	printf("Kacli grublara ayiracaksiniz: ");
	scanf("%d",&n);

	for(i=0;i<strlen(str);i++){
		if(str[i]=='-'){
			count++;
		}
	}
	for(j=1;j<=count;j++){
		for(i=0;i<strlen(str)-1;i++){
			if(str[i]=='-'){
				temp=str[i];
				str[i]=str[i+1];
				str[i+1]=temp;
			}	
		}
	}
	//str[strlen(str)-count]=0;
	for(i=0;i<strlen(str)-count;i++){
		str[i]=toupper(str[i]);
		printf("%c",str[i]);
		if((i+1)%n==0 && i+1!=strlen(str)){
			printf("-");
		}
	}
	return 0;	
}
