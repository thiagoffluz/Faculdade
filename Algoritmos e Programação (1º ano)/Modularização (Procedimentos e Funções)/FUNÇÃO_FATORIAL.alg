Algoritmo "Fatorial"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 

Var
   Num: inteiro
   
função Fat(N: inteiro): inteiro
   Var
      i, R: inteiro
   inicio
      se (N<0) então
          retorne -1
      senao
          i <-2
          R <-1
          enquanto (i<=N) faca
              R <- R * i
              i <- i + 1
          fimenquanto
          retorne R
      fimse
   fimfunção

Inicio
  escreva("Informe Num: ")
  leia(Num)
  escreval("Fatorial: ", Fat(Num))
Fimalgoritmo