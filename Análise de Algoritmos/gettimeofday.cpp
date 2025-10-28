#include <sys/time.h>
#include <stdio.h>

unsigned long long fatorial(int n) {
    if (n == 0) return 1;
    return n * fatorial(n - 1);
}

int main() {
    struct timeval temp1, temp2;
    struct timezone tzp;
    double tempo;
    int i;

    gettimeofday(&temp1, &tzp);
    for(i = 0; i < 40000000; i++) fatorial(15); 
    gettimeofday(&temp2, &tzp);
    tempo = (double)(temp2.tv_sec - temp1.tv_sec) + ((double)(temp2.tv_usec - temp1.tv_usec) / 1000000);
    printf("\nTempo decorrido: %f\n", tempo);
    
    return 0;
}

