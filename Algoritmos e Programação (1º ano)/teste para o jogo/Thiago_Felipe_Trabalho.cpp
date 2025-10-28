#include <stdio.h>  
#include <stdlib.h> 
#include <locale.h> 
#include <time.h>   
#include <string.h> 
#define F_LIN 4     
#define F_COL 4   
#define M_LIN 8    
#define M_COL 8     
#define D_LIN 10   
#define D_COL 10    

//PROT�TIPOS DE FUN��ES
char facil();
char medio();
char dificil();

//FUN��O PRINCIPAL
int main()
{
    int difi, opcao, i;
    char nome[50][50];
    fflush (stdin);
    setlocale (LC_ALL, "Portuguese");

    do
    {
    	//Escolha o que quer fazer
        printf ("JOGO DA MEM�RIA\n");
        printf ("O QUE VOC� QUER FAZER?\n");
        printf ("1 - JOGAR\n");
        printf ("2 - SAIR\n\n");
        printf ("Op��o: ");
        scanf ("%d", &opcao);
 
        switch (opcao)
        {
        
        //Come�a o jogo caso escolha a op��o 1
        case 1:
            system ("cls");
            printf ("DIGITE SEU NOME: ");
            fflush (stdin);
            gets (nome[i]);
            system ("Pause");
            system ("cls");

            do
            {
                //Escolha do n�vel de dificuldade
                printf ("%s, escolha qual n�vel de dificuldade quer jogar: \n\n", nome[i]);
                printf ("1 - Modo f�cil\n");
                printf ("2 - Modo m�dio\n");
                printf ("3 - Modo dif�cil\n\n");
                scanf ("%d", &difi);

                //Menu de op��es de n�veis de dificuldade
                switch (difi)
                {
                case 1:
                    system ("cls");
			        printf ("N�VEL ESCOLHIDO: F�cil\n", nome[i]);
                    facil();
                    break;
                    
                case 2:
                    system ("cls");
			        printf ("N�VEL ESCOLHIDO: M�dio\n", nome[i]);
                    medio();
                    break;

                case 3:
                    system ("cls");
			        printf ("N�VEL ESCOLHIDO: Dif�cil\n", nome[i]);
                    dificil();
                    break;
                    
                default:
                    system ("cls");
                    printf ("OP��O INV�LIDA, DIGITE OUTRO N�MERO\n");
                }
}
            while (difi > 1 || difi < 3);

            break;
            
        //Sai do programa ao escolher a op��o 2
        case 2:
            system ("cls");
            printf ("SAINDO DO PROGRAMA...\n");
            exit(0);

        //Repete caso a op��o escolhida seja inv�lida  
        default:
            system("cls");
            printf("OP��O INV�LIDA, DIGITE OUTRO N�MERO\n");
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

//Aloca um vetor de F_LIN ponteiros para as linhas
    tabuleiro = (char **) malloc (F_LIN * sizeof (char*)) ;

//Aloca cada uma das linhas (vetores de F_COL char)
    for (i=0; i < F_LIN; i++)
        tabuleiro[i] = (char *) malloc (F_COL * sizeof (char)) ;

//Preenche com caracteres aleat�rios
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

//Imprime a matriz
    for (i=0; i < F_LIN; i++)
    {
        for (j=0; j < F_COL; j++)
        {
            printf(" %c | ", tabuleiro[i][j]);
        }
        printf("\n");
    }

//libera a mem�ria da matriz
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

//Aloca um vetor de F_LIN ponteiros para linhas
tabuleiro = (char **) malloc (M_LIN * sizeof (char*)) ;

//Aloca cada uma das linhas (vetores de F_COL char)
for (i=0; i < M_LIN; i++)
   tabuleiro[i] = (char *) malloc (M_COL * sizeof (char)) ;

//Preencher com caracteres aleat�rios
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

//Imprime a matriz
for (i=0; i < M_LIN; i++){
	for (j=0; j < M_COL; j++){
   	 printf("| %c ", tabuleiro[i][j]);
     }
     printf("|");
	 printf ("\n");
}

//libera a mem�ria da matriz
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

//Aloca um vetor de F_LIN ponteiros para linhas
tabuleiro = (char **) malloc (D_LIN * sizeof (char*)) ;

//Aloca cada uma das linhas (vetores de F_COL char)
for (i=0; i < D_LIN; i++)
   tabuleiro[i] = (char *) malloc (D_COL * sizeof (char)) ;

//Preencher com caracteres aleat�rios
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

//Imprime a matriz
for (i=0; i < D_LIN; i++){
	for (j=0; j < D_COL; j++){
   	 printf(" %c | ", tabuleiro[i][j]);
     }
     printf("\n");
}

//libera a mem�ria da matriz
for (i=0; i < D_LIN; i++){
	free (tabuleiro[i]) ;
}
free (tabuleiro) ;

}










