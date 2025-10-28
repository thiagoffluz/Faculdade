Algoritmo "Maior Valor"

Var
   v1, v2, v3: real

Inicio
   escreva("Valor 1: ")
   leia(v1)
   escreva("Valor 2: ")
   leia(v2)
   escreva("Valor 3: ")
   leia(v3)
   se (v1>v2) e (v1>v3) então
       escreva(v1)
   senão
       se (v2>v3) então
            escreva("Maior: ", v2)
       senão
            escreva("Maior: ", v3)
       fimse
   fimse
Fimalgoritmo