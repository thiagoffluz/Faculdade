Algoritmo "semnome"

Var
  nota: vetor[1..8] de real
  i: inteiro
  media: real

Inicio
  // Leitura de um vetor
  media <- 0
  para i de 1 até 8 passo 1 faça
     escreva("Nota aluno ", i, ": ")
     leia(nota[i])
     media <- media + nota[i]  // soma das notas
  fimpara
  media <- media / 8
  // Mostrar elementos do vetor
  para i de 1 até 8 passo 1 faça
     escreval("Nota: ", i, " = ", nota[i])
  fimpara
  // Mostrar a média
  escreval("Media das notas: ", media)
Fimalgoritmo