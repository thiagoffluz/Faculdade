#include <stdio.h>

// Protótipo de função
int mdc(int, int);
int primo(int);

int main() {
   int a, b;
   printf("Informe 2 inteiros: ");
   scanf("%d %d", &a, &b);
   printf("MDC: %d\n", mdc(a,b));
   if (primo(a)==1)	printf("%d eh primo\n", a);
   else printf("%d nao eh primo\n", a);
   return 0;
}

int mdc(int x, int y){
	if (x<=0 || y<=0) return -1;
	while (x!=y){
		if (x>y) x=x-y;
		else y=y-x;
	}
	return x;
}

int primo(int N) {
	int p, i;
	if (N<=1) return 0;
	i=N-1;
	p=1;
	while (i>1 && p==1) {
		if (N % i == 0) p=0;
		i--;
	}
	return p;
}









