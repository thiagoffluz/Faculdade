Algoritmo "Teste Função Recursiva - Exerc 26"

Var
   Resp, qtde: inteiro

função X(n, m:inteiro):inteiro
inicio
   qtde <- qtde + 1
   se ((n=m) ou (m=0)) então
      retorne 1
   senão
      retorne X(n-1,m)+X(n-1,m-1)
   fimse
fimfunção

Inicio
   qtde <- 0
   Resp <- X(9,6)
   escreval("Resultado: ", Resp)
   escreval("Qtde chamadas: ", qtde)
Fimalgoritmo