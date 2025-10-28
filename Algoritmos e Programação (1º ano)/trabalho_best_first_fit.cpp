#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int *criavet(int N) {
    int *v;
    v = (int*)malloc(N* sizeof(int));
    return v;
}

void inicializa(int *v, int N) {
	int i;
	srand(time(NULL));
	for(i=0;i<N;i++)
	    v[i]= rand() % 2;
}

void mostra(int *v, int N) {
	int i;
	for(i=0;i<N;i++)
	    printf("%d ", v[i]); 
}

int FirstFit(int *v, int N, int E) {
	int i, cont = 0, primeiro;
	
	for(i=0;i<N;i++) 
		if(v[i]==0) {
			cont++;
			if(cont==1)
			    primeiro = i;
			if(cont==E)
			    return primeiro;
			else continue;
		} else {
			cont = 0;
			primeiro = 0;
		}
	return -1;
}

int BestFit(int *v, int N, int E) {
	int i, c = 0, primeiro, val = N, pos = -1;
	
	for(i=0;i<N;i++)
	    if(v[i]==0) {
	    	c++;
	    	if(c==1)
	    	    primeiro = i;
		} else {
		    if(c < E) {
		    	c = 0;
		    	primeiro = 0;
			} else {
			    if(c < val) {
			    	val = c;
			    	pos = primeiro;
			    	c = 0;
			    	primeiro = 0;
				} else {
					c = 0;
					primeiro = 0;
				}
	        }   
       } 
       
	if(pos != -1) {
		if(c < val)
		    return primeiro;
		else
		    return pos;
	} else return -1;
}

int main() {
	int *v;
	int tam, E, primeiro, opcao, resposta;
	setlocale (LC_ALL, "Portuguese");
	printf("Qual tamanho do vetor? ");
	scanf("%d", &tam);
	v=criavet(tam);
    inicializa(v, tam);
    mostra(v, tam);
    printf("\n\n");
	   
    do {
    printf("Caso deseje sair do programa, digite -1\n");    	
    printf("Qual tamanho do processo?\n ");
    scanf("%d", &E);
    if(E<0) return -1;
    printf("\n");
    printf("Qual modo de pesquisa deseja utilizar?\n");
    printf("1 - FirstFit\n");
    printf("2 - BestFit\n");
    printf("3 - Sair\n\n");
    printf("Opção: ");
    scanf("%d", &opcao);
    
    switch (opcao) {
    	
    case 1:
    	resposta = FirstFit(v, tam, E);
    	if(resposta == -1) 
    	printf("Erro, digite novamente: \n");
    	else
    	printf("Espaço disponível na posição %d\n\n", resposta);
    	break;
    	
    case 2:
        resposta = BestFit(v, tam, E);
    	if(resposta == -1) 
    	printf("Erro, digite novamente: \n");
    	else
    	printf("Espaço disponível na posição %d\n\n", resposta);
    	break;
    
    case 3:
    	printf ("Saindo do programa...\n");
        exit(0);
        break; 
        
    default:
    	printf ("Opção inválida, digite outra opção: \n");
    
	}
}
    while(opcao > 1 || opcao < 2);
    return 0;
}





