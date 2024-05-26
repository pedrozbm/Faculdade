#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){

int *p;
int x=10;

p = NULL;
printf("Ponteiro p indefinido = %d\n", p);
p = &x; // atribuindo o valor da variavel diretamente para o ponteiro

printf(" valor variavel X = %d\n",x);
printf("endereco da variavel x = %d\n", &x);
printf("ponteiro apontando para a posicao de x = %d\n",p);
printf("Conteudo do ponteiro = %d \n",*p);
}
