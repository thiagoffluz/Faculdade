Algoritmo "Idade"

Var
   idade: inteiro

Inicio
   escreva("Informe sua idade:")
   leia(idade)
   se idade < 18 então
      escreval("Menor de idade")
   senao
      se idade < 65 então
            escreval("Maior de idade")
      senão
            escreval("Idoso")
      fimse
   fimse
Fimalgoritmo