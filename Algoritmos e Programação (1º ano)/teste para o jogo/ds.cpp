#include <stdio.h>  //biblioteca padrão
#include <stdlib.h> //biblioteca da alocação dinâmica
#include <locale.h> //biblioteca de idiomas
#include <time.h>   //biblioteca de randômica
#include <string.h> //biblioteca para strings
#define F_LIN 4     //biblioteca de qntd de linhas nivel fácil
#define F_COL 4     //biblioteca de qntd de colunas nivel fácil
#define M_LIN 8     //biblioteca de qntd de linhas nivel médio
#define M_COL 8     //biblioteca de qntd de colunas nivel médio
#define D_LIN 10    //biblioteca de qntd de linhas nivel difífil
#define D_COL 10    //biblioteca de qntd de colunas nivel difícil

//PROTÓTIPOS DE FUNÇÕES
char facil();
char medio();
char dificil();

//FUNÇÃO PRINCIPAL
int main()
{
    //variáveis
    int difi, opcao, i, j;
    char nome[50][50], jogada[1][1];
    //limpar o buffer do teclado
    fflush(stdin);
    //idioma em português
    setlocale(LC_ALL, "Portuguese");

    do
    {
        printf("    ****** BEM VINDO AO JOGO DA MEMÓRIA ******\n");
        printf("\n\t[1] > JOGAR\n");
        printf("\t[2] > TUTORIAL\n");
        printf("\t[3] > SAIR\n\n");
        printf("\tOpção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            //lê o nome do jogador
            system("cls");
            printf("> NOME DO JOGADOR > ");
            fflush(stdin);
            gets(nome[i]);
            system("Pause");
            system("cls");

            do
            {
                //jogador escolhe o nível da dificuldade
                printf("> Olá %s!, escolha o nível de dificuldade: \n\n", nome[i]);
                printf("\t[1] > Fácil\n");
                printf("\t[2] > Médio\n");
                printf("\t[3] > Difícil\n\n");
                printf("\t> Opção: ");
                scanf("%d", &difi);
                
                //menu de opções de níveis de dificuldade
                switch (difi)
                {
                case 1:
                    system("cls");
                    printf(" -------------------------------------------------\n");
    				printf(" > JOGADOR : %s\n"
			           " > NÍVEL   : Fácil\n",nome[i]);
			           printf(" -------------------------------------------------\n");
                    facil();
                    printf("> Digite a linha e a coluna respectivamente: ");
				    scanf("%d%d", &jogada[i][j]); 
				
				break;

                case 2:
                    system("cls");
                    printf(" -------------------------------------------------\n");
                    printf("> NÍVEL  : Médio\n");
                    printf("> JOGADOR: %s\n", nome[i]);
                    printf(" -------------------------------------------------\n");
                    medio();
				    printf("> Digite a linha e a coluna respectivamente: ");
			    	scanf("%d%d", &jogada[i][j]);
			    	
                break;

                case 3:
                    system("cls");
                    printf(" -------------------------------------------------\n");
                    printf("> NÍVEL  : Difícil\n");
                    printf("> JOGADOR: %s\n", nome[i]);
                    dificil();
			    	printf("> Digite a linha e a coluna respectivamente: ");
			    	scanf("%d%d", &jogada[i][j]);
			    	
                break;
                    
                default:
                    system("cls");
                    printf("\t> Opção inválida!\n");
                }
}
            while(difi > 1 || difi < 3);

            break;

        case 2:
            system("cls");
            printf(" > TUTORIAL:\n");
            printf(" # O objetivo do jogo é achar um par de cada carta.\n Boa sorte! :)\n\n");
            system("Pause");
            system("cls");
            break;

        case 3:
            system("cls");
            printf("\t> SAINDO DO PROGRAMA...\n");
            exit(0);

        default:
            system("cls");
            printf("\t> Opção inválida!\n");
        }

    }
    while(opcao > 1 || opcao < 3);

    return 0;
}

//FUNÇÃO QUE GERA TABULEIRO DE NÍVEL FÁCIL
char facil()
{
    char **tabuleiro, cartas[] = {'a', 'b', 'c', 'd', 'e', 'f','g','h'};
    int i, j, c=0, cont=0;
    srand(time(NULL));

// aloca um vetor de F_LIN ponteiros para as linhas
    tabuleiro = (char **) malloc (F_LIN * sizeof (char*)) ;

// aloca cada uma das linhas (vetores de F_COL char)
    for (i=0; i < F_LIN; i++)
        tabuleiro[i] = (char *) malloc (F_COL * sizeof (char)) ;

//preenche com caracteres aleatórios
    for (i=0; i<F_LIN; i++)
    {
        for (j=0; j<F_COL; j++)
            tabuleiro [i][j]='*';
    }


    while (c<F_LIN*F_COL/2)
    {
        i = rand() % F_LIN;
        j = rand() % F_COL;
        if (tabuleiro[i][j] == '*')
        {
            tabuleiro [i][j] = cartas[c];
            cont= cont + 1;
        }
        else
        {
            continue;
        }
        if (cont==2)
        {
            c=c+1;
            cont=0;
        }
    }

//imprime a matriz
    for (i=0; i < F_LIN; i++)
    {
        for (j=0; j < F_COL; j++)
        {
            printf(" %c | ", tabuleiro[i][j]);
        }
        printf("\n");
    }

// libera a memória da matriz
    for (i=0; i < F_LIN; i++)
    {
        free (tabuleiro[i]) ;
    }
    free (tabuleiro) ;
}

//FUNÇÃO QUE GERA TABULEIRO DE NÍVEL MÉDIO
char medio(){
char **tabuleiro, cartas[] = {'a', 'b', 'c', 'd', 'e', 'f','g', 'h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','!','$','/','+','-','?'};
    int i, j, c=0, cont=0;
    srand(time(NULL));

// aloca um vetor de F_LIN ponteiros para linhas
tabuleiro = (char **) malloc (M_LIN * sizeof (char*)) ;

// aloca cada uma das linhas (vetores de F_COL char)
for (i=0; i < M_LIN; i++)
   tabuleiro[i] = (char *) malloc (M_COL * sizeof (char)) ;

//preencher com caracteres aleatórios
for (i=0; i<M_LIN; i++)
         for (j=0; j<M_COL;j++)
         tabuleiro [i][j]='*';

	while (c<M_LIN*M_COL/2) {
	     i = rand() % M_LIN;
		 j = rand() % M_COL;
		 if (tabuleiro[i][j] == '*') {
		 	tabuleiro [i][j] = cartas[c];
		 	cont= cont + 1;
		    }	else { continue; }
		 if (cont==2) {
		 	c=c+1;
		 	cont=0;
		 }
	}

//imprime a matriz
for (i=0; i < M_LIN; i++){
	for (j=0; j < M_COL; j++){
   	 printf("| %c ", tabuleiro[i][j]);
     }
     printf("|");
	 printf ("\n");
}

// libera a memória da matriz
for (i=0; i < M_LIN; i++){
	free (tabuleiro[i]) ;
}
free (tabuleiro) ;

}

//FUNÇÃO QUE GERA TABULEIRO DE NÍVEL DIFÍCIL
char dificil(){
	char **tabuleiro, cartas[] = {'a', 'b', 'c', 'd', 'e', 'f','g', 'h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','!','$','/','+','-','?','&','(',')','%','A','B','C','D','E','F','G','H','I','J','L','M','N','O'}; ;
    int i, j, c=0, cont=0;
    srand(time(NULL));

// aloca um vetor de F_LIN ponteiros para linhas
tabuleiro = (char **) malloc (D_LIN * sizeof (char*)) ;

// aloca cada uma das linhas (vetores de F_COL char)
for (i=0; i < D_LIN; i++)
   tabuleiro[i] = (char *) malloc (D_COL * sizeof (char)) ;

//preencher com caracteres aleatórios
for (i=0; i<D_LIN; i++)
         for (j=0; j<D_COL;j++)
         tabuleiro [i][j]='*';

	while (c<D_LIN*D_COL/2) {
	     i = rand() % D_LIN;
		 j = rand() % D_COL;
		 if (tabuleiro[i][j] == '*') {
		 	tabuleiro [i][j] = cartas[c];
		 	cont= cont + 1;
		    }	else { continue; }
		 if (cont==2) {
		 	c=c+1;
		 	cont=0;
		 }
	}

//imprime a matriz
for (i=0; i < D_LIN; i++){
	for (j=0; j < D_COL; j++){
   	 printf(" %c | ", tabuleiro[i][j]);
     }
     printf("\n");
}

// libera a memória da matriz
for (i=0; i < D_LIN; i++){
	free (tabuleiro[i]) ;
}
free (tabuleiro) ;

}

