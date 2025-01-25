# Swift
## A linguagem Swift
A linguagem Swift é ideal para o desenvolvedor que deseja trabalhar com dispositivos da Apple, pois somente duas linguagens são oficialmente suportadas por ela: Objective-C e Swift. Ambas rodam sobre um conjunto de padrões e funcionalidades similares nos dispositivos com iOS, tvOS, watchOS ou MacOS. Swift é a mais nova dentre elas e está em evolução constante. Em seu lançamento foi definida como "Objective-C sem o C".
* Sugiro que você possua um MacBook, utilize o Xcode (IDE oficial da Apple) e o Swift 5 no Playground para rodar os exemplos e se exercitar como programador.
* Também poderá optar por um compilador online como o [Paiza.io](https://paiza.io/en/projects/new?language=swift)

### Declarando variáveis
A declaração de variáveis pode ser de forma implícita ou explícita, onde podemos ou não informar o tipo

```swift
// var declara uma variavel
var variavel = 5

// let declara uma constante, que o valor nao pode ser modificado
let variavel = 5

// exemplo tipado
let m: Float = 2.0
```
A função deve preceder "func" e ela pode ter uma tipagem forte retornando apenas o valor apontado para o construtor do tipo:
```swift
func multiplicaInteiros(x: Int, y: Int) -> Int { return x * y }
```
Agora, observe essas duas linhas:

```swift
var resultadoUm = multiplicaInteiros(x: 2, y: 3) // retorna 6

var resultadoDois = multiplicaInteiros(x: 2, y: "3") // Erro!
```
Nunca trabalhamos com a ausência de valor, também conhecido como nil em Swift ou null em outras linguagens de programação. Como podemos trabalhar com esse tipo de dado em Swift? A resposta são os tipos opcionais.

Em Swift pode-se declarar uma variável com o uso de um sinal de interrogação (“?”) após o tipo para dizer ao compilador que ela irá aceitar o valor nil além de um valor do tipo especificado.

Essa característica vem de encontro com as funcionalidades de segurança do Swift, pois evita que o programador cometa erros com valores nulos em pontos não esperados de seu código. Se ele declarou que a variável pode ser nula, ele deve se responsabilizar por somente utilizá-la na presença de um valor. Denominamos a operação de extração do valor de um opcional de desempacotamento (unwrapping, em inglês). Existem duas maneiras principais de se desempacotar um opcional à procura de seu valor:

```swift
// primeira forma de desempacotamento de opcionais: 
let stringDeNumero1 = "1" 
let numeroInteiro1 = Int(stringDeNumero1) 
let somaDeInteiros = numeroInteiro1! + 1 print(somaDeInteiros) // será impresso o valor 2
```
Nesse caso, utilizamos o operador “!” para desempacotar o Int contido em numeroInteiro1. Quando fazemos a operação com “!” estamos pegando o tipo Int? e o convertendo em um Int, ou seja, estamos convertendo um opcional em um não opcional. Porém, estamos fazendo isso de uma forma bastante direta e nos responsabilizando por qualquer valor inesperado que tais variáveis possam vir a conter, ou seja, o compilador não teria como nos salvar do seguinte erro em tempo de execução.
