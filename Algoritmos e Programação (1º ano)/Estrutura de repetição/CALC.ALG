Algoritmo "Calc"


Var
     val1, val2, r: real
     opcao, continuar: caracter
Inicio

    repita
        escreva("Val1: ")
        leia(val1)
        escreva ("Operador: ")
        leia(opcao)
        escreva("Val2: ")
        leia(val2)
        escolha opcao
           caso "+"
                r<-val1+val2
                escreval(r)
           caso "-"
                r<-val1-val2
                escreval(r)
           caso "*"
                r<-val1*val2
                escreval(r)
           caso "/"
                if (val2 <> 0)r<-val1/val2
                escreval(r)
           caso "%"
                r<-val1%val2
                escreval(r)
           outrocaso
                escreval("operador inválido")
        fimescolha
        escreval("deseja continuar? (s/n):")
        leia(continuar)
    até (continuar = "n")
Fimalgoritmo