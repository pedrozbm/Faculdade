#include <stdlib.h>
#include <stdio.h>

main(){

int p1 ,p2 ;

if(&p1>&p2){
    printf("Endereco da primeira variavel eh maior -> %d \n", &p1);
}
if(&p2>&p1){
    printf("Endereco da segunda Variavel eh maior -> %d \n", &p2);
}



}
