#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// registro endereço
typedef struct {
	char rua[50];
	int nro;
	char CEP[10], cidade[50];
} tend;

// registro aluno
typedef struct {
   int cod;
   char nome[50], cpf[20];
   float nota[4];
   tend ender;    
} taluno;

taluno *aloca(int N) {
	taluno *x;
	x= (taluno *) malloc(N*sizeof(taluno));
	return x;
}

void mostra(taluno *x, int N) {
	int i;
	system("cls");
	printf("Cod   \t     Nome  \t  CPF \t  Rua\n");
	for(i=0; i<N; i++)
	  printf("%3d \t %-20s \t %-15s \t %-20s\n", x[i].cod, x[i].nome, x[i].cpf, x[i].ender.rua);
}

int valida(char str[20]) {
	int soma, dig, dv1, dv2, p1, p2, resto, ind, i;
    // primeiro dígito verificador
	p1 = int(str[9])-48;
    // segundo dígito verificador
	p2 = int(str[10])-48;

	// Verificando o primeiro dígito		
	ind = 10; 
	soma = 0;
	for(i=0; i<9; i++) {
	   dig = int(str[i]) - 48; 	
	   soma = soma + (dig * ind);	
	   ind--;	
	}
	resto = soma % 11;
	
	// cálculo 1o. dígito verificador
	if (resto < 2) dv1 = 0;
	else dv1 = 11 - resto;
	
	// testa dígito verificador
	if (dv1 != p1) return 0; 
	
	// Verificando o segundo dígito
	ind = 11; 
	soma = 0;
	for(i=0; i<10; i++) {
	   dig = int(str[i]) - 48; 	
	   soma = soma + (dig * ind);	
	   ind--;	
	}
	resto = soma % 11;
	
	// cálculo 1o. dígito verificador
	if (resto < 2) dv2 = 0;
	else dv2 = 11 - resto;
	
	// testa dígito verificador
	if (dv2 != p2) return 0; 
	
	return 1;
}

int main() {
	taluno *v;
	int N, i, j, r;
	printf("Digite a quantidade de alunos:");
	scanf("%d", &N);
	v=aloca(N);
	if (v==NULL) {
		printf("Erro ao alocar vetor\n");
		return -1;
	}
	
	for(i=0; i<N; i++) {
		printf("Cod:");
		scanf("%d", &v[i].cod);
		fflush(stdin);
		printf("Nome:");
		gets(v[i].nome);
        do {
           printf("CPF:");
		   gets(v[i].cpf);
           r=valida(v[i].cpf); 	
		} while (r==0);
		printf("Rua:");
		gets(v[i].ender.rua);
		fflush(stdin);
		for (j=0; j<4; j++) {
			printf("Nota %d:", j+1);
			scanf("%f", &v[i].nota[j]);
		}
	}
	mostra(v, N);
	return 0;
}








