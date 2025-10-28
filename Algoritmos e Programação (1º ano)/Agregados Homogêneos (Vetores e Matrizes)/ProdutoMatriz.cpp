#include <stdio.h>
#define N 3

// Leitura de matriz NxN
void leitura(float X[N][N]) {
	int i, j;
	for(i=0; i<N; i++) 
	  for(j=0; j<N; j++) {
	  	  printf("Elem (%d, %d):", i, j);
	  	  scanf("%f", &X[i][j]);
	  }
}

// Mostra de matriz NxN
void mostra(float X[N][N]){
	int i, j;
	for(i=0; i<N; i++) {
		for(j=0; j<N; j++) 
		    printf("%5.1f", X[i][j]);
        printf("\n");		
	} 
}


void produto(float X[N][N], float Y[N][N], float Z[N][N]){
	 int i, j, k;
	 for(i=0; i<N; i++) {
	   for(j=0; j<N; j++) {
	       Z[i][j]=0;  
	       for(k=0; k<N; k++) 
	           Z[i][j]=Z[i][j]+X[i][k]*Y[k][j];
       }
     }    
}

int main() {
	float A[N][N],B[N][N],C[N][N];
	leitura(A);
	leitura(B);
	printf("Matriz A:\n"); 
	mostra(A);
	printf("Matriz B:\n");
	mostra(B);
	produto(A,B,C);
	printf("Matriz C=AxB:\n");
	mostra(C);
	return 0;
}


