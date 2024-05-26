#include<stdio.h>
#include<stdlib.h>
#define L 2
#define C 2


main(){

int A[L][C], B[L][C] , S[L][C];
int i,j;
for (i = 0; i < L; i++){
for (j = 0; j < C; j++){
printf("Elemento Matriz 1[%i][%i] -->" ,i,j);
scanf("%d",&A[i][j]);
}}
for (i = 0; i < L; i++){
for (j = 0; j < C; j++){
printf("Elemento Matriz 2[%i][%i] -->" ,i,j);
scanf("%d",&B[i][j]);
}
}
printf("Primeira Matriz \n");

for (i = 0; i < L; i++){
for (j = 0; j < C; j++){
printf("%4d" ,A[i][j]);
}
printf("\n");
}
printf("Segunda Matriz \n");

for (i = 0; i < L; i++){
for (j = 0; j < C; j++){
printf("%4d" ,B[i][j]);
}
printf("\n");
}

for (i = 0; i < L; i++){
for (j = 0; j < C; j++){
S[i][j]= A[i][j]-B[i][j];}}
printf("Subtracao das Matrizes");
printf("\n");

for (i = 0; i < L; i++){
for (j = 0; j < C; j++){
printf("%4d", S[i][j]);}
printf("\n");
}
}
