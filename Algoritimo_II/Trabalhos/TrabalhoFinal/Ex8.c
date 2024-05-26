#include <stdlib.h>
#include <stdio.h>


main(){
int m[5], i;
for(i=0;i<5;i++){
printf("Digite o valor %d do vetor! \n", i);
scanf("%d",&m[i]);
}
for(i=0;i<5;i++){
printf("\n Endereco vetor = %p ",&m[i]);
printf("\n Conteudo vetor = %d \n", m[i]);
}}
