#include<stdlib.h>
#include<stdio.h>

//It is in Zone 1 (+,+)
//It is in Zone 1 (-,+)
//It is in Zone 1 (-,-)
//It is in Zone 1 (+,-) 

int main(){
	
	int n,i,j,a,b;
	int count1=0;
	int count2=0;
	int count3=0;
	int count4=0;
	
	
	printf("How many double numbers will you enter?: ");
	scanf("%d",&n);
	
	        //x  y
	int array[n][2];
	
	
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			scanf("%d",&array[i][j]);	
		}
		
	}
	
	printf("\n\n");
	for(i=0;i<n;i++){
		printf("(%d %d) \n\n",array[i][0],array[i][1]);
	}	
	
    for(i=0;i<n;i++){
			if(array[i][0]>0 && array[i][1]>0){
				printf("It is in Zone 1: (%d,%d) ",array[i][0],array[i][1]);
				count1++;
			}
			else if(array[i][0]<0 && array[i][1]>0){
				printf("It is in Zone 2: (%d,%d)  ",array[i][0],array[i][1]);
				count2++;
			}
			else if(array[i][0]<0 && array[i][1]<0){
				printf("It is in Zone 3: (%d,%d)  ",array[i][0],array[i][1]);
				count3++;
			}
			else if(array[i][0]>0 && array[i][1]<0){
				printf("It is in Zone 4: (%d,%d)  ",array[i][0],array[i][1]);
				count4++;
			}		
	}
	printf("\n\n\n\n");
	
	printf("1. There are %d units in the region \n",count1);
	printf("2. There are %d units in the region \n",count2);
	printf("3. There are %d units in the region \n",count3);
	printf("4. There are %d units in the region \n",count4);
	
	
	
	return 0;
}

