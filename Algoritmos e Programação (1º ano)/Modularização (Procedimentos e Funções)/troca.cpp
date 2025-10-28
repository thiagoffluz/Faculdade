#include <stdio.h>

// protótipo de função
void troca(int *, int *);

int main() {
	int a, b;
	printf("Informe A:");
	scanf("%d", &a);
	printf("Informe B:");
	scanf("%d", &b);
	troca(&a, &b);
	printf("A: %d   B:%d \n", a, b);
	return 0;
}

void troca(int *x, int *y){
	int aux;
	aux = *x;
	*x = *y;
	*y = aux;
}




