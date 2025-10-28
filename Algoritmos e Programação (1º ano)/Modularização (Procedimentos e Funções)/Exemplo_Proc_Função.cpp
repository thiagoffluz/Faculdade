#include <stdio.h>

// protótipo de cada função/procedimento
void Med(float,float,float,float *);
float Medf(float,float,float);
void Troca(float *, float *);

int main() {
	float A,B,C,R;
	float *p;
	printf("Informe 3 valores:");
	scanf("%f %f %f",&A,&B,&C);
	Med(A,B,C,&R);
	printf("Media=%.2f\n", R);
	printf("Media=%.2f\n", Medf(A,B,C));

    printf("A=%.2f  B=%.2f\n", A, B); 
	Troca(&A,&B);
    printf("A=%.2f  B=%.2f\n", A, B); 
	
	p=&B;
	printf("End de B: %p %p\n", p, &B);
	printf("Valor de B: %.2f %.2f\n", *p, B);
	return 0;
}

// Exemplo de procedimento em C
void Troca(float *x, float *y) {
	float aux;
	aux=*x;
	*x=*y;
	*y=aux;
}

// Exemplo de um procedimento em C
void Med(float x, float y, float z, float *m) {
	*m = (x+y+z)/3;
	
}

// Exemplo de uma função em C
float Medf(float x, float y, float z) {
	float m;
	m=(x+y+z)/3;
	return m;
	// return (x+y+z)/3;
}







