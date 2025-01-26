## Escopo da Função
Pode ser definida da seguinte forma,
```swift
func nomeDoMetodo (nomeDoParametro : tipoDoParametro) -> tipoDeDadoDoRetorno {

    //Corpo do método
    
}
```
## Orientação à Objetos
### Classe
EXEMPLO DE ORIENTACAO A OBJETOS:

```swift
class Carro {

    var ano: Int? // Estas são algumas das propriedades da classe Carro
    var marca: String?
    var modelo: String?
    var versao: String?
    var cor: String?
    
    func descricao(){
        print("O carro \(self.modelo!) da marca \(self.marca!), versao \(self.versao!) e ano \(self.ano!), é da cor \(self.cor!)")
    }

}
```
Observe que o "tipo?" é uma forma de verificar se o tipo parametrizado será o correto, além disso o uso de "\(variavel)" é capaz de concatenar no tipo String. 

```swift
class Person { 

    
    var nome: String?
    var sobrenome: String?
     
    
    func nomeCompleto() {
        print(" \(self.nome ?? " ") \(self.sobrenome ?? " ")")
    }
    
}

var p1 = Person()

var p2 = Person()

var pN = Person()
```
É definido um construtor da classe Person para cada variável, observe que podemos automatizar com uma estrutura de repetição!

```swift
class Carro {

    var ano: Int? // Estas são algumas das propriedades da classe Carro
    var marca: String?
    var modelo: String?
    var versao: String?
    var cor: String?
    
    func descricao(){
        print("O carro \(self.modelo!) da marca \(self.marca!), versao \(self.versao!) e ano \(self.ano!), é da cor \(self.cor!)")
    }

}


var carro1 = Carro()
var carro2 = Carro()
var carro3 = Carro()


carro1.cor = "Laranja"
carro1.ano = 1980
carro1.modelo = "Fuxca"
carro1.versao = "Turbo Shift Auto"
carro1.marca = "WW"

carro2.cor = "Azul"
carro2.ano = 1980
carro2.modelo = "Fuxca"
carro2.versao = "Turbo Shift Auto"
carro2.marca = "WW"

carro3.cor = "Verde"
carro3.ano = 1980
carro3.modelo = "Fuxca"
carro3.versao = "Turbo Shift Auto"
carro3.marca = "WW"

print(carro1.descricao())
print(carro2.descricao())
print(carro3.descricao())
```
### ENCAPSULAMENTO
```swift
class Carro {
    
    var modelo: String = "Gool"
    
    //Criamos a propriedade privada
    private var qtdeCombustivel: Float = 25
    
    //Criamos o método que abastece o carro
    func abastecer(qtdeLitros: Float)->Void{
        qtdeCombustivel += qtdeLitros
    }
    
    func quantidadeCombustivel()->Void{
        print(qtdeCombustivel)
    }
}

//Criamos o objeto da classe
var carro1 = Carro()
   
//Faz a alteração da qtdeCombustivel, usando o método da classe
carro1.abastecer(qtdeLitros: 35)
carro1.quantidadeCombustivel()
//Resultado: 35
```
### HERANCA
```swift
class Veiculo{

    var pneus: String?
    var assentos: String?
    var motor: String?
    
    func desc() {
        print("Número de rodas \(self.pneus ?? " "), Número de Assentos \(self.assentos ?? " "), Potencia Motor \(self.motor ?? " ")") 
    }
}
```
### Polimorfismo
Fazendo override:
```swift
class Veiculo{

    var modelo: String?
    var marca: String?
    var ano: Int?

    func desc() {
        print(" \(self.modelo ?? " "),  marca \(self.marca ?? " ") e ano \(self.ano ?? 0) ")
    }
    
    func buzinar() {
        print(" Barulho emitido pelo respectivo veiculo") 
    }
}


class Motocicleta: Veiculo {
   
 override func buzinar() {
        print(" Barulho emitido pela \(self.modelo ?? " ")") 
        print(" biiip biiiip biiip \n") 
    }
    
    init (ma: String, mo: String, a: Int)
    {
        super.init()
        marca = ma
        modelo = mo
        ano = a
    }
    
}
class Carro: Veiculo {
    
  override  func buzinar() {
        print(" Barulho emitido pelo \(self.modelo ?? " ")") 
        print(" baaaaanp baaaaaanp baaaanp \n") 
    }
    
    init (ma: String, mo: String, a: Int)
    {
        super.init()
        marca = ma
        modelo = mo
        ano = a
    }
```
Outro jeito:
```swift
 //Crie as classes  Animal, Cao, Gato, faça as devidas associações, 
//crie as propriedades nome e raça
//e use os conceitos aprendidos de Overloading, e Overriding, 
//para criar os métodos emitirSom( ), comer( ), escalar( ) e babar ( )
//para o método comer, receba a comida por parâmetro.

class Animal
{
    var nome: String = "nome"
    var raca: String = "raça"

    func Comer(comida: String)
    {
      print ("\(nome), da raça \(raca), adoro \(comida)");
    }
    
    func emitirSom()
    {
        print("Sou animal, emito sons!");
    }
}


class Cao: Animal
{
    override func emitirSom()
    {
        print("Au au")
    }
    
    func babar()
    {
        print("Babei! \n")
    }
    
    init (n: String, r: String)
    {
        super.init()
        nome = n
        raca = r
    }
}
 
class Gato : Animal
{
    func escalar()
    {
        print("Subindo...\n")
    }
    
    override func emitirSom()
    {
        print("Miauuu")
    }
    
    init (n: String, r: String)
    {
        super.init()
        nome = n
        raca = r
    }
}


var c = Cao(n: "Rex", r:"Fila")
var g = Gato(n: "Mimi", r: "Persa")


c.Comer(comida: "bife")
c.emitirSom()
c.babar()

g.Comer(comida: "atum")
g.emitirSom()
g.escalar()
}
```
