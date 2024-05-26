#include<stdio.h>
#include<stdlib.h>

main(){
int id1, id2;

printf("Informe duas idade:\n");
scanf("%d%d", &id1, &id2);

if(id1 > id2){
    printf("Maior idade = %d", id1);
}else{
printf("Maior idade = %d anos", id2);
}
}
