Algoritmo "Fatorial"

Var
  Num, resul: inteiro
  
Procedimento Fatorial(N:inteiro; var R: inteiro)
Var
   i: inteiro
Inicio
  se N<0 então
     R <- -1
  senão
     i<-2
     R<-1
     enquanto (i<=N) faça
       R <- R*i
       i <- i+1
     fimenquanto
  fimse
Fimprocedimento

Função Fat(N:inteiro): inteiro
Var
  i, R: inteiro
Inicio
  se N<0 então
     retorne -1
  senão
     i<-2
     R<-1
     enquanto (i<=N) faça
       R <- R*i
       i <- i+1
     fimenquanto
     retorne R
  fimse
Fimfunção

Inicio
  escreva("Informe Num:")
  leia(Num)
  
  escreval("Resultados usando função:")
  resul <- Fat(Num)
  se (resul = -1) então
     escreval("Fatorial não existe")
  senão
     escreval("Fatorial de ", Num, " =", resul)
  fimse

  escreval("Resultados usando Procedimento:")
  Fatorial(Num, resul)
  se (resul = -1) então
     escreval("Fatorial não existe")
  senão
     escreval("Fatorial de ", Num, " =", resul)
  fimse

Fimalgoritmo