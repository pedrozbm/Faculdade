#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){

int *p, *p2;
//os ponteiros podem ser iguais se apontarem uma mesma variavel
printf("posicao do ponteiro 1 = %d\n", p);
printf("posicao do ponteiro 2 = %d\n", p2);

if(p==p2){
    printf("os ponteiros tem posicoes iguais");
}
if(p!=p2){
    printf("\nOs ponteiros tem posicoes diferentes\n");
    }
    if(p>p2){
        printf("Ponteiro 1 ocupa uma posicao maior\n");
    }
     if(p<p2){
        printf("Ponteiro 2 ocupa uma posicao maior\n");
    }
}
