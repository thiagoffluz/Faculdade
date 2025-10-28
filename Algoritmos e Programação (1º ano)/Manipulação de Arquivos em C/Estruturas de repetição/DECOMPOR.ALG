Algoritmo "Decompor"


Var

 valor, c100, c50, c10, c5, c1: inteiro

Inicio
   escreva("Informe um valor: ")
   leia(valor)
   c100 <- 0
   c50 <- 0
   c10 <- 0
   c5 <- 0
   c1 <- 0
   enquanto (valor > 0) faça
      se (valor >= 100) então
          valor <- valor - 100
          c100 <- c100 + 1
      senão
           se (valor >= 50) então
               valor <- valor - 50
               c50 <- c50 + 1
           senão
              se (valor >= 10) então
                  valor <- valor - 10
                  c10 <- c10 + 1
              senão
                  se (valor >= 5) então
                      valor <- valor - 5
                      c5 <- c5 + 1
                  senão
                      valor <- valor - 1
                      c1 <- c1 + 1
                  fimse
              fimse
            fimse
      fimse
   fimenquanto
   escreval ("Cédulas de 100: ", c100)
   escreval ("Cédulas de 50: ", c50)
   escreval ("Cédulas de 10: ", c10)
   escreval ("Cédulas de 5: ", c5)
   escreval ("Cédulas de 1: ", c1)
Fimalgoritmo