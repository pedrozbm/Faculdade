#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
int m[6], i;

for(i=1;i<6;i++){

    printf("Digite o valor %d ! \n", i);
    scanf("%d",&m[i]);
}
for(i=1;i<6;i++){

    printf("Endereco matriz = %p \n",&m[i]);
    printf("\n Conteudo matriz = %d \n", m[i]);
     printf("\n endereco - ponteiro = %p \n", m+i);
    printf("Conteudo ponteiro = %d \n",*(m+i))

}



}
