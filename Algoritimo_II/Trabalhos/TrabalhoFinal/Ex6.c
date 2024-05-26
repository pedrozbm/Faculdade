#include <stdlib.h>
#include <stdio.h>

int imprime(int m[2][2], int *p){
int i,j;
for (i = 0; i <2 ; i++){
for (j = 0; j <2 ; j++){
        printf("\n");
//
printf("Elemento Matriz [%d][%d] --> %4d \n" ,i,j, *(p+i));

}}
}

main(){

int m[2][2];


int i,j;
for (i = 0; i <2; i++){
for (j = 0; j <2 ; j++){
printf("Elemento Matriz [%d][%d] -->" ,i,j);
scanf("%d",&m[i][j]);
}}
int *p = &m[0][0];


imprime(m, p);
}

