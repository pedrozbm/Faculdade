#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Essa fun��o, foi criada para fazer o calculo de fatorial
//Ela recebe as variaveis de outras fun��es
fatorial(int n, int fat){
for(fat = 1; n > 1; n = n - 1)
{fat = fat * n;
}

}
//Essa � uma fun��o vazia(void), ela n�o tem variaveis e n�o recebe variaveis
//Sua fun��o � printar na tela um tra�o para separar t�picos
void linha(){
    //O comando printf exibe uma mensagem na tela
    //Podendo essa mensagem conter vari�veis e informa��es trazidas de outras fun��es


printf("\n-------------------------------------------\n \n");
}
//Essa fun��o foi criada para explicar o arranjo,
//ela � chamada no menu do Saiba Mais caso seja selecionada
void explica_arranjo(){
printf("\n Arranjos s�o agrupamentos formados com\n K elementos de um conjunto de N elementos\n");
printf(" Sua formula � n!/(n-k)! \n");
printf(" Sendo n o n�mero de elementos do conjunto\n");
printf(" E k o numero de agrupamentos\n");
}
//Essa fun��o foi criada para explicar a permuta��o simples
//Ela � chamada no menu do Saiba Mais caso seja selecionada
void explica_permutacao_simples(){
printf("\n Na Permuta��o Simples os elementos formam agrupamentos \n que se diferem pela ordem\n");
printf(" Sua formula � n! \n");
printf(" Sendo n o n�mero de elementos do conjunto\n");
}
//Essa fun��o foi criada para explicar a permuta��o com repeti��o
//Ela � chamada no menu do Saiba Mais caso seja selecionada
void explica_permutacao_repeticao(){
printf("\n Na Permuta��o com repeti��o alguns elementos se repetem \n de forma que alteram o n�mero de conbina��es");
printf(" Sua formula � n!/a!b!... \n");
printf(" Sendo n o n�mero de elementos do conjunto\n");
printf("E a,b... o n�mero de repeti��es,\n sendo que essas devem ser menores que n");
}
//Essa fun��o foi criada para explicar a conbina��o
//Ela � chamada no menu do Saiba Mais caso seja selecionada
void explica_conbinacao(){

printf("\n Na Conbina��o a ordem dos elementos n�o interfere \n ");
printf(" Sua formula � n!/k!(n-k)! com n>=k \n");
printf(" Sendo n o n�mero de elementos do conjunto\n");
printf("E k o n�mero de agrupamentos \n");


};

//Essa � a Fun��o para se fazer os calculos de arranjos

int arranjo(int n, int k, int fat, int sub, int y){


printf("Voc� selecionou arranjo!");
linha();
printf("Digite o numero de elementos do conjunto -> ");
//O comando scanf serve para que uma variavel criada receba o valor digitado pelo usuario

scanf("%d",&n);
printf("Digite o numero de agrupamentos -> ");
scanf("%d",&k);

//Na linha abaixo uma nova vari�vel recebe o calculo fatorial do numero de elementos do conjunto
int x = fatorial(n, fat);
//Na linha abaixo a vari�vel sub recebe a subtra��o do numero de elementos do conjunto e do n�mero de agrupamentos
sub = n - k;
//Na linha abaixo � chamada a fun��o que calcula a fatorial, para que a variavel sub se transforme em fatorial
sub = fatorial(sub,fat);
//A linha abaixo faz a divis�o entre o numero de elementos do conjunto e a variavel sub
y = x/sub;
linha();
printf("S�o %d conbina��es poss�veis! ", y);
}
//Essa � a fun��o para se fazer os calculos da permuta��o simples

permutacao_simples(int n, int fat){
printf("Voc� selecionou Permutac�o simples!");
linha();
printf("Digite o n�mero de elementos do conjunto -> ");
scanf("%d",&n);
//Na linha abaixo � feito o calculo fatorial de n, com auxilio da fun��o Fatorial
n = fatorial(n, fat);
printf("S�o %d conbina��es poss�veis", n);
}

//Essa � a fun��o para se fazer os calculos da permuta��o com repeti��o

permutacao_repeticao(int n,int fat, int repete, int letra[5]){
printf("Voc� selecionou Permutac�o com repeti��o !");
linha();
printf("Digite o n�mero de elementos do conjunto -> ");
scanf("%d",&n);
//Na linha abaixo � feito o calculo fatorial de n, com auxilio da fun��o Fatorial
n = fatorial(n, fat);
printf("Digite o n�mero de letras repetidas -> ");
//Na linha abaixo a vari�vel repete recebe o n�mero de letras repetidas
scanf("%d", &repete);
//Na linha abaixo um for � criado
//Sua fun��o � repetir o que existe dentro dele at� que determinada situac�o seja satisfeita
//Nessa caso, ele se repetir� o n�mero de vezes definido pelo usuario para a variavel repete
for(int i = 1; i<=repete;i++){
    printf("Quantas vezes a %d� letra se repete? -> ",i);
    //Na linha abaixo uma variavel vetor recebe do usuario quantas vezes as letras se repetem
    //Sendo que i representa a contagem do for para suas repeti�oes
    scanf("%d", &letra[i]);
    letra[i] = fatorial(letra[i], fat);
    }

    //O for abaixo foi criado para se calcular o n�mero de conbina��es poss�veis
    for(int i = 1;i<=repete;i++){
    letra[0] = letra[i] * letra[i - 1];
    }
printf("S�o %d conbina��es poss�veis! ",n/ letra[0]);

}
conbinacao(int n, int fat, int k, int sub){
printf("Voce escolheu Conbina��o!");
linha();
printf("Digite o n�mero de elementos do conjunto -> ");
scanf("%d",&n);
printf("Digite o numero de agrupamentos -> ");
scanf("%d",&k);
sub = n - k;
sub = fatorial(sub,fatorial);
n=fatorial(n,fatorial);
printf("S�o %d conbina��es poss�veis ", n/(sub*k));

}



main(){
 setlocale(LC_ALL,"");
int n, k,fat,sub, y, repete, letra[5];

int op, op2;

printf(" \n ---------> Bem vindo Ao StatsZ! <---------\n");
linha();
printf("Selecione uma das op��es abaixo! \n");
printf("[1] - Arranjos \n");
printf("[2] - Permuta��es \n");
printf("[3] - Combina��es \n");
printf("[4] - Saber mais... \n");
scanf("%d",&op);
switch(op){
case 1:
 arranjo(n,k,fat,sub, y);

break;

case 2:
    printf("Selecione o tipo de permuta��o! \n");
    printf("[1] - Permuta��o simples \n");
    printf("[2] - Permuta��o com repeti�a� \n");
    int escolha;
    scanf("%d", &escolha);
switch(escolha){
case 1:
    permutacao_simples(n,fat);
    break;
case 2:
    permutacao_repeticao( n,fat, repete, letra);

    break;
}
break;

case 3:
conbinacao(n,fat,k,sub);
break;

case 4:
     printf("Escolha um item para saber mais!\n");
     printf("[1] - Arranjos \n");
     printf("[2] - Permuta��es simples \n");
          printf("[3] - Permuta��es com repeti��o \n");
     printf("[4] - Combina��es \n");
     scanf("%d",&op2);
switch(op2){

case 1:
    explica_arranjo();
    break;

    case 2:
        explica_permutacao_simples();
        break;
    case 3:
    explica_permutacao_repeticao();
    break;
    case 4:
    explica_conbinacao();
    break;
}

;

break;

default:
    printf("Selecione atraves de um numero de 1 a 4");


}



}
