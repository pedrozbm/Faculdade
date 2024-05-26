#include <stdio.h>
#include <stdlib.h>
main()
{
int idade;

printf ("Digite a sua idade\n");
scanf("%d", &idade);

if(idade <= 12){
printf("Voce tem %d e eh uma criança\n %d", idade);}
if(idade <= 19){
printf("Voce tem %d e eh um adolescente\n %d", idade);}
if(idade <= 60){
printf("Voce tem %d e eh um adulto\n %d", idade);
}
else{
printf("Voce tem %d e eh um idoso\n %d", idade);
}
}
