#include <stdio.h>
#include <stdlib.h>


int main(){
int i,j,num,incoming=0;

printf("Number of students in the class: ");
scanf("%d",&num);

int clas[num][30];


  for(i=0;i<num;i++){ //Number of students
    for(j=0;j<30;j++){ //Number of Days
        printf("Did the %d student come to school on the %d day??(Yes=>1)(No=>0):",i+1,j+1);
        scanf("%d",&clas[i][j]);  
        }
     }
  
  printf("\n\n");
  
  printf("------------------------------------------------------------------------------------------\n\n");
   
  for(i=0;i<num;i++){
      printf("%d.Student:",i+1);
    for(j=0;j<30;j++){
      printf("%d",clas[i][j]);
    }    
    printf("\n");
 }
 
   printf("------------------------------------------------------------------------------------------\n\n");

 
  for(j=0;j<30;j++){ //Day loop
    for(i=0;i<num;i++){//Check if the student has arrived
        incoming=incoming+clas[i][j];
        }
        printf("\nNumber of people arriving on the %d. day:%d \n",j+1,incoming);
        incoming=0;
    }
    
        return 0;
    }
