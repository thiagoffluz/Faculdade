#include <stdio.h>
#include <string.h>

int main() {

    printf("Exemplo sem casa decimal no x\n\n");

    int x = 5;
    int y;

    y = 2 * x;

    printf("%d\n", x);
    printf("%d\n\n", y);

    printf("-------------------------\n\n");


    printf("Exemplo com 1 casa decimal no y\n\n");
    int x2 = 5;
    double y2;

    y2 = 2 * x2;

    printf("%d\n", x2);
    printf("%.1lf\n\n", y2);

    printf("-------------------------\n\n");

    printf("Exemplo area de um trapezio\n\n");
    double b1 = 6.0, b2 = 8.0, h = 5.0, area;

    area = (b1 + b2) / 2.0 * h;
    printf("A area e: %.2lf metros quadrados\n\n", area);

    printf("-------------------------\n\n");

    printf("Exemplo de uma divisao entre numeros inteiros onde o resultado nao e exato\n\n");
    int a = 5, b = 2, resultado;

    resultado = a / b;

    printf("O resultado e: %d, considerando que foi declarado como um numero inteiro, entao nao e o resultado exato\n\n", resultado);

    printf("-------------------------\n\n");

    printf("Exemplo de uma divisao entre numeros inteiros onde o resultado nao e exato\n\n");
    int a5 = 5, b5 = 2;
    double resultado2;

    resultado2 = a5 / b5;

    printf("Mesmo colocando o resultado como double, o que importa e o tipo de quem esta sendo dividido, no caso, 2 inteiros, por isso o resultado e inteiro tambem\n\n");
    printf("O resultado e: %lf\n\n", resultado2);

    printf("-------------------------\n\n");

    printf("Exemplo de uma divisao entre um numero inteiro e o outro double\n\n");
    int a6 = 5, b6 = 2;
    double resultado3;

    resultado3 = (double) a6 / b6;

    printf("Nesse exemplo, o a que era int foi transformado em double\n\n");
    printf("O resultado e: %lf\n\n", resultado3);

    printf("-------------------------\n\n");

    printf("Valor de b quando b = a, sendo a do tipo double e b do tipo int\n\n");
    double a2 = 5.5;
    int b3 = a2;

    printf("O valor de a e: %.1lf\n", a2);
    printf("O valor de b e: %d\n", b3);

    printf("-------------------------\n\n");















}
