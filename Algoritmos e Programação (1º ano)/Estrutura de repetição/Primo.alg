Algoritmo "PRIMO"

Var
    primo: logico
    N, i: inteiro
Inicio
   leia(N)
   N<-abs(N)
   se (N<=1) então
       primo <- Falso
   senão
       i <- N-1
       primo <- Verdadeiro
       enquanto ((i > 1) e (primo=Verdadeiro)) faça
            se (N % i = 0) então
                primo <- Falso
            fimse
            i <- i - 1;
       fimenquanto
   fimse
   se (primo = Verdadeiro) então
      escreval(N, " é primo")
   senão
      escreval(N, " não é primo")
   fimse
Fimalgoritmo