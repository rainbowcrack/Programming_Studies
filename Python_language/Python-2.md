# Variáveis
## String
```python
# programa que insere o nome do usuário
nome = str(input(“Qual é o seu nome? “))
print(f “ Seu nome é {nome} “)
```
## Inteiro - Int
```python
# programa para cálculo de números inteiros
x = int(input(“Escolha um número: “))
y = int(input(“Agora escolha outro: “))
z = (x+y)
# execução final, com acréscimo de ponto para cada três casas decimais
print(f”{z:.} ”)
```
## Float 
```python
# float com arredondamento na divisão com duas casas decimais
x = float(input(“Escolha um número para a divisão aproximada: “))
y = float(input(“Escolha outro número: “))
z = round(x/y, 2)
# Ou, print(f”{z:.2f}”)
print(z)
```
# Métodos e Funções
- int(x) ……… converte o tipo da variável
- float(x) ……… converte o tipo da variável
- || (or) ……………………………… operador “ou” (matematicamente, +)
- && (and) …………………… operador “e” (matematicamente, *)
- != (not) ………………… operador “negação” (matematicamente, ~)
- * ……………………… multiplicação
- % ………………………………… resto da divisão
- == …………………………………………… igualdade
- is …………………………… identidade do objeto (usado em classes - POO)
- pow(x, y) …………………………… ‘x’ elevado a ‘y’
- x ** y ……………………………………… ‘x’ elevado a ‘y’
- abs(x) ………………………………… valor absoluto de ‘x’
- round(x, n) .................................. arredonda a variável ‘x’ a partir das casas decimais de ‘n’
- s[ i ] ………………………………… i-ésimo item de S, origem 0
- s[ i:j ] …………………………………… vetor de S de ‘i’ até ‘j’
- s[ i:j:k ] ………………………………… vetor de S de ‘i’ até ‘j’, com passo ‘k’
- len(s) ……………………………………comprimento de ‘s’
- min(s) …………………………………… menor item de ‘s’
- max(s) …………………………………… maior item de ‘s’
- x * n ………………………… repetição de comandos ‘n’ vezes. Ex.: lists = [ [ ] ] * 3, >>>> [ [ ], [ ], [ ] ]
- s.append(x) ………………. adiciona ‘x’ no final da sequência s[ len (s) : len (s) ] = [x]
- del s[i : j : k] …………… remove os elementos de s[ i : j : k]
- .strip() …………………………… pega cada elemento
- .title() ………………………………capitaliza
- .lower() ……………………………… deixa em minúsculo
- .replace(“ “, “....”) ……………. substituição de um termo pelo outro

Exemplo de busca por vetores,
```python
# (.jpg and .jpeg) is image/jpeg
elif name[-4:] == ".jpg":
    print("image/jpeg")
```
