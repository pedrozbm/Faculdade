#include <stdlib.h>
#include <stdio.h>

main(){

int n1 = 5;
float n2 = 10;
char n3 = 'p';

int *p1;
float *p2;
char *p3;

p1 = &n1;
p2 = &n2;
p3 = &n3;

printf("1 Valor da variavel inteiro: %d \n", *p1);
printf("1 Valor da variavel Real: %f \n", *p2);
printf("1 Valor da variavel char: %c \n", *p3);

*p1 = 10;
*p2 = 15;
*p3 = 'f';

printf("Valor alterado variavel inteiro: %d \n", *p1);
printf("Valor alterado da variavel Real: %f \n", *p2);
printf("Valor alterado da variavel char: %c \n", *p3);

}
