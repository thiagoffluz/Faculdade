#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <locale.h>

int tam;

int *criavet(int N) {
    int *v, i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    v = (int*)malloc(tam* sizeof(int));
    return v;
}

void inicializa(int *v, int tam) {
	int i;
	for(i=0;i<tam;i++) {
        printf("Elemento %d: ", i);//valores digitados pelo usuario
        scanf("%f", &v[i]);//lê os valores
    }
}

void mostra(int *v, int tam) {
	int i;
	for(i=0;i<tam;i++) {
	    printf("%d ", v[i]); 
    }  
}

int main() {
	int *v;
	int tam, E, primeiro, opcao, resposta;
	setlocale (LC_ALL, "Portuguese");
	v=criavet(tam);
    inicializa(v, tam);
    mostra(v, tam);
    printf("\n\n");
    return 0;
}


	
