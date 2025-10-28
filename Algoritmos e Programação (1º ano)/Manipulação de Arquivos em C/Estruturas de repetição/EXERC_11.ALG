Algoritmo "Exerc_11"

Var
   valor, soma, qt: inteiro

Inicio
    soma <- 0
    qt <-0
    escreva ("Informe Valores: ")
    leia (valor)
    enquanto (valor<>0) faça
       valor <- Abs(valor)
       se (valor MOD 2 = 0) então
           soma <- soma + valor
           qt <- qt + 1
       fimse
       leia (valor)
    fimenquanto
    se (qt>0) então
       escreva("Media dos pares: ", soma/qt:6:2)
    fimse
Fimalgoritmo