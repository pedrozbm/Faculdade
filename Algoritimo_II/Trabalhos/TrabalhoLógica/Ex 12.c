#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    char nome[40];
    float n1, n2, med;


    printf("Informe o nome do aluno\n");
    scanf("%s", &nome);



printf("Informe a primeira nota do aluno:\n");
scanf("%f", &n1);

printf("Informe a segunda nota  do aluno:\n");
scanf("%f", &n2);

med = (n1+n2)/2;

 if(med >= 7)
 {
 	 printf("Nome: %s\n Media: %f\n", nome, med);
 	 printf("Aluno aprovado!!\n\n");
 } else if(med >= 5.1 && med <= 6.9)
 {
 	 printf("Nome: %s\n Media: %f\n", nome, med);
 	  printf("Aluno de recuperacao\n\n");
 }else if(med <= 5)
{
	 printf("Nome: %s\n Media: %f\n", nome, med);
	  printf("Aluno Reprovado\n\n");
}
}

