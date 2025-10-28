Algoritmo "Soma elementos da matriz"

Var
   A: vetor[1..3, 1..3] de real
   i, j: inteiro
   soma: real

Inicio
  // Leitura da matriz
  para i de 1 até 3 passo 1 faça
     para j de 1 até 3 passo 1 faça
        leia(A[i,j])
     fimpara
  fimpara

  // Cálculo da soma
  soma <- 0
  para i de 1 até 3 passo 1 faça
     para j de 1 até 3 passo 1 faça
        soma <- soma + A[i,j]
     fimpara
  fimpara

  // Mostra matriz
  para i de 1 até 3 passo 1 faça
     para j de 1 até 3 passo 1 faça
        escreva(A[i,j])
     fimpara
     escreval()
  fimpara

  // Mostra soma
  escreva("Soma = ", soma)
Fimalgoritmo