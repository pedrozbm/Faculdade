#include<stdio.h>
#include<stdlib.h>

main(){

int n1,n2;
int cont = 0;
printf("Bem vindo ao Genio quiz Unifev edition!\n");
printf("Nao considere esse programa como repetitivo \n o intuito dele eh fazer vc memorizar o que eh correto\n");
printf("repita o quantas vezes for necessario para sua vida\n");
printf("responda 1 para sim e 2 para nao\n");
printf("O aluno super dedicado, de alcunha pedro barbieri merece 10?\n");
scanf("%d",&n1);
if(n1==1){
    acertou();

}
else{
    errou();
    return ;
}
printf("O aluno Pedro Barbieri merece tirar dez na prova sem ter que faze-la?\n");
scanf("%d",&n2);
if(n2==1){
    acertou();
    return main();
}
else{
    errou();
}
}
errou(){
printf("Eh uma pena mas essa resposta ta errada\n");
printf("voce perdeu o jogo!");
}

acertou(int cont){
printf("meus parabens! voce acertou!\n");

}
