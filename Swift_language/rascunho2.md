(compilador)[https://paiza.io/en/projects/new?language=swift]

Este módulo é importante para qualquer desenvolvedor que deseje trabalhar com os dispositivos da Apple, pois somente duas linguagens são oficialmente suportadas por ela: Objective-C e Swift. Ambas rodam sobre um conjunto de padrões e funcionalidades similares nos dispositivos com iOS, tvOS, watchOS ou MacOS. Swift é a mais nova dentre elas e está em evolução constante. Em seu lançamento foi definida como "Objective-C sem o C".

Este módulo será bastante prático! Sugerimos que caso você possua um MacBook, utilize o Xcode (IDE oficial da Apple) e o Swift 5 no Playground para rodar os exemplos e se exercitar como programador. 

VARIÁVEL:
var variavel = 5
variavel = 6

let variavel = 5
let variavel = 6

TIPAGEM:
let m: Float = 2.0


func multiplicaInteiros(x: Int, y: Int) -> Int {
    return x * y
}

var resultadoUm  = multiplicaInteiros(x: 2, y: 3) // retorna 6

var resultadoDois  = multiplicaInteiros(x: 2, y: "3") // Erro!

Nunca trabalhamos com a ausência de valor, também conhecido como nil em Swift ou null em outras linguagens de programação. Como podemos trabalhar com esse tipo de dado em Swift? A resposta são os tipos opcionais.

Em Swift pode-se declarar uma variável com o uso de um sinal de interrogação (“?”) após o tipo para dizer ao compilador que ela irá aceitar o valor nil além de um valor do tipo especificado. Como no exemplo a seguir:
var inteiro:Int? = 1
inteiro = nil // podemos atribuir nil para a variável Int? (opcional inteira)

Perceba, pelo exemplo anterior, o uso do construtor de Int que recebe uma String como parâmetro e tenta converter uma String em um Int. Nem sempre tal conversão é possível ou trivial para o construtor, e nos casos que não o é, ele retorna nil. Por esse motivo, o retorno desse construtor não pode ser um simples Int, tem de ser um Int? para assim retornar nil nos casos em que a conversão falhe.

Essa característica vem de encontro com as funcionalidades de segurança do Swift, pois evita que o programador cometa erros com valores nulos em pontos não esperados de seu código. Se ele declarou que a variável pode ser nula, ele deve se responsabilizar por somente utilizá-la na presença de um valor. Denominamos a operação de extração do valor de um opcional de desempacotamento (unwrapping, em inglês). Existem duas maneiras principais de se desempacotar um opcional à procura de seu valor:

// primeira forma de desempacotamento de opcionais:
let stringDeNumero1 = "1"
let numeroInteiro1 = Int(stringDeNumero1)
let somaDeInteiros = numeroInteiro1! + 1 
print(somaDeInteiros)
// será impresso o valor 2

Nesse caso, utilizamos o operador “!” para desempacotar o Int contido em numeroInteiro1. Quando fazemos a operação com “!” estamos pegando o tipo Int? e o convertendo em um Int, ou seja, estamos convertendo um opcional em um não opcional. Porém, estamos fazendo isso de uma forma bastante direta e nos responsabilizando por qualquer valor inesperado que tais variáveis possam vir a conter, ou seja, o compilador não teria como nos salvar do seguinte erro em tempo de execução:

Perceba que utilizamos o operador “!” na constante numeroInteiro1 novamente, porém nesse caso, ela estaria valendo nil, pois a função Int(“Um”) retornaria nil já que não saberia converter a String “Um” em um inteiro válido. Sempre que nosso programa tentar executar uma “nil!” (desempacotamento de um nil), ele seria morto por chegar em um estado inconsistente!

