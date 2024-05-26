#include<stdio.h>
#include<stdlib.h>
float soma(float a, float b){
      return a + b;
      }
float divisao(float a, float b){
      return soma(a,b)/2;
      }
main(){
       float a,b;
       printf("digite 2 numeros\n");
       scanf("%f%f",&a,&b);
      printf("Resultado da soma = %.2f\n",soma(a,b)) ;
      printf("Resultado de %.2f/2 = %.2f\n",soma(a,b),divisao(a,b)) ;
}
