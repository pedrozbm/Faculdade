#include<stdio.h>
#include<stdlib.h>

int fatorial(int n){
if(n == 1){
    return 1;
}else{
    return n*fatorial(n -1);
}
}
int main(){

int n;
printf("digite o numero\n");
scanf("%d",&n);
printf("\n fatorial de %d eh %d", n, fatorial(n));
}


