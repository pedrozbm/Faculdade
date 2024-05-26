#include<stdio.h>
#include<stdlib.h>

main(){
int A[6][6];
int i,j,maior, menor;
maior=0;
menor=9999;
for (i = 0; i < 5; i++){
for (j = 0; j < 5; j++){
printf("Matriz [%d][%d] -->" ,i,j);
scanf("%d",&A[i][j]);
}
}
for (i = 0; i < 5; i++){
for (j = 0; j < 5; j++){
if(A[i][j]>maior){
maior=A[i][j];
}
else if(A[i][j]<menor){
    menor=A[i][j];
}
}
}
printf("maior numero eh %d e o menor numero eh %d", maior, menor);
}
