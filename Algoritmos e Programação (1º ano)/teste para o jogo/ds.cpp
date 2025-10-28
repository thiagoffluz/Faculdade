#include <stdio.h>  //biblioteca padr�o
#include <stdlib.h> //biblioteca da aloca��o din�mica
#include <locale.h> //biblioteca de idiomas
#include <time.h>   //biblioteca de rand�mica
#include <string.h> //biblioteca para strings
#define F_LIN 4     //biblioteca de qntd de linhas nivel f�cil
#define F_COL 4     //biblioteca de qntd de colunas nivel f�cil
#define M_LIN 8     //biblioteca de qntd de linhas nivel m�dio
#define M_COL 8     //biblioteca de qntd de colunas nivel m�dio
#define D_LIN 10    //biblioteca de qntd de linhas nivel dif�fil
#define D_COL 10    //biblioteca de qntd de colunas nivel dif�cil

//PROT�TIPOS DE FUN��ES
char facil();
char medio();
char dificil();

//FUN��O PRINCIPAL
int main()
{
    //vari�veis
    int difi, opcao, i, j;
    char nome[50][50], jogada[1][1];
    //limpar o buffer do teclado
    fflush(stdin);
    //idioma em portugu�s
    setlocale(LC_ALL, "Portuguese");

    do
    {
        printf("    ****** BEM VINDO AO JOGO DA MEM�RIA ******\n");
        printf("\n\t[1] > JOGAR\n");
        printf("\t[2] > TUTORIAL\n");
        printf("\t[3] > SAIR\n\n");
        printf("\tOp��o: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            //l� o nome do jogador
            system("cls");
            printf("> NOME DO JOGADOR > ");
            fflush(stdin);
            gets(nome[i]);
            system("Pause");
            system("cls");

            do
            {
                //jogador escolhe o n�vel da dificuldade
                printf("> Ol� %s!, escolha o n�vel de dificuldade: \n\n", nome[i]);
                printf("\t[1] > F�cil\n");
                printf("\t[2] > M�dio\n");
                printf("\t[3] > Dif�cil\n\n");
                printf("\t> Op��o: ");
                scanf("%d", &difi);
                
                //menu de op��es de n�veis de dificuldade
                switch (difi)
                {
                case 1:
                    system("cls");
                    printf(" -------------------------------------------------\n");
    				printf(" > JOGADOR : %s\n"
			           " > N�VEL   : F�cil\n",nome[i]);
			           printf(" -------------------------------------------------\n");
                    facil();
                    printf("> Digite a linha e a coluna respectivamente: ");
				    scanf("%d%d", &jogada[i][j]); 
				
				break;

                case 2:
                    system("cls");
                    printf(" -------------------------------------------------\n");
                    printf("> N�VEL  : M�dio\n");
                    printf("> JOGADOR: %s\n", nome[i]);
                    printf(" -------------------------------------------------\n");
                    medio();
				    printf("> Digite a linha e a coluna respectivamente: ");
			    	scanf("%d%d", &jogada[i][j]);
			    	
                break;

                case 3:
                    system("cls");
                    printf(" -------------------------------------------------\n");
                    printf("> N�VEL  : Dif�cil\n");
                    printf("> JOGADOR: %s\n", nome[i]);
                    dificil();
			    	printf("> Digite a linha e a coluna respectivamente: ");
			    	scanf("%d%d", &jogada[i][j]);
			    	
                break;
                    
                default:
                    system("cls");
                    printf("\t> Op��o inv�lida!\n");
                }
}
            while(difi > 1 || difi < 3);

            break;

        case 2:
            system("cls");
            printf(" > TUTORIAL:\n");
            printf(" # O objetivo do jogo � achar um par de cada carta.\n Boa sorte! :)\n\n");
            system("Pause");
            system("cls");
            break;

        case 3:
            system("cls");
            printf("\t> SAINDO DO PROGRAMA...\n");
            exit(0);

        default:
            system("cls");
            printf("\t> Op��o inv�lida!\n");
        }

    }
    while(opcao > 1 || opcao < 3);

    return 0;
}

//FUN��O QUE GERA TABULEIRO DE N�VEL F�CIL
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

//preenche com caracteres aleat�rios
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

// libera a mem�ria da matriz
    for (i=0; i < F_LIN; i++)
    {
        free (tabuleiro[i]) ;
    }
    free (tabuleiro) ;
}

//FUN��O QUE GERA TABULEIRO DE N�VEL M�DIO
char medio(){
char **tabuleiro, cartas[] = {'a', 'b', 'c', 'd', 'e', 'f','g', 'h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','!','$','/','+','-','?'};
    int i, j, c=0, cont=0;
    srand(time(NULL));

// aloca um vetor de F_LIN ponteiros para linhas
tabuleiro = (char **) malloc (M_LIN * sizeof (char*)) ;

// aloca cada uma das linhas (vetores de F_COL char)
for (i=0; i < M_LIN; i++)
   tabuleiro[i] = (char *) malloc (M_COL * sizeof (char)) ;

//preencher com caracteres aleat�rios
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

// libera a mem�ria da matriz
for (i=0; i < M_LIN; i++){
	free (tabuleiro[i]) ;
}
free (tabuleiro) ;

}

//FUN��O QUE GERA TABULEIRO DE N�VEL DIF�CIL
char dificil(){
	char **tabuleiro, cartas[] = {'a', 'b', 'c', 'd', 'e', 'f','g', 'h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','!','$','/','+','-','?','&','(',')','%','A','B','C','D','E','F','G','H','I','J','L','M','N','O'}; ;
    int i, j, c=0, cont=0;
    srand(time(NULL));

// aloca um vetor de F_LIN ponteiros para linhas
tabuleiro = (char **) malloc (D_LIN * sizeof (char*)) ;

// aloca cada uma das linhas (vetores de F_COL char)
for (i=0; i < D_LIN; i++)
   tabuleiro[i] = (char *) malloc (D_COL * sizeof (char)) ;

//preencher com caracteres aleat�rios
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

// libera a mem�ria da matriz
for (i=0; i < D_LIN; i++){
	free (tabuleiro[i]) ;
}
free (tabuleiro) ;

}

