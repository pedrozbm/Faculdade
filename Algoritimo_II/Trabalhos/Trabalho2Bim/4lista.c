#include<stdio.h>
#include<stdlib.h>

main(){
int A[4][4];
int i,j,cont;
cont = 0;
for (i = 0; i < 3; i++){
for (j = 0; j < 3; j++){
printf("Matriz [%d][%d] -->" ,i,j);
scanf("%d",&A[i][j]);
}
}
printf("--------MatriZ--------");
for (i = 0; i < 3; i++){
for (j = 0; j < 3; j++){
printf("%4d",A[i][j]);
}
printf("\n");
}
for (i = 0; i < 3; i++){
for (j = 0; j < 3; j++){
if(A[i][j]%2 == 0){
cont = cont+1;
}
}
}
printf("Sao %d numeros pares", cont);
}
