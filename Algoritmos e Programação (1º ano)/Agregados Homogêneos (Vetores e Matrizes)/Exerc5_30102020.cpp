#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int A[100], Q[100], i;
	srand(time(NULL));
	for (i=0; i<100; i++){
		A[i]= rand() % 100;
		Q[i]=0;
	}
	for (i=0; i<100; i++)
		Q[A[i]]++;
	for (i=0; i<100; i++)
	    if (Q[i] > 0)
	       printf("Valor %d acontece %d vezes\n", i, Q[i]);
	return 0;	 	
}
