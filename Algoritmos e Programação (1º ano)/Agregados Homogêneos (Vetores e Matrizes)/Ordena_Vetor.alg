Algoritmo "Ordena_Vetor por Seleção Direta"
Var
   v: vetor[0..5] de inteiro
   i,j, aux: inteiro

Inicio
// Leitura do vetor
    para i de 0 até 5 passo 1 faça
        leia(v[i])
    fimpara

// ordena
    para i de 0 até 4 passo 1 faça
      para j de i+1 até 5 passo 1 faça
          se v[i] < v[j] então
             aux <- v[i]
             v[i] <- v[j]
             v[j] <- aux
          fimse
      fimpara
   fimpara

// Mostra o vetor
    para i de 0 até 5 passo 1 faça
        escreva(v[i])
    fimpara
Fimalgoritmo