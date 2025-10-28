#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4

// Encontra maior valor na matriz
float maior(float X[N][N], int NL, int NC){
	int i, j;
	float ma;
	ma = X[0][0];
	for(i=0; i<NL; i++){
		for(j=0; j<NC; j++) {
			if (X[i][j]>ma) ma=X[i][j];
		}
	}
	return ma;
}

// Normaliza a matriz dividindo todos os elementos 
// pelo maior valor da matriz.

// Função principal
int main() {
	float A[N][N], soma;
	int i, j;
	// Leitura da matriz
	srand(time(NULL));
	for(i=0; i<N; i++){
	  for(j=0; j<N; j++) {
//	  	 printf("A(%d, %d): ", i, j);
//	  	 scanf("%f", &A[i][j]);	
         A[i][j]= rand() % 1000;   	
	  } 
    }
	soma=0;
	for(i=0; i<N; i++){
	  for(j=0; j<N; j++) {
	  	 soma=soma+A[i][j];  	
	  } 
    }
	// Mostra a matriz
	for(i=0; i<N; i++){
	  for(j=0; j<N; j++) {
          printf("%5.1f ", A[i][j]);
	  }
	  printf("\n"); 
    }
	
	printf("Soma = %.1f\n", soma);
	printf("Maior elemento = %.1f\n", maior(A,N,N));
    return 0; 	
}

