Algoritmo "Fatorial"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 

Var
   N, i, fat: inteiro

Inicio
  leia(N)
  se N<0 então
     escreva("N deve ser positivo")
  senao
        i <- 2
        fat <- 1
        enquanto i<=N faca
           fat <- fat*i
           i <- i + 1
        fimenquanto
        escreva ("Fatorial", N, " é", fat)
  fimse
Fimalgoritmo