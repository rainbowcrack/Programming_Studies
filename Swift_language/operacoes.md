## Operações
### Operador Ternário
Vejamos primeiramente como funciona o operador ternário. Trata-se de um operador que pode ser utilizado com fins de legibilidade para atribuir um valor dependendo de uma condição, a uma variável ou a uma constante. Temos nesse comando, um resultado atribuído no caso de a condição ser verdadeira e um outro resultado para o caso contrário.

```swift
let resultado = (1 > 2) ? "1 é maior que 2" : "1 não é maior que 2" print(resultado) // será impresso "1 não é maior que 2"
```

### Condicionais/Switch case
Perceba que o switch em Swift não precisa de break ao fim de cada bloco de condição. Além disso, o caso default em Swift é obrigatório; se não for definido, gera um erro de compilação.
```swift
switch temperatura {
    case 30...50: // 30...50 define um intervalo (tipo Range) que vai de 30 até 50 (inclusive)
        print("Muito quente!")
    case 29: // temperatura exatamente igual a 29 graus
        print("Vinte e nove graus.")
    case 20..<29: // 20..<29 define um Range que vai de 20 até 28 (29 é excluído nesse caso)
        print("Temperatura confortável.")
    default:
        print("Outra temperatura.")
}
```
### Comandos de repetição/Arrays/Matrizes
```swift
var intOpcional: Int? // inicialmente nil, pois não atribuímos nenhum valor

repeat { intOpcional = funcQuePodeRetornarUmInt() } while intOpcional == nil
```

Perceba quão poderoso é esse comando nesse formato. Com ele não precisamos mais incrementar a variável de controle i nem a inicializar; não precisamos indexar o vetor com i a cada iteração, e melhor ainda, nem precisamos saber que o vetor tem N elementos! O Swift se encarrega desses detalhes chatos de implementação, que deixariam nosso código verboso, e se encarrega de percorrer o vetor para nós.

```swift
for i in 0...2 { print("i=(i)") }

// serão impressas as linhas: // i=0 // i=1 // i=2

for i in 0..<2 { print("i=(i)") }

// serão impressas as linhas: // i=0 // i=1

outro exemplo: let fator = 2 var auxiliar = 1

for i in 0..<10{ print (auxiliar) auxiliar += fator }
```
