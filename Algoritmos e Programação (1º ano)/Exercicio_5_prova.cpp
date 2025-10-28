#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 4
#define M 4

int main() {
	int MAT[N][M];



}

int SOMA(int MAT[][], int N, int M) {
	int i, j, SN;
	SN=0;
	    for (i=0; i<N; i++)
	        for (j=0; j<M; j++)
	            if (MAT[i][j]<0)
	                SN=SN+MAT[i][j];
	    return SN;
}	
	
	
	
	
	
}
