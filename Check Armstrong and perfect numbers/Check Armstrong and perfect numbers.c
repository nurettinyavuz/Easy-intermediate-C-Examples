#include <stdio.h>
 
int checkArmstrong(int n1);
int checkPerfect(int n1);
 
int main()
{
    int n1;
	printf("Function : check Armstrong and perfect numbers :\n");
	printf("-----------------------------------------------------\n"); 	
     
    printf(" Input any number: ");
    scanf("%d", &n1);
     
     
    if(checkArmstrong(n1))
    {
        printf(" The %d is an Armstrong number.\n", n1);
    }
    else
    {
        printf(" The %d is not an Armstrong number.\n", n1);
    }
     
    if(checkPerfect(n1))
    {
        printf(" The %d is a Perfect number.\n\n", n1);
    }
    else
    {
        printf(" The %d is not a Perfect number.\n\n", n1);
    }
    return 0;
}


int checkArmstrong(int n1) 
{
    int ld, sum, num;
    sum = 0;
    num = n1;
    while(num!=0)  
    {  
        ld = num % 10;  
        sum += ld * ld * ld;  
        num = num/10;  
    }
    return (n1 == sum);
}

int checkPerfect(int n1) 
{
    int i, sum, num;
    sum = 0;
    num = n1;
    for(i=1; i<num; i++)  
    {  
        if(num%i == 0)  
        {  
            sum += i;  
        }  
    }
    return (n1 == sum);
}
