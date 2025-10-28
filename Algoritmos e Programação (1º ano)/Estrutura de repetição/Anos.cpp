#include <stdio.h>

int main() {
	float chico, ze;
	int anos;
	chico=1.50;
	ze=1.10;
	anos=0;
	do {
	    chico=chico+0.02;
		ze=ze+0.03;
		anos++;	
	} while (ze<=chico);
	
    printf("Anos=%d\n", anos);	
	return 0;
}
