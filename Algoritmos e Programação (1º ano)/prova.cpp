//BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
//CONSTANTE LOCAL DO ARQUIVO
#define ARQ_LOCAL "soma_diferenca.bin"

//VARÁVEL GLOBAL PARA O TAMANHO DO VETOR
int tam_v;

//CRIA VETOR
int *cria_vet(int n)
{
    int *vet;
    int i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam_v);
    //cria um vetor de n posições
    vet = (int *) malloc (tam_v*sizeof(int));
    return vet;
}

//PREENCHE O VETOR
void inicializa(float *vet, int tam_v)
{
    int i;

    //Preenche o vetor
    for(i=0; i<tam_v; i++)
    {
        printf("Elemento %d: ", i);//valores digitados pelo usuario
        scanf("%f", &vet[i]);//lê os valores
    }
}

//MOSTRA
float mostra(float *vet, int tam_v)
{
    int i;
    printf("\nVetor gerado:\n");
    for (i=0; i<tam_v; i++)
        printf("%.2f ", vet[i]);
}

//CALCULA A DIFERENÇA
float diferenca(float *vet, int tam_v)
{
    int i;
    float maior=0, menor=0, dif=0;

    //encontra o maior
    maior = vet[0];
    for(i=0; i<tam_v; i++)
    {
        if (vet[i] > maior)
            maior = vet[i];
    }
    printf("\n\nMaior = %.2f\n", maior);
    
    //encontra o menor
    menor = vet[0];
    for(i=0; i<tam_v; i++)
    {
        if (vet[i] < menor)
            menor = vet[i];
    }
    printf("Menor = %.2f\n", menor);
    
    //calcula a difereça
    dif = maior - menor;

    //retorna a diferença
    return dif;
    
}

//CALCULA A SOMA DOS ELEMENTOS
float soma_elementos(float *vet, int tam_v)
{
    int i;
    float soma=0;
    for(i=0; i<tam_v; i++)
    {
        soma = soma + vet[i];
    }
    //retorna a soma
    return soma;
}

//ARMAZENA EM DISCO
float salva_le(float *vet, int tam_v, float soma, float dif)
{

    FILE *fp;
    //Modo W de write (escrita)
    fp = fopen(ARQ_LOCAL, "wb");
    if(fp == NULL)
        printf("\nErro ao gravar o arquivo.\n\n");
    
	fprintf(fp, "Soma = %.2f", soma);
    fprintf(fp, "Dif  = %.2f", dif);
    fclose(fp);//fecha o arquivo
    printf("\nSoma e diferenca gravados com sucesso!\n");

//LÊ EM DISCO

    FILE *le;
    le = fopen(ARQ_LOCAL, "rb");//Modo R de Read (leitura)
    if(le == NULL) //verifica se existe o arquivo
        printf("\nErro ao abrir o arquivo.\n\n");
    
        fscanf(le, "Soma = %.2f\n", &soma);
        fscanf(le, "Dif  = %.2f", &dif);
        fclose(le);//fecha o arquivo
        
        printf("Soma = %.2f\nDiferenca = %.2f\n", dif, soma);

    system ("pause");//pausa na tela, somente para Windows
}

int main()
{
    //VARIÁVEIS
    int n=0;
    float vet[tam_v], soma, dif;

    //FUNÇÃO QUE CRIA O VETOR
    cria_vet(n);

    //FUNÇÃO QUE INICIALIZA O VETOR
    inicializa(vet, tam_v);

    //FUNÇÃO QUE IMPRIME O VETOR
    mostra(vet, tam_v);

    //FUNÇÃO QUE CALCULA A DIFERENÇA
    soma = diferenca(vet, tam_v);

    //FUNÇÃO SOMA
    dif = soma_elementos(vet, tam_v);

    //FUNÇÃO QUE ARMAZENA EM DISCO FAZ A LEITURA
    salva_le(vet, tam_v, soma, dif);

    return 0;
}

