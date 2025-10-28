Algoritmo
Var
   valor,qnt_cem,qnt_cinq,qnt_dez,qnt_cinco,qnt_um,qtd_totaum: inteiro
   c: inteiro
Inicio
   c <- c + 1
   c <- 1
   enquanto c = 1 faca
      escreva("Informe o valor em reais: ")
      leia(valor)
      qnt_cem <- valor div 100
      valor <- valor - (qnt_cem * 100)
      qnt_cinq <- valor div 50
      valor <- valor - (qnt_cinq * 50)
      qnt_dez <- valor div 10
      valor <- valor - (qnt_dez * 10)
      qnt_cinco <- valor div 5
      valor <- valor - (qnt_cinco * 5)
      qnt_um <- valor
      escreval("Notas de 100 reais = ",qnt_cem)
      escreval("Notas de 50 reais = ",qnt_cinq)
      escreval("Notas de 10 reais = ",qnt_dez)
      escreval("Notas de 5 reais = ",qnt_cinco)
      escreval("Moedas de 1 real = ",qnt_um)
      escreval(" ")
      escreval("Deseja calcular novamente?")
      escreval("(1) Continuar")
      escreval("(2) Sair")
      escreval("Opção: ")
      leia(c)
      escreval (" ")
   fimenquanto
Fimalgoritmo