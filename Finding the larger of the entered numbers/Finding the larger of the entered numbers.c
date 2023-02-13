#include <stdio.h>
#include <conio.h>


int main() {
	
	int piece,num,i;
	int big;
	
	printf("How many numbers will you enter?:  ");
	scanf("%d",&piece);
	
	for(i==0; i<piece; ++i){
		
		printf("%d)Enter of Number: ",i+1);
		scanf("%d",&num);
		
		if(i==0){
			big=num;
		}
		
		else{        
            if(big<num){
                big=num;
            }
        } 
	}
	
	printf("Largest number= %d", big);

    getch();
	return 0;
}
