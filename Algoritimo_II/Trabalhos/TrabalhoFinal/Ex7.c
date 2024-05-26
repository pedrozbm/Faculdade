#include <stdlib.h>
#include <stdio.h>

main(){


int *p, n;
int x=10;

p = &x; // atribuindo o valor da variavel diretamente para o ponteiro

printf("Digite um valor para variavel \n");
scanf("%d",&n);

printf("Ponteiro apontando para uma variavel definida= %d\n", *p);

*p=n ;

printf("Ponteiro apontando para a variavel digitada -> %d\n",*p);


}
