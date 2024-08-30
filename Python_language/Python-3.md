# Loop e Estruturas de Repetição
## Match 
```Python
# Parecido com o ‘Switch - Case’ em C ou Java
match nome:
         case “Harry” | “Hermione” | “Ron”:
                   print(“Grifinória”)
         case “Draco”:
                   print(“Sonserina”)
         case_:
                   print(“Quem?”)
```
## Range()
```Python
for _ in range(3):
       print(“miau”)
```
## While
```Python
i = 0
while i < 3:
# evita repetição infinita, somando 1
         i += 1
        print(“miau”)
```
## For
```Python
# loop que chama letra por letra, pode ser usado em listas ou em dicionários
# possui dois parâmetros, com a criação de uma nova variável ‘fantasma’
string = str(input(“Escreva: “))
for letras in string:
               print(letras, end= “ “)
```
## Armazenagem de Dados
Vetores (listas)
```Python
# exibe cada estudante da lista
students = [“Hermione”, “Harry”, “Ron”]
for student in students:
         print(student)
```
Ou, 

```Python
# mostra a posição de cada valor no vetor
students = [“Hermione”, “Harry”, “Ron”]
print(students[0])
print(students[1])
print(students[2])
```
Ou,

```Python
# exibe o número (id) e valor do vetor
students = [“Hermione”, “Harry”, “Ron”]
for i in range(len(students)):
           print(i + 1, students[1])
```
