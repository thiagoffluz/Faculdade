Algoritmo "Inverte um vetor"

Var
   v: vetor[0..5] de inteiro
   i,j, aux: inteiro

Inicio
   para i de 0 até 5 passo 1 faça
      leia(v[i])
   fimpara
   
   // MOstra vetor antes
   para i de 0 até 5 passo 1 faça
       escreva(v[i])
   fimpara
   
   i<-0
   j<-5
   enquanto i<j faça
       aux <- v[i]
       v[i] <- v[j]
       v[j] <- aux
       i <- i + 1
       j <- j - 1
   fimenquanto

  // Mostra vetor invertido
   escreval()
   para i de 0 até 5 passo 1 faça
       escreva(v[i])
   fimpara

Fimalgoritmo