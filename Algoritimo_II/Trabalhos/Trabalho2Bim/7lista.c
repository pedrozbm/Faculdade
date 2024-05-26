#include<stdio.h>
#include<stdlib.h>



mat(float n1, float n2)
{
    float media;
printf("Digite a primeira nota: \n");
scanf("%f",&n1);
printf("Digite a segunda nota: \n");
scanf("%f",&n2);
media = ((n1+n2)/2);
printf("A media eh %f", media);
}
fisica(int n1, int n2){
float media;
printf("Digite a primeira nota: \n");
scanf("%f",&n1);
printf("Digite a segunda nota: \n");
scanf("%f",&n2);
media = ((n1+n2)/2);
printf("A media eh %f", media);
}
main(){
int n;
float n1, n2;
printf("Selecione a materia que vc quer calcular a media!\n");
printf("1 -  matematica\n 2- fisica\n");
scanf("%d",&n);
switch(n){
 case 1:
    mat(n1,n2);
break;
 case 2:
    fisica(n1,n2);
}
}
