#include <stdio.h>
#include <stdlib.h>
main()
{
int n1,n2,n3;

printf ("Digite tres numeros \n");
scanf("%d %d %d", &n1,&n2,&n3);

if(n1>n2 && n2>n3){
printf("%d,%d,%d", n1,n2,n3);}

if(n1>n3 && n3>n2){
printf("%d,%d,%d", n1,n3,n3);
}
if(n2>n1 && n1>n3){
printf("%d,%d,%d", n2,n1,n3);
}
if(n2>n3 && n3>n1){
printf("%d,%d,%d", n2,n3,n1);
}
if(n3>n1 && n1>n2){
printf("%d,%d,%d", n3,n1,n2);
}
if(n3>n2 && n2>n1){
printf("%d,%d,%d", n1,n3,n2);

if(n1==n2 && n2==n3){
    printf("Os numeros sao iguais");
}
}
}
