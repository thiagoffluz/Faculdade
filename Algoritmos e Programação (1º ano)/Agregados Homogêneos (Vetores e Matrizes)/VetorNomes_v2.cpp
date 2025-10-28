#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N 10
#define M 100

// observação strcmp retorn 0, um valor positvo ou um valor negativo
// retorna 0 se as duas strings são iguais
// positivo se a primeira é maior que a segunda
// negativo se a primeira é menor que a segunda
	// cuidado: maior e menor na ordem alfabética
// strcmp("Zu", "Ana") --> positivo
// strcmp("Ana", "Ana") --> 0
// strcmp("Ana", "Zu") --> negativo
// strcmpi()  é o mesmo strcmp porém não faz diferença entre maiúsculas e minúsculas.

// Uma string em C acaba com um '\0'
// strlen()  retorna o tamanho de uma string, exemplo:  tam = strlen(palavra)

// Função que conta a quantidade de vogais no nome 
int conta_vogais(char str[]) {
	int i, cont=0;
	char h;
	for(i=0; i<strlen(str); i++){
	    h=tolower(str[i]);
		if (h=='a' || h=='e' || h=='i' || h=='o' || h=='u') cont++;
	}
	return cont;
}


// Função de troca em str o caractere contido na variável b por aquele repassado na variável c
// Retorna a quantidade de carateres trocados
// Exemplo: r=subcar(str, x, y) ==> str contém "Maria", x='a' e y='b' então resultado será "Mbrib'
// e o retorno da função será 2
// r = subcar(nomes[i], 'm', 'r');
int subcar(char str[], char x, char y) {
    int i, cont=0;
	for(i=0; i<strlen(str); i++){
		if (tolower(str[i])==tolower(x)) {
		   str[i]=y;	
		   cont++;	
		}
	}
	return cont; 
}

// Função que verfica se uma palavra é um palíndromo
int palindromo(char v[]) {      // char *v
    int i,j, pali=1;
    i=0;
    j=strlen(v)-1;
    while (i<j) {
    	if (tolower(v[i]) != tolower(v[j])) {
    	     pali = 0;	
    		 break; 
		}
    	i++;
    	j--;
	}
    return pali;     
}    


// Procedimento que ordena um vetor de nomes
void ordena(char palavras[N][M]) {
    int i, j;
	char aux[M];
	for(i=0; i<N-1; i++)
	  for(j=i+1; j<N; j++)	
	      if (strcmp(palavras[i],palavras[j]) > 0) {
	      	   strcpy(aux, palavras[i]);          // aux = palavras[i]
	      	   strcpy(palavras[i], palavras[j]);
	      	   strcpy(palavras[j], aux);
		  }
}

int main() {
	char nomes[N][M];
	int i, r;
	
	// Leitura de um vetor de nomes
	for(i=0; i<N; i++) {
		printf("Nome: ");
//		scanf("%s", &nomes[i]);
        gets(nomes[i]);            // puts(nomes[i]) isto mostra uma string
	}
		
	ordena(nomes);
    
    // mostra os nomes	
	for(i=0; i<N; i++) {
       if (palindromo(nomes[i])) printf("*** Palindromo ==> ");
	   printf("%30s\n", nomes[i]);
	}

    // conta vogais no primeiro nome
    printf("Qtde Vogais no primeiro nome: %d\n", conta_vogais(nomes[0]));
    
    // troca m por n no primeiro nome
   	r=subcar(nomes[0], 'm', 'n');
    printf("Quantidade de trocas = %d\n", r);
    printf("Nome ==> %s\n", nomes[0]);
	
	return 0;
}
