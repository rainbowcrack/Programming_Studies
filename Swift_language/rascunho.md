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


    
