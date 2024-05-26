#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
dec(int *p, int *p2, int *p3){
*p = 2020 - *p;
*p2 = 2020 - *p2;
*p3 = 2020 - *p3;
}
main(){

int a , b , c ;

printf("Digite o ano de nascimento de 3 pessoas! \n");
scanf("%d%d%d",&a,&b,&c);
dec(&a,&b,&c);
printf("\n valor de a = %d",a);
printf("\n valor de b = %d",b);
printf("\n valor de c = %d",c);
}
