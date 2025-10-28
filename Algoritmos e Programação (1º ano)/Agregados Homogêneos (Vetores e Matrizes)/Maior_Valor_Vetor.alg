Algoritmo "semnome"
Var
   v: vetor[1..5] de inteiro
   i: inteiro

função maior(N: inteiro): inteiro
var
  i, ma: inteiro
inicio
  ma <- v[1]
  para i de 2 até N passo 1 faça
     se (v[i] > ma) então
         ma <- v[i]
     fimse
  fimpara
  retorne ma
fimfunção

Inicio
   para i de 1 até 5 passo 1 faça
      leia(v[i])
   fimpara

   escreval("maior : ", maior(5))
Fimalgoritmo