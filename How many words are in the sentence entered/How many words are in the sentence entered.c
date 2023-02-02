#include<stdio.h>
#include<stdlib.h>



int main(){
	
	char sentence[100]; 
	int counter = 1;
	int count[50]={0};
	
	printf("Write a Sentence: ");
	gets(sentence);
	
	int i=0;

    if(strlen(sentence) > 500){
        printf("You entered a very long sentence!");
    }
    
    else{
        for ( i = 0; i < strlen(sentence); i++)
        {
          if(sentence[i] == ' '){
            counter++;
            }
        }
        printf("\nThere are %d words in the entered sentence", counter);
    }
	
	return 0;
}
