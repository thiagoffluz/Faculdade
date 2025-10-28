Algoritmo "Situação Peso"

Var
   peso, altura, imc: real

Inicio
   escreva("Peso: ")
   leia(peso)
   escreva("Altura: ")
   leia(altura)
   imc <- peso / (altura * altura)
   escreval ("IMC =", imc)

   se imc < 20 então
      escreval("Abaixo do peso")
   senão
      se imc <= 25 então
         escreval("Peso normal")
      senão
           se imc <= 30 então
              escreval("Sobre peso")
           senão
              se imc <= 40 então
                 escreval("Obeso")
              senão
                 escreval("Obeso mórbido")
              fimse
          fimse
      fimse
   fimse
Fimalgoritmo