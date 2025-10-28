#include <stdio.h>
#include <stdlib.h>

int main() {
	int valor, soma, qt;
	soma=0;
	qt=0;
	printf("Informe valor: ");
	scanf("%d", &valor);
	while (valor>0) {
		soma=soma+valor;
		qt=qt+1;
		printf("Informe valor: ");
		scanf("%d", &valor);
	} // while
	if (qt!=0) printf("Media: %.2f\n", (float) soma/qt);
	system("pause");
	return 0;
}
