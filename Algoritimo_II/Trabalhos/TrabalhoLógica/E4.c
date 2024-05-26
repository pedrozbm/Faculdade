#include<stdio.h>
#include<stdlib.h>

main(){
int n1, n2, n3, v;

printf("Informe o comprimento, a altura e a largura do cubo, respectivamente:\n");
scanf("%d%d%d", &n1, &n2, &n3);

v = n1*n2*n3;

printf("Volume do cubo = %d", v);
}
