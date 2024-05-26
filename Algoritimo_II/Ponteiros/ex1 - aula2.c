#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



sub(int *p, int *p2, int *m){

*m = *p + *p2;
}

main(){
int a, b, s;

printf("digite os valores de a e b!\n");
scanf("%d%d",&a,&b);
sub(&a,&b,&s);
printf("\n soma de a[%d] + b[%d] eh = %d",a,b,s);

}
