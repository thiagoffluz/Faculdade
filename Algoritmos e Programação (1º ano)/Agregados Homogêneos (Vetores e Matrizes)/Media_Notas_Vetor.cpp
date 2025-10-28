#include <stdio.h>
#define N 4    // Exemplo de constante em C

// Protótipo da função
float maior(float [], int);

int main() {
	float nota[N], media=0;
	int i;
	// Leitura do vetor
	for(i=0; i<N; i++) {
	    printf("Nota aluno %d: ", i);
		scanf("%f", &nota[i]);
		media=media+nota[i];	
	}
	media=media/N;
	// Mostra o vetor
	for(i=0; i<N; i++)
       printf("Nota: %d = %.2f\n", i, nota[i]);
	printf("Media das notas: %.2f\n", media);
	printf("Maior Nota: %.2f", maior(nota, N));   	
	return 0;
}

float maior(float x[], int Tam){
	 int i;
	 float ma;
	 ma = x[0];
	 for(i=1; i<Tam; i++)
	    if (x[i]>ma) ma=x[i];
	 return ma;   
}

