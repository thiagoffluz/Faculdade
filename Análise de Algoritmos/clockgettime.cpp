#include <time.h>
#include <stdio.h>

unsigned long long fatorial(int n) {
    if (n == 0) return 1;
    return n * fatorial(n - 1);
}

int main() {
    struct timespec temp1, temp2;
    double tempo;
    int i;

    clock_gettime(CLOCK_REALTIME, &temp1);
    for(i = 0; i < 40000000; i++) fatorial(15); 
    clock_gettime(CLOCK_REALTIME, &temp2);
    tempo = (double)(temp2.tv_sec - temp1.tv_sec) + ((double)(temp2.tv_nsec - temp1.tv_nsec) / 1000000000);
    printf("\nTempo decorrido: %f\n", tempo);
    
    return 0;
}
