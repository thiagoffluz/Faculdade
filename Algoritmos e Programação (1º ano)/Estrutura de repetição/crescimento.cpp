#include <stdio.h>
#include <stdlib.h>

int main() {
	float ze, chico;
	int anos;
	ze=1.10;
	chico=1.50;
	anos=0;
	do {
		ze=ze+0.03;
		chico=chico+0.02;
		anos++;
	} while (chico>=ze);
	printf("Anos: %d\n", anos);
    return 0;	
}
