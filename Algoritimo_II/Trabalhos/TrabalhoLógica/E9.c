#include<stdio.h>
#include<stdlib.h>

main(){
int n1, n2;

printf("Informe dois numeros");
scanf("%d%d", &n1, &n2);

if(n1 > n2){
printf("Numero maior:%d", n1);
}else {
printf("Numero maior:%d", n2);
}
}
