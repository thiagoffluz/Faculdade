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
float normaliza(float X[N][N], int NL, int NC){
	int i, j;
	float ma;
	ma=maior(X,NL, NC);
	for(i=0; i<NL; i++){
		for(j=0; j<NC; j++) {
           X[i][j]=X[i][j] / ma;
		}
	}
	return ma;
}

void mostra(float X[N][N], int NL, int NC){
   int i, j;
   for(i=0; i<NL; i++){
	  for(j=0; j<NC; j++) {
          printf("%5.2f ", X[i][j]);
	  }
	  printf("\n"); 
    }
}

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
	printf("Matriz antes de normalizar\n");
	mostra(A,N,N);
	printf("Maior elemento = %.1f\n", maior(A,N,N));
	printf("Soma = %.1f\n", soma);

    // Normaliza a matriz
    normaliza(A,N,N);
	printf("Matriz depois de normalizar\n");
	mostra(A,N,N);
	 	
    return 0; 	
}

