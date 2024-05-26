#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

   int dias;
    float preco;

printf("Informe quantos dias ana vai ficar no hotel! \n");
scanf("%d", &dias);

 if(dias == 3)
 {
 	preco = 80;
 	 	 printf("A diaria eh: R$ %.2f\n", preco);
 }
 if(dias == 5)
 {
 	preco = 100;
 	 printf("A diaria eh: R$ %.2f\n", preco);

 }
if(dias == 10)
{
	preco = 150;
	 printf("A Diaria eh: R$ %.2f\n", preco);
}
if(dias>10)
{
printf("Voce não pode morar no hotel meu bem...");
}
}
