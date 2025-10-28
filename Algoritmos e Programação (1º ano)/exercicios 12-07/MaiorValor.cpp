#include <stdio.h>
// Maior entre 3 valores informados
int main() {
    float v1,v2,v3;
	printf("Valor 1: ");
	scanf("%f", &v1);
	printf("Valor 2: ");
	scanf("%f", &v2);
	printf("Valor 3: ");
	scanf("%f", &v3);
	if (v1>v2 && v1>v3) 
		printf("Maior = %.2f\n", v1);
	else if (v2>v3) 
			printf("Maior = %.2f\n", v2);
		 else
			printf("Maior = %.2f\n", v3);
	return 0;	 
}
