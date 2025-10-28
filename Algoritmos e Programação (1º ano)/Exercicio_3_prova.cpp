#include <stdio.h>
#include <stdlib.h>

int teste(int v[], int N) {
        int i, j;
        i=0, j=N-1;
        
        while (i<j) {
        	if (v[i]!= v[j]) return 0;
        	i++;
        	j--;
		}
		return 1;
	}
	
int main() {
	int x[5]={1,0,1,1,1};
	int r;
	r=teste(x,5);
	if (r==0) printf ("Não e palindromo");
	else printf ("Palindrimo");
}

