Algoritmo "Corrigir_Peso"
Var
    peso: real
    planeta: inteiro
    op: caractere
Inicio
   repita
      escreval("Peso: ")
      leia(peso)
      escreval("Planeta: ")
      leia(planeta)
      escolha planeta
         caso 1
            escreval("Peso em Mercúrio:", peso*0.37)
         caso 2
            escreval("Peso em Vênus:", peso*0.88)
         caso 3
            escreval("Peso em Marte:", peso*0.38)
         caso 4
            escreval("Peso em Júpiter:", peso*2.64)
         caso 5
            escreval("Peso em Saturno:", peso*1.15)
         caso 6
            escreval("Peso em Urano:", peso*1.17)
         outrocaso
            escreval("Planeta inexistente")
      fimescolha
      escreval("Deseja continuar? (s/n): ")
      leia(op)
   até (op = "n")
Fimalgoritmo