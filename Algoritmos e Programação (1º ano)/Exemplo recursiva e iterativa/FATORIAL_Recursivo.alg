Algoritmo "Fatorial"

Var
   Num: inteiro
   
função Fat(N: inteiro): inteiro
   inicio
      se (N=0) então
          retorne 1  // critério parada da recursão
      senao
          retorne N * Fat(N-1)  // chamada recursiva
      fimse
   fimfunção

Inicio
  escreva("Informe Num: ")
  leia(Num)
  escreval("Fatorial: ", Fat(Num))
Fimalgoritmo