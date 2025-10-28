#include <stdio.h>  
#include <stdlib.h> 
#include <locale.h>  

int main ()
{
	fflush (stdin);
    float matriz[3][4],trans[4][3],vetor[3],maior,soma; // Variávies tipo float
    int l,c; // Variáveis tipo int
    setlocale (LC_ALL, "Portuguese"); // Coloca o dioma como português

    printf ("Exercício nº 4 Prova Parte Prática\n");
    printf ("Digite valores para os elementos da matriz 3x4:\n");

    for (l=0; l<3; l++) 
        for (c=0; c<4; c++)
        {
            printf ("Elemento[%d][%d] = ", l, c); 
            scanf ("%f", &matriz[l][c]); // Lê os elementos da matriz
        }

    printf ("\n"); // Pula uma linha
    printf ("Matriz gerada:\n"); 
    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 4; c++)
        {
            printf (" %.2f ", matriz[l][c]); // Mostra a matriz gerada na tela
        }
        printf ("\n"); // Pula uma linha
    }

    printf ("\n"); // Pula uma linha
    printf ("Maior valor de cada linha:\n"); // Encontra o maior valor de cada linha
       for (l = 0; l < 3; l++)
    {
        vetor[l] = matriz[l][c];
        for (c = 0; c < 4; c++)
        {
            if (matriz[l][c] > vetor[l])
            {
                vetor[l] = matriz[l][c];
            }
        }
    }
    for (l=0; l<3; l++)
        printf ("Linha %d =  %.2f\n", l, vetor[l]); // Mostra o vetor com o maior valor de cada linha 

    printf ("\n"); // Pula uma linha
    printf ("Maior valor da matriz:\n"); // Encontra o maior valor da matriz
    maior = 0;
    for (l=0; l<3; l++)
    {
        for (c=0; c<4; c++)
        {
            if (matriz[l][c] > maior)
            {
                maior = matriz[l][c];
            }
        }
    }
    printf ("O maior valor é: %.2f\n",maior); // Mostra o maior valor da matriz na tela

    printf ("\n"); // Pula uma linha
    printf ("A matriz dividida pelo maior valor encontrado: \n"); // Encontra  a matriz dividida pelo maior valor encontrado
    maior = 0;
    for (l=0; l<3; l++)
    {
        for (c=0; c<4; c++)
        {
            if (matriz[l][c]>maior)
                maior = matriz[l][c];
        }
    }
    for (l=0; l<3; l++)
    {
        for (c=0; c<4; c++)
            matriz[l][c] = matriz[l][c] / maior;
    }
    for (l=0; l<3; l++)
    {
        for (c=0; c<4; c++)
        {
            printf (" %.2f  ", matriz[l][c]); // Mostra a matriz dividida pelo maior encontrado na tela
        }
        printf ("\n"); // Pula uma linha
    }
    
    printf ("\n"); // Pula uma linha
    printf ("A soma dos elementos da matriz após a divisão: \n"); // Encontra a soma dos elementos da matriz após a divisão
    soma=0;
    for (l=0; l<3; l++)
        for (c=0; c<4; c++)
            soma = soma + matriz[l][c];
    printf (" %.2f  \n", soma); // Mostra a soma dos elementos da matriz após a divisão na tela

    printf ("\n"); // Pula uma linha 
    printf ("A transposta da matriz depois da divisão:\n"); // Encontra a transposta da matriz depois da divisão
    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 4; c++)
        {
            trans[c][l] = matriz[l][c];
        }
    }
    for (l = 0; l < 4; l++)
    {
        for (c = 0; c < 3; c++)
        {
            printf (" %.2f  ", trans[l][c]); // Mostra a transposta da matriz depois da divisão
        }
        printf ("\n"); // Pula uma linha
    }
    
    printf ("\n"); // Pula uma linha
    system ( "PAUSE" ); // Pausa o sistema
    return 0; // Retorna a 0 
}
