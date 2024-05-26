#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){

int *p, x;
p = &x;

printf("Digite o valor de x \n");
scanf("%d",&x);

printf("valor de x eh = %d \n", x);
printf("ponteiro esta na posicao = %d ",p);

}
