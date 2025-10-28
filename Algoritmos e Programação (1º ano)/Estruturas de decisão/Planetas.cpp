#include <stdio.h>
#include <locale.h>

int main() {
	float peso;
	int planeta;
    setlocale(LC_ALL, "Portuguese");
	printf("Peso e planeta ");
    scanf("%f %d", &peso, &planeta);
	switch (planeta) {
		case 1: peso = peso * 0.37;
                printf("Planeta Mercúrio - seu peso: %.1f\n", peso);
				break;		
		case 2: peso = peso * 0.88;
                printf("Planeta Vênus - seu peso: %.1f\n", peso);
				break;		
		case 3: peso = peso * 0.38;
                printf("Planeta Marte - seu peso: %.1f\n", peso);
				break;		
		case 4: peso = peso * 2.64;
                printf("Planeta Júpiter - seu peso: %.1f\n", peso);
				break;		
		case 5: peso = peso * 1.15;
                printf("Planeta Saturno - seu peso: %.1f\n", peso);
				break;		
		case 6: peso = peso * 1.17;
                printf("Planeta Urano - seu peso: %.1f\n", peso);
				break;		
		default: printf("Planeta não existe\n");
	}	
	return 0;
}
