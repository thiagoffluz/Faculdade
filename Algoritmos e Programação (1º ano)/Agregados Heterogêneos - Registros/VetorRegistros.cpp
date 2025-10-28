#include <stdio.h>
#include <string.h>
#define N 3

// Tipo registro em C
typedef struct {
	int codigo;
	char descr[50];
	float qtde, vlr;
} tmat;

// Protótipo de função
void ordena(tmat [], int);
void mostra(tmat [], int);

int main() {
  int i;
  tmat vmat[N];
  for (i=0; i<N; i++) {
  	 printf("Cod: ");
  	 scanf("%d", &vmat[i].codigo);
  	 printf("Descr: ");
  	 fflush(stdin);
  	 gets(vmat[i].descr);
  	 printf("Qtde: ");
  	 scanf("%f", &vmat[i].qtde);
  	 printf("Valor: ");
  	 scanf("%f", &vmat[i].vlr);  	
  }	
  ordena(vmat, N);
  mostra(vmat, N);
  return 0;	
}

// Ordena os registros no vetor (por descrição)
void ordena(tmat v[], int tam){
	int i, j;
	tmat aux;
	for (i=0; i<tam-1; i++)
	  for (j=i+1; j<tam; j++)
	      if (strcmpi(v[i].descr, v[j].descr)>0) {
	      	  aux=v[i];
	      	  v[i]=v[j];
	      	  v[j]=aux;
		  }
}

// Mostra os registros do vetor
void mostra(tmat v[], int tam) {
	int i;
	printf("Cod     Descricao         Qtde     Valor \n");
	for (i=0; i<tam; i++){
		printf("%5d    %-15s  %5.2f   %5.2f\n",
		    v[i].codigo, v[i].descr,
		    v[i].qtde, v[i].vlr);
	}
}





