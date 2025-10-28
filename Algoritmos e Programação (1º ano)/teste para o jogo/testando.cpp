#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define F_LIN 4
#define F_COL 4
#define M_LIN 8
#define M_COL 8
#define D_LIN 10
#define D_COL 10

void linha();
char facil();
char medio();
char dificil();

int main(){
	int difi, opcao, i,j;
	char nome[50][50], jogada[1][1];
	fflush(stdin);
	setlocale(LC_ALL, "Portuguese");

do{
	linha();
	printf( " BEM VINDO AO JOGO DA MEMÓRIA  \n");
	linha();
	printf("\n\t[1] > JOGAR\n");
	printf("\n\t[2] > SAIR\n\n");
	printf("\tOpção: ");
	scanf("%d", &opcao);
	linha();
	
switch (opcao){
	case 1:
		system("cls");
		linha();
		printf("> NOME DO JOGADOR > ");
		fflush(stdin);
		gets(nome[1]);
		linha();
		system("Pause");
		system("cls");
		
		do{
			printf("> Olá %s!, escolha o nível de dificuldade: \n\n", nome[i]);
			printf("\t[1] > Fácil\n");
			printf("\t[2] > Médio\n");
			printf("\t[3] > Díficil\n\n");
			printf("\t> Opção: ");
			scanf("%d", &difi);
			linha();
			
		switch (difi){
			case 1:
				system("cls");
				printf("> NÍVEL    : Fácil\n");
				printf("> JOGADOR: %s\n", nome[i]);
				linha();
				facil();
				linha();
				printf("> Digite a linha e a coluna respectivamente: ");
				scanf("%d%d", &jogada[i][j]);
	
			break;
			
			case 2: 
			    system("cls");
				printf("> NÍVEL    : Médio\n");
				printf("> JOGADOR: %s\n", nome[i]);
				linha();
				medio();
				linha();
				printf("> Digite a linha e a coluna respectivamente: ");
				scanf("%d%d", &jogada[i][j]);
				
			break;
			
			case 3: 
				system("cls");
				printf("> NÍVEL    : Díficil\n");
				printf("> JOGADOR: %s\n", nome[i]);
				linha();
				dificil();
				linha();
				printf("> Digite a linha e a coluna respectivamente: ");
				scanf("%d%d", &jogada[i][j]);
			
			break;
		}
		}	
}


char facil(){
	char **tabuleiro, cartas[F_LIN * F_COL / 2] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
	int i, j, c=0, cont=0;
	srand(time(NULL));
	
tabuleiro = (char **)malloc (F_LIN * sizeof (char*));

for (i=0; i < F_LIN; i++)
    tabuleiro[i] = (char *) malloc (F_COL * sizeof (char));
    
for (i=0; i < F_LIN; i++){
	for (j=0; j < F_COL; j++)
	    tabuleiro [i][j]='*';
    }
    
    while (c < F_LIN * F_COL/2) {
	}
   
}
	
	
	
	
	
}
}
