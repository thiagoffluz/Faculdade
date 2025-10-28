#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main () {
	int menor, maior, qntd, i, num;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite quantos números quer receber: ");
	scanf("%d", &qntd);
	
	for (i=1;i<=qntd;i++) {
	    printf ("Digite o %dº número: ", i);
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
    printf ("O menor número é: %d\n", menor);
    printf ("O maior número é: %d", maior);
    return 0;
    
    
    
    
    
    
    
    
    
    
    
    
    
}
