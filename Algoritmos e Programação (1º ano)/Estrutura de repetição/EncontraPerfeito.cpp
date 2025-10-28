#include <stdio.h>

/* Encontra os números perfeitos entre 1 e 100.000
Exemplo de número perfeito: 6, pois 3+2+1 = 6 (soma dos divisores)
*/

int main(){
  	int Num, soma, i;
 	for(Num=1; Num<=100000; Num++) {
		soma=0; i=Num-1; while (i>=1) { if (Num % i==0) soma=soma+i; i--;}
        if (soma==Num) printf("%d exemplo de perfeito\n", Num);	
	}
    return 0;
}








