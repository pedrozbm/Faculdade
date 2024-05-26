#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Essa função, foi criada para fazer o calculo de fatorial
//Ela recebe as variaveis de outras funções
fatorial(int n, int fat){
for(fat = 1; n > 1; n = n - 1)
{fat = fat * n;
}

}
//Essa é uma função vazia(void), ela não tem variaveis e não recebe variaveis
//Sua função é printar na tela um traço para separar tópicos
void linha(){
    //O comando printf exibe uma mensagem na tela
    //Podendo essa mensagem conter variáveis e informações trazidas de outras funções


printf("\n-------------------------------------------\n \n");
}
//Essa função foi criada para explicar o arranjo,
//ela é chamada no menu do Saiba Mais caso seja selecionada
void explica_arranjo(){
printf("\n Arranjos são agrupamentos formados com\n K elementos de um conjunto de N elementos\n");
printf(" Sua formula é n!/(n-k)! \n");
printf(" Sendo n o número de elementos do conjunto\n");
printf(" E k o numero de agrupamentos\n");
}
//Essa função foi criada para explicar a permutação simples
//Ela é chamada no menu do Saiba Mais caso seja selecionada
void explica_permutacao_simples(){
printf("\n Na Permutação Simples os elementos formam agrupamentos \n que se diferem pela ordem\n");
printf(" Sua formula é n! \n");
printf(" Sendo n o número de elementos do conjunto\n");
}
//Essa função foi criada para explicar a permutação com repetição
//Ela é chamada no menu do Saiba Mais caso seja selecionada
void explica_permutacao_repeticao(){
printf("\n Na Permutação com repetição alguns elementos se repetem \n de forma que alteram o número de conbinações");
printf(" Sua formula é n!/a!b!... \n");
printf(" Sendo n o número de elementos do conjunto\n");
printf("E a,b... o número de repetições,\n sendo que essas devem ser menores que n");
}
//Essa função foi criada para explicar a conbinação
//Ela é chamada no menu do Saiba Mais caso seja selecionada
void explica_conbinacao(){

printf("\n Na Conbinação a ordem dos elementos não interfere \n ");
printf(" Sua formula é n!/k!(n-k)! com n>=k \n");
printf(" Sendo n o número de elementos do conjunto\n");
printf("E k o número de agrupamentos \n");


};

//Essa é a Função para se fazer os calculos de arranjos

int arranjo(int n, int k, int fat, int sub, int y){


printf("Você selecionou arranjo!");
linha();
printf("Digite o numero de elementos do conjunto -> ");
//O comando scanf serve para que uma variavel criada receba o valor digitado pelo usuario

scanf("%d",&n);
printf("Digite o numero de agrupamentos -> ");
scanf("%d",&k);

//Na linha abaixo uma nova variável recebe o calculo fatorial do numero de elementos do conjunto
int x = fatorial(n, fat);
//Na linha abaixo a variável sub recebe a subtração do numero de elementos do conjunto e do número de agrupamentos
sub = n - k;
//Na linha abaixo é chamada a função que calcula a fatorial, para que a variavel sub se transforme em fatorial
sub = fatorial(sub,fat);
//A linha abaixo faz a divisão entre o numero de elementos do conjunto e a variavel sub
y = x/sub;
linha();
printf("São %d conbinações possíveis! ", y);
}
//Essa é a função para se fazer os calculos da permutação simples

permutacao_simples(int n, int fat){
printf("Você selecionou Permutacão simples!");
linha();
printf("Digite o número de elementos do conjunto -> ");
scanf("%d",&n);
//Na linha abaixo é feito o calculo fatorial de n, com auxilio da função Fatorial
n = fatorial(n, fat);
printf("São %d conbinações possíveis", n);
}

//Essa é a função para se fazer os calculos da permutação com repetição

permutacao_repeticao(int n,int fat, int repete, int letra[5]){
printf("Você selecionou Permutacão com repetição !");
linha();
printf("Digite o número de elementos do conjunto -> ");
scanf("%d",&n);
//Na linha abaixo é feito o calculo fatorial de n, com auxilio da função Fatorial
n = fatorial(n, fat);
printf("Digite o número de letras repetidas -> ");
//Na linha abaixo a variável repete recebe o número de letras repetidas
scanf("%d", &repete);
//Na linha abaixo um for é criado
//Sua função é repetir o que existe dentro dele até que determinada situacão seja satisfeita
//Nessa caso, ele se repetirá o número de vezes definido pelo usuario para a variavel repete
for(int i = 1; i<=repete;i++){
    printf("Quantas vezes a %dª letra se repete? -> ",i);
    //Na linha abaixo uma variavel vetor recebe do usuario quantas vezes as letras se repetem
    //Sendo que i representa a contagem do for para suas repetiçoes
    scanf("%d", &letra[i]);
    letra[i] = fatorial(letra[i], fat);
    }

    //O for abaixo foi criado para se calcular o número de conbinações possíveis
    for(int i = 1;i<=repete;i++){
    letra[0] = letra[i] * letra[i - 1];
    }
printf("São %d conbinações possíveis! ",n/ letra[0]);

}
conbinacao(int n, int fat, int k, int sub){
printf("Voce escolheu Conbinação!");
linha();
printf("Digite o número de elementos do conjunto -> ");
scanf("%d",&n);
printf("Digite o numero de agrupamentos -> ");
scanf("%d",&k);
sub = n - k;
sub = fatorial(sub,fatorial);
n=fatorial(n,fatorial);
printf("São %d conbinações possíveis ", n/(sub*k));

}



main(){
 setlocale(LC_ALL,"");
int n, k,fat,sub, y, repete, letra[5];

int op, op2;

printf(" \n ---------> Bem vindo Ao StatsZ! <---------\n");
linha();
printf("Selecione uma das opções abaixo! \n");
printf("[1] - Arranjos \n");
printf("[2] - Permutações \n");
printf("[3] - Combinações \n");
printf("[4] - Saber mais... \n");
scanf("%d",&op);
switch(op){
case 1:
 arranjo(n,k,fat,sub, y);

break;

case 2:
    printf("Selecione o tipo de permutação! \n");
    printf("[1] - Permutação simples \n");
    printf("[2] - Permutação com repetiçaõ \n");
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
     printf("[2] - Permutações simples \n");
          printf("[3] - Permutações com repetição \n");
     printf("[4] - Combinações \n");
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
