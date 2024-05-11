// termos essecialmente necessario
#include <stdio.h>
int main(void) {
  // programa para saber se o número é par, ímpar e/ou divisível por 3
  // declaração de variáveis
  int num;
  // imprimir na tela e leitura
  printf("Escolha um número para verificar se é par, ímpar e/ou divisível por 3: ");
  scanf("%d", &num);
  // verificar se é divisível por 3
  if (num % 3 == 0) {
    printf("O número é divisível por 3.\n");
  } 
  // verificação se é par
  if (num % 2 == 0) {
    printf("O número é par.\n");
  }
  else {
    printf("O número é ímpar.\n");
  }
   
  return 0; // termo essecialmente necessario
}
