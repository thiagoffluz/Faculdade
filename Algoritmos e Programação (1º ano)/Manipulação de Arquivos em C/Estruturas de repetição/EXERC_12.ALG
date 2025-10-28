Algoritmo "Exerc_12"

Var
  valor, ma, me: real
  i: inteiro

Inicio

  escreva("Valores: ")
  leia(valor)
  ma <- valor
  me <- valor
  para i de 2 até 10 passo 1 faca
     se (valor > ma) então
         ma <- valor
     senão
         se (valor < me) então
             me <- valor
         fimse
     fimse
     leia(valor)
  fimpara
  escreval("Maior: ", ma)
  escreval("Menor: ", me)
Fimalgoritmo