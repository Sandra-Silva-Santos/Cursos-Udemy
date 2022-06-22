Algoritmo "Negativos Exemplo da aula"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   :
// Descrição   :
// Autor(a)    : Sandra
// Data atual  : 15/01/2022




Var
   N, i : inteiro
   vet : vetor [0..9] de inteiro


Inicio

   escreva("Quantos numeros voce vai digitar? ")
   leia (N)

   para i de 0 ate N-1 faca
      escreva("Digite um numero: ")
      leia (vet[i])
   fimpara

   escreval("Numeros negativos: ")

   para i de 0 ate N-1 faca
      se vet[i] < 0 entao
         escreval(vet[i])
      fimse
   fimpara

Fimalgoritmo