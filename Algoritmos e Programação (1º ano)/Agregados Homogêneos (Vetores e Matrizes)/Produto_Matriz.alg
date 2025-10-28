Algoritmo "semnome"
// Produto de matrizes quadradas


Var
    A,B,C: vetor[1..3, 1..3] de real
    i,j,k: inteiro
    
Inicio
   // Leitura da Matriz A
   para i de 1 até 3 passo 1 faça
      para j de 1 até 3 passo 1 faça
         leia(A[i,j])
      fimpara
   fimpara
   // Leitura da Matriz B
   para i de 1 até 3 passo 1 faça
      para j de 1 até 3 passo 1 faça
         leia(B[i,j])
      fimpara
   fimpara
   
   // Espaço para o cálculo
   para i de 1 até 3 passo 1 faça  // linhas
      para j de 1 até 3 passo 1 faça  // colunas
          C[i,j]<-0
          para k de 1 até 3 passo 1 faça  // até linhas
             C[i,j]<-C[i,j]+A[i,k]*B[k,j] // termos
          fimpara
      fimpara
   fimpara
   
   // Mostra a Matriz A
   escreval("Matriz A: ")
   para i de 1 até 3 passo 1 faça
      para j de 1 até 3 passo 1 faça
          escreva(A[i,j]:5)
      fimpara
      escreval()
   fimpara

   // Mostra a Matriz B
   escreval("Matriz B: ")
   para i de 1 até 3 passo 1 faça
      para j de 1 até 3 passo 1 faça
          escreva(B[i,j]:5)
      fimpara
      escreval()
   fimpara
   
   // Mostra a Matriz C
   escreval("Matriz C = A x B: ")
   para i de 1 até 3 passo 1 faça
      para j de 1 até 3 passo 1 faça
          escreva(C[i,j]:5)
      fimpara
      escreval()
   fimpara

   
   
Fimalgoritmo