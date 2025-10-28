#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main () {
	int x, y, m;
	setlocale(LC_ALL, "Portuguese");
	printf ("Digite os valores de x e y: \n");
	scanf ("%d %d", &x, &y);
	
	if (x<0) {
		x=x*(-1);
	}
	if (y<0) {
		y=y*(-1);
	}
	if (x==0 || y==0) {
		if (x==0 && y=!0) {
			m=y;
		}	
		else {
			m=x;
		}
	}
	else {
		while (x=!y) {
			if (x>y) {
				x=x-y;
			}
			else {
				y=y-x;
			}
		}
	}
	m=x;
	printf ("O valor de m é: %d\n", m);
	}
