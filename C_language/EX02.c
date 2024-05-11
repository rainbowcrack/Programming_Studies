// termos essencialmente necessários
#include <stdio.h>
int main(void) {
  // algortimo de verificação de duas senhas semelhantes
  // definição de variáveis
  int num1;
  int num2;
  // leitura "&variavel" e input "printf" do usuário
  // "%d" para ler o valor inteiro
  printf("Digite sua senha numérica: \n");
  scanf("%d", &num1);
  printf("Digite novamente esta senha: \n");
  scanf("%d", &num2);
  // criação da condicional + resposta 
  // é usado if e else para criar uma condicional em C
  if (num1 == num2) {
    printf("As senhas digitadas são correspondentes. Prossiga. \n");
  }
  else {
    printf("As senhas digitadas não são iguais. Tente novamente. \n");
  }
  return 0; // termo essencialmente necessário
}
