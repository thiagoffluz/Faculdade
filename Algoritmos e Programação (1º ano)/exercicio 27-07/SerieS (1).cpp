#include <stdio.h>

int main() {
	float S;
	int i, j, N;
	printf("Informe N: ");
	scanf("%d", &N);
	if (N<0) 
	    printf("N deve ser positivo\n");
	else {
		i=1;
		j=N;
		S=0;
		while (i<=N) {
			S=S+ (float) i/j;
			i++;
			j--;
		}
		printf("S: %.2f\n", S);
	}
    return 0;
}
	
	
	
