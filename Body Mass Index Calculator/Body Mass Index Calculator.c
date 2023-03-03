#include <stdio.h>
int main(){
     double boy,kilo,ind;

     printf("Kilonuz : "); 
	 scanf("%lf",&kilo);
     printf("Metre Cinsinden Boyunuz : "); 
	 scanf("%lf",&boy);
	 
     ind=kilo/(boy*boy);

     printf("Vucut kitle indeksiniz : %f \n", ind);
     if(ind<18)
          printf("Zayif");
     else if(ind>=18 && ind<25)
          printf("Normal");
     else if(ind>=25 && ind<30)
          printf("Kilolu");
     else if(ind>=30 && ind<40)
          printf("Obez");
     else
          printf("Ileri Derece Obez");
}
