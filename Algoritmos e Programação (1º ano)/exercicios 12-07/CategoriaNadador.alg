Algoritmo "Categoria Nadador"

Var
   idade: inteiro

Inicio
   escreva("Idade do Nadador: ")
   leia(idade)
   se idade >= 18 então
      escreval("Senior - Maior de idade")
   senão
      se idade >= 14 então
         escreval("Junior B")
      senão
           se idade >= 11 então
              escreval("Junior A")
           senão
              se idade >= 8 então
                 escreval("Infantil B")
              senão
                 se idade >= 5 então
                    escreval("Infantil A")
                 senão
                    escreval("Sem categoria definida")
                 fimse
              fimse
          fimse
      fimse
   fimse
Fimalgoritmo