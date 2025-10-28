#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main() {
	int v[N], i, j, aux;

// Leitura do vetor
//	for(i=0; i<N; i++) {
//		printf("Elemento %d: ", i);
//		scanf("%d", &v[i]);
//	}

    // inicializa vetor aleatoriamente
    srand(time(NULL));
    for(i=0; i<N; i++) 
       v[i] = rand() % 1000;
	
    // mostra o vetor antes
	for(i=0; i<N; i++) 
	  printf("%d ", v[i]);
    
    i=0;
    j=N-1;
    while (i<j) {
    	aux = v[i];
    	v[i] = v[j];
    	v[j] = aux;
    	i++;
    	j--;
	}

    // mostra o vetor invertido
    printf("\n");
	for(i=0; i<N; i++) 
	  printf("%d ", v[i]);
	
    return 0;	 	
}
