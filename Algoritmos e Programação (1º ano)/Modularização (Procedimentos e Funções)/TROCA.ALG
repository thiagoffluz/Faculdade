Algoritmo "Troca"

Var
  a,b: inteiro

  procedimento troca(var x,y: inteiro)
  var
     aux: inteiro
  inicio
     aux <- x
     x <- y
     y <- aux
  fimprocedimento

Inicio
  escreva("Informe A: ")
  leia(a)
  escreva("Informe B: ")
  leia(b)
  troca(a,b)
  escreva("A: ", a, "  B: ", b)
Fimalgoritmo