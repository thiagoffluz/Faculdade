#include <stdio.h>

//  Informa a categoria do nadador de acordo com a idade

int main() {
   int idade;	
   printf("Idade do Nadador: ");
   scanf("%d", &idade);
   if (idade >= 18)
      printf("Maior de idade\n");
   else
      if (idade >= 14) 
         printf("Junior B\n");
      else
           if (idade >= 11)
              printf("Junior A\n");
           else
              if (idade >= 8)
                 printf("Infantil B\n");
              else
                 if (idade >= 5)
                    printf("Infantil A\n");
                 else
                    printf("Sem categoria definida\n");
    return 0;

}
