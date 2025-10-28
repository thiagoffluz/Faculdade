Algoritmo "Ordena_Vetor por Seleção Direta"
Var
   v: vetor[0..9] de inteiro
   i: inteiro

procedimento ordena()
var
   i, j, aux: inteiro
inicio
   para i de 0 até 8 passo 1 faça
      para j de i+1 até 9 passo 1 faça
         se (v[i] < v[j]) então
             aux  <- v[i]
             v[i] <- v[j]
             v[j] <- aux
         fimse
     fimpara
  fimpara
fimprocedimento
Inicio
    para i de 0 até 9 passo 1 faça
        leia(v[i])
    fimpara
    ordena()
    para i de 0 até 9 passo 1 faça
        escreva(v[i])
    fimpara
Fimalgoritmo