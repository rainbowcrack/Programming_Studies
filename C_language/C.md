# Sobre a linguagem C
- A linguagem de programação C é de baixo nível, embora não seja programada para objetos como o C++ ou o C#, é amplamente usada para projetos que lidam diretamente com hardware, além de análises de malware.
- É de preferência ao programador escolher o snake_case ou o CamelCase;
- Sua entrada de dados se dá pela declaração inicial do seu valor, sejam: int, float, double ou char;
- A leitura de dados e o input se dá pela referência ao valor e scanf, sejam respectivamente: "%d", "%f", "%df" ou "%c" seguido de (,) e &nome_variavel;

# Não se esqueça
Não se esqueça do ponto e vírgula (;) no final de cada comando;

# A estrutura 
- Esses são os termos essencialmente necessários para que rode o código
  
"# include <studio.h>
   int main(void){
   // escreva aqui o seu código
   return 0;
  }

# Símbolos
- Sintaxe usada em outras linguagem também, em minúsculo
- printf : imprimir um valor na tela
- scanf : faz a leitura da variável e o seu tipo
- "%d", "%f", "%df" ou "%c" : tipo das variáveis
- &nome_variavel : para armazenar os valores nas variáveis
- \n : saltar uma linha
- if, else : para condicional
- while, for: para loops
- == : igualdade de valores
- = : atribuição de valores
- && : operador AND
- || || : operador OR
- % : resto da divisão

# Sobre as variáveis
Não há Strings na linguagem C, só variáveis, essas que devem:
- Tipo
- Nome
- Espaço
- Endereço
- Valor
Para o I/O de um texto, usamos o "%s" e o scanf deve nome_variavel (sem a inclusão do &).
Nesse caso especial, o valor será char e definimos o seu espaço, igual o exemplo:

char nome_varivel[numero_caracteres];
scanf("%s", nome);
printf("Seu nome é: %s\n", nome);
