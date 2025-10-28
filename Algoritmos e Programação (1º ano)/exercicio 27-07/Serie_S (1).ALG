Algoritmo "Cálculo da Série S"

Var
   S :  real
   i, j, N: inteiro

Inicio
    escreva("Informe N: ")
    leia(N)
    se (N <=0) então
        escreva ("N deve ser positivo")
    senão
        i <- 1
        j <- N
        S <- 0
        enquanto i <= N faça
            S <- S + i / j
            i <- i+1
            j <- j - 1
        fimenquanto
        escreval("S: ", S)
     fimse
Fimalgoritmo