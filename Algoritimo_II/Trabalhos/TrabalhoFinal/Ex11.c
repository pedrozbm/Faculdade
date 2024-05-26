#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
int *p, x, y = 10;
p = &x;

printf("Digite o valor de x \n");
scanf("%d",&x);
printf("valor de x eh = %d \n", x);
printf("ponteiro esta na posicao = %d \n",p);
printf("Digite um valor para y! \n");
scanf("%d",&y);
p = &y;
printf("A nova posicao do ponteiro eh -> %d",p);
}
