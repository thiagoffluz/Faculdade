Algoritmo "MDC"

Var
   X, Y, MDC: inteiro

Inicio
     escreva("Informe X: ")
     leia(X)
     escreva("Informe Y: ")
     leia(Y)
     X<-ABS(X)
     Y<-ABS(Y)
     se (X=0) ou (Y=0) então
        MDC <- 1
     senão
          enquanto X <> Y faça
              se X > Y então
                 X<-X-Y
              senão
                 Y<-Y-X
              fimse
          fimenquanto
          MDC <- X
     fimse
     escreva("MDC: ", MDC)
Fimalgoritmo