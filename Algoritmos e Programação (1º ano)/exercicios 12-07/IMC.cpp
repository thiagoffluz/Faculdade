#include <stdio.h>
#include <math.h>
#include <locale.h>

//  Informa siatua��o da pessoa com rela��o ao peso

int main() {
   float peso, altura, imc;	
   setlocale(LC_ALL,"Portuguese");
 
   printf("Peso: ");
   scanf("%f", &peso);
   printf("Altura: ");
   scanf("%f", &altura);
   imc = peso / pow(altura,2);
   printf("IMC = %.1f\n", imc);
   if (imc < 20)
      printf("Abaixo do peso\n");
   else
      if (imc <= 25) 
         printf("Peso normal\n");
      else
           if (imc <= 30)
              printf("Sobre peso\n");
           else
              if (imc <= 40)
                 printf("Obeso\n");
              else
                 printf("Obeso m�rbido\n");
    return 0;

}
