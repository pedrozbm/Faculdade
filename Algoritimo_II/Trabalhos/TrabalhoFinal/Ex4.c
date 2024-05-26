#include <stdlib.h>
#include <stdio.h>

main(){

int p[5];
int i;
for(int i = 1; i<=4; i++ ){
printf("Digite os valores da matriz ! \n");
scanf("%d", &p[i]);
}
for(int i = 1; i<=4; i++ ){
if(i%2==0){
printf("Endereco da matriz %d = %d\n", i, &p[i] );
}
}

}
