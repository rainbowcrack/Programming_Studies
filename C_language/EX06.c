// termo essencialmente necessário
#include <stdio.h>
int main(void) {
// programa para ver se o resultado da divisão é exato ou não
// receber um numerador e um denominador de uma fração, transformar o resultado em um número decimal. Checar se o número é exato ou não
// Ler os números em float (%f) e o resto da divisão por 10
// declaração de variáveis 
  float numerador;
  float denominador;
  float resultado;
// Input com "printf" e "scanf" para leitura
  // "%f" leitura da varivavel float e "&variavel" para armazenar
  printf("Digite o numerador: ");
  scanf("%f", &numerador);
  printf("Digite o denominador: ");
  scanf("%f", &denominador);
// operação
  resultado = (numerador / denominador);
// resultado da divisão por 10
// conversão de float para inteiro
  if (resultado -  (int)resultado % 10 == 0) {
    printf("O resultado é exato");
  }
  else {
    printf("O resultado não é exato");
  }
  return 0; // termo essecialmente necessário
}
