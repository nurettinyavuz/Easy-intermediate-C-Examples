#include <stdio.h>

int main()
{
	int num;	
	
	printf("Enter of Number => "); 
	scanf("%d",&num);
	
	if(num>=0){
		printf("The number you entered is positive: %d",num);
	}
	else if(num<0){
		printf("I made it positive because the number you entered is negative: %d",-num);
	}
	
	
	return 0;
}
