#include <stdio.h>
#include <stdlib.h>

main()
{
int n1,n2,eu;

printf("Bem vindo ao Game of The Year 2020 Corona Edition \n");
printf("Vamos jogar? \n");
printf("[1]sim   [2]nao \n");
scanf("%d", &n1);
if(n1 == 1)
{
printf("Vamos la!! \n");
printf("Digite um numero!! \n");
scanf("%d", &n2);
eu = n2+652;
printf("Seu numero eh %d e o meu eh %d \n" ,n2,eu);
printf("Portanto, meu numero eh maior, entao vc perdeu \n Mais sorte na proxima...");
}
if(n1 == 2){
    printf("Eu sei que vc quer jogar \nAgora vc vai ter que fechar o programa e abrir de novo");
}
else{
printf("Por obsequio, somente os numeros um e dois...");
}
}
