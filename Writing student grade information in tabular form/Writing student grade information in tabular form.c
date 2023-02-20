#include <stdlib.h>
#include <stdio.h>

int main (){
	
	int n,i;
	int avarage[100];
	
	printf("Class size: ");
	scanf("%d",&n);
	getchar();
		
	int notes[n][2];
	char names[n][20];
	
	for(i=0;i<n;i++){
		printf("%d. Enter the student's name: ",i+1);
		gets(names[i]);
	}
	
	for(i=0;i<n;i++){
	    printf("Enter %s's Visa grade: ",names[i]);
		scanf("%d",&notes[i][0]);
		printf("Enter %s's Final grade: ",names[i]);
		scanf("%d",&notes[i][1]);
		avarage[i]=notes[i][0]*0.4+notes[i][1]*0.6;
	}
	
	printf("\n\n");
	printf("Who \t\tVisa\tFinal\tAvarage\n");
    for(i=0;i<n;i++){
    	printf("%s \t\t%d\t%d\t%d\n",names[i],notes[i][0],notes[i][1],avarage[i]);
    }

	return 0;
}
