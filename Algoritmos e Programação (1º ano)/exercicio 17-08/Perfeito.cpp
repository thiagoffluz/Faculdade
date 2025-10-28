#include <stdio.h>
#include <locale.h>

int main() {
	int n,i,soma;
	setlocale(LC_ALL, "Portuguese");
	printf("Informe N: ");
	scanf("%d", &n);
	soma=0;
	for(i=n-1; i>0 ; i--) {
		if (n % i == 0) soma=soma+i;
	} 
	if (n==soma) 
	   printf("Número Perfeito\n");
	else
	   printf("Número não Perfeito\n");   
	return 0;
}

