Algoritmo "Exerc_10"

Var
  valor, soma, qt: inteiro

Inicio
  escreva("Informe valor: ")
  soma <- 0
  qt <- 0
  leia(valor)
  enquanto (valor>0) faça
     soma <- soma + valor
     qt <- qt + 1
     escreva("Informe valor: ")
     leia(valor)
  fimenquanto
  se (qt<>0) então
      escreva("Media : ", soma/qt)
  fimse
Fimalgoritmo