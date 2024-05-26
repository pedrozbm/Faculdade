#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){

int *p = NULL;
float *p2 = NULL;
double *p3 = NULL;

p++;
p2++;
p3++;
printf("Tipo inteiro ocupa %d bytes \n", p);
printf("Tipo float ocupa %d bytes \n", p2);
printf("Tipo Double ocupa %d bytes \n", p3);
}
