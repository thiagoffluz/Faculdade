Algoritmo "Vetor de registros"

// Definição de um tipo registro
tipo
   tmat = registro
        codigo: inteiro
        descr: caracter
        qtde: real
        vlr: real
   fimregistro

Var
   vmat : vetor[1..3] de tmat   // vetor de registros
   aux: tmat  // um registro
   i, j: inteiro

// Ordena registros por descrição
procedimento ordena()
inicio
     para i de 1 até 2 passo 1 faça
        para j de i+1 até 3 passo 1 faça
            se (vmat[i].descr > vmat[j].descr) entao
                aux <- vmat[i]
                vmat[i] <- vmat[j]
                vmat[j] <- aux
            fimse
        fimpara
     fimpara
fimprocedimento

// Mostra registros do vetor
procedimento mostra()
inicio
    escreval("Código    Descrição     Qtde      Valor")
    para i de 1 até 3 passo 1 faça
       escreva(vmat[i].codigo:5, "   ", vmat[i].descr:15, vmat[i].qtde:8:2, "  ", vmat[i].vlr:5:2)
       escreval()
    fimpara
fimprocedimento

// Função principal
Inicio
   // Leitura do vetor de registros
   para i de 1 até 3 passo 1 faça
      escreva("Código: ")
      leia(vmat[i].codigo)
      escreva("Descrição: ")
      leia(vmat[i].descr)
      escreva("Qtde: ")
      leia(vmat[i].qtde)
      escreva("Valor: ")
      leia(vmat[i].vlr)
   fimpara
   
   // mostrar dados do vetor de registros
   ordena()
   mostra()
Fimalgoritmo