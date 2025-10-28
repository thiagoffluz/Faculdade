#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {    
    char matriz[6][6];    
	int i, j, pos;    
	int repete[30];    
	srand(time(NULL));
	
	for(i=0; i<30; i++) {       
	    repete[i] = 0; 
		}  
	for(i=0; i<6; i++) {        
	    printf(" %5d", i+1);    
		}    
	printf("\n");   
	printf("  -------------------------------------");    
	for(i=0; i<6; i++) {        
	    for(j=0; j<6; j++) {   
		    do {                
			    matriz[i][j]=rand() % 19+65;                
		    	pos = matriz[i][j]-65;                
	            if (repete[pos] < 3) // só acrecenta se for menor que 3, caso queira contar o numero de vezes que uma mesma letra aparece
		            repete[pos]++; 
					}
				while (matriz[i][j] == 'K' || repete[pos] > 2);  // Sefor igual a 'K', volta e refaz o rand()        }
				                                                 //ou, se repetir mais do que 2 vezes uma emsma letra    }    
	printf("\n");    
	for(i=0; i<6; i++) {        
	printf("%d |",i+1);        
	for(j=0; j<6; j++) {            
	printf("%3c  |", matriz[i][j]);        }        
	printf("\n  -------------------------------------");        
	printf("\n");    }    
	system("pause");    
	return 0;
	}
}
}
