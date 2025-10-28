#include <stdio.h>

int main() {
	int x, v[6], i;
	printf("Informe X: ");
	scanf("%d", &x);
	if (x<0) x=x*-1;
	for(i=0; i<6; i++) v[i]=0;
	while (x>0){
		if (x>=100) {
			x=x-100;
			v[0]=v[0]+1;
		} else 
		    if (x>=50){
		    	x=x-50;
			    v[1]=v[1]+1;	
			} else 
			    if (x>=10) {
		    	    x=x-10;
			        v[2]=v[2]+1;				  	
			    } else
				    if (x>=5){
		    	        x=x-5;
			            v[3]=v[3]+1;				  	
					} else {
						x=x-1;
						v[4]=v[4]+1;
					}
		v[5]=v[5]+1;
	}
	for (i=0; i<6; i++) 
	   printf( "%d, ", v[i]);	
    return 0;
}
