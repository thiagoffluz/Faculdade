#include <stdio.h>
#define N 10
// Prot�tipos de fun��o
void ordena(int [], int);

int main() {
   int v[N], i;	
   for (i=0; i<N; i++){
   	   printf("Digite elemento %d: ", i);
   	   scanf("%d", &v[i]);
   }
   ordena(v, N);
   for (i=0; i<N; i++) 
       printf("%d ", v[i]);	
   return 0;     	
}

void ordena(int x[], int Tam){
	int i, j, aux;
	for (i=0; i<Tam-1; i++)
	   for (j=i+1; j<Tam; j++) 
	       if (x[i]<x[j]) { 
	       	   aux  = x[i];
	       	   x[i] = x[j];
	       	   x[j] = aux;
		   }
}

