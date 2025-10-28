#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int soma=0, qt=0, valor;
	printf("Informe Valores: ");
	scanf("%d", &valor);
	while (valor != 0) {
		valor=fabs(valor);
		if (valor % 2 == 0) {
			soma=soma+valor;
			qt++;
		}
        scanf("%d", &valor);		
	} // while
	if (qt>0) printf("Media dos pares: %.2f", (float) soma/qt);
    return 0;
}
