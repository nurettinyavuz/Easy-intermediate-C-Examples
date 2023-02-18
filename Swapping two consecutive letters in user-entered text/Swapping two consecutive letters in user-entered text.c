#include <stdio.h>
#include <string.h>

int main() {
	printf("Enter text of up to 20 characters.\n");
	char str[20];
	gets(str);
	char temp;
	int i;
	for(i=0;i<strlen(str);i+=2){                    
		if(i==strlen(str)-1){
			temp=str[i];
			str[i]=' ';
			str[i+1]=temp;
			str[i+2]='\0';
		}
		else{
			temp=str[i];                 
		    str[i]=str[i+1];              
		    str[i+1]=temp;   
		}
	}
	printf("%s",str);
	return 0;
}
