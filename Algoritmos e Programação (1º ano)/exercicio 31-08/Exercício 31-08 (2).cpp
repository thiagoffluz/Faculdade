#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
    int c,valor,qnt_100,qnt_50,qnt_10,qnt_5,qnt_1,qtd_tota1;
    setlocale(LC_ALL, "Portuguese");
    c++;
    c = 1;
    while (c == 1)
    {
        printf("Digite um valor em reais:");
        scanf("%d", &valor);
        qnt_100 = valor / 100;
        valor = valor - (qnt_100 * 100);
        qnt_50 = valor / 50;
        valor = valor - (qnt_50 * 50);
        qnt_10 = valor / 10;
        valor = valor - (qnt_10 * 10);
        qnt_5 = valor / 5;
        valor = valor - (qnt_5 * 5);
        qnt_1 = valor;
        printf("Notas de 100 reais: %d\n",qnt_100);
        printf("Notas de 50 reais: %d\n",qnt_50);
        printf("Notas de 10 reais: %d\n",qnt_10);
        printf("Notas de 5 reais: %d\n",qnt_5);
        printf("Moedas de 1 real: %d\n\n",qnt_1);
        printf("\n");
        printf("Deseja calcular novamente?\n");
        printf("(1) Continuar\n");
        printf("(2) Sair\n");
        printf("Opção: ");
        scanf("%d", &c);
        printf("\n");
    }
	return 0;
	}
