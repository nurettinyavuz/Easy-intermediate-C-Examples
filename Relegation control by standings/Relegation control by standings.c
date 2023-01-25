#include<stdio.h>
#include<stdlib.h>


int main(){
	
	int point[10];
	int i,score=0;
		
	printf("If you win=>2 \n");
	printf("If you got a draw=>0 \n");
	printf("If you lost=>1 \n");

	printf("\n\n");

for(i=0;i<10;i++){
	printf("for match %d:",i+1);
	scanf("%d",&point[i]);
}	
	
	//I didn't write for defeat because loss doesn't get points
	for(i=0;i<10;i++){
		
		if(point[i]==2){
			score=score+3;
		}
		if(point[i]==0){
			score=score+1;
		}
	}
	
	if(score>=12){
	 printf("You have %d points and you will be relegated",score);	
	}
	else if(score<12){
	 printf("You have %d points and you will not be relegated",score);	
	}
	
	
	return 0;
}
