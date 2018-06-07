#include <stdio.h>

int main(int argc, char *argv[]) {
	int n,m,val;
	
	printf("Ingrese el numero \"n\":");
	scanf(" %d", &n);
	printf("Ingrese el numero \"m\":");
	scanf(" %d", &m);
	val = 1;
	for(int i=0; i<m; i++){
		val = val*n;
	}
	
	printf("%d elevado a %d es: %d", n,m,val);
	return 0;
}

