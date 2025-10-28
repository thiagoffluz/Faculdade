#include <stdio.h>

int main() {
	int N, i;
	printf("Informe N: ");
	scanf("%d", &N);
	
	for(i=0; i<=10; i++)
	   printf("%d x %d = %d\n", N, i, N*i);
	
    return 0;	
}
