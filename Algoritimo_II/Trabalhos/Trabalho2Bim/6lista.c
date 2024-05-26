#include<stdio.h>
#include<stdlib.h>

int DIAS(int mes,int ano){
int dias;
switch(mes){
case 1: case 3: case 5: case 7: case 8: case 10: case 12:
    dias=31;
    break;
case 4: case 6: case 9: case 11:
    dias=30;
    break;
case 2:
    if((ano % 4 == 0) && (ano % 100 != 0) || (ano % 400 == 0))
        {printf("\nAno BISSEXTO!!!\n");
        dias = 29;}
    else{
    dias = 28;
    }
    }
    return dias;
}
main(){

int mes, ano;
printf("digite o mes");
scanf("%d", &mes);
printf("Digite o ano");
scanf("%d",&ano);
printf("Numero de dias : %d", DIAS(mes,ano));
printf("\n \n");
}
