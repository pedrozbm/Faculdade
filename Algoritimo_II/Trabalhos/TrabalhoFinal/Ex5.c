#include <stdlib.h>
#include <stdio.h>

int imprime(int m[3]){
for(int i= 1; i<=3; i++){
printf("Matriz m[%d] -> %d \n", i, m[i]);


}}

main(){

int m[3];

for(int i= 1; i<=3; i++){
printf("Digite os valores da matriz ! \n");
scanf("%d",&m[i]);

}
imprime(m);
}

