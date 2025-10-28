#include <stdio.h>
#include <locale.h>

int main() {
	float Ant1, Ant2, Atual=0;
	int i, N;
	setlocale(LC_ALL, "Portuguese");
	printf("Informe N: ");
	scanf("%d", &N);
	if (N<0) 
	    printf("Termo não existe\n");
	else {
		i=0;
		Ant1=0;
		Ant2=1;
		while (i<N) {
           	Ant1 = Ant2;
            Ant2 = Atual;
            Atual = Ant1 + Ant2;
            printf("%.0f, ", Atual);
            i = i + 1;
		}
	}
    return 0;
}
	
