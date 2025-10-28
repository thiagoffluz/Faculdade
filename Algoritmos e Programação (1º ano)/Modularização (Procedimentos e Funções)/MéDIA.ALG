Algoritmo "Média"

Var
   x, y, z: real

procedimento Proc_Media(a, b: real)
inicio
  escreval("Média: ", (a+b)/2)
fimprocedimento

função Func_Media(a, b: real): real
inicio
  retorne (a+b)/2
fimfunção

Inicio
    x<-2
    y<-3
    Proc_Media(x,y)
    z <- Func_Media(x,y) * 10
    escreval("Media: ", z)
Fimalgoritmo