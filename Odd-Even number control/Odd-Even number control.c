#include <stdio.h>

int main()
{
	int num;	
	
	printf("Please enter a number Let me check if odd or even => "); 
	scanf("%d",&num);
	
	
if(num%2==0){
	printf("The number you entered is an even number",num);
}
else if(num%2==1){
	printf("The number you entered is an odd number",num);
}
	
	return 0;
}
