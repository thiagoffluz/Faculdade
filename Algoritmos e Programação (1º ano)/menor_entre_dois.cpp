#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main () {
	int num1, num2, menor;
	setlocale(LC_ALL, "Portuguese");
	
	printf ("Escreva dois valores: ");
	scanf ("%d %d", &num1, &num2);
	
	if (num1 < num2) {
		menor = num1;
		printf ("O menor número é: %d", menor);
    } 
    else {
	    menor = num2;
	    printf ("O menor número é: %d", menor);
	}
	return 0;
}
