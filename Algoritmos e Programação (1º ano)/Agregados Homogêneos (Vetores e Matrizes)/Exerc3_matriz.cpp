#include <stdio.h>
#define N 3

// Procedimento calculo da transposta
void transposta(float A[N][N], float B[N][N]){
	int i, j;
	for(i=0;i<N; i++)
	  for(j=0;j<N; j++) 
	     B[i][j]=A[j][i];	
}

// Mostra uma matriz NxN
void mostra(float X[N][N]){
   int i, j;
   for(i=0; i<N; i++){
	  for(j=0; j<N; j++) {
          printf("%5.2f ", X[i][j]);
	  }
	  printf("\n"); 
    }
}

// Função principal
int main() {
    float X[N][N], XT[N][N];
	int i,j;
	// Lendo matriz X
	for(i=0; i<N; i++)
	  for(j=0;j<N; j++){
	  	  printf("X(%d, %d):", i, j);
	  	  scanf("%f", &X[i][j]);
	  }
    // Calcula transposta
	transposta(X, XT);	    	
	printf("Matriz X\n");
	mostra(X);
	printf("Matriz transposta XT\n");
	mostra(XT);
	return 0;
}
