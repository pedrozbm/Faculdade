#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
int m[5], i;

for(i=0;i<5;i++){

    printf("Digite o valor %d da matriz constante! \n", i);
    scanf("%d",&m[i]);
}
for(i=0;i<5;i++){

    printf("\n Endereco matriz constante = %p ",&m[i]);
    printf("\n Conteudo matriz constante = %d \n", m[i]);


}}
