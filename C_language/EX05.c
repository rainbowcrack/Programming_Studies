// termos essecialmente necessarios
#include <stdio.h>
int main(void) {
  // atribuição de variável
  // programa para retornar valores que sejam divisível por 2 e por 3, simultaneamente
  int num;
  // entrada de dados
  printf("Digite para retornar um valor que seja divisível por 2 e por 3, simultaneamente: ");
  scanf("%d", &num);
  // condicional
  // && é um operador AND e % é o resto da divisão
  if (num % 2 == 0 && num % 3 == 0) {
    printf("Os números são divisíveis por 2 e por 3");
  }
  else {
    printf("Não são divisíveis ao mesmo tempo");
  }
  return 0; // termo essecialmente necessario
}
