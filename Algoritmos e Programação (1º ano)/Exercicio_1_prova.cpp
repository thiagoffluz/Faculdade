#include <stdio.h>
#include <stdlib.h>

#define N 4

int main () {
 
   int i, j, k;
   int A[N][N], B[N][N], C[N][N];

    for (i=0; i<N; i++) { 
        for (j=0; j<N; j++) {
    	    printf ("A (%d, %d):", i, j);
    	    scanf ("%d", &A[i][j]);
	    }
    }
    for (i=0; i<N; i++) {
	    for (j=0; j<N; j++) {
		    printf ("B (%d, %d):", i, j);
    	    scanf ("%d", &B[i][j]);
    	}
    }
    for (i=0; i<N; i++) {
    	for (j=0; j<N; j++) {
    		C[i][j]=0;
    		for (k=0; k<N; k++) {
    			C[i][j]=C[i][j] + A[i][k]*B[k][j];
			}
		}
	}
	for (i=0; i<N; i++) {
		for (j=0; j<N; j++) 	printf ("%d ", C[i][j]);
		printf ("\n");
	}
	return 0;
}


