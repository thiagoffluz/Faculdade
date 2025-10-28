#include <stdio.h>

/* %d - inteiro
   %i - inteiro
   %e - double
   %lf - double
   %f  - float
   %c  - char
   %s  - string
   %x  - hexa
   %p  - endereço de memória
*/   
   
int main () {
	double x;
	long int y;
	x= 30000000000000000;
	y= 300000000;
	printf("%p\n", &x);
	printf("%e\n", x);
	printf("%lf\n", x);
    printf("%ld\n", y);
	return 0;
}
