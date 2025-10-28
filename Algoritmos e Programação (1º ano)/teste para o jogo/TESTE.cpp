#define _CRT_SECURE_NO_WARNINGS  /// para usar scanf oe outras funcoes no visual studio
#define F_LIN 3
#define F_COL 3 
#define M_LIN 6
#define M_COL 6
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#define N 8
#define C 64
#define h GetStdHandle(STD_OUTPUT_HANDLE)
void textcolor(int , int);

int main()
{
    char mat[N][N] = {0}, nome[50] = {' '},
         vet[C] = {' '}, jogada[2][2],caract = ' ';
    int  i=0, j=0, c=0, n=0, opcao=0, pts=0, t=10,
         flg=0,linha=0,coluna=0;
    system("title JOGO DA MEMÓRIA 1.0 BY MICHEL");
    setlocale(LC_ALL, "Portuguese");
    fflush(stdin);
    system("color 0B");
    srand(time(NULL));
    printf(" #############################################\n\
          \r ###### Bem vindo (a) ao jogo da memória #####\n\
          \r #############################################\n\
          \r -------------------------------------------\n\n\
          \r [1] JOGAR\n\
          \r [2] SAIR\n\
          \r ---------------------------------------------\n\
          \r Escolha uma opção: ");
    scanf("%d", &opcao);
    printf(" #############################################\n");
    system("cls");
    switch (opcao)
    {
    case 1:
        ///  usuario digita seu nome para jogar e ve os objetivos do jogo
        printf("\n--------------------------------------\n\
                \r Nome do jogador ? ");
        scanf("%s", nome);
        printf("--------------------------------------\n\n\
              \r Olá %s!\n\
              \r O objetivo do jogo é achar duas cartas iguais a cada rodada.\n\
              \r E alcançar os mil pts :\n\n\
              \r Boa sorte ! ! !\n\n",nome);
        system("Pause");
        ///  limpa a tela
        system("cls");
        ///  gera os letras aleatórias e imprime a matriz
        printf("\n--------------------------------------\n\
                \r        TABULEIRO DO JOGO\n\
                \r--------------------------------------\n\
                \r JOGADOR: %s\n\
                \r PONTOS : %d pts\n\
                \r--------------------------------------\n\
                \r # ",nome,pts);
        ///  esconde a matriz
        for(i=0; i<8; i++)
        {
            for(j=0;j<8;j++)mat[i][j]=' ';
                printf("  %d ", i);
        }
        printf("\n-------------------------------------\n");
        for(i=0; i<32; i++)
        {
            do                                         /// tres barras pois no codeblocks
            {                                          /// fica com cores mais visiveis
                flg = 0;                               /// uma flag de controle
                linha  = rand() %8;                    /// escolhe a linha  da matriz
                coluna = rand() %8;                    /// escolhe a coluna da matriz
                if(mat[linha][coluna] != ' ')flg = 1;  /// se não estiver vazia marca como ocupada
            }while( flg );                             /// se estiver ocupada repete e escolhe outra posicao
            caract = 'A' + (char)(rand()%26);          /// escolhe uma Letra que pode Ate ser repetida
            mat[linha][coluna] = caract;               /// armazena na matriz
            ///printf("\ni= %d  tecle\n",i);getch();
            do
            {
                flg = 0;
                linha  = rand() %8;                    /// escolhe a linha  da matriz
                                                       /// para colocar o par dessa letra
                coluna = rand() %8;                    /// escolhe a coluna da matriz
                if(mat[linha][coluna] != ' ')flg = 1;  /// se não estiver vazia marca como ocupada
            }while( flg );                             /// se estiver ocupada repete e escolhe outra posicao
            mat[linha][coluna] = caract;               /// coloca o para da letra na matriz
        }
        for (i = 0; i < 8; i++)
        {
            printf(" %d |", i);
            for (j = 0; j < 8; j++)
            {
                ///  mat[i][j] = 'A' + (char)(rand()%26);/// AQui já Gerou a letra
                printf(" %c |", mat[i][j]);
            }
            printf("\n");
        }
        printf("---------------------------------------\n");
        ///  loop de contagem regressiva
        printf ("Memorize o tabuleiro...\n");
        while (t>0)
        {
            printf ("%d ", t);
            t--;
            Sleep (4000);
        }
        ///  limpa a tela após o loop
        system("cls");
        while(opcao == 1)
        {
            printf(" ::: Informe as posições da jogada :::\n\n");
            for(i=1; i<3; i++)
            {
                printf(" %dº Carta\n", i);
                for(j=1; j<3; j++)
                {
                    scanf("%c", &jogada[i][j]);
                }
            }
            if(jogada[i][j] == mat[i][j])
            {
                printf(" PARABÉNS! VOCÊ ACERTOU! =)\n\n GANHOU 100 PTS!\n\n");
                pts = pts + 100;
                ///  continue;
            }
            else
            {
                if(jogada[i][j] != mat[i][j])
                {
                    printf("\n ERROU! :(\n\n");
                    continue;
                }
                else if(jogada[i][j] > 8 || jogada[i][j]  < 0)
                {
                    printf(" JOGADA INVÁLIDA!\n\
                           \r\t\t\t\tA LINHA PRECISA SER VALORES DE 0 A 8\n\
                           \r\t\t\t\tE A COLUNA TAMBÉM!!!\n\n");
                    continue;
                    system("cls");
                }
                else if(pts == 1000)
                {
                    printf(" PARABÉNS! VOCÊ ALCANÇOU OS MIL PONTOS!!! \n\n\
                    \r PARABÉNS! SUA MEMÓRIA É ÓTIMA!!!\n\n\
                    \r Deseja jogar novamente ?\n\
                    \r [1] SIM | [2] NÃO ");
                    scanf("Opção: %d", &opcao);
                    if(opcao == 1)
                    {
                        pts = 0;
                    }
                    else if(opcao == 2)
                    {
                        exit(1);
                    }
                    else
                    {
                        printf("Opção inválida!");
                    }
                }
                break;
            }
        }
    case 2:
        textcolor(12,15);
        printf("\n\n\n\t\t  Saindo do Programa . . . !  \n\n\n");
        Sleep(2000);
        textcolor(7,0);
        exit(1);
    default:
        printf (" OPÇÃO INCORRETA!!!\n\n");
        system("Pause");
        return 0;
    }
}
void textcolor(int letras , int fundo)
{
    SetConsoleTextAttribute(h , letras + (fundo << 4) );
}
