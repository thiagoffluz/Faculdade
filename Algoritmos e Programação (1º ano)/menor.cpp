#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main () {
	int menor, maior, qntd, i, num;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite quantos n�meros quer receber: ");
	scanf("%d", &qntd);
	
	for (i=1;i<=qntd;i++) {
	    printf ("Digite o %d� n�mero: ", i);
	    scanf ("%d", &num);
	    
    if (i==1) {
	    menor=num;
	    maior=num;
    }
    
    else {
    	if (num < menor) {
		    menor=num;
	    }
	    else {
	    	if (num > maior) {
	    		maior=num;
			}
		}
	}
}
    printf ("O menor n�mero �: %d\n", menor);
    printf ("O maior n�mero �: %d", maior);
    return 0;
    
    
    
    
    
    
    
    
    
    
    
    
    
}
