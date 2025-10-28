#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 1000

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
	
    for(i=0; i<N-1; i++) 
	  for(j=i+1; j<N; j++) 
	      if (v[i] > v[j]) {
	      	  aux = v[i];
	      	  v[i] = v[j];
	      	  v[j] = aux;
		  } 	

    // mostra o vetor
	for(i=0; i<N; i++) 
	  printf("%d ", v[i]);
	
    return 0;	 	
}
