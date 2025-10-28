#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N 10
#define M 100

// observa��o strcmp retorn 0, um valor positvo ou um valor negativo
// retorna 0 se as duas strings s�o iguais
// positivo se a primeira � maior que a segunda
// negativo se a primeira � menor que a segunda
	// cuidado: maior e menor na ordem alfab�tica
// strcmp("Zu", "Ana") --> positivo
// strcmp("Ana", "Ana") --> 0
// strcmp("Ana", "Zu") --> negativo
// strcmpi()  � o mesmo strcmp por�m n�o faz diferen�a entre mai�sculas e min�sculas.

// Uma string em C acaba com um '\0'
// strlen()  retorna o tamanho de uma string, exemplo:  tam = strlen(palavra)

// Fun��o que conta a quantidade de vogais no nome 
int conta_vogais(char str[]) {
	int i, cont=0;
	char h;
	for(i=0; i<strlen(str); i++){
	    h=tolower(str[i]);
		if (h=='a' || h=='e' || h=='i' || h=='o' || h=='u') cont++;
	}
	return cont;
}


// Fun��o de troca em str o caractere contido na vari�vel b por aquele repassado na vari�vel c
// Retorna a quantidade de carateres trocados
// Exemplo: r=subcar(str, x, y) ==> str cont�m "Maria", x='a' e y='b' ent�o resultado ser� "Mbrib'
// e o retorno da fun��o ser� 2
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

// Fun��o que verfica se uma palavra � um pal�ndromo
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
