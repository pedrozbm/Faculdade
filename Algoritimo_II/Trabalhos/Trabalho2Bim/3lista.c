#include<stdio.h>
#include<stdlib.h>

main()
{
int l,c;
int i,j;
int A[20][20];
printf("Quantas linhas?\n");
scanf("%d", &l);
printf("Quantas Colunas?\n");
scanf("%d", &c);
for (i = 0; i < l; i++){
for (j = 0; j < c; j++){
printf("Elemento Matriz [%i][%i] -->\n" ,i,j);
scanf("%d",&A[i][j]);
}
}
printf("---------MATRIZ-------- \n");
for (i = 0; i < l; i++){
for (j = 0; j < c; j++){
printf("%4d",A[i][j]);
}
printf("\n");
}
}
