Algoritmo "FIBO"

Var
   Ant1, Ant2, Atual:  real
   N, i: inteiro

Inicio
    escreva("Informe N: ")
    leia(N)
    se (N <=0) então
        escreva ("Termo não existe")
    senão
        i <- 0
        Ant1 <- 0
        Ant2 <- 1
        Atual <- 0
        enquanto i < N faça
            Ant1 <- Ant2
            Ant2 <- Atual
            Atual <- Ant1 + Ant2
            escreva (Atual, ",")
            i <- i + 1
          fimenquanto
     fimse
Fimalgoritmo