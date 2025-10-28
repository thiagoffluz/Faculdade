#include <stdio.h>
#include <stdlib.h>

int main () {
	int valor, c100=0, c50=0, c10=0, c5=0, c1=0;
	printf("Entre com o valor: ");
	scanf("%d", &valor);
	while (valor > 0){
       if (valor >= 100) {
       	   valor=valor-100;
       	   c100++;
	   } else
	       if (valor >= 50) {
	       	   valor=valor-50;
	       	   c50++;
		   } else
		       if (valor >= 10){
		       	   valor=valor-10;
                   c10++;
			   } else
			        if (valor>=5) {
			        	valor=valor-5;
			        	c5++;
					} else {
						valor=valor-1; 
						c1++;
					}
	} // while
	printf("Cedulas de 100: %d\n", c100);
	printf("Cedulas de 50: %d\n", c50);
	printf("Cedulas de 10: %d\n", c10);
	printf("Cedulas de 5: %d\n", c5);
	printf("Cedulas de 1: %d\n", c1);
    return 0;
}
