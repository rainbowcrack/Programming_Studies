// termos essecialmente necessarios
#include "stdio.h"
int main(void) { 
  // programa para somar dois numeros
  // atribuição de variáveis, sendo "int" o valor inteiro
  int x;
  int y;
  int resp;
  // input é dado com o printf
  printf("Escreva um número: ");
  // para cada input é dado um scanf para guardar a informacao na variável
  // %d é o comando para int, &variavel para armazenar o valor
  scanf("%d", &x);
  printf("Escreva outro número: ");
  scanf("%d", &y);
  // soma das variáveis
  resp = x + y;
  // resposta
  // %d é o comando int, para imprimir a variavel "resp"
  printf("%d", resp);
  return 0;
}
