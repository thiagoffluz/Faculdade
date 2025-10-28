Algoritmo "CRESCIMENTO"


Var
   ze, chico: real
   anos: inteiro

Inicio

   ze <- 1.10
   chico <- 1.50
   anos <- 0
   repita
      ze <- ze + 0.03
      chico <- chico + 0.02
      anos <- anos + 1
   até (ze > chico)
   escreval ("Total de anos: ", anos)
Fimalgoritmo