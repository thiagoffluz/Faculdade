#include <stdio.h>

// Protótipos de função
void MostraLinhas();
int fat(int);
float med(float, float);

int main () {
   int Num1, Num2, Result;
   MostraLinhas();
   printf("Informe 2 Inteiros: ");
   scanf("%d %d", &Num1, &Num2);
//   printf("Fatorial: %d\n", fat(Num));
   Result= fat(Num1);
   if (Result<0) printf("Fatorial nao existe");
   else printf ("Fatorial: %d\n", Result);
   MostraLinhas();
   printf("Media: %.2f\n", med(Num1, Num2));
   return 0;	
}

 // Procedimento em C (função tipo 'void', sem retorno)
void MostraLinhas() {
	printf("\n --------------------- \n");
	printf("\n --------------------- \n");
	printf("\n --------------------- \n");
}

// Função em C (neste caso com retorno de um inteiro)
int fat(int N) {
	int i, R;
	if (N<0) return -1;
	i=2;
	R=1;
	while (i<=N){
		R=R*i;
		i=i+1;
	}
	return R;
}

float med(float a, float b) {
     float r;
     r = (a+b)/2;
     return r;
}

