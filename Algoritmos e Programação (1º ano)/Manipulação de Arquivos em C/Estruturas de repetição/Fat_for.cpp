#include <stdio.h>

int main() {
	int N, i, fat;
	printf("Entre com um inteiro: ");
	scanf("%d", &N);
	if (N<0) {
		printf("N deve ser positivo\n");
	}
	else {
		fat=1;
		for (i=2; i<=N; i++) {
			fat=fat*i;
		}
        printf("Fatorial %d = %d\n", N, fat);		
	}
    return 0;	
}
