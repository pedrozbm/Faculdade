#include<stdio.h>
#include<stdlib.h>

main(){

int id;

printf("Informe sua idade\n");
scanf("%d", &id);

if(id <= 12){
    printf("Voce eh uma crianca\n");
}else if (id > 12 && id <= 19){
    printf("Voce eh um adolescente\n");
}else if(id > 19 && id <=60){
    printf("Voce eh um adulto, tem responsabilidades\n");
}else{
    printf("Voce eh um idoso, fica esperto com o corona\n");
}
}
