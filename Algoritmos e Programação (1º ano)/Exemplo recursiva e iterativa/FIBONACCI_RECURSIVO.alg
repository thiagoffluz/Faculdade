Algoritmo "Fibonacci_Iterativo"

Var
  termo: inteiro

função fibo(N: inteiro): inteiro
   Var
      atual, ant1, ant2, i: inteiro
   inicio
      atual <- 1
      ant1 <- 1
      ant2 <- 1
      i <- 2
      enquanto (i < N) faça
          atual <- ant1 + ant2
          ant1 <- ant2
          ant2 <- atual
          i <- i + 1
      fimenquanto
      retorne atual
   fimfunção

Inicio
  escreval("Informe elemento: ")
  leia(termo)
  escreval("O termo", termo, " de Fibonacci é", fibo(termo))
Fimalgoritmo