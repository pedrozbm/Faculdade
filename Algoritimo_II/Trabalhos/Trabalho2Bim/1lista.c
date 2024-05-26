#include<stdio.h>
#include<stdlib.h>
#define L 2
#define C 2

main(){

int A[L][C];
int i,j;
for (i = 0; i < L; i++){
for (j = 0; j < C; j++){
printf("Matriz [%d][%d] -->" ,i,j);
scanf("%d",&A[i][j]);
}
}
printf("matriz original \n");
for (i = 0; i < L; i++){
for (j = 0; j < C; j++){
printf("%4d", A[i][j]);
}
printf("\n");
}
printf("Matriz Diagonal \n");
for (i = 0; i < L; i++){
for (j = 0; j < C; j++){
if (i!=j){
A[i][j]=0;
}
printf("%4d", A[i][j]);
}
printf("\n");
}
}
