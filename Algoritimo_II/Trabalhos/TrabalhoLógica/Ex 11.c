#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    float n1,n2,r;
    int z;

printf("Escolha uma Operação:\n (1) Soma\n (2) Ao quadrado\n (3) Multiplicacao \n (4) Divisao\n");
scanf("%d", &z);

    if(z == 1){
	printf("Informe um valor:\n");
	scanf("%f", &n1);

	printf("Informe um outro valor:\n");
	scanf("%f", &n2);

    	r = n1 + n2;

    	printf("Soma = %.2f", r);
   	}

    if(z == 2){
	printf("Informe um valor:\n");
	scanf("%f", &n1);

	printf("Informe um outro valor:\n");
	scanf("%f", &n2);

    	r = (n1*n1)+(n2*n2);

    	printf("Soma dos numeros Elevados = %.2f", r);
   	}

    if(z == 3){
	printf("Informe um valor:\n");
	scanf("%f", &n1);

	printf("Informe um outro valor:\n");
	scanf("%f", &n2);

    	r = n1*n2;

    	printf("Multiplicacao = %.2f", r);
   	}

    if(z == 4){
	printf("Informe um valor:\n");
	scanf("%f", &n1);

	printf("Informe um outro valor:\n");
	scanf("%f", &n2);

    	r = n1/n2;

    	printf("Divisao = %.2f", r);
   	}
}

