#include <stdio.h>
#include <math.h>

int main() {
	int X, Y, MDC;
	printf("Informe X: ");
	scanf("%d", &X);
	printf("Informe Y: ");
	scanf("%d", &Y);
    X<-fabs(X);
    Y<-fabs(Y);
    if (X==0 || Y==0) 
        MDC = 1;
    else {
    	while (X != Y) 
            if (X > Y) X=X-Y;
            else Y=Y-X;
        MDC = X;
    }
    printf("MDC: %d\n", MDC);
    return 0;
}
    
