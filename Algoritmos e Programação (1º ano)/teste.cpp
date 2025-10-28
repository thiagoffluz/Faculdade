#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char nome[100];
	int score;
} tscore;

// cria uma matriz NxN e inicializa com 2
int **criamat(int N) {
	int **x, i, j;
	x=(int **) malloc(N*sizeof(int *));
	if (x==NULL) return NULL;
	for (i=0; i<N; i++) {
		x[i]= (int *) malloc(N*sizeof(int));
		if (x[i]==NULL) return NULL;
	}
	// Inicializando a matriz  
	for(i=0; i<N; i++)
	  for(j=0; j<N; j++) x[i][j] = 2;
	return x;
}

void mostra(int **x, int N) {
	int i, j;
	for(i=0; i<N; i++) {
	   for(j=0; j<N; j++) printf("%d ", x[i][j]);
	   printf("\n");
	}
}

int main() {
	int **m, **r;
	tscore reg, reg_teste;
	
	strcpy(reg.nome, "Juca da Silva");
	reg.score=40;
	
    m=criamat(5);	
	mostra(m, 5);
	
	// Salvando a matriz em disco
	FILE *fp;
	fp=fopen("arq.dad", "wb");
	if (fp==NULL) {
		printf("Erro ao abrir arquivo\n");
		exit(-1);
	}
    fwrite(&reg, sizeof(tscore), 1, fp);
    fwrite(m, 5*5*sizeof(int), 1, fp);
    fclose(fp);
    
    // Lendo a matriz do disco
    r=criamat(5);
	fp=fopen("arq.dad", "rb");
	if (fp==NULL) {
		printf("Erro ao abrir arquivo\n");
		exit(-1);
	}
    fread(&reg_teste, sizeof(tscore), 1, fp);
    fread(r, 5*5*sizeof(int), 1, fp);
    printf("Nome: %s\n", reg_teste.nome);
    printf("Score: %d\n", reg_teste.score);
    printf("Matriz lida:\n");
    mostra(r, 5);
	return 0;
}

