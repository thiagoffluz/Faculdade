#include <stdio.h>
#include <string.h>
#define N 10
#define M 100

// observa��o strcmp retorn 0, vlrpositvo ou vlrnegativo
// 0 se as duas strings s�o iguais
// positivo se a primeira � maior que a segunda
// negativo se a primeira � menor que a segunda
// cuidado: maior e menor na ordem alfab�tica
// strcmp("Zu", "Ana") --> positivo
// strcmp("Ana", "Ana") --> 0
// strcmp("Ana", "Zu") --> negativo

void ordena(char palavras[N][M]) {
    int i, j;
	char aux[M];
	for(i=0; i<N-1; i++)
	  for(j=i+1; j<N; j++)	
	      if (strcmp(palavras[i],palavras[j]) > 0) {
	      	   strcpy(aux, palavras[i]);
	      	   strcpy(palavras[i], palavras[j]);
	      	   strcpy(palavras[j], aux);
		  }
}

int main() {
	char nomes[N][M];
	int i;
	
	// Leitura de um vetor de nomes
	for(i=0; i<N; i++) {
		printf("Nome: ");
//		scanf("%s", &nomes[i]);
        gets(nomes[i]);
	}
	
	ordena(nomes);

    // mostra os nomes	
	for(i=0; i<N; i++)
	   printf("%s\n", nomes[i]);
	
	return 0;
}
