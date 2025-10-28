Algoritmo "semnome"

Var
   x, y, r: inteiro
   flag: logico

Inicio
   leia(x, y)
   se y = 0 então
      escreva("divisão impossível")
   senão
      se (x<0) e (y<0) então
         x<-abs(x)
         y<-abs(y)
      fimse

      flag <- falso
      se (x<0) ou (y<0) então
         x<-abs(x)
         y<-abs(y)
         flag <- verdadeiro
      Fimse

      enquanto (x >= y) faça
         x <- x - y
         r <- r + 1
      fimenquanto

      se flag = verdadeiro então
         r <- r * -1
      fimse

      escreva("Resultado: ", r)
   fimse
Fimalgoritmo