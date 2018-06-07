#include <stdio.h>

int main(int argc, char *argv[]) {
	int n;
	printf("Ingresar un numero para obtener su tabla de multiplicar: \n");
	scanf(" %d", &n);
	
	for(int i=0; i < 10; i++){
		printf("%d * %d = %d \n",i+1,n,((i+1)*n));
		
	}
	
	
	return 0;
}

