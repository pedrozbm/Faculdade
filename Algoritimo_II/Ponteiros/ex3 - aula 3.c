#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){

int m[6] = {72, 58, 48, 39, 5};
int *p = m, i;



for(i = 0; i<5;i++){
    printf(" \nConteudo ponteiro variavel = %d \n",*(p+i) );
    printf(" \nEndereco ponteiro variavel = %p \n",(p+i) );

}

}
