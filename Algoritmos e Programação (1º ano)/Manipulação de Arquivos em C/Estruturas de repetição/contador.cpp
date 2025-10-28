#include <stdio.h>

int main() {
  float valor, ini, fim, p;
  ini=100;
  fim=0;
  p=-2;
  for(valor=ini; valor>=fim; valor=valor+p)	
     printf("%f\n", valor);
  return 0;	
}
