#include <stdio.h>

int main() {
	int x, y, z;
	x=0;
	y=2;
	z=4+y*x;
	x=(x-2*(z+1));
	if (x>=0 || y>2)
	    z=z*2;
	else
	    if (y!=x)  z=x*2;
	    else       z=y*2;
    printf("X=%d  Y=%d   Z=%d\n", x, y, z);
	return 0;
}
