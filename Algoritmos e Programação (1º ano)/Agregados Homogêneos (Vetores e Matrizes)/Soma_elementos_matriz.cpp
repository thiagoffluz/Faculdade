#include <stdio.h>
#define N 2
#define M 3

int main() {
	float A[N][M], soma;
	int i, j;
	// Leitura da matriz
	for(i=0; i<N; i++)
	  for(j=0; j<M; j++) {
	  	printf("V(%d,%d):", i, j);
	  	scanf("%f", &A[i][j]);
	  }

    soma=0;	     
	for(i=0; i<N; i++)
	  for(j=0; j<M; j++) 
	     soma = soma + A[i][j];	
	
	// Mostra a matriz
	for(i=0; i<N; i++) {
	  for(j=0; j<M; j++) 
          printf("%5.1f ", A[i][j]);
      printf("\n");   		  		
	}
	
	// MOstra a soma
	printf("Soma: %.1f", soma);
	return 0;
}
