# Python
Escrita em 1991, a linguagem de programação Python é de alto nível, aproximando-a cada vez mais da compreensão humana, possui uma sintaxe simplificada e a possibilidade de ser escalonada para a Orientação à Objetos. A diversidade de bibliotecas permite desde a Automação de Tarefas, dispensando a necessidade de mouse ou do teclado, como também os Soquetes de Rede, Web Scraping e até Inteligência Artificial. 
Em linux, pode ser tratado em um caso de Shell Bash:

 ```bash
  #!usr/bin/python3 
  ```

## Sobre a linguagem
É permitido declarar a variável, seu tipo e leitura na mesma linha. A saída é dada por 'print'.
Um loop 'for' permite pegar cada item de uma lista ou dicionário já declarado, colocando modificações ou mostrar na saída, enquanto uma função 'range()' permite n repetições. Os métodos ou funções permitem a modificação dos dados e a definição permite a recursividade.
Em Python, é possível fazer a Programação Orientada a Objetos (POO):

```python
# exemplo de POO
class NomeClasse:                    
    def __init__( ):
```

## Entrada e Saída
Suas entradas de variáveis são:
- str (string)
- float, int (inteiro)
- bool (booleano)
- list (para listas, arrays e/ou vetores)
- tuplas (listas invariáveis)
- set (coleções de elementos únicos)
- dict (dicionários que armazenam palavras chaves)

  ```python
  # a leitura da variável do tipo string (str) é chamada por input e declarada na mesma linha
  variavel = str(input("Escreva seu nome: "))
  print(f"Seu nome é {nome}")
  ```
Observe que diferentemente de C e suas sub-variantes, no Python o tipo 'long' é declarado por 'int' e o 'char' é assumido como 'str'.
