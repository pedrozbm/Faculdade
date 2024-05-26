#include<stdio.h>
#include<stdlib.h>

main(){
int n1, n2;

printf("Informe dois numeros:\n");
scanf("%d%d", &n1, &n2);

if(n1%2 == 0 && n2%2 == 0){

 printf("Pares: %d, %d", n1, n2);

}else if (n1%2 == 0 && n2%2 != 0){

printf("Pares: %d", n1);

}else if (n1%2 != 0 && n2%2 == 0){
printf("Pares: %d", n2);
}else{
printf("Nennhum dos numero eh par!");
}
}
