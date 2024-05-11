// termos essecialmente necessários
#include <stdio.h>
int main(void) {
  // código para verificar se é par ou ímpar o número do user
  // definição de variável "aberta" para input
  int num1;
  // entrada do user
  printf("Digite um número para saber se é par ou ímpar: ");
  scanf("\n %d", &num1);
  // condicional lógica
  // sendo "n" inteiro escolhido, tal operador módulo % verifica se o resultado da divisão é 0, se diferente não é par
  // exemplo: 10 % 2 = 0, logo 10 é par. Já 5 % 2 = 1, logo 5 é ímpar
  if (num1 % 2 == 0) {
    printf("O número inserido é par");  
  } 
  else {
    printf("Tal número é ímpar");
  }
  return 0; // termo essecialmente necessário
}
