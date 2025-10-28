Algoritmo "MDC e PRIMO"

Var
  a, b: inteiro
  
função MDC(x, y: inteiro): inteiro
inicio
   se ((x<=0) ou (y<=0)) entao
       retorne -1
   senão
        enquanto (x<>y) faça
            se x>y entao
               x <- x-y
            senão
               y <- y-x
            fimse
        fimenquanto
        retorne x
   fimse
fimfunção

função primo(N: inteiro): logico
  var
    p: logico
    i: inteiro
  inicio
     se (N<=1) então
          retorne Falso
     senão
          i <- N-1
          p <- Verdadeiro
          enquanto ((i > 1) e (p=Verdadeiro)) faça
              se (N % i = 0) então
                 p <- Falso
              fimse
              i <- i - 1;
          fimenquanto
          retorne p;
     fimse
fimfunção

Inicio
   escreva ("Informe a:" )
   leia (a)
   escreva ("Informe b:" )
   leia (b)
   escreval("MDC: ", MDC(a, b))
   se (primo(a) = Verdadeiro) então
      escreval(a, "é primo)
   senão
      escreval(a, "não é primo")
   fimse
Fimalgoritmo