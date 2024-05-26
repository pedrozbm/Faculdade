/* strlen example */
#include <stdio.h>
#include <string.h>

int main ()
{
    char str[50];
  int tamanho;

  printf("Digite seu nome!\n");
  scanf("%s",&str);
  tamanho = strlen(str);

  printf("O tamanho da string %s vale %d\n", str, tamanho);

}
