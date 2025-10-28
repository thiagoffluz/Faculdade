#include <stdio.h>

int fibo(int);

int main() {
  int termo;
  printf("Informe termo: ");
  scanf("%d", &termo);
  printf("O termo %d de Fibonacci eh %d\n", termo, fibo(termo));
  return 0;
}

int fibo(int N){
	int atual=1, ant1=1, ant2=1, i=2;
	while (i<N){
		atual=ant1+ant2;
		ant1=ant2;
		ant2=atual;
		i++;
	}
    return atual; 	
}
