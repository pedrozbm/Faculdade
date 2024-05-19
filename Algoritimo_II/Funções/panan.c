#include <stdio.h>
#include <stdlib.h>
main()

{
float n1[11],n2, soma = 0;
int i;

 for(i=1; i<=10; i++){
    printf("Informe o valor do produto %d \n", i);
    scanf("%f", &n1[i]);
    soma = soma + n1[i];
}
for(i= 1; i<=5; i++){
    printf("O %d  eh %.2f \n",i,n1[i]);
}
printf("A soma total eh %.2f", soma);
}
