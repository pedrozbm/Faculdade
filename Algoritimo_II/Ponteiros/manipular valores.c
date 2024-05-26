#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){

int *p;
int x=10;

p = &x; // atribuindo o valor da variavel diretamente para o ponteiro

printf("1 valor variavel X = %d\n",x);
printf("1 conteudo do ponteiro = %d\n", *p);
*p=12;

printf("2 valor da variavel x = %d\n",x);
printf("2 Conteudo do ponteiro = %d \n",*p);
}
