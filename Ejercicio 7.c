#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int menor,n;
	
	for(int i=0; i < 10; i++){
		printf("Ingrese el numero (%d):", i+1);
		scanf(" %d", &n);
		if (i == 0){
			menor = n;
		}
		if(n < menor){
			menor = n;
		}
	}
	
	printf("El mayor numero ingresado es: %d", menor);
	return 0;
}

