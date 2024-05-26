#include<stdio.h>
#include<stdlib.h>
main(){
int graus, fah;

printf("Informe a temperatura em graus:\n");
scanf("%d", &graus);

fah= (9*graus+160)/5;
printf("Graus em Fahreheit = %d", fah);
}
