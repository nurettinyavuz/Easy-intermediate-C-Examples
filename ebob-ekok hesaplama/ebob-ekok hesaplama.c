#include <stdio.h> //Kütüphanelerimizi ekliyoruz.
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
int main(){
 int a,aa,b,bb,c,d,e,i,ii,ij,ik;
printf("Ilk Sayiyi Giriniz = ");
 scanf("%d",&a);
 printf("\n");
 printf("Ýkinci Sayiyi Giriniz = ");
 scanf("%d",&b);
 printf("\n");
 c=2;
 d=1;
 e=1;
 aa=a;
 bb=b;
 for(i=0;i<100;i++){ 
 for(ii=0;ii<100;ii++){
if(a%c==0 && b%c==0 ){ 
 a=a/c;
 b=b/c;
d=d*c;
 e=e*c;
continue; 
 }
 }
 for(ij=0;ij<100;ij++){
if(a%c!=0 && b%c==0 ){ 
b=b/c;
d=d*c;
continue;
 }
 }
for(ik=0;ik<100;ik++){
 if(a%c==0 && b%c!=0 ){ 
a=a/c;
d=d*c;
c++;
 continue;
 }}
if(a%c!=0 && b%c!=0 ){
 c++;
 }
 }
printf("%d ve %d sayilarinin ekoku = %d\n", aa, bb, d); 
printf("%d ve %d sayilarinin ebobu = %d", aa, bb, e);
getch(); 
 return 0;
 }
