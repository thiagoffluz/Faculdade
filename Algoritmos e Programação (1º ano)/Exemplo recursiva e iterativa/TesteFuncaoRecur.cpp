#include <stdio.h>

int qtde;

// prot�tipo de fun��o
int X(int, int);
float Soma(int);

int main(){
	int Resp;
	qtde=0;
	Resp = X(5,3);
	printf("Resultado: %d\n", Resp);
	printf("Qtde chamadas: %d\n", qtde);
    printf("Chamada fun��o Soma: %f", Soma(3)); 
	return 0;
}

float Soma(int N){
	if (N==1) return 1;
	else return 1.0/N + Soma(N-1);
}

int X(int n, int m){
	qtde++;
	if (n==m || m==0) return 1;
	else return X(n-1, m) + X(n-1, m-1);
}
