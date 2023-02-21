#include <stdio.h>
#include <string.h>

int main() {
	char str[3],str2[6],temp2;
	int x,i,mod,temp;
	printf("Autoformic numbers between 1-100:\n");
	for(x=1;x<100;x++){
		temp=x;
		i=0;
		while(x){
			mod=x%10;
			x=x/10;
			str[i++]='0'+mod;
		}
		str[i]='\0';
		
		for(i=0;i<strlen(str)/2;i++){
			temp2=str[i];
			str[i]=str[strlen(str)-(i+1)];
			str[strlen(str)-(i+1)]=temp2;
		}
		x=temp;
		x=x*x;
		i=0;
		while(x){
			mod=x%10;
			x=x/10;
			str2[i++]='0'+mod;
		}
		str2[i]='\0';
		
		for(i=0;i<strlen(str2)/2;i++){
			temp2=str2[i];
			str2[i]=str2[strlen(str2)-(i+1)];
			str2[strlen(str2)-(i+1)]=temp2;
		}
		x=temp;
		if(str[strlen(str)-1]==str2[strlen(str2)-1] && x<10){
			printf("%s is an autoformic number.\n",str);
		}
		if(str[strlen(str)-1]==str2[strlen(str2)-1] && str[strlen(str)-2]==str2[strlen(str2)-2] && x>=10){
			printf("%s is an autoformic number.\n",str);
		}
	}
	return 0;
}
