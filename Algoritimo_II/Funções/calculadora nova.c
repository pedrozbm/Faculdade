#include<stdio.h>
#include<stdlib.h>

int soma(int n1, int n2){
return  (n1+n2);
}
int sub(int n1, int n2){
return  (n1-n2);
}
int mult(int n1, int n2){
return  (n1*n2);
}
int divi (int n1, int n2){

return  (n1/n2);

}

main(){
int n1, n2, conta;
printf("digite os numeros: \n");
scanf("%d %d", &n1, &n2);
printf("Selecione a conta");
printf("1- soma, 2- subtracao, 3- multiplicacao, 4- divisao \n");
scanf("%d", &conta);
switch (conta){

case 1:
    printf("voce escolheu soma");
    printf("Soma = %d\n",soma(n1, n2));
    break;
case 2:
    printf("voce escolheu subtracao");
 printf("subtracao = %d\n",sub(n1, n2));
    break;
case 3:
    printf("voce escolheu multiplicacao");
     printf("multiplicacao = %d\n",mult(n1, n2));
    break;
case 4:
    printf("voce escolheu divisao");
     printf("divisao = %d\n",divi(n1, n2));
    break;
}
}
